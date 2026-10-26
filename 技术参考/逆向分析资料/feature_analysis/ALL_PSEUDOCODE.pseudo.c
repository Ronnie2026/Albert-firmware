/* Albert P4 P1.6.4 — 按功能语义整理的 C 风格伪代码。
 * 不可编译；不是原始源码。抽象函数与待确认步骤参见模块文档。
 * 输入、输出、所有者、来源年龄、提交和终态应按固件实现核对。 */

/* ================= 界面、CSS 与访问认证 ================= */

/* 01_ui_auth:ui_mode: 标准／车机／自动界面
 * 证据：前端确认
 * C接口：
 * 解释：自动模式按浏览器环境和窗口条件判断；按钮在 auto、car、standard 三种模式间循环，写入 localStorage，改变 DOM 属性供 CSS 选择。
 */
mode = local_storage_get("t2can-ui-mode-v1", "auto");
if (mode == AUTO) mode = detect_car_browser_and_viewport();
set_html_dataset("ui", mode);
// 浏览器逻辑，无固件设置写入。

/* 01_ui_auth:theme: 日间／夜间主题
 * 证据：前端与身份接口确认
 * C接口：0x4808334c GET:/system_status
 * 解释：主题偏好与 chipId、appElfSha256 组成的固件身份关联；C 只提供身份，CSS 切换颜色变量、背景和控件样式。
 */
identity = GET("/system_status").chipId + appElfSha256;
theme = local_storage_get(theme_key(identity));
set_html_dataset("theme", theme);

/* 01_ui_auth:navigation: 功能页、详情页、帮助、折叠和响应式布局
 * 证据：前端确认
 * C接口：
 * 解释：驾驶／换挡／车身／诊断／系统以及商业界面的功能／记录／设置导航均为 DOM 显隐和控件重新组织；CSS 提供 fixed 导航、网格、dialog、hidden、disabled、partial 等显示状态。
 */
on_navigation(tab) { set_active_tab(tab); show_related_cards(tab); }
on_help_click() { toggle_help_panel(); }
on_detail_toggle() { toggle_collapsed_state(); }
// hidden 或 disabled 是界面状态，不能替代后端权限与运行门控。

/* 01_ui_auth:legal: 首次说明与已阅读状态
 * 证据：前端确认
 * C接口：
 * 解释：用户确认后关闭说明并保存浏览器偏好；不调用车辆控制接口。
 */
on_acknowledge() { local_storage_set(legal_key, true); close_notice(); }

/* 01_ui_auth:login: 网页登录与错误限流
 * 证据：C 逻辑确认
 * C接口：0x4808a8c2 POST:/auth/login, 0x480677f4 GET:/auth/status, 0x4808b134 GET:/
 * 解释：C 使用与AP热点相同的密码存储对象比较，连续 5 次错误后限制 30 秒；成功时使用 16 字节随机材料生成 32 位十六进制会话标识，最多管理 4 个会话槽。Cookie 为 P4SID，Max-Age=604800，HttpOnly、SameSite=Strict。服务端还检查7天创建期限与48小时未活动期限。AP密码实际改变会失效旧会话。
 */
if (failures >= 5 && now - lock_started < 30000) return LOCKED;
if (!constant_length_password_compare(input, stored, 63)) {
    failures++; if (failures == 5) lock_started = now; return WRONG;
}
expire_old_sessions(); slot = choose_free_or_oldest_session(4);
sid = hex(random_bytes(16)); store_session(slot, sid, now);
set_cookie("P4SID", sid, 604800, HTTP_ONLY | SAME_SITE_STRICT);
redirect_303("/");

/* 01_ui_auth:logout: 退出与会话失效
 * 证据：C 接口确认
 * C接口：0x4808adc8 POST:/auth/logout, 0x480677f4 GET:/auth/status
 * 解释：退出清理服务端会话和 Cookie；页面检查会话状态，失效时返回登录流程。
 */
invalidate_session_from_cookie();
set_cookie("P4SID", "", 0);
redirect_to_root();

/* 01_ui_auth:developer: 开发者模式解锁、闲置锁定与令牌撤销
 * 证据：前端与 C 令牌接口确认
 * C接口：0x4808d958 POST:/cloud/developer
 * 解释：密码提交后端验证，成功返回 developerToken；前端要求 32 位十六进制。高级界面仅在本次页面解锁，闲置 15 分钟锁定；需要授权的云请求使用 X-P4-Developer。锁定会请求撤销令牌。
 */
r = POST("/cloud/developer", {password});
if (!r.ok || !is_hex32(r.developerToken)) keep_locked();
else { developer_token = r.developerToken; show_developer_ui(); }
if (idle_ms >= 15 * 60 * 1000) {
    POST("/cloud/developer", {lock:1}, X_P4_DEVELOPER);
    clear_token_and_lock_ui();
}

/* 01_ui_auth:management_lock: 云管理状态与页面操作锁定
 * 证据：接口确认；管理内部状态机部分重建
 * C接口：0x480b2722 GET:/management/status
 * 解释：管理状态包含 revision、锁定／待处理原因和目标版本。前端按状态禁用编辑；后台状态可能由云命令或升级改变，不能只依赖 CSS 禁用按钮。
 */
s = GET("/management/status");
if (s.revision >= displayed_revision) apply_management_state(s);
set_edit_controls_disabled(s.locked || s.pending);

/* ================= 共用配置、自动保存与 CAN 基础 ================= */

/* 02_config_can:config_read: 加载配置、默认值和归一化回读
 * 证据：接口与前端确认
 * C接口：0x480bd450 GET:/config
 * 解释：GET 通过 0x480bb868 序列化配置。前端使用默认值补足缺字段，并保护加载前已编辑字段；默认值是页面兜底，不等于空 NVS 时的全部固件默认值。
 */
config = GET("/config");
for (field in supported_fields) {
    if (!locally_edited(field)) render(field, config_or_ui_default(field));
}
refresh_protocol_and_parent_child_visibility();

/* 02_config_can:autosave: 防抖保存、脏字段、并发排队和结果回读
 * 证据：前端与接口分支确认
 * C接口：0x48101f34 POST:/config, 0x480f34ec POST:/save, 0x480bd450 GET:/config
 * 解释：前端跟踪字段编辑代数，保存过程中出现新编辑则排队；带 fsdConfigRevision。pending／202 不视为已写 Flash。只有旧接口未返回 stored 时才补 POST /save。随后 GET 校对归一化结果，避免旧响应覆盖新草稿。
 */
on_edit(field) { dirty[field] = ++edit_generation; debounce(save); }
save() {
    if (other_save_in_flight) { queued = true; return; }
    snapshot = collect_dirty_fields_and_revision();
    result = POST("/config", snapshot);
    if (result.pending) return show_unconfirmed();
    if (result.persistence_missing) require_stored(POST("/save"));
    actual = GET("/config");
    apply_only_fields_not_edited_after(snapshot, actual);
    if (queued) schedule_next_save();
}

/* 02_config_can:config_transaction: C 配置解析、冲突检查、命令提交和持久化
 * 证据：C 控制入口确认；跨域顺序按原伪代码检查
 * C接口：0x48101f34 POST:/config, 0x480f34ec POST:/save
 * 解释：0x48101f34 从旧快照构造候选配置，解析已提供字段，检查主从依赖、数值范围、FSD revision、OTA 和运行停止条件。0x480e8070 按命令类型在 CAN 线程应用配置／动作。各配置域处理顺序不同，不能宣称所有字段跨域原子提交。
 */
candidate = copy_current_config();
parse_present_fields(request, &candidate);
validate_ranges_dependencies_revision(candidate);
if (ota_busy || required_quiesce_not_complete) return BUSY;
submit_config_command_to_runtime(candidate);
if (!runtime_confirmed) return PENDING;
flush_required_configuration_domains();
return stored_or_flash_failure_with_actual_state();

/* 02_config_can:can_gates: 通信总开关与三路 TX 开关
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x480bd450 GET:/config
 * 解释：总通信和通道 TX 标志控制运行驱动及发送许可。关闭涉及停止在途动作和 CAN 运行恢复，可能返回 canb_disable_pending 等，不能等价为单个布尔值赋值后立即完成。
 */
effective_tx[bus] = comms_enabled && tx_enabled[bus] && runtime_ready;
if (disabling) begin_controlled_stop_and_settle_pending_transmissions();
if (!stop_complete) return PENDING;
apply_can_driver_gate(); persist_configuration();

/* 02_config_can:pin_layout: A／B／自动线序探测、保存和恢复
 * 证据：C 与常量表确认
 * C接口：0x480681de GET:/can_pin_layout, 0x480ff1e4 POST:/can_pin_layout
 * 解释：0=A，1=B，2=Auto；A 为 2/3、4/5、26/27，B 为 3/2、50/49、31/30，均为 TX/RX GPIO、500 kbit/s。Auto 先 A，三路无有效帧才探测 B；探测约 1.5 秒且清理临时节点。保存需停止 CAN、写 NVS、恢复；已保存但恢复失败单独报告。
 */
if (mode == AUTO) {
    pins = probe_listen_only(A, 1500000_us) ? A : probe_or_fallback(B);
    cleanup_probe_nodes_and_gpio();
}
POST_save(mode) {
    require_exact_enum(mode, 0, 1, 2); block_during_ota_or_boot_validation();
    quiesce_can(); commit_pin_mode_to_nvs(mode);
    if (!restore_can()) return SAVED_BUT_RESTORE_FAILED;
}

/* 02_config_can:runtime_dispatch: 实时处理、模板修改、提交与终态确认
 * 证据：任务与公共机制确认；具体业务通过后文重建
 * C接口：0x4806851c GET:/runtime_status, 0x4807fa5c GET:/can_diag
 * 解释：can_rt 在 core1、优先级20运行；fsd_p0 在 core1、优先级24处理高优先路径。服务使用帧数和时间预算，模板、generation 和 token 匹配；提交成功与 terminal success 分开。0x4805cb5e 为多处业务发送的共用入口，0x480dc4f2 分派终态结果。
 */
can_rt_loop() {
    drain_rx_and_terminal_queues_with_time_and_frame_budget();
    update_vehicle_snapshot(); apply_queued_control_commands();
    tick_feature_state_machines(); submit_eligible_modified_templates();
    publish_status_snapshot(); yield_when_budget_exhausted();
}
on_tx_terminal(token, result) {
    if (matches_pending_generation(token)) settle_owner_state(result);
    else count_late_or_invalidated_receipt();
}

/* 02_config_can:read_coordinator: 浏览器轮询调度、超时、暂停和性能记录
 * 证据：前端确认；快照接口确认
 * C接口：0x4806eb88 GET:/status_fast, 0x480c0178 GET:/status, 0x480c2bda GET:/health, 0x4806f630 GET:/web_metrics
 * 解释：前端对多个读请求协调排队、去重、超时和暂停。按当前页面／展开状态选择诊断范围；OTA 期间暂停读取；本地保存最近48条 Web 客户端指标。C 分别构造快照和 HTTP 传输指标。
 */
poll_if_scope_visible_and_not_paused(endpoint);
if (same_read_in_flight) coalesce_request();
fetch_with_abort_timeout_and_record_duration();
on_ota_begin() { pause_reads(); await_active_reads_to_settle(); }

/* ================= 驾驶员与个性化设置 ================= */

/* 03_drivers:driver_list: 列表、当前驾驶员、参数来源与状态
 * 证据：接口与前端确认
 * C接口：0x4806d76e GET:/driver_profiles
 * 解释：返回 auto/manual、activeDriverId、lastDriverId、座椅快照和各驾驶员 feature 状态；未匹配时使用默认参数，前端区别开、关、未知。
 */
s = GET("/driver_profiles");
render_current_and_last_driver(s);
render_parameter_source(s.activeDriverId > 0 ? DRIVER : DEFAULT);
render_features_as_on_off_unknown(s.drivers);

/* 03_drivers:driver_add: 添加驾驶员并绑定当前位置
 * 证据：接口确认；运行语义重建
 * C接口：0x480fa85c POST:/driver_profiles
 * 解释：action=add，校验名称、P 挡及新鲜驾驶位位置；检查位置是否与已有驾驶员冲突，分配ID并持久化；冲突阻止覆盖。
 */
require_park_and_fresh_seat(); validate_name(name);
if (position_conflicts_with_existing_driver()) return POSITION_CONFLICT;
id = allocate_driver_id_or_full();
store_driver(id, name, current_four_axis_position); flush_driver_storage();

/* 03_drivers:driver_rebind: 重新绑定驾驶位
 * 证据：接口确认；运行语义重建
 * C接口：0x480fa85c POST:/driver_profiles
 * 解释：页面明确确认覆盖，后端 action=rebind 验证 id、驻车及座椅数据，再检测位置冲突并写入新绑定。确认复选框是前端流程的一部分。
 */
ui_require_rebind_confirmation();
require_existing_driver(id); require_park_and_fresh_seat();
check_position_conflict_excluding(id);
replace_binding_position(id, current_position); persist();

/* 03_drivers:driver_rename: 重命名驾驶员
 * 证据：接口确认；运行语义重建
 * C接口：0x480fa85c POST:/driver_profiles
 * 解释：后端检查驾驶员存在和名称合法后写存储；页面用回读列表更新显示。
 */
require_existing_driver(id); validate_name(name);
driver[id].name = name; persist(); reload_driver_list();

/* 03_drivers:driver_delete: 删除与关联设置清理
 * 证据：接口确认；运行语义重建
 * C接口：0x480fa85c POST:/driver_profiles
 * 解释：删除驾驶员同时处理对应氛围灯、速度模板数据及当前选择。后端可报告 ambient_settings_erase_pending、speed_target_settings_erase，清理并非单个结构体删除。
 */
require_existing_driver(id);
remove_driver_and_adjust_active_selection(id);
erase_driver_ambient_and_speed_target_domains(id);
if (erase_pending_or_failed) report_domain_and_persistence_state();
persist_driver_list();

/* 03_drivers:driver_selection: 自动识别／手动选择及切换
 * 证据：接口确认；运行语义重建
 * C接口：0x480fa85c POST:/driver_profiles
 * 解释：action=auto/manual/select。切换前前端要求氛围灯草稿保存成功；运行端根据绑定位置或手动 id 应用驾驶员设置。具体自动匹配算法保留抽象谓词。
 */
if (!save_pending_ambient_draft()) abort_ui_driver_change();
mode = AUTO_or_MANUAL;
selected = mode == AUTO ? match_fresh_seat_position() : requested_driver;
apply_driver_profile_or_default(selected); publish_active_driver();

/* 03_drivers:driver_features: 每位驾驶员功能独立开关与并发检查
 * 证据：前端路由选择与 C 入口确认
 * C接口：0x48101f34 POST:/config, 0x480f2fc2 POST:/fsd_auto_start/master, 0x480f1e34 POST:/config/ble_obstacle, 0x480f4dda POST:/rear_fog/config
 * 解释：请求带 driverId、driverFeature、expected，按功能选择对应接口；expected 用于检查旧状态。FSD 主开关、障碍物和雾灯有专用接口。驾驶员未变化时才应用回执，失败保留原显示。
 */
request = {driverId, driverFeature:key, expected:old};
route = choose_config_domain(key); request[domain_field(key)] = !old;
validate_driver_and_expected_value_on_backend();
apply_and_persist_driver_feature();
reload_driver_snapshot_without_overwriting_new_selection();

/* ================= FSD、自动激活与预警激活 ================= */

/* 04_fsd_activation:fsd_protocol: V12／V13／V14 协议选择与特性适配
 * 证据：C 归一化与前端适配确认
 * C接口：0x48101f34 POST:/config, 0x480bd450 GET:/config
 * 解释：协议值保留12、14，其余归一化为13。切换改变物理输入说明、V14驾驶模式、灯光和障碍物来源；运行动作未结束可能返回 control_version_busy。
 */
protocol = requested == 12 || requested == 14 ? requested : 13;
if (protocol_changes && control_action_in_flight()) return CONTROL_VERSION_BUSY;
apply_protocol_and_reset_protocol_dependent_state();
refresh_ui_capability_panels();

/* 04_fsd_activation:fsd_master: FSD 总开关与依赖门控
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x480bd450 GET:/config
 * 解释：FSD 开关影响自动激活、增强功能等；总开关未开启而请求启用从属自动激活会被阻止。关闭需收敛在途状态，不能凭页面选中判断有效状态。
 */
if (!candidate.fsdEnabled && request_enables_auto_start) return FSD_MASTER_REQUIRED;
effective_fsd = configured_fsd && runtime_can_ready && source_valid;
if (!effective_fsd) cancel_or_settle_fsd_owned_requests();

/* 04_fsd_activation:fsd_steady: 稳盘模式、物理短按启动与取消
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：页面说明右侧物理短按触发稳盘启动，再次短按取消。配置独立保存；运行策略包含稳盘相关激活逻辑，但未将该模式等同于机械固定方向盘。
 */
on_right_short_press() {
    if (steady_latched) request_steady_cancel();
    else if (steady_enabled && activation_gates_pass()) request_steady_start();
}
advance_latch_only_after_matching_vehicle_or_tx_feedback();

/* 04_fsd_activation:fsd_p_start: P 挡一键出发与隐藏固定开启项
 * 证据：固定开启行为确认；出发序列部分重建
 * C接口：0x48101f34 POST:/config
 * 解释：静态 HTML 将此行隐藏。updateFsdProtocolUi 强制 checkbox=true；POST /config 读取该字段后候选变量仍置1。应记为协议流程中的固定开启兼容字段，而非可自由关闭的独立开关。P 挡物理动作的完整报文序列仍有缺口。fsdParkLaunchCompleteCount在等待阶段观测到新一代、≤500ms的399状态6后增加，表示进入FSD，不是293泊车完成。
 */
ui_hide(park_start_row); ui_checkbox(park_start, true);
candidate.fsdParkStartEnabled = true; // 本版归一化行为
on_park_short_press() {
    if (park_source_fresh && activation_gates_pass()) request_park_departure();
}

/* 04_fsd_activation:enhanced_ap: 隐藏增强 AP／智能召唤兼容设置
 * 证据：配置到3FD字段覆盖链已确认；完整召唤未确认
 * C接口：0x48101f34 POST:/config
 * 解释：静态主卡开关隐藏，但驾驶员功能列表与配置字段仍包含 enhancedAutopilotEnabled。cfg+2B经4809EC88打包策略、4FF230E8解包，4FF232BE在CH/VEH3FD DLC8 MUX1清d2 bit3，V14另设d5 bit7；受对应线路运行许可限制。完整召唤会话、路线与完成反馈仍未确认。
 */
candidate.enhancedAutopilotEnabled = parse_bool_if_present();
persist_and_apply_candidate();
if (lane_allowed && enhanced_ap_for_lane && src_is_3FD_DLC8_MUX1) {
    out = src; out.d[2] &= 0xF7;
    if (protocol == 14) out.d[5] |= 0x80;
    submit_through_shared_source_path(out);
}
// 完整召唤状态机与厂家字段语义仍未确认。

/* 04_fsd_activation:space_parking: 退出 FSD 后自动请求泊车（v13 参数）
 * 证据：原网页、反编译与关键机器码确认；车辆效果未验证
 * C接口：0x48101f34 POST:/config
 * 解释：CH399低四位3～6→1/2、观察间隔≤1500ms时开启窗口；默认延迟2秒、持续30秒。FSD/泊车/通信/CH TX须开启，399仍为1/2且≤1500ms，CH257 raw500须连续2帧、间隔及年龄≤100ms。随CH293 DLC8复制，d3高四位=C、d6高四位计数+1、d7为seed95加前7字节；来源+20ms截止，stream19发送前复检。移动暂停请求而倒计时继续，到期停止覆盖。所查路径无显式协议13限制；399边沿无严格局部校验门控，293来源校验未在构造器检查。未证明原车离车后完成泊车。
 */
// on CH399: state = d0 & 0x0F; 不额外假定来源校验通过。
if (parking_enabled && continuous_399_gap_le_1500ms
    && previous_state >= 3 && previous_state <= 6
    && (state == 1 || state == 2)) {
    exit_ms = rx_ms; armed = true;
}
// 配置、状态离开1/2、399过期或窗口到期会清除armed。
// CH257: raw=(d6<<5)|(d5>>3)，连续两帧raw500，间隔<=100ms。
if (parking_enabled && armed && fsd_enabled && comms_enabled && ch_tx_enabled
    && latest_399_is_1_or_2_and_age_le_1500ms
    && delay <= now_ms-exit_ms && now_ms-exit_ms < delay+duration
    && zero_speed_count >= 2 && speed_age_ms <= 100
    && src_is_CH293_DLC8 && (src.d[3]>>4) != 0x0C) {
    out = src;
    out.d[3] = (src.d[3] & 0x0F) | 0xC0;
    out.d[6] = (src.d[6]&0x0F) | (((src.d[6]&0xF0)+0x10)&0xF0);
    out.d[7] = (0x95 + sum(out.d[0..6])) & 0xFF;
    submit_stream19(out, source_us_or_now + 20000);
}
// 发送前复检相同状态与速度门控，以及通用传输许可。
// 暂停发送不延长窗口；恢复为停止覆盖，没有专用取消payload。

/* 04_fsd_activation:auto_start_master: 自动激活总开关与 revision 事务
 * 证据：专用接口与前端处理确认
 * C接口：0x480f2fc2 POST:/fsd_auto_start/master, 0x480bd450 GET:/config
 * 解释：专用接口处理总开关与子项归一化，使用 fsdConfigRevision，旧 revision 被拒绝并要求回读。子项默认重置的行为应按服务端回执而非页面默认猜测。
 */
require_fsd_master_if_enabling();
if (request.revision != current_revision) return FSD_CONFIG_STALE;
normalize_master_and_children(candidate); submit_runtime_config(candidate);
return_current_revision_and_persistence();

/* 04_fsd_activation:availability_frames: AP 可用确认帧数
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：页面限定1～10帧，运行辅助函数也归一化为该范围；累积可用来源观察后再推进激活阶段，失效观察中断确认。
 */
required = clamp(config.available_frames, 1, 10);
on_fresh_ap_observation() {
    if (available) consecutive_available++; else consecutive_available = 0;
    activation_ready = consecutive_available >= required;
}

/* 04_fsd_activation:auto_long_press: 右側长按持续激活
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：物理长按形成持续激活锁存，runtime_status 提供 continuousLatched、phase、attempts、successCount；退出条件和确认失败会收敛锁存。物理输入名称随协议改变。
 */
if (long_press_edge && master && child_enabled) continuous_latched = true;
if (continuous_latched && activation_ready && gates_pass()) queue_activation_attempt();
if (stop_condition_or_fault) stop_and_clear_latch();

/* 04_fsd_activation:auto_pd: P→D 自动激活
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：监测挡位边沿，根据开关生成激活意图；必须同时满足可用帧确认与激活门控。First 字段对应首次流程，精确重置条件尚未完整确认。
 */
if (fresh_gear_edge(P, D) && first_pd_eligible() && enabled) arm_activation();
if (armed && activation_ready && gates_pass()) submit_activation();
// first_pd_eligible 的完整复位条件待核对。

/* 04_fsd_activation:auto_rd: R→D 后15秒速度窗口
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：前端说明 R→D 后15秒内达到所选速度，页面速度1～120 km/h；运行按挡位转换和速度快照决定请求。不得把页面阈值当作自动换挡允许速度。
 */
on_fresh_gear_edge(R, D) { rd_deadline = now + 15000_ms; rd_armed = true; }
if (rd_armed && now <= rd_deadline && speed_kph >= threshold && gates_pass())
    request_activation_and_consume_rd_trigger();
if (now > rd_deadline) rd_armed = false;

/* 04_fsd_activation:auto_ground: R 挡右侧物理动作一键激活
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：按协议对应的右侧物理输入、R挡和 Ground 子开关形成意图，由同一激活状态机执行。精确驾驶请求序列不能从前端说明直接推出。
 */
if (right_input_trigger && fresh_gear == R && ground_enabled)
    submit_ground_activation_intent_if_permitted();

/* 04_fsd_activation:occupancy_spoof: 驾驶位有人与安全带信号模拟
 * 证据：原网页、反编译与关键机器码确认；车辆效果未验证
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：独立开关随PARTY30A DLC8且seed0D校验有效的来源计数，要求通信、PARTY TX与传输许可；无局部FSD总开关、泊车窗口、零车速或关门条件。d0=(原值&E0)|09同时模拟有人/已系带，d6高四位计数+1，d7重算；来源+5ms截止。原值已满足、计数重复或pending时跳过。只读VEH3A1 MUX2确认，连续两帧且间隔/年龄≤300ms。内部TX标志由终态更新；公开Active还要求开关启用、成功TX与两帧3A1目标反馈均≤300ms。反馈状态匹配不证明因果或泊车完成。自动换挡读取构造前的30A输入缓存，上游自回波剔除仍未完整确认。
 */
remember_received_PARTY30A_belt_for_gear_gates(src);
if (spoof_enabled && comms_enabled && party_tx_enabled
    && transport_permitted && src_is_PARTY30A_DLC8
    && src.d[7] == ((0x0D + sum(src.d[0..6])) & 0xFF)) {
    if (pending) return;
    settle_terminal_wait_older_than_40ms();
    if ((src.d[0]&7)==1 && ((src.d[0]>>3)&3)==1) return;
    if (duplicate_source_counter(src.d[6]>>4)) return;
    out = src;
    out.d[0] = (src.d[0] & 0xE0) | 0x09;
    out.d[6] = (src.d[6]&0x0F) | (((src.d[6]&0xF0)+0x10)&0xF0);
    out.d[7] = (0x0D + sum(out.d[0..6])) & 0xFF;
    submit_stream8(out, source_us_or_now + 5000);
}
// VEH3A1 DLC8、d6低4bit=2、seedC0校验合格：
occupied = d[0] >> 7;
belt_ok = (d[3]&0x40)!=0 && (d[4]&1)==0;
confirm_adoption_after_two_fresh_observations(occupied && belt_ok, 300_ms);
published_active = spoof_enabled && tx_ok_flag && last_tx_ms != 0
    && tx_age_ms <= 300 && feedback_ms != 0
    && feedback_age_ms <= 300 && feedback_confirm_count >= 2;
// 不作为293泊车完成反馈；接收自回波剔除尚未全部追清。

/* 04_fsd_activation:warning_activation: 车道／碰撞预警激活与级别掩码
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：车道标准／严重通过位掩码1／2组合；在允许预警状态出现时生成激活意图。side collision 与疲倦另有独立开关。确切告警位和触发去重保留为抽象识别函数。
 */
modes = normalized_warning_lane_mask();
if (warning_activation_enabled && warning_matches_selected_modes(vehicle, modes))
    request_activation_if_ready();

/* 04_fsd_activation:side_fatigue_activation: 侧撞与疲倦预警激活
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：两类告警独立进入激活策略，仍受 FSD 总开关、来源新鲜度和可用状态限制；并非浏览器轮询收到提示即发 CAN。
 */
if ((side_collision_enabled && eligible_side_warning()) ||
    (fatigue_enabled && eligible_fatigue_warning()))
    request_activation_through_shared_state_machine();

/* 04_fsd_activation:safety_aggregate: “安全驾驶”组合开关
 * 证据：前端组合逻辑确认
 * C接口：0x48101f34 POST:/config, 0x480f584c POST:/ambient_config
 * 解释：前端合并预警激活、侧撞、疲倦、标准＋严重车道模式，以及支持时的盲区氛围灯。它没有同名独立 C 主开关；部分开启显示 partial。
 */
on_safety_master(on) {
    if (on) fsdWarningLaneModes = 3;
    set(fsdWarningActivationEnabled, on); set(fsdSideCollisionActivationEnabled, on);
    set(fsdDdawEnabled, on);
    if (blind_spot_supported) save_ambient_blind_spot(on);
}

/* ================= 速度补偿与驾驶员目标模板 ================= */

/* 05_speed:speed_enable: 自动速度偏移与稳定模式
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：启用稳定模式会在前端同时启用自动偏移；运行采用配置、协议、原车状态及驾驶员模板生成目标。稳定模式参数旧面板被隐藏，不能把隐藏字段视为无运行代码。
 */
if (!effective_auto_offset || !fresh_speed_sources) return NO_OVERRIDE;
target = calculate_target_for_protocol_and_driver();
if (stable_enabled) target = apply_stability_policy(target);
submit_speed_override_from_fresh_source();

/* 05_speed:hw3_strategy: HW3舒适／标准／迅捷及分段目标
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：手动或随车策略；UI将舒适与车距3/4、标准与2、迅捷与1关联。每策略包含低于60及60、70…120的8个目标值。多数旧参数行隐藏但仍参与配置读写。
 */
strategy = manual_enabled ? manual_strategy : decode_vehicle_strategy();
band = select_hw3_speed_band(limit_kph); // 精确所有边界待核对
target_kph = hw3_targets[strategy][band];

/* 05_speed:v14_profile: V14五种驾驶模式
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：Chill、Normal、Hurry、Max、Sloth枚举0～4，手动／车机自动来源独立记录。不能将 V14 模式枚举等同于 HW3 三种车距策略。
 */
effective_profile = manual_enabled ? clamp(profile, 0, 4) : observed_v14_profile;
choose_v14_speed_policy(effective_profile);
publish_automatic_effective_profile_and_source();

/* 05_speed:speed_low: 低速偏移与 raw 百分比换算
 * 证据：单位与配置校验确认；目标算法部分重建
 * C接口：0x48101f34 POST:/config
 * 解释：V13低速页面说明限速低于50；v13LowSpeedOffsetPct为0～60。其他最大偏移raw字段在浏览器显示 raw/4%，提交百分比乘4，页面0～60%对应raw0～240。这两种字段单位不同。
 */
v13_low_pct = clamp(ui_v13_low_pct, 0, 60);
max_pct_raw = clamp(round(ui_max_pct * 4), 0, 240);
if (is_low_speed_protocol_case()) calculate_low_target_with_protocol_limits();

/* 05_speed:speed_high: 高速偏移、原车智能设速与目标来源
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：页面注明 V13高速度偏移用于原车智能设速关闭场景；运行状态提供 originalSmartSetSpeedKnown/Enabled、vehicleOffsetUsable、highTargetSource。目标来源可能为原车设速或自定义模板，需按状态分支选择。
 */
if (!original_smart_set_speed_known) defer_override_until_source_known();
if (original_smart_set_speed_enabled && vehicle_target_usable) use_vehicle_target_policy();
else use_configured_high_speed_target_policy();
// 精确优先级及协议换算留在原反编译中，未伪造固定公式。

/* 05_speed:speed_slew: 降速阶梯与确认值恢复
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：当前界面为每500ms下降1～10 km/h；后台还保留 speedOffsetDownSlewPctPerSec、stableSpeedDownIntervalMs。运行追踪 downSlewActive、recoveryPhase、slewStepCount、confirmedRaw，说明以确认状态处理恢复。不要混淆两套单位。
 */
if (new_target < last_confirmed_target && down_step_due())
    candidate_target = max(new_target, last_confirmed_target - step_kph);
else candidate_target = new_target;
submit_candidate();
on_matching_terminal_or_vehicle_confirmation() update_confirmed_target();
on_failure() enter_recovery_without_assuming_candidate_was_applied();

/* 05_speed:speed_templates: 车机同步／自定义30格模板
 * 证据：格式、接口与 V13 展开确认
 * C接口：0x480f99bc GET:/speed_target/config, 0x480f9322 POST:/speed_target/save
 * 解释：后端带driverId、revision、customSpeedEnabled与target0…target29，索引限速5、10…150，目标整数1～255。V13界面显示8段并展开到50～139中的对应5km/h格；以驾驶员隔离保存。
 */
require_current_driver_and_revision(driver_id, revision);
for (i = 0; i < 30; ++i) require_integer_in_range(target[i], 1, 255);
apply_speed_target_runtime_transaction(candidate);
commit_driver_speed_target_blob();
return_revision_targets_and_effective_custom_enabled();

/* 05_speed:speed_quick: 百分比批量设置模板
 * 证据：前端计算确认
 * C接口：0x480f9322 POST:/speed_target/save
 * 解释：批量输入0～100%，浏览器以round(limit×(1+pct/100))计算8个起始值，再展开30格并经原接口保存；这只是编辑快捷方式。
 */
require(0 <= quick_pct && quick_pct <= 100);
for (limit in [50,60,70,80,90,100,110,120])
    ui_start_target[limit] = round(limit * (1 + quick_pct / 100.0));
expand_v13_bands_into_30_targets(); save_template();

/* 05_speed:speed_conflict: 驾驶员变化、版本冲突与保存重试
 * 证据：接口与前端确认
 * C接口：0x480f9322 POST:/speed_target/save, 0x480f99bc GET:/speed_target/config
 * 解释：stale_driver会重新加载；stale_revision保留草稿要求检查；flash_write与runtime_rejected分别提示。回执必须匹配驾驶员、请求、revision和提交的全部目标。
 */
if (driver_changed) reload_for_new_driver();
else if (revision_conflict) preserve_draft_and_require_review();
else if (runtime_rejected || flash_write_failed) preserve_draft_for_retry();
else verify_response_matches_submitted_targets();

/* ================= 免打扰、摄像头、滚轮与扭矩状态机 ================= */

/* 06_dnd_torque:dnd_master: 免打扰主开关及必要子项
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：启用主开关时前端同步要求摄像头屏蔽和ISA抑制；扭矩和滚轮有独立从项及运行门控。
 */
if (ui_enables_dnd) { cabin_camera_disable = 1; isa_chime_suppress = 1; }
parse_and_normalize_dnd_configuration();
effective_children = master && each_child && feature_source_gates();

/* 06_dnd_torque:dnd_camera: 摄像头状态屏蔽与V14回退延时
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：V14延时页面限制3～10秒，按协议和运行状态决定覆盖／回退。camera运行快照独立于主开关，具体覆盖位与回退触发未完整恢复。
 */
if (dnd_enabled && camera_disable_enabled && camera_source_eligible())
    apply_protocol_camera_status_override();
if (v14_fallback_condition()) restore_source_after(configured_3_to_10_seconds);
// 不推断真实摄像头供电。

/* 06_dnd_torque:dnd_isa: ISA提示音条件抑制
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：runtime_status记录ISA条件、HOS、来源位及apply／submit计数，说明满足条件时改变来源帧对应字段；不等于全局静音。
 */
if (master && isa_enabled && isa_chime_condition_active && fresh_source) {
    output = clone_source(); suppress_selected_isa_chime_field(output); submit(output);
}
count_apply_submit_and_terminal_results();

/* 06_dnd_torque:dnd_scroll: 左音量／右速度滚轮免打扰
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：滚轮方式枚举0=左音量、1=右速度，通过运行状态发送对应滚轮行为；与自动换挡的滚轮映射为不同功能，存在发送所有者协调。
 */
if (dnd_scroll_enabled && eligible_hands_on_reminder())
    submit_selected_scroll_action(mode == 0 ? LEFT_VOLUME : RIGHT_SPEED);
settle_scroll_owner_before_next_action();

/* 06_dnd_torque:dnd_periodic: 滚轮后台随机周期
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：页面秒数转换成毫秒，启用后按min/max随机安排下一次；只在相应滚轮模式和运行条件有效时提出动作。
 */
period_min_ms = round(ui_min_seconds * 1000);
period_max_ms = round(ui_max_seconds * 1000);
if (periodic_allowed && now >= next_at) {
    request_scroll_action(); next_at = now + random_range(min_ms, max_ms);
}

/* 06_dnd_torque:torque_config: 扭矩区间、单位、帧数与时间校验
 * 证据：C 校验确认
 * C接口：0x48101f34 POST:/config, 0x4806e388 GET:/torque_nag/status
 * 解释：0x4804e2a8检查预防幅值150～180 centi-Nm（1.50～1.80Nm），纠正180～250（1.80～2.50Nm）；min≤max；纠正帧数0或10～255；发送时段至少100ms，休息／暂停可同时为0，非0时至少100ms；DAS超时100～2000ms。前端默认纠正最大2.40Nm，区别于后端允许上限2.50。
 */
validate_ordered_range(preventive_magnitude, 150, 180);
validate_ordered_range(corrective_magnitude, 180, 250);
require(frames == 0 || (10 <= frames && frames <= 255));
require_nonzero_time_ranges_at_least(100_ms);
require_zero_pair_or_ordered_pause_range();
require(100 <= das_timeout_ms && das_timeout_ms <= 2000);

/* 06_dnd_torque:torque_source: 0x39B HOS 与0x370扭矩来源校验
 * 证据：C 输入检查确认
 * C接口：0x4806e388 GET:/torque_nag/status
 * 解释：0x4804ea2a仅处理相关输入；0x370要求DLC≥8，检查字节累加偏移0x73校验、扭矩原值范围、近100ms自回波；来源年龄超过5000us拒绝，pending状态也阻止覆盖。0x39B更新DAS有效性/HOS。
 */
on_frame(f) {
    if (f.id == 0x39B) update_das_hos_freshness(f);
    if (f.id != 0x370 || f.dlc < 8) return;
    if (matches_recent_own_echo(f)) { echo_drop++; return; }
    if (!oem_checksum_and_torque_raw_valid(f)) { reject++; return; }
    if (source_age_us(f) > 5000 || output_pending) { stale_or_pending_drop++; return; }
    process_torque_source(f);
}

/* 06_dnd_torque:torque_gate: 停发条件、DAS新鲜度与方向确认
 * 证据：状态机与输入单位对应确认
 * C接口：0x4806e388 GET:/torque_nag/status
 * 解释：有效开关链失效即停发；DAS未见／无效／过期进入等待；转角判断约±50°（参数deci-degree范围±500），并用3次观察确认方向，观察间隔过长会重新arming。方向通常反向于转角符号，接近中心时沿用已知方向。
 */
if (!effective_enable_chain) return disabled_no_output();
if (!das_seen || !das_valid || das_age > timeout) return wait_das_no_output();
if (angle_deci_deg < -500 || angle_deci_deg > 500) return angle_block_no_output();
dir = angle > 10 ? NEGATIVE : angle < -10 ? POSITIVE : previous_direction;
if (!three_observation_direction_confirmation()) return ARMING;

/* 06_dnd_torque:torque_maintenance: 持续预防与活动／休息周期
 * 证据：C 状态／随机时间／幅值确认
 * C接口：0x4806e388 GET:/torque_nag/status, 0x48101f34 POST:/config
 * 解释：maintenance期间在方向对应幅值区间选目标；活动、休息区间由xorshift类PRNG选择，休息为0则连续维护；stability-verify也可发送预防幅值。
 */
switch (phase) {
case MAINTENANCE:
    torque = signed_random_preventive_magnitude(direction);
    if (activity_elapsed) enter(rest_range_is_zero ? MAINTENANCE : REST);
    break;
case REST:
    no_output(); if (rest_elapsed) enter(MAINTENANCE); break;
case STABILITY_VERIFY: send_preventive_until_verify_end(); break;
}

/* 06_dnd_torque:torque_corrective: H2等待、纠正前停发、纠正与恢复观察
 * 证据：状态机确认；全部HOS枚举映射未完整列出
 * C接口：0x48101f34 POST:/config, 0x4806e388 GET:/torque_nag/status
 * 解释：H2持续达到配置等待进入pre-corrective-pause；之后在设置正／负帧数、幅值和发送／暂停周期内纠正；提示恢复后经过stability-verify再回maintenance。零帧方向禁用对应纠正。fault-hold与monitor-only是不发输出的独立相位。
 */
if (persistent_h2_ms >= h2_wait_ms) enter(PRE_CORRECTIVE_PAUSE);
if (pre_pause_elapsed) enter(CORRECTIVE);
if (phase == CORRECTIVE) {
    choose_enabled_direction_and_remaining_frames();
    send_corrective_magnitude_in_configured_bursts();
    pause_between_bursts_if_configured();
}
if (hos_recovers) enter(STABILITY_VERIFY);
if (stable_for_verify_duration) enter(MAINTENANCE);

/* 06_dnd_torque:torque_terminal: 发送确认、计数器冲突和终态统计
 * 证据：计数与输入处理确认；完整终态调用链部分间接
 * C接口：0x4806e388 GET:/torque_nag/status
 * 解释：txAccepted、txSuccess/Failure、submitRejected、terminalTimeout、counterCollisions、lateReceipt分别统计，不能把accepted作为已生效。修改帧沿用协议计数器/校验规则并跟踪自己的回波。
 */
output = clone_valid_oem_template(); encode_selected_torque(output);
update_counter_and_checksum_by_protocol();
token = submit(output);
if (accepted(token)) mark_pending_and_track_counter();
on_terminal(token, result) update_success_failure_and_clear_matching_pending();

/* ================= 自动换挡、方向盘、滚轮与障碍物 ================= */

/* 07_gear:gear_gates: 总开关、车速、刹车、安全带、次数与冷却
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：允许速度页面0～8km/h；单次刹车周期次数0表示无限；默认要求安全带，刹车旁路为独立设置。运行反馈有blockedCount、lastBlock、brakeConfirmed、driverSeatStatusAgeMs、templateAgeMs。
 */
allowed = master && fresh_gear_speed_template && speed <= max_speed;
if (seatbelt_required) allowed &= fresh_confirmed_seatbelt;
if (!brake_bypass) allowed &= brake_authorized;
allowed &= cooldown_elapsed && (shift_limit == 0 || count < shift_limit);
if (!allowed) publish_block_reason(); else accept_gear_intent();

/* 07_gear:gear_steering: 刹车＋转向D/R切换与P挡方向确认
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：角度UI以度展示，提交乘10；P挡和D/R阈值分别设置。方向符号、当前挡位与启用项确定候选挡，仍经过共用门控。
 */
threshold_deci = round(ui_degrees * 10);
if (brake_steering_enabled && steering_threshold_crossed()) {
    if (gear == P && park_steering_enabled) target = infer_drive_reverse_from_direction();
    else if (gear == D || gear == R) target = opposite_drive_reverse();
    request_gear_if_shared_gates_pass(target);
}

/* 07_gear:gear_preset: 智能流畅参数快捷设置
 * 证据：前端常量确认
 * C接口：0x48101f34 POST:/config
 * 解释：前端批量设1000ms冷却、P30°、D/R60°、障碍物30°，经标准保存流程提交；不是C中新增的独立模式。
 */
set(gearCooldownMs, 1000);
set(gearParkSteeringThresholdDeciDeg, 300);
set(gearDriveReverseSteeringThresholdDeciDeg, 600);
set(bleObstacleSteeringThresholdDeciDeg, 300);
schedule_config_save();

/* 07_gear:obstacle_direct: PARTY直连障碍建议与方向校验
 * 证据：前端协议说明与运行来源确认；位解码部分重建
 * C接口：0x480f1e34 POST:/config/ble_obstacle, 0x4806851c GET:/runtime_status
 * 解释：专用revision/requestId接口保存功能开关；V13/V14只在P挡处理新鲜0x255建议及0x12B方向，进入D/R或挡位过期清空；回P需重新收到两类新数据。可选方向盘确认中D要求左转，R要求右转。
 */
if (protocol != V12) {
    if (gear != P || gear_stale) clear_party_suggestion_and_direction();
    if (!new_255_and_12b_after_entering_P) return WAIT_SOURCE;
    if (steering_confirm_enabled && !direction_matches_suggestion()) return BLOCKED;
    request_suggested_gear_through_shared_gates();
}

/* 07_gear:obstacle_v12: V12前后超声波／雷达融合
 * 证据：接口确认；运行语义重建
 * C接口：0x480f43a8 POST:/config/uss_radar, 0x4806afe2 GET:/config/uss_radar
 * 解释：V12可在P/D/R提出目标；综合前后距离、有效探头数、雷达健康和方向，数据失效停止请求。gearUss前缀阈值为原始单位，不能直接按厘米解释。
 */
if (protocol == V12) {
    if (!fresh_healthy_radar_and_uss()) return NO_SUGGESTION;
    obstacle_state = classify_raw_distances_with_configured_thresholds();
    target = fuse_front_rear_and_direction(obstacle_state);
    request_gear_through_shared_gates(target);
}

/* 07_gear:uss_settings: 雷达近／中／远／自定义及版本保存
 * 证据：接口与参数确认
 * C接口：0x4806afe2 GET:/config/uss_radar, 0x480f43a8 POST:/config/uss_radar
 * 解释：revision控制并发；验证preset、block/caution阈值与有效数量，区分invalid_radar_config、stale_revision、radar_busy、flash_write、pending/stored。预设的原始阈值应以回读为准。
 */
if (revision != current_revision) return STALE_REVISION;
validate_radar_preset_and_raw_thresholds(candidate);
submit_radar_config_transaction();
return_current_config_with_revision_and_persistence();

/* 07_gear:gear_scroll: 左右滚轮正负动作映射
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：各方向枚举0无、1D、2R、3P、4D/R切换。物理滚动产生候选请求，走相同速度、次数、冷却及反馈门控。
 */
on_scroll(side, direction) {
    action = mappings[side][direction];
    target = action == TOGGLE_DR ? opposite_of_current_DR() : action_to_gear(action);
    if (target != NONE) request_gear_if_shared_gates_pass(target);
}

/* 07_gear:gear_brake_credit: 滚轮低速单次刹车授权
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：在低速条件使用一次刹车授权；刹车旁路开启时页面禁用此项。授权的完整消费／复位边界未完全追出，保留抽象状态条件。
 */
if (eligible_low_speed_brake_cycle()) arm_one_shot_scroll_authorization();
if (scroll_gear_request && one_shot_credit_valid()) {
    consume_credit_at_confirmed_request_boundary(); request_gear();
}
// 具体消费与复位边沿仍需逐条反汇编核对。

/* 07_gear:gear_feedback: 请求提交、挡位反馈、失败与超时
 * 证据：接口确认；运行语义重建
 * C接口：0x4806851c GET:/runtime_status, 0x480c0178 GET:/status
 * 解释：运行记录requestPending、lastAction/Block以及sourceFollow终态；在模板与安全状态新鲜时提交，确认实际挡位和终态后推进，失败/超时清理。
 */
if (gear_intent && !request_pending && gates_pass()) submit_gear_request();
if (matching_tx_failure || action_deadline_expired) cancel_pending_and_publish_failure();
if (fresh_vehicle_gear_matches_target) complete_action_and_update_cooldown_count();

/* ================= 座椅手动调节、位置记忆与停止 ================= */

/* 08_seats:seat_enable: 座椅功能许可与通道
 * 证据：配置与接口确认
 * C接口：0x48101f34 POST:/config, 0x480c0178 GET:/status
 * 解释：seatControlBus为隐藏字段，前端默认2；后端仍读写并验证通道及可发送状态。失效返回seat_disabled或seat_can_unavailable。
 */
seat_enabled = configured_enabled && selected_bus_available_for_tx;
if (!configured_enabled) return SEAT_DISABLED;
if (!selected_bus_available_for_tx) return SEAT_CAN_UNAVAILABLE;

/* 08_seats:seat_manual: 24方向按住调节、250ms续租与松开停止
 * 证据：接口确认；运行语义重建
 * C接口：0x48100e14 POST:/seat_action
 * 解释：data-seat-manual-mask编码方向，action=manual_start持续按住每250ms发送，manual_stop在释放、页面失焦等事件触发。C校验mask、所有者与停止状态，避免相反方向同时生效。完整租约到期值未确认。
 */
pointer_down(button) {
    mask = button.data_seat_manual_mask; POST(manual_start, mask);
    every(250_ms) while_held POST(manual_start, mask);
}
pointer_up_or_page_lost() { stop_keepalive(); POST(manual_stop); }
backend_validate_mask_and_refresh_manual_lease();
on_release_or_expired_lease() send_stop_template();

/* 08_seats:seat_save: 十个位置槽保存与Flash确认
 * 证据：接口确认；运行语义重建
 * C接口：0x48100e14 POST:/seat_action, 0x480c0178 GET:/status
 * 解释：save(slot)不是保存名称，而是取当前位置写入位置槽；需要位置和0x4F3模板就绪，异步请求完成后sequence增加，前端等待新sequence和slot状态。
 */
require(slot >= 0 && slot < 10); require_fresh_position_and_4F3_template();
if (seat_action_busy) return SEAT_BUSY;
queue_save_position(slot);
runtime_commit_slot_to_flash_and_publish_new_action_sequence();
ui_wait_for_sequence_and_valid_slot_before_showing_saved();

/* 08_seats:seat_recall: 调用记忆、动作终态与物理输入让行
 * 证据：接口确认；运行语义重建
 * C接口：0x48100e14 POST:/seat_action, 0x480c0178 GET:/status
 * 解释：recall要求槽有效；目标已达到则可能不启动动作，否则运行按位置反馈生成调用请求。实时状态提供physicalRequest、recallActive、manualActive，物理输入和失败的精确优先级部分重建。
 */
require_valid_slot(slot);
if (already_at_target_position()) publish_no_motion_success();
else { begin_recall(slot); submit_control_from_fresh_template(); }
on_target_reached_or_cancel_or_fault_or_physical_override() settle_and_stop_recall();

/* 08_seats:seat_cancel: 停止全部手动和记忆动作
 * 证据：接口确认；运行语义重建
 * C接口：0x48100e14 POST:/seat_action
 * 解释：cancel同时释放前端按住状态，并请求固件安全停止；seat_quiesce_busy表示还在结算。
 */
stop_ui_manual_timer(); clear_held_button();
POST("/seat_action", {action:"cancel"});
backend_cancel_pending_recall_and_manual_requests();
settle_stop_frame_before_reporting_idle();

/* 08_seats:seat_names: 十个槽位名称本地保存
 * 证据：前端确认
 * C接口：
 * 解释：名称使用t2can-seat-slot-names-v1 localStorage；槽名编辑不向/seat_action发送，不属于NVS位置槽数据。
 */
on_slot_name_edit(slot, text) {
    names[slot] = text; local_storage_set("t2can-seat-slot-names-v1", names);
}

/* ================= 六区氛围灯、FSD提示、盲区、转向与迎宾 ================= */

/* 09_ambient:ambient_zones: 六区常亮、区域使能、RGB与亮度
 * 证据：配置结构确认；输出组合部分重建
 * C接口：0x4806adda GET:/ambient_config, 0x480f584c POST:/ambient_config
 * 解释：提交z0…z5 Enabled、Brightness、Color；Color为6位RGB十六进制，区域亮度0～100。按选区编辑保存，关闭区域不等于清除其存储颜色。
 */
require_six_zones();
for (z = 0; z < 6; ++z) validate_enabled_rgb_and_brightness(z);
store_driver_ambient_base();
if (constant_enabled) request_enabled_zone_targets_from_fresh_sources();

/* 09_ambient:ambient_all: 应用当前颜色亮度到全部区域
 * 证据：前端确认
 * C接口：0x480f584c POST:/ambient_config
 * 解释：浏览器把当前选区的enabled、RGB及亮度一起复制到全部区，再经相同接口保存；不是逐区六次HTTP写入。
 */
selected = config.zones[current_zone];
for (z = 0; z < 6; ++z) config.zones[z] = copy(selected); // 含enabled
schedule_single_ambient_transaction();

/* 09_ambient:ambient_fsd: FSD激活氛围提示
 * 证据：接口确认；运行语义重建
 * C接口：0x480f584c POST:/ambient_config
 * 解释：页面ambientFsdCueEnabled映射后端fsdCueEnabled，由实际FSD状态驱动区域灯效；与常亮总开关、迎宾独立字段。确切提示颜色与时序未全部恢复。
 */
save_field("fsdCueEnabled", ui_fsd_cue);
if (cue_enabled && eligible_fsd_state_transition()) compose_fsd_cue_target();
merge_with_other_active_zone_targets();

/* 09_ambient:ambient_blind: 盲区区域、亮度与警报后恢复
 * 证据：接口确认；运行语义重建
 * C接口：0x480f584c POST:/ambient_config
 * 解释：前／后／仪表台区域掩码，亮度10～100、延迟0～1000ms；有后端capability检查。警报解除后恢复原目标，而非硬编码一律关灯。
 */
if (!capability.blind_spot) reject_or_hide_unsupported_fields();
if (blind_warning_active) compose_warning_for_selected_side_and_area_mask();
if (warning_just_cleared) restore_at = now + delay_ms;
if (now >= restore_at) restore_current_underlying_zone_target();

/* 09_ambient:ambient_turn: 左右转向／双闪跟随
 * 证据：接口确认；运行语义重建
 * C接口：0x480f584c POST:/ambient_config
 * 解释：左转只覆盖左侧，右转只覆盖右侧；双闪由turnFollowHazards决定；颜色、亮度、三类区域分别设置并与灯效状态合成。
 */
if (turn_follow_enabled) {
    sides = indicators_are_hazards ? (follow_hazards ? BOTH : NONE) : indicator_side;
    compose_turn_follow_for(sides, areas, rgb, brightness);
}
on_indicator_release() restore_underlying_target_when_owner_settled();

/* 09_ambient:welcome_styles: 五种迎宾样式
 * 证据：接口确认；运行语义重建
 * C接口：0x480f584c POST:/ambient_config
 * 解释：柔光环抱、冰蓝流光、暖金礼序、黑幕启幕、光迹回环，枚举0～4。0x4804304e/0x48044258提供迎宾阶段与目标生成证据；逐帧颜色曲线和区域路径未完整还原。
 */
if (welcome_enabled && accepted_welcome_trigger) {
    style = clamp(config.welcomeStyle, 0, 4);
    initialize_style_stage_and_zone_mask(style);
}
each_tick_advance_style_stage_and_compose_zone_targets();
// 具体路径／曲线使用原状态机，本文不伪造数组。

/* 09_ambient:welcome_trigger: 开门与座椅无人触发、过滤和重触发
 * 证据：接口确认；运行语义重建
 * C接口：0x480f584c POST:/ambient_config, 0x4806851c GET:/runtime_status
 * 解释：mode0要求座椅确认无人，mode1接受有效开门；runtime有openMask、origin、triggered/filtered/completed。座椅无数据不等价为无人。
 */
if (fresh_valid_door_open_edge) {
    allowed = mode == ANY_VALID_DOOR || fresh_confirmed_unoccupied;
    if (allowed) start_or_retrigger_welcome(); else filtered_count++;
}
publish_stage_reason_openmask_origin();

/* 09_ambient:welcome_params: 迎宾亮度、节奏、颜色和六区掩码
 * 证据：参数确认；曲线部分重建
 * C接口：0x480f584c POST:/ambient_config
 * 解释：亮度10～100，tempo0～2，mask1～63；迎宾独立于常亮开关，颜色为#RRGGBB。前端参数验证与后端结构验证均存在。
 */
validate(style <= 4, trigger_mode <= 1, 10 <= brightness <= 100);
validate(tempo <= 2, 1 <= mask <= 63, rgb_is_valid);
apply_style_tempo_and_mask_to_welcome_state();

/* 09_ambient:ambient_transaction: 按驾驶员保存、冲突、待写与终态恢复
 * 证据：接口与状态字段确认；精确恢复分支部分重建
 * C接口：0x4806adda GET:/ambient_config, 0x480f584c POST:/ambient_config, 0x4806851c GET:/runtime_status
 * 解释：检查driverId与revision，OTA或驾驶员变化中止；后端区分available、blockedReason、persistence pending/stored及ambient_tx_fault。前端核对布尔、数值、颜色、6区回读。运行记录fault、outstandingMask、terminal超时并恢复来源。
 */
require_current_driver_and_revision(); validate_complete_config();
submit_ambient_runtime_transaction(); persist_driver_blob();
if (flash_failure) return_actual_revision_with_pending();
track_zone_request_generation_and_outstanding_terminal_mask();
on_invalidated_or_failed_terminal() recover_or_publish_ambient_tx_fault();

/* ================= 远光、爆闪与后雾灯 ================= */

/* 10_lighting:high_force: FSD强制远光与合帧
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：FSD/物理操作条件下覆盖灯光请求，runtime包含vcleft owner、generation、mergeCount、localEchoDrops、lightingMerges，说明和共用来源帧合并而非持续任意发包。
 */
if (force_high_enabled && eligible_fsd_physical_condition())
    merge_force_high_request_into_fresh_vcleft_template();
if (vcleft_owner_busy) defer_until_owner_can_merge();
submit_and_settle_matching_generation();

/* 10_lighting:high_strobe: 第二次长按0.5秒远光爆闪
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config
 * 解释：页面描述第二次长按0.5秒触发；间隔1～100ms，次数0～20，0不限。前端无效值不提交，后端也验证；精确双次手势状态与波形边沿部分重建。
 */
if (second_eligible_long_press_500ms && strobe_enabled) begin_strobe();
if (phase_deadline_due && (count_limit == 0 || emitted_count < count_limit))
    toggle_high_request_and_schedule_next(interval_ms);
if (release_or_stop_condition_or_fault) restore_original_light_request();

/* 10_lighting:fog_deceleration: 减速后雾灯与轻重阈值
 * 证据：接口确认；运行语义重建
 * C接口：0x48066e12 GET:/rear_fog/config, 0x480f4dda POST:/rear_fog/config
 * 解释：0x48054a82处理0x273、0x118等来源并调用减速判断0x48054722；配置enabled、mildDecelCx100、hardDecelCx100，来源新鲜和实际反馈控制请求。具体轻重脉冲节奏未全恢复。
 */
observe_vehicle_sources_and_compute_deceleration();
if (auto_fog_enabled && fresh_feedback_and_source)
    select_mild_or_hard_braking_pattern_by_thresholds();
submit_fog_request_from_current_template_and_track_terminal();

/* 10_lighting:fog_reverse: 倒车双闪＋8次雾灯警示
 * 证据：接口确认；运行语义重建
 * C接口：0x480f4dda POST:/rear_fog/config
 * 解释：reverseWarningEnabled使倒车触发警示模式，前端明确双闪＋8次后雾灯；退出R、来源过期和故障需停止/恢复。8次为页面行为证据，详细脉冲时序待核对。
 */
if (fresh_reverse_entry && reverse_warning_enabled)
    arm_reverse_hazard_and_fog_pattern(8);
if (reverse_exit_or_source_stale_or_fault) settle_and_restore();

/* 10_lighting:fog_reverse_steady: 倒车后雾灯常亮
 * 证据：接口确认；运行语义重建
 * C接口：0x480f4dda POST:/rear_fog/config
 * 解释：reverseRearFogSteadyEnabled独立于倒车警示，按R挡持续请求；两者同时启用的完整仲裁序未全部确认。
 */
if (reverse_steady_enabled && fresh_gear == R) request_reverse_steady_fog();
else remove_reverse_steady_request_and_recompute_fog_owner_target();

/* 10_lighting:fog_pilot: 领航许可与本次运行启动／停止
 * 证据：专用C接口确认
 * C接口：0x480f4dda POST:/rear_fog/config, 0x481015a6 POST:/rear_fog/runtime
 * 解释：rearFogPilotEnabled保存许可，/rear_fog/runtime的enabled操作本次active；许可关闭拒绝启动pilot_not_permitted。活动状态无需等同于持久化许可。
 */
save_permission_to_config(pilot_permitted);
POST_runtime(enabled) {
    if (enabled && !pilot_permitted) return PILOT_NOT_PERMITTED;
    submit_runtime_pilot_start_or_stop(enabled);
    return_actual_pilot_active_state();
}

/* ================= 电池预热和维修模式 ================= */

/* 11_preheat_service:preheat_start: 预热请求与15／30／45／60分钟许可
 * 证据：接口确认；运行语义重建
 * C接口：0x48101f34 POST:/config, 0x4806851c GET:/runtime_status
 * 解释：支持四种时间，显式开启请求由运行状态机处理；监测heating、thermal、SOC、electrical新鲜度，展示目标/最低/最高温度、电压电流功率。许可不等于已实际加热。
 */
require_duration_one_of(15, 30, 45, 60);
on_explicit_enable() submit_preheat_control_intent_once();
tick_preheat() {
    update_heating_temperature_soc_and_electrical_observations();
    if (runtime_allowed && sources_and_template_ready) request_preheat();
    publish_requested_active_and_observed_heating_separately();
}

/* 11_preheat_service:preheat_timer: 运行倒计时、超时关闭与停止确认
 * 证据：接口确认；运行语义重建
 * C接口：0x4806851c GET:/runtime_status, 0x48101f34 POST:/config
 * 解释：timerStarted、elapsedMs、remainingMs、timedOut与stopState独立存在；期限结束产生关闭流程，记录offFramesPending、terminalSeen/Pending和shutdownAttempts/Failures，关闭未确认保留恢复状态。计时启动的全部条件部分重建。
 */
if (timer_start_condition_confirmed && !timer_started) start_allowed_duration_timer();
if (deadline_reached) { timed_out = true; begin_confirmed_shutdown(); }
if (stop_frame_accepted) track_terminal_and_remaining_off_frames();
if (shutdown_confirmed) mark_completed(); else retain_recovery_required();

/* 11_preheat_service:preheat_retry: 关闭失败恢复与显式重试
 * 证据：命令语义及前端防重放确认
 * C接口：0x48101f34 POST:/config, 0x480bd450 GET:/config
 * 解释：POST带batteryPreheatRetryStop；后端区分recovery_required、command_blocked、retry_blocked/invalid和restore_failed。前端每个显式预热编辑只尝试一次HTTP，连接结果未知不自动重放开关命令。
 */
if (explicit_retry_stop) validate_recovery_state_and_submit_stop_retry();
if (command_result_unknown) read_state_without_replaying_enable();
if (duration_change_blocked) preserve_other_edits_and_restore_duration_from_readback();

/* 11_preheat_service:service_mode: CANB维修模式开关
 * 证据：配置确认；完整运行协议未确认
 * C接口：0x48101f34 POST:/config, 0x480bd450 GET:/config
 * 解释：后端解析并保存canbServiceModeEnabled，与CAN许可和关闭结算相关。运行端具体诊断/维修报文全序列未确认，只给出配置及有效状态框架。
 */
candidate.canbServiceModeEnabled = parse_bool_if_present();
submit_config_and_persist();
effective_service_mode = configured && relevant_bus_ready;
// 维修协议的完整服务ID、触发及退出序列尚未恢复。

/* ================= CAN抓包、过滤与文件下载 ================= */

/* 12_recorder:rec_filters: 包含／排除ID、三路总线和RX／TX
 * 证据：请求结构与C验证确认
 * C接口：0x480fd584 POST:/rec_start
 * 解释：包含/排除字符串解析标准ID，buses位掩码1/2/4；RX/TX不能同时关闭。duration页面1～3600秒，提交毫秒。非法ID列表拒绝。另保留setRecorderPreset快捷填值函数，设置指定ID/总线、RX+TX及30秒，但未发现页面调用，不能标为可见预设按钮。
 */
parse_standard_id_lists(include, exclude);
require_nonempty_bus_mask(); require(rx || tx);
duration_ms = clamp(ui_seconds, 1, 3600) * 1000;
filter = make_filter(include, exclude, buses, rx, tx);

/* 12_recorder:rec_start: 异步切换过滤器、内存缓冲与开始抓包
 * 证据：C启动分支确认
 * C接口：0x480fd584 POST:/rec_start, 0x4806c4e8 GET:/rec_status
 * 解释：阻止重复开始和下载中开始；分配PSRAM/内部RAM缓冲，启动三路过滤器转换，pending直到filterGeneration实际应用。错误包括buffer_unavailable、filter_transition_failed、pipeline_busy。
 */
if (active || download_in_progress) return BUSY;
buffer = allocate_recorder_buffer_with_available_memory_strategy();
request_filter_transition_for_three_buses();
if (!filters_applied) return PENDING;
start_capture_and_deadline();

/* 12_recorder:rec_collect: 帧与TX生命周期采集、容量和丢弃状态
 * 证据：接口确认；运行语义重建
 * C接口：0x4806c4e8 GET:/rec_status
 * 解释：按过滤规则收集RX以及TX提交/终态等事件，发布count、bytes、ring、dropped、optionalSinkRejected、source、stopReason和各bus统计。缓冲满的确切覆盖策略以ring状态与原实现为准。
 */
on_optional_can_event(event) {
    if (!recording || !matches_filter(event)) return;
    append_to_recorder_buffer_or_count_drop(event);
}
if (duration_elapsed) stop_capture_with_reason();
publish_count_bytes_ring_and_lifecycle_counters();

/* 12_recorder:rec_stop_clear: 停止、清空与运行互斥
 * 证据：接口确认
 * C接口：0x480fd45c POST:/rec_stop, 0x4806e04e POST:/rec_clear
 * 解释：停止后保留已录内容供下载；清空在录制或下载时被拒绝。
 */
stop() { stop_capture_and_settle_filter_pipeline(); keep_saved_buffer(); }
clear() {
    if (recording || downloading) return BUSY;
    reset_saved_length_counters_and_metadata();
}

/* 12_recorder:rec_download: CSV／BIN下载与文件头
 * 证据：C接口与输出类型确认
 * C接口：0x4806fee2 GET:/rec_download
 * 解释：format选择csv或bin；必须已有记录且停止录制，下载互斥。Content-Disposition为p1_3can_recording.csv/bin。BIN不是简单原始CAN payload串联，包含版本/记录结构，未重写导出格式。
 */
if (!saved_recording) return NO_RECORDING;
if (active || download_busy) return BUSY;
lock_download_snapshot();
stream(format == BIN ? versioned_binary_records : csv_records);
unlock_download_snapshot_on_completion_or_disconnect();

/* ================= CAN实验规则、发送、校验与预设 ================= */

/* 13_can_experiment:experiment_rules: 最多4规则、每规则3路与标准ID
 * 证据：前端与后端结构确认
 * C接口：0x480ed598 POST:/api/can-experiment/listen
 * 解释：每规则指定标准11位ID、buses、DLC及模式；删除/编辑导致已确认generation失效。至少一条，最多四条，每条最多三个lane。
 */
require(1 <= rule_count && rule_count <= 4);
for (rule in rules) { require(id <= 0x7ff && buses_mask != 0); expand_bus_lanes(rule); }
on_rule_edit() { confirmed_generation = 0; disable_start_button(); }

/* 13_can_experiment:experiment_listen: 来源监听、停止监听与来源确认
 * 证据：接口确认；运行语义重建
 * C接口：0x480ed598 POST:/api/can-experiment/listen, 0x480ecf86 POST:/api/can-experiment/listen/stop, 0x480ab7ba POST:/api/can-experiment/source/confirm
 * 解释：监听按lane缓存最新帧、DLC、稳定来源帧和周期；确认来源返回DLC。状态提供waiting_bus/template、templateAgeMs、observedPeriodMs、sourceConfirmed。
 */
listen(rules) { register_optional_source_observers(); state = LISTENING; }
on_real_source_frame(bus, id) { update_lane_template_dlc_period_and_stability(); }
confirm(rule) { require_acceptable_source(); mark_source_confirmed(); return_dlc(); }
stop_listen() { unregister_observers_when_settled(); }

/* 13_can_experiment:experiment_bits: 按位匹配与修改掩码
 * 证据：按位语义确认；全部保留位规则参照原验证函数
 * C接口：0x480ec3f8 POST:/api/can-experiment/validate
 * 解释：每位为不关心/0/1；matchMask/value筛选来源，editMask/value修改输出。3FD/3C2的未改MUX匹配位可缩小接管范围；不能修改MUX位。
 */
if ((source_bytes & match_mask) != (match_value & match_mask)) return NO_MATCH;
output_bytes = (source_bytes & ~edit_mask) | (edit_value & edit_mask);
reject_illegal_mux_edits_or_overlapping_reserved_fields();

/* 13_can_experiment:experiment_validate: 确认修改、错误／警告和generation
 * 证据：接口与前端确认
 * C接口：0x480ec3f8 POST:/api/can-experiment/validate
 * 解释：后端检查规则、lane互冲突、DLC、counter/checksum、内置owner限制，返回errors/warnings和generation；前端有generation才允许开启。
 */
errors, warnings = validate_rules_and_cross_rule_resources(candidate);
if (errors) return VALIDATION_FAILED;
confirmed_generation = publish_validated_candidate_generation();
return(confirmed_generation, warnings);

/* 13_can_experiment:experiment_start: 必须匹配已确认版本才能开始
 * 证据：启动代数检查与状态接口确认
 * C接口：0x480eb56e POST:/api/can-experiment/start
 * 解释：提交confirmedGeneration和规则，后端比较已验证版本，拒绝编辑后旧版本。运行分waiting_bus/template/builtin_owner等lane状态，可恢复异常仅暂停对应lane。
 */
require(request.confirmedGeneration == validated_generation);
require(request_rules_match_validated_candidate());
state = RUNNING;
for (lane in lanes) reevaluate_bus_template_and_builtin_owner_readiness();

/* 13_can_experiment:experiment_modes: 单次／跟随／周期、延迟与模板超时
 * 证据：接口确认；运行语义重建
 * C接口：0x480eb56e POST:/api/can-experiment/start, 0x480acf1c GET:/api/can-experiment/status
 * 解释：mode0单次、1跟随、2固定周期；period页面5～60000ms，template timeout0自动或≤5000ms，delayUs≤5000000，strict要求所选线路同时就绪。运行区分staleSkip、busySkip、delayedSuperseded。
 */
if (strict && !all_selected_lanes_ready) pause_rule();
for (lane in ready_lanes) {
    trigger = mode == SINGLE ? !lane.single_completed :
              mode == FOLLOW ? new_source_generation : period_due;
    if (!trigger || template_expired()) continue;
    if (delay_us) schedule_generation_bound_delayed_output();
    else submit_generated_output();
}
if (new_source_supersedes_delayed_output) invalidate_old_delayed_generation();

/* 13_can_experiment:experiment_counter: 原值偏移／独立自增计数器
 * 证据：接口确认；运行语义重建
 * C接口：0x480ec3f8 POST:/api/can-experiment/validate
 * 解释：可选字节、起bit、宽度1～8、步长、初值、min/max和offset；先生成编辑后的输出再按配置处理计数器字段。确认／失败时具体独立计数器推进点尚未完全核对。
 */
mask = bitfield_mask(counter_bit, counter_width);
if (mode == SOURCE_OFFSET) value = normalize_counter(source_counter + offset);
if (mode == INDEPENDENT) value = lane_counter_with_configured_bounds;
replace_counter_field(output, value, mask);
// 独立计数器推进以原运行实现的提交／确认边界为准。

/* 13_can_experiment:experiment_checksums: SUM／XOR／CRC8及反射参数
 * 证据：接口确认；运行语义重建
 * C接口：0x480ec3f8 POST:/api/can-experiment/validate
 * 解释：选择参与字节掩码、输出字节、add/xor，CRC还指定多项式、初值、refIn/refOut、includeId。必须用修改后的帧参与校验，输出字节是否排除及CAN ID字节序由实现确定，未编造统一规则。
 */
selected = checksum_input_bytes_after_edit_and_counter(output);
switch (checksum_mode) {
case SUM: value = sum8(selected); break;
case XOR: value = xor8(selected); break;
case CRC8: value = configured_crc8(selected, poly, init, ref_in, ref_out, include_id); break;
}
output[checksum_output] = finalize_with_configured_add_and_xor(value);
// SUM/CRC输入细节和finalize顺序须以原实现校对。

/* 13_can_experiment:experiment_takeover: 内置发送接管、优先级继承和停止结算
 * 证据：前端说明、状态与结算辅助函数确认
 * C接口：0x480eb56e POST:/api/can-experiment/start, 0x480eab84 POST:/api/can-experiment/stop
 * 解释：内置流按线路/ID/MUX让行；新增报文P1/2/3，255继承；P0固定在CH3FD MUX0。停止进入stopping，等待pending token结算后解除接管，防止旧回执影响新owner。
 */
acquire_selected_builtin_owner_scopes();
priority = existing_stream ? inherited_priority : configured_P1_P2_P3;
if (scope == CH_3FD_MUX0) route_actual_send_through_fsd_p0();
stop() { invalidate_future_outputs(); state = STOPPING; }
when_all_pending_tokens_settled() { release_takeover(); state = STOPPED; }

/* 13_can_experiment:experiment_metrics: 逐lane来源／输出与延迟、终态计数
 * 证据：C状态字段确认
 * C接口：0x480acf1c GET:/api/can-experiment/status
 * 解释：generated、accepted、rejected、terminalOk/Fail、busy/staleSkip、DLC mismatch、accepted与terminal latency分别展示。独立生成帧不能算发送成功。
 */
on_generate() generated++;
on_submit(result) result.accepted ? accepted++ : rejected++;
on_terminal(result) result.ok ? terminal_ok++ : terminal_fail++;
publish_each_lane_source_output_age_latency_and_pending_token();

/* 13_can_experiment:experiment_presets: 8预设载入／保存／改名／删除与异步持久化
 * 证据：预设接口与代数确认
 * C接口：0x4806da0c GET:/api/can-experiment/presets, 0x480ac732 POST:/api/can-experiment/presets, 0x4808a37e DELETE:/api/can-experiment/presets
 * 解释：预设记录occupied、valid、name、generation、persistedGeneration、persistencePending；保存接受内存态与写入Flash完成是两阶段，前端轮询确认。
 */
preset_action(slot, action) {
    validate_slot_0_to_7_and_current_quiesce_state();
    if (action == SAVE) replace_preset_with_rules_and_name();
    if (action == LOAD) return_rules_for_ui_editing_and_revalidation();
    if (action == RENAME) update_name();
    if (action == DELETE) clear_slot();
    enqueue_persistence_generation();
}
poll_until_persisted_generation_catches_up();

/* ================= AP热点、外部Wi-Fi和网络状态 ================= */

/* 14_wifi:wifi_status: AP/STA状态与异步扫描结果
 * 证据：状态接口与前端确认
 * C接口：0x48066f4c GET:/wifi/status
 * 解释：状态包含enabled、connected/connecting、SSID/IP、AP clients、retryDeferredForAp、scanState/networks、connectAttempts、lastDisconnectReason和configurationGeneration。
 */
snapshot = read_wifi_state_and_scan_cache();
return_snapshot_without_starting_new_scan();
ui_apply_only_latest_request_sequence(snapshot);

/* 14_wifi:wifi_scan: 扫描附近网络与列表选择
 * 证据：接口与前端确认
 * C接口：0x4806b7e4 POST:/wifi/scan, 0x48066f4c GET:/wifi/status
 * 解释：POST开始扫描，结果通过status轮询；OTA期间拒绝。列表选择填充SSID，不自动发出连接请求。
 */
if (ota_busy) return OTA_BUSY;
request_async_scan();
on_scan_complete() publish_network_cache_and_scan_state();
on_ui_select_network() copy_ssid_to_draft();

/* 14_wifi:wifi_connect: 启用STA、保存SSID密码与连接
 * 证据：接口确认；运行语义重建
 * C接口：0x480f38e4 POST:/wifi/connect
 * 解释：SSID必填；配置保存失败返回flash_write，连接结果异步报告。状态提供连接重试、AP客户端导致延迟等；避免把完整重试策略简化为阻塞connect()。
 */
require_ssid(); parse_network_credentials();
if (!persist_external_wifi_settings()) return FLASH_WRITE;
request_sta_enabled_and_connect_transition();
return_OK_for_accepted_request();
network_service_tick_updates_connect_retry_and_ap_deferral();

/* 14_wifi:wifi_disconnect_forget: 断开与忘记网络
 * 证据：C接口与前端确认
 * C接口：0x480f2624 POST:/wifi/disconnect, 0x480f2918 POST:/wifi/forget
 * 解释：断开和忘记各有持久化流程；前者停止连接，后者移除保存的网络凭据。页面隐藏／启用和后端状态仍须回读核对。
 */
disconnect() { persist_disabled_or_disconnected_preference(); request_sta_disconnect(); }
forget() { clear_saved_ssid_and_password(); persist(); request_disconnect(); }

/* 14_wifi:wifi_ap_password: 热点密码保存及异步重启
 * 证据：C接口确认
 * C接口：0x480f3d2c POST:/wifi/ap-config
 * 解释：AP SSID为Albert-P4-FSD；非空新密码限定8～63字符，空输入保留原密码。检查ap_restart_pending、OTA；持久化成功返回HTTP202、apRestarting=true，约250ms后触发热点重启。密码改变同时清空网页登录会话；持久化失败恢复原密码。
 */
validate_ap_password_by_backend_policy();
if (restart_pending || ota_busy) return BUSY;
if (!persist_ap_password()) return PREFERENCES_WRITE;
queue_ap_restart_after_response(); return(apRestarting=true);

/* 14_wifi:wifi_ap_autooff: 联网5分钟后关闭AP及客户端保留
 * 证据：前端说明与状态确认；全部AP恢复边沿部分重建
 * C接口：0x480f2c14 POST:/wifi/ap-auto-off, 0x48066f4c GET:/wifi/status
 * 解释：页面规定外部Wi-Fi连接成功5分钟后关AP，手机仍连接时保持；状态提供apDisableInSec与apClients，运行重新评估连接/客户端条件。
 */
if (auto_off && sta_connected && ap_clients == 0 && connected_for >= 5_minutes)
    request_ap_stop();
else keep_ap_according_to_connectivity_and_client_policy();
publish_remaining_ap_disable_seconds();

/* 14_wifi:captive_portal: 手机联网探测入口与热点首页
 * 证据：C路由与目标确认
 * C接口：0x48067692 ANY:/generate_204, 0x48067692 ANY:/gen_204, 0x48067692 ANY:/hotspot-detect.html
 * 解释：三个兼容路由共享0x48067692，返回Location=http://100.100.1.1/以引导手机打开管理页。
 */
on_captive_probe() { redirect("http://100.100.1.1/"); }

/* ================= 本地／在线OTA、启动验证与重启 ================= */

/* 15_ota:ota_identity: 固件身份、槽位、容量、状态和会话令牌
 * 证据：C状态字段确认
 * C接口：0x4806bbf8 GET:/ota/status
 * 解释：status包括version/buildVersion、sourceCommit、appElfSha256、bootSlot/targetSlot、maxSize、token、pendingVerify和state/bytes/error，令牌用于X-T2CAN-OTA-Token。
 */
publish_running_boot_target_partition_identity_and_ota_state();
ui_use_reported_maxSize_and_token();

/* 15_ota:ota_file: 本地BIN的浏览器预检查
 * 证据：前端字节检查确认
 * C接口：
 * 解释：文件名.bin、至少288字节、不超过maxSize；offset0魔数E9，offset12芯片ID18，offset32描述符ABCD5432。bootstrap合并镜像不能作为application-only OTA上传。此预检不能替代完整镜像验证。
 */
require(extension == ".bin" && 288 <= size && size <= maxSize);
require(byte[0] == 0xE9);
require(le16(bytes + 12) == 0x12);
require(le32(bytes + 32) == 0xABCD5432);

/* 15_ota:ota_prepare: 令牌授权、CAN停止、持久化flush与ready
 * 证据：C准备入口确认
 * C接口：0x480ffd82 POST:/ota/start
 * 解释：检查授权、boot pending verify、session generation、Wi-Fi转换与CAN readiness；安全停止CAN和刷写待持久化项后才ready并签发当前会话令牌。失败尝试恢复CAN并区分can_restore/persistence_flush。
 */
require_valid_ota_token_and_no_pending_boot_verification();
if (wifi_transition_or_other_ota || !can_ready) return BUSY;
start_session_generation(); state = PREPARING;
if (!quiesce_can_and_settle()) fail(CAN_QUIESCE);
if (!flush_pending_persistence()) fail_and_restore(PERSISTENCE_FLUSH);
state = READY; return_current_session_token();

/* 15_ota:ota_upload: 分块写入、结束验证、提交启动槽与重启
 * 证据：流式C长度／镜像头／会话分支确认；完整库验证细节见原C
 * C接口：0x480ff860 POST:/ota/upload
 * 解释：XHR超时180秒，上传进度最高99%。C流式回调0x48064780检查连接标识和session generation，严格解析Content-Length并限制在分区容量内，先收齐24字节镜像头检查E9及chip ID18，再按实际写入长度累计。结束要求收到长度=声明长度=Flash写入长度，end验证成功后进入committed。回调还设置120秒会话期限，这与浏览器180秒XHR超时不同。只有最终响应ok且bytes与文件长度一致才显示完成。
 */
upload_begin() {
    require_session_token_ready_and_connection_generation();
    expected = parse_decimal_Content_Length_with_overflow_and_partition_bound();
    require(expected >= 24); begin_update(expected); deadline = now + 120000_ms;
}
chunk(data) {
    require_same_connection_and_generation_and_remaining_length();
    collect_first_24_bytes(); require(header.magic == 0xE9 && header.chip_id == 18);
    written += write_update(data); require_full_chunk_write(); received += chunk_length;
}
end() {
    require(header_checked && received == expected && written == expected);
    if (Update_end_and_image_validation_succeed()) state = COMMITTED; else fail();
}
final_handler() {
    require_committed(); respond(ok=true, bytes=written, rebooting=true); schedule_reboot();
}

/* 15_ota:ota_cancel: 取消、失败恢复和结果不确定回读
 * 证据：C取消分支与前端确认
 * C接口：0x480ff590 POST:/ota/cancel, 0x4806bbf8 GET:/ota/status
 * 解释：取消需当前令牌，未活动拒绝；已提交且等待重启不能撤销。上传断线时前端明确结果未确认，重新连接检查版本和状态；取消失败不意味着固件一定未写入。
 */
if (committed_reboot_pending) return CANNOT_CANCEL_COMMITTED;
if (!active_session || token_invalid) return ERROR;
abort_write_if_active(); restore_can_and_mark_cancelled();
on_network_uncertainty() read_ota_state_and_identity_after_reconnect();

/* 15_ota:ota_online: 在线检查、升级提示与管理目标一致性
 * 证据：在线接口确认；完整下载链部分重建
 * C接口：0x480bdfce GET:/ota/online/status, 0x4806b9ae POST:/ota/online/check, 0x4807be92 POST:/ota/online/install
 * 解释：需联网，无待验证或占用；check异步进入checking；install要求已发现available，重新检查management目标、版本/commit及release合法性，然后进入准备和下载。完整服务端release格式未全部恢复。
 */
check() { require_connected_and_idle(); queue_online_release_check(); }
install() {
    require_available_checked_release();
    if (management_target_changed) return MANAGEMENT_TARGET_CHANGED;
    validate_release_identity_and_reject_already_current();
    queue_online_prepare_download_verify_commit();
}
poll_online_state_and_show_upgrade_prompt();

/* 15_ota:ota_boot_health: 启动后120秒健康验证与回滚
 * 证据：C期限与健康门控确认
 * C接口：0x480c2bda GET:/health, 0x4806bbf8 GET:/ota/status
 * 解释：0x4811aede对待验证镜像做运行健康检查，涉及CAN、任务心跳、P0结算和持久化状态；120000ms期限内不能达到健康则走失败/回滚，而非无条件标记有效。
 */
if (boot_pending_verify) {
    if (all_required_runtime_health_conditions_hold()) mark_new_app_valid();
    else if (boot_health_elapsed >= 120000_ms) request_rollback_or_safe_failure_path();
}

/* 15_ota:reboot: 重启请求、安全停止和实际重启确认
 * 证据：C入口与前端确认
 * C接口：0x480ffb40 POST:/reboot, 0x480c2bda GET:/health
 * 解释：OTA/已重启请求拒绝；停止CAN并flush持久化失败则恢复并返回错误。浏览器通过启动会话变化确认实际重启，收到HTTP ok本身不算重启已发生。
 */
if (ota_busy || reboot_busy) return BUSY;
if (!quiesce_can()) return CAN_QUIESCE;
if (!flush_persistence()) { restore_can(); return PERSISTENCE_FLUSH; }
respond_rebooting_then_schedule_reset();
ui_wait_for_disconnect_and_changed_boot_session();

/* ================= FSD行程、里程统计与手机时钟 ================= */

/* 16_records:records_view: 当前／历史行程、详情、小计与累计
 * 证据：C字段与前端确认
 * C接口：0x480b4abe GET:/fsd_records
 * 解释：序列化字段包括totalMeters、classifiedMeters、fsdMeters、longestFsdMeters、sourceState、tripEndDelayMs、fsdActive、dirty/persisted与history。页面trip/subtotal/cumulative选择是展示，不重新计算车端里程。
 */
snapshot = read_current_history_subtotal_cumulative();
return_snapshot_with_source_and_persistence_state();
ui_select_view_and_detail(snapshot, selected_range);

/* 16_records:records_accumulate: 行驶与FSD里程分类累计
 * 证据：数据结构确认；累计内部算法部分重建
 * C接口：0x480b4abe GET:/fsd_records
 * 解释：根据车辆行驶源和FSD状态分类累计，等待稳定结束条件后形成历史行程，更新最长FSD等。以下distance_delta与trip_end_confirmed为未完整恢复的内部计算，不能假定普通浏览器计时积分。
 */
on_valid_vehicle_sample() {
    delta = firmware_validated_distance_delta(); // 精确计算尚未完整恢复
    trip.total += delta; cumulative.total += delta; subtotal.total += delta;
    if (classification_known) update_classified_and_fsd_distances(delta);
}
if (trip_end_confirmed_after_configured_delay) finalize_and_persist_trip();

/* 16_records:records_clock: 手机Unix时钟与设备uptime锚点
 * 证据：请求字段、浏览器采样与C错误分支确认
 * C接口：0x4806c0d4 GET:/fsd_records/clock, 0x4806ef66 POST:/fsd_records/clock
 * 解释：提交bootId、unixMs、uptimeMs；后端拒绝stale_boot、invalid_clock/sample及busy，以启动会话防止跨重启错误锚定。有效锚点帮助显示行程日期，不能恢复没记录过的真实时间。
 */
clock = GET("/fsd_records/clock");
if (round_trip_ms > 2000) reject_sample();
if (clock.calibrated && clock.source == NETWORK) skip_phone_calibration();
sample = {clock.bootId, unixMs:DateNow() - round_trip_ms/2, clock.uptimeMs};
if (sample.bootId != current_boot) return STALE_BOOT;
validate_clock_and_uptime_sample(sample); store_unix_to_uptime_anchor(sample);
// 成功后5分钟再同步；失败后15秒可重试。

/* 16_records:records_subtotal: 重置小计
 * 证据：接口与页面说明确认
 * C接口：0x480d2a5e POST:/fsd_records/subtotal/reset
 * 解释：前端对话框与后端confirm=reset；仅重置小计，保留当前、历史和累计。持久化失败单独返回subtotal_reset_failed。
 */
require(request.confirm == "reset"); require_storage_and_not_ota();
reset_subtotal_domain();
if (!persist_subtotal()) return SUBTOTAL_RESET_FAILED;
return(persistence="stored");

/* 16_records:records_clear: 清空累计与行程历史
 * 证据：清空接口与云epoch字段确认；跨域提交顺序部分重建
 * C接口：0x480d338a POST:/fsd_records/clear
 * 解释：confirm=clear，清空当前、小计、累计和历史，同时处理云控制/数据epoch，避免旧备份无意复活删除数据；必须确认成功持久化。
 */
require(request.confirm == "clear"); require_storage_and_not_ota();
clear_current_subtotal_cumulative_history();
advance_or_record_dataset_wipe_epoch_for_sync();
commit_record_and_cloud_control_storage();
return_stored_or_clear_failed();

/* ================= 云同步、备份恢复、冲突与首次引导 ================= */

/* 17_cloud_onboarding:cloud_identity: 设备ID、云网页地址与复制
 * 证据：前端与接口确认
 * C接口：0x480d0b14 GET:/cloud/status
 * 解释：状态生成设备身份与用户网页入口；复制ID/URL为浏览器剪贴板操作，打开云网页是外部链接，均不新增固件动作。
 */
status = GET("/cloud/status"); render_device_identity_and_web_url(status);
on_copy() browser_clipboard_write(selected_text);

/* 17_cloud_onboarding:cloud_config: 服务URL、产品根Token、清除凭据和15～300秒周期
 * 证据：统一配置入口与字段确认
 * C接口：0x480b4fa4 GET:/cloud/config, 0x480b3e2c POST:/cloud/config
 * 解释：配置受开发者流程约束，读接口只返回tokenConfigured而非明文凭据。写入URL、token/clearToken、intervalSec等，generation与持久化状态分开。
 */
authorize_required_developer_request(); validate_url_token_and_interval();
if (clear_token) remove_saved_token(); else if (new_token_present) replace_token();
increment_config_generation(); persist_unified_cloud_backend_configuration();
return_configured_flags_and_persistence();

/* 17_cloud_onboarding:cloud_test: 测试v2连接
 * 证据：接口确认；全部网络调用细节未列出
 * C接口：0x4811e15c POST:/cloud/test
 * 解释：按已保存/草稿连接配置测试v2后端，并报告认证/网络结果；成功测试不等于备份已同步或恢复成功。完整网络错误映射见原伪代码。
 */
validate_test_configuration_and_access();
request_v2_connectivity_test();
return_connectivity_authentication_result();

/* 17_cloud_onboarding:cloud_sync: 自动同步开关、立即同步及后台ack
 * 证据：C排队分支与worker证据确认
 * C接口：0x480b3e6c POST:/cloud/enabled, 0x4808cf68 POST:/cloud/upload, 0x480d0b14 GET:/cloud/status
 * 解释：关闭保留本地数据和连接配置。立即上传需enabled、URL和token、无OTA，返回queued=true；worker构造状态/设置/记录差量，跟踪awaiting_ack与持久化基线。
 */
set_enabled(on) { persist_configuration_with_new_generation(); }
upload_now() {
    require(enabled && url_configured && token_configured && !ota_busy);
    mark_upload_due(); return(queued=true);
}
worker_tick() { build_payload_and_outbox(); send_v2(); consume_ack_and_update_baseline(); }

/* 17_cloud_onboarding:cloud_restore: 设置驾驶员／FSD记录恢复、范围和request_id
 * 证据：C参数/错误与worker字段确认
 * C接口：0x480b6d24 POST:/cloud/settings/restore, 0x480d0b14 GET:/cloud/status
 * 解释：confirmation=restore，scopes选settings/records，backup_revision可latest，请求带request_id。拒绝ID冲突、已有恢复或本地变更；回执queued、persistence pending、restore_id，之后按同一ID跟踪完成范围。
 */
require(confirmation == "restore" && valid_scopes && valid_request_id);
reject_if_local_changed_or_restore_busy_or_id_collision();
queue_restore(request_id, scopes, selected_backup_revision);
return(queued=true, persistence="pending", restore_id=request_id);
worker_verify_backup_hash_and_apply_selected_domains();
ui_poll_matching_restore_id_completed_scopes_and_failures();

/* 17_cloud_onboarding:cloud_conflicts: 查看冲突、保留设备／应用云端
 * 证据：C接口分支确认
 * C接口：0x480b31d8 GET:/cloud/settings/conflicts, 0x480d103e POST:/cloud/settings/conflict
 * 解释：command_id配action=keep_device/apply_cloud；冲突不存在、device_unsaved、resolution_pending、restore_busy_or_local_changed独立拒绝。保存resolution记录后后台处理并ack。
 */
conflict = lookup_pending_conflict(command_id);
require_action_one_of("keep_device", "apply_cloud");
require_no_unsaved_local_change_and_no_pending_restore();
persist_resolution_intent(command_id, action);
return(queued=true); worker_resolve_and_ack();

/* 17_cloud_onboarding:cloud_generations: 设置revision/epoch、记录epoch与本地草稿保护
 * 证据：字段与前端代数确认；完整远端协议未恢复
 * C接口：0x480d0b14 GET:/cloud/status, 0x480b2722 GET:/management/status
 * 解释：前端以epoch/revision识别同步状态及本地待同步，旧状态不覆盖新草稿。worker有settings_revision/content_sha256、records_dataset_epoch/wipe_epoch/revision等用于备份和重置一致性。完整云协议事务保证不能只凭字符串确认。
 */
when_cloud_status_arrives() {
    key = settings_epoch + device_revision;
    if (local_dirty_or_save_busy) defer_remote_config_readback();
    else GET_config_with_edit_generation_and_management_generation_checks();
}
worker_bind_payload_and_ack_to_resource_epoch_revision_and_hash();
// cloudMarkSettingsSaved 仅见 typeof 保护的可选调用；本页未定义。

/* 17_cloud_onboarding:cloud_legacy: 旧agent能力查询与废弃写入口
 * 证据：C完整短处理函数确认
 * C接口：0x4808eb2e GET:/cloud/agent/config, 0x4808cf44 POST:/cloud/agent/config
 * 解释：GET检查资源可用后调用0x4808e6ee返回capabilities/configured/origin，资源不足503 resource_wait。POST始终405 unified_backend_use_cloud_config。
 */
GET_agent_config() { authorize(); if (!resources) return 503; return_capabilities(); }
POST_agent_config() { authorize(); return 405("unified_backend_use_cloud_config"); }

/* 17_cloud_onboarding:onboarding: 首次联网／新用户／稍后／恢复完成引导
 * 证据：C持久化与前端流程确认
 * C接口：0x4808d6c6 GET:/onboarding/status, 0x4808e07e POST:/onboarding/complete
 * 解释：状态持久化到p4_data/p4_onboard；choice=new/later/restored，restored需恢复完成；重复冲突choice_already_stored。Wi-Fi步骤复用网络接口，不是另外一套连接实现。
 */
s = GET("/onboarding/status"); if (!s.completed) show_onboarding_steps();
if (network_step) reuse_wifi_connect_and_wait_status();
complete(choice) {
    require_valid_choice_and_storage();
    if (choice == RESTORED) require_selected_restore_completed();
    prevent_conflicting_existing_choice(); persist_onboarding_choice();
}

/* ================= 健康、CAN、系统指标、JSON与崩溃转储 ================= */

/* 18_diagnostics:health: 健康与心跳、CAN新鲜度和告警
 * 证据：C健康原因与前端确认
 * C接口：0x480c2bda GET:/health
 * 解释：含运行可用性、任务心跳、来源新鲜、Bus-Off/丢帧/恢复/P0结算等原因。告警级别与原因组合由0x4803b2ec一类函数判断，多个连续快照用于展示。
 */
health = evaluate_task_heartbeat_can_freshness_bus_state_and_settlement();
include_boot_session_and_observation_sequence();
ui_do_not_replace_new_snapshot_with_old_boot_or_sequence();

/* 18_diagnostics:can_diag: 三路接收发送、控制器故障和热ID
 * 证据：接口与前端确认
 * C接口：0x4807fa5c GET:/can_diag, 0x480c037a GET:/can_hot_ids
 * 解释：每通道逻辑名、GPIO、车辆针脚、TWAI/队列/错误/最近帧状态及热门ID列表；热门ID为观察统计，不是全部支持车辆报文的协议列表。
 */
for (bus in three_buses) snapshot_driver_rx_tx_errors_and_recent_observations(bus);
return_hot_id_statistics_with_capture_scope();
render_vehicle_pin_numbers_separately_from_board_gpio();

/* 18_diagnostics:runtime_diag: 各功能相位、延迟、来源与终态诊断
 * 证据：C状态字段确认
 * C接口：0x4806851c GET:/runtime_status, 0x4806e388 GET:/torque_nag/status
 * 解释：包括FSD P0、摄像头、激活、速度、换挡、DND、灯光、预热、雾灯、座椅、PARTY和ambientTx等。配置enabled、effective、pending、accepted、terminal需要分开理解。某些fast path diagnostics被编译/配置关闭会返回available=false。
 */
snapshot_each_feature_owner_phase_source_generation_and_terminal_counters();
if (!diagnostic_capability_enabled) publish_unavailable_reason();
ui_format_runtime_state_without_treating_config_enabled_as_active();

/* 18_diagnostics:system_diag: 固件身份、CPU、温度、内存、任务与持久化
 * 证据：C序列化字段确认
 * C接口：0x4808334c GET:/system_status
 * 解释：chipId/model/revision、commit/ELF、温度、每core负载、内部RAM/PSRAM/DMA、stackHighWater、任务优先级/状态、SDIO stream fault、configurationPersistence、flashSafeLease、p4_data状态。task列表按tasks参数请求。
 */
snapshot_identity_reset_cpu_temperature_heap_and_runtime_loops();
if (request.tasks) collect_bounded_task_details();
include_nvs_load_reason_migration_checksum_and_recent_writes();
include_current_boot_only_health_history();

/* 18_diagnostics:web_metrics: HTTP构建发送耗时和浏览器请求证据
 * 证据：字段与前端确认
 * C接口：0x4806f630 GET:/web_metrics
 * 解释：C记录buildUs/sendUs/totalUs、bytesWritten、writeCalls、partial/zero write、断线和超时；浏览器另记duration、队列与48条历史，二者用于分析网页卡顿。
 */
server_measure(build_start, send_start, bytes_and_write_results);
client_measure(queue_time, fetch_time, parse_time, endpoint_result);
export_both_sides_with_capture_times();

/* 18_diagnostics:diag_export: 完整诊断JSON导出
 * 证据：前端确认
 * C接口：0x480c0178 GET:/status, 0x4806851c GET:/runtime_status, 0x4808334c GET:/system_status, 0x4807fa5c GET:/can_diag, 0x480c2bda GET:/health, 0x4806f630 GET:/web_metrics
 * 解释：浏览器合并多个接口快照、Web客户端证据及可用转储信息，创建Blob下载；不是后端额外提供一个“所有诊断”路由。各快照采集时间不同，不承诺原子同时。
 */
pause_conflicting_polling();
collect_status_runtime_system_can_health_and_transport_evidence();
include_errors_for_failed_or_unavailable_sources();
download_json_blob_with_capture_metadata(); resume_polling();

/* 18_diagnostics:coredump_info: 崩溃转储信息、寄存器、堆栈与身份
 * 证据：C字段与转储来源说明确认
 * C接口：0x4806cbde GET:/coredump/info
 * 解释：返回available、address/size、sha256、imageCheckResult、panicReason、崩溃app ELF、task、exceptionPc/mcause/mtval/ra等。originBootSessionKnown可能未知，不能断言来自当前启动。
 */
locate_latest_successful_flash_coredump(); validate_image_and_size();
if (summary_available) publish_crash_identity_registers_stack_and_reason();
else publish_validation_or_unavailability_result();

/* 18_diagnostics:coredump_download: 令牌下载、大小与SHA256核对
 * 证据：C授权与前端校验确认
 * C接口：0x4806d406 GET:/coredump.bin, 0x4806cbde GET:/coredump/info, 0x4806bbf8 GET:/ota/status
 * 解释：下载需要X-T2CAN-OTA-Token；HTTP头包含firmware、appELF、core SHA及diagnostic boot session，前端核对信息/长度/摘要/身份，最大65536字节。失败保留诊断错误，避免把任意.bin认作匹配的转储。
 */
require_ota_token(); stream_valid_coredump_with_identity_headers();
ui_require_size_within_65536_and_equal_info_size();
ui_verify_sha256_and_consistent_identity_headers();
if (all_checks_pass) save_coredump_blob(); else export_verification_error();

