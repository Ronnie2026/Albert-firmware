#!/usr/bin/env python3
"""Author-reviewed semantic catalog; no extracted JavaScript is executed."""
import json
from pathlib import Path

OUT = Path(__file__).resolve().parents[1]
modules = []

def module(key, title, backend, note):
    m = dict(id=key, title=title, backend=backend.split(), note=note, features=[])
    modules.append(m)
    return m

def feature(m, key, title, controls, js, routes, logic, pseudo, certainty='接口确认；运行语义重建'):
    m['features'].append(dict(id=key, title=title, controls=controls.split(),
                             js=js.split(), routes=routes.split(), logic=logic,
                             pseudocode=pseudo.strip(), certainty=certainty))

m=module('01_ui_auth','界面、CSS 与访问认证','4808a6b8 4808acac 4808d958',
 'CSS 负责布局与状态呈现，浏览器处理主题、导航、折叠及草稿；这些不需要对应的 C 业务函数。网页会话与开发者令牌是两个独立机制。')
feature(m,'ui_mode','标准／车机／自动界面','uiModeBtn','storedUiMode detectCarUi applyUiMode cycleUiMode','',
 '自动模式按浏览器环境和窗口条件判断；按钮在 auto、car、standard 三种模式间循环，写入 localStorage，改变 DOM 属性供 CSS 选择。',
 'mode = local_storage_get("t2can-ui-mode-v1", "auto");\nif (mode == AUTO) mode = detect_car_browser_and_viewport();\nset_html_dataset("ui", mode);\n// 浏览器逻辑，无固件设置写入。','前端确认')
feature(m,'theme','日间／夜间主题','themeBtn','refreshFirmwareTheme','GET:/system_status',
 '主题偏好与 chipId、appElfSha256 组成的固件身份关联；C 只提供身份，CSS 切换颜色变量、背景和控件样式。',
 'identity = GET("/system_status").chipId + appElfSha256;\ntheme = local_storage_get(theme_key(identity));\nset_html_dataset("theme", theme);','前端与身份接口确认')
feature(m,'navigation','功能页、详情页、帮助、折叠和响应式布局','','initAppPages initCommercialHierarchy initCommercialUi','',
 '驾驶／换挡／车身／诊断／系统以及商业界面的功能／记录／设置导航均为 DOM 显隐和控件重新组织；CSS 提供 fixed 导航、网格、dialog、hidden、disabled、partial 等显示状态。',
 'on_navigation(tab) { set_active_tab(tab); show_related_cards(tab); }\non_help_click() { toggle_help_panel(); }\non_detail_toggle() { toggle_collapsed_state(); }\n// hidden 或 disabled 是界面状态，不能替代后端权限与运行门控。','前端确认')
feature(m,'legal','首次说明与已阅读状态','','closeLegalNotice','',
 '用户确认后关闭说明并保存浏览器偏好；不调用车辆控制接口。',
 'on_acknowledge() { local_storage_set(legal_key, true); close_notice(); }','前端确认')
feature(m,'login','网页登录与错误限流','password','checkDashboardSession','POST:/auth/login GET:/auth/status GET:/',
 'C 使用与AP热点相同的密码存储对象比较，连续 5 次错误后限制 30 秒；成功时使用 16 字节随机材料生成 32 位十六进制会话标识，最多管理 4 个会话槽。Cookie 为 P4SID，Max-Age=604800，HttpOnly、SameSite=Strict。服务端还检查7天创建期限与48小时未活动期限。AP密码实际改变会失效旧会话。',
 'if (failures >= 5 && now - lock_started < 30000) return LOCKED;\nif (!constant_length_password_compare(input, stored, 63)) {\n    failures++; if (failures == 5) lock_started = now; return WRONG;\n}\nexpire_old_sessions(); slot = choose_free_or_oldest_session(4);\nsid = hex(random_bytes(16)); store_session(slot, sid, now);\nset_cookie("P4SID", sid, 604800, HTTP_ONLY | SAME_SITE_STRICT);\nredirect_303("/");','C 逻辑确认')
feature(m,'logout','退出与会话失效','','checkDashboardSession','POST:/auth/logout GET:/auth/status',
 '退出清理服务端会话和 Cookie；页面检查会话状态，失效时返回登录流程。',
 'invalidate_session_from_cookie();\nset_cookie("P4SID", "", 0);\nredirect_to_root();','C 接口确认')
feature(m,'developer','开发者模式解锁、闲置锁定与令牌撤销','commercialPassword commercialLock','commercialVerifyPassword commercialUnlock commercialLock commercialRecordActivity','POST:/cloud/developer',
 '密码提交后端验证，成功返回 developerToken；前端要求 32 位十六进制。高级界面仅在本次页面解锁，闲置 15 分钟锁定；需要授权的云请求使用 X-P4-Developer。锁定会请求撤销令牌。',
 'r = POST("/cloud/developer", {password});\nif (!r.ok || !is_hex32(r.developerToken)) keep_locked();\nelse { developer_token = r.developerToken; show_developer_ui(); }\nif (idle_ms >= 15 * 60 * 1000) {\n    POST("/cloud/developer", {lock:1}, X_P4_DEVELOPER);\n    clear_token_and_lock_ui();\n}','前端与 C 令牌接口确认')
feature(m,'management_lock','云管理状态与页面操作锁定','','managementLoadStatus','GET:/management/status',
 '管理状态包含 revision、锁定／待处理原因和目标版本。前端按状态禁用编辑；后台状态可能由云命令或升级改变，不能只依赖 CSS 禁用按钮。',
 's = GET("/management/status");\nif (s.revision >= displayed_revision) apply_management_state(s);\nset_edit_controls_disabled(s.locked || s.pending);','接口确认；管理内部状态机部分重建')

m=module('02_config_can','共用配置、自动保存与 CAN 基础','48101f34 480bb868 480e8070 4810d080 4ff2520a 4803cdd8 4805cb5e 480dc4f2 480312a6',
 '原程序是 Arduino/ESP-IDF 上的 C++ 固件；本文用 C 风格表达。HTTP 解析与控制命令提交、实时任务、状态快照、NVS 持久化分层。存在间接虚函数调用，calls.tsv 的直接调用表并不完整。')
feature(m,'config_read','加载配置、默认值和归一化回读','','loadConfig applyConfigDefaults applyNormalizedGearConfig','GET:/config',
 'GET 通过 0x480bb868 序列化配置。前端使用默认值补足缺字段，并保护加载前已编辑字段；默认值是页面兜底，不等于空 NVS 时的全部固件默认值。',
 'config = GET("/config");\nfor (field in supported_fields) {\n    if (!locally_edited(field)) render(field, config_or_ui_default(field));\n}\nrefresh_protocol_and_parent_child_visibility();','接口与前端确认')
feature(m,'autosave','防抖保存、脏字段、并发排队和结果回读','','body scheduleAutoSave bindAutoSave saveConfig','POST:/config POST:/save GET:/config',
 '前端跟踪字段编辑代数，保存过程中出现新编辑则排队；带 fsdConfigRevision。pending／202 不视为已写 Flash。只有旧接口未返回 stored 时才补 POST /save。随后 GET 校对归一化结果，避免旧响应覆盖新草稿。',
 'on_edit(field) { dirty[field] = ++edit_generation; debounce(save); }\nsave() {\n    if (other_save_in_flight) { queued = true; return; }\n    snapshot = collect_dirty_fields_and_revision();\n    result = POST("/config", snapshot);\n    if (result.pending) return show_unconfirmed();\n    if (result.persistence_missing) require_stored(POST("/save"));\n    actual = GET("/config");\n    apply_only_fields_not_edited_after(snapshot, actual);\n    if (queued) schedule_next_save();\n}','前端与接口分支确认')
feature(m,'config_transaction','C 配置解析、冲突检查、命令提交和持久化','','saveConfig','POST:/config POST:/save',
 '0x48101f34 从旧快照构造候选配置，解析已提供字段，检查主从依赖、数值范围、FSD revision、OTA 和运行停止条件。0x480e8070 按命令类型在 CAN 线程应用配置／动作。各配置域处理顺序不同，不能宣称所有字段跨域原子提交。',
 'candidate = copy_current_config();\nparse_present_fields(request, &candidate);\nvalidate_ranges_dependencies_revision(candidate);\nif (ota_busy || required_quiesce_not_complete) return BUSY;\nsubmit_config_command_to_runtime(candidate);\nif (!runtime_confirmed) return PENDING;\nflush_required_configuration_domains();\nreturn stored_or_flash_failure_with_actual_state();','C 控制入口确认；跨域顺序按原伪代码检查')
feature(m,'can_gates','通信总开关与三路 TX 开关','canCommsEnabled can0TxEnabled can1TxEnabled can2TxEnabled','saveConfig','POST:/config GET:/config',
 '总通信和通道 TX 标志控制运行驱动及发送许可。关闭涉及停止在途动作和 CAN 运行恢复，可能返回 canb_disable_pending 等，不能等价为单个布尔值赋值后立即完成。',
 'effective_tx[bus] = comms_enabled && tx_enabled[bus] && runtime_ready;\nif (disabling) begin_controlled_stop_and_settle_pending_transmissions();\nif (!stop_complete) return PENDING;\napply_can_driver_gate(); persist_configuration();')
feature(m,'pin_layout','A／B／自动线序探测、保存和恢复','canPinLayoutSelect canPinLayoutSave','loadCanPinLayout saveCanPinLayout','GET:/can_pin_layout POST:/can_pin_layout',
 '0=A，1=B，2=Auto；A 为 2/3、4/5、26/27，B 为 3/2、50/49、31/30，均为 TX/RX GPIO、500 kbit/s。Auto 先 A，三路无有效帧才探测 B；探测约 1.5 秒且清理临时节点。保存需停止 CAN、写 NVS、恢复；已保存但恢复失败单独报告。',
 'if (mode == AUTO) {\n    pins = probe_listen_only(A, 1500000_us) ? A : probe_or_fallback(B);\n    cleanup_probe_nodes_and_gpio();\n}\nPOST_save(mode) {\n    require_exact_enum(mode, 0, 1, 2); block_during_ota_or_boot_validation();\n    quiesce_can(); commit_pin_mode_to_nvs(mode);\n    if (!restore_can()) return SAVED_BUT_RESTORE_FAILED;\n}','C 与常量表确认')
feature(m,'runtime_dispatch','实时处理、模板修改、提交与终态确认','','','GET:/runtime_status GET:/can_diag',
 'can_rt 在 core1、优先级20运行；fsd_p0 在 core1、优先级24处理高优先路径。服务使用帧数和时间预算，模板、generation 和 token 匹配；提交成功与 terminal success 分开。0x4805cb5e 为多处业务发送的共用入口，0x480dc4f2 分派终态结果。',
 'can_rt_loop() {\n    drain_rx_and_terminal_queues_with_time_and_frame_budget();\n    update_vehicle_snapshot(); apply_queued_control_commands();\n    tick_feature_state_machines(); submit_eligible_modified_templates();\n    publish_status_snapshot(); yield_when_budget_exhausted();\n}\non_tx_terminal(token, result) {\n    if (matches_pending_generation(token)) settle_owner_state(result);\n    else count_late_or_invalidated_receipt();\n}','任务与公共机制确认；具体业务通过后文重建')
feature(m,'read_coordinator','浏览器轮询调度、超时、暂停和性能记录','poll','createDashboardReadCoordinator fetchStatusJson pollFast pollStatus setPolling','GET:/status_fast GET:/status GET:/health GET:/web_metrics',
 '前端对多个读请求协调排队、去重、超时和暂停。按当前页面／展开状态选择诊断范围；OTA 期间暂停读取；本地保存最近48条 Web 客户端指标。C 分别构造快照和 HTTP 传输指标。',
 'poll_if_scope_visible_and_not_paused(endpoint);\nif (same_read_in_flight) coalesce_request();\nfetch_with_abort_timeout_and_record_duration();\non_ota_begin() { pause_reads(); await_active_reads_to_settle(); }','前端确认；快照接口确认')

m=module('03_drivers','驾驶员与个性化设置','480fa85c 48052ffe 4805228e 480ee8e2 480f6af8',
 '驾驶员位置识别主要采用 track、backrest、lift、tilt 四个位置字段；这与座椅手动六组动作不同。车辆未在 P 挡、位置数据过期、位置冲突、存储不足均有独立错误。识别距离的精确权重和阈值未完整还原。')
feature(m,'driver_list','列表、当前驾驶员、参数来源与状态','','loadDriverProfiles driverFeatureGroups','GET:/driver_profiles',
 '返回 auto/manual、activeDriverId、lastDriverId、座椅快照和各驾驶员 feature 状态；未匹配时使用默认参数，前端区别开、关、未知。',
 's = GET("/driver_profiles");\nrender_current_and_last_driver(s);\nrender_parameter_source(s.activeDriverId > 0 ? DRIVER : DEFAULT);\nrender_features_as_on_off_unknown(s.drivers);','接口与前端确认')
feature(m,'driver_add','添加驾驶员并绑定当前位置','driverAddName driverAddSubmit','postDriverProfile openDriverAddModal submitDriverAdd','POST:/driver_profiles',
 'action=add，校验名称、P 挡及新鲜驾驶位位置；检查位置是否与已有驾驶员冲突，分配ID并持久化；冲突阻止覆盖。',
 'require_park_and_fresh_seat(); validate_name(name);\nif (position_conflicts_with_existing_driver()) return POSITION_CONFLICT;\nid = allocate_driver_id_or_full();\nstore_driver(id, name, current_four_axis_position); flush_driver_storage();')
feature(m,'driver_rebind','重新绑定驾驶位','driverRebindConfirm driverRebindSubmit','postDriverProfile openDriverRebindModal submitDriverRebind','POST:/driver_profiles',
 '页面明确确认覆盖，后端 action=rebind 验证 id、驻车及座椅数据，再检测位置冲突并写入新绑定。确认复选框是前端流程的一部分。',
 'ui_require_rebind_confirmation();\nrequire_existing_driver(id); require_park_and_fresh_seat();\ncheck_position_conflict_excluding(id);\nreplace_binding_position(id, current_position); persist();')
feature(m,'driver_rename','重命名驾驶员','driverRenameName driverRenameSubmit','postDriverProfile openDriverRenameModal submitDriverRename','POST:/driver_profiles',
 '后端检查驾驶员存在和名称合法后写存储；页面用回读列表更新显示。',
 'require_existing_driver(id); validate_name(name);\ndriver[id].name = name; persist(); reload_driver_list();')
feature(m,'driver_delete','删除与关联设置清理','','postDriverProfile','POST:/driver_profiles',
 '删除驾驶员同时处理对应氛围灯、速度模板数据及当前选择。后端可报告 ambient_settings_erase_pending、speed_target_settings_erase，清理并非单个结构体删除。',
 'require_existing_driver(id);\nremove_driver_and_adjust_active_selection(id);\nerase_driver_ambient_and_speed_target_domains(id);\nif (erase_pending_or_failed) report_domain_and_persistence_state();\npersist_driver_list();')
feature(m,'driver_selection','自动识别／手动选择及切换','driverModeToggle','postDriverProfile driverParameterMode driverAutoRecognize','POST:/driver_profiles',
 'action=auto/manual/select。切换前前端要求氛围灯草稿保存成功；运行端根据绑定位置或手动 id 应用驾驶员设置。具体自动匹配算法保留抽象谓词。',
 'if (!save_pending_ambient_draft()) abort_ui_driver_change();\nmode = AUTO_or_MANUAL;\nselected = mode == AUTO ? match_fresh_seat_position() : requested_driver;\napply_driver_profile_or_default(selected); publish_active_driver();')
feature(m,'driver_features','每位驾驶员功能独立开关与并发检查','','driverFeatureRequest setDriverFeature','POST:/config POST:/fsd_auto_start/master POST:/config/ble_obstacle POST:/rear_fog/config',
 '请求带 driverId、driverFeature、expected，按功能选择对应接口；expected 用于检查旧状态。FSD 主开关、障碍物和雾灯有专用接口。驾驶员未变化时才应用回执，失败保留原显示。',
 'request = {driverId, driverFeature:key, expected:old};\nroute = choose_config_domain(key); request[domain_field(key)] = !old;\nvalidate_driver_and_expected_value_on_backend();\napply_and_persist_driver_feature();\nreload_driver_snapshot_without_overwriting_new_selection();','前端路由选择与 C 入口确认')

m=module('04_fsd_activation','FSD、自动激活与预警激活','48101f34 480f2fc2 481062c4 480486a2 48048fea 480c3830 4804bb9a 480d8f08 480da2a8 480c76a2 480c6318 480cb95c 480ccf42 480db9d4 480df834 4805abf4 4809ec88 4ff230e8 4ff232be',
 '0x481062c4 调用 0x480486a2、0x48048fea 等策略／状态辅助函数。泊车293请求与驾驶位30A模拟的字段、门控和发送前复检已核对；其他协议激活序列仍有缺口。信号、来源帧、计数、提交与终态共同决定执行，实际离车泊车效果未实测。下列语义函数名由分析者命名。')
feature(m,'fsd_protocol','V12／V13／V14 协议选择与特性适配','stalkControlVersion','updateFsdProtocolUi','POST:/config GET:/config',
 '协议值保留12、14，其余归一化为13。切换改变物理输入说明、V14驾驶模式、灯光和障碍物来源；运行动作未结束可能返回 control_version_busy。',
 'protocol = requested == 12 || requested == 14 ? requested : 13;\nif (protocol_changes && control_action_in_flight()) return CONTROL_VERSION_BUSY;\napply_protocol_and_reset_protocol_dependent_state();\nrefresh_ui_capability_panels();','C 归一化与前端适配确认')
feature(m,'fsd_master','FSD 总开关与依赖门控','fsdEnabled','saveConfig','POST:/config GET:/config',
 'FSD 开关影响自动激活、增强功能等；总开关未开启而请求启用从属自动激活会被阻止。关闭需收敛在途状态，不能凭页面选中判断有效状态。',
 'if (!candidate.fsdEnabled && request_enables_auto_start) return FSD_MASTER_REQUIRED;\neffective_fsd = configured_fsd && runtime_can_ready && source_valid;\nif (!effective_fsd) cancel_or_settle_fsd_owned_requests();')
feature(m,'fsd_steady','稳盘模式、物理短按启动与取消','fsdSteadyModeEnabled','saveConfig updateFsdProtocolUi','POST:/config',
 '页面说明右侧物理短按触发稳盘启动，再次短按取消。配置独立保存；运行策略包含稳盘相关激活逻辑，但未将该模式等同于机械固定方向盘。',
 'on_right_short_press() {\n    if (steady_latched) request_steady_cancel();\n    else if (steady_enabled && activation_gates_pass()) request_steady_start();\n}\nadvance_latch_only_after_matching_vehicle_or_tx_feedback();')
feature(m,'fsd_p_start','P 挡一键出发与隐藏固定开启项','fsdParkStartEnabled','updateFsdProtocolUi applyNormalizedFsdParkStartConfig','POST:/config',
 '静态 HTML 将此行隐藏。updateFsdProtocolUi 强制 checkbox=true；POST /config 读取该字段后候选变量仍置1。应记为协议流程中的固定开启兼容字段，而非可自由关闭的独立开关。P 挡物理动作的完整报文序列仍有缺口。fsdParkLaunchCompleteCount在等待阶段观测到新一代、≤500ms的399状态6后增加，表示进入FSD，不是293泊车完成。',
 'ui_hide(park_start_row); ui_checkbox(park_start, true);\ncandidate.fsdParkStartEnabled = true; // 本版归一化行为\non_park_short_press() {\n    if (park_source_fresh && activation_gates_pass()) request_park_departure();\n}','固定开启行为确认；出发序列部分重建')
feature(m,'enhanced_ap','隐藏增强 AP／智能召唤兼容设置','enhancedAutopilotEnabled','saveConfig driverFeatureGroups','POST:/config',
 '静态主卡开关隐藏，但驾驶员功能列表与配置字段仍包含 enhancedAutopilotEnabled。cfg+2B经4809EC88打包策略、4FF230E8解包，4FF232BE在CH/VEH3FD DLC8 MUX1清d2 bit3，V14另设d5 bit7；受对应线路运行许可限制。完整召唤会话、路线与完成反馈仍未确认。',
 'candidate.enhancedAutopilotEnabled = parse_bool_if_present();\npersist_and_apply_candidate();\nif (lane_allowed && enhanced_ap_for_lane && src_is_3FD_DLC8_MUX1) {\n    out = src; out.d[2] &= 0xF7;\n    if (protocol == 14) out.d[5] |= 0x80;\n    submit_through_shared_source_path(out);\n}\n// 完整召唤状态机与厂家字段语义仍未确认。','配置到3FD字段覆盖链已确认；完整召唤未确认')
feature(m,'space_parking','退出 FSD 后自动请求泊车（v13 参数）','v13SpaceToSpaceEnabled v13ParkingDelayMs v13ParkingDurationMs','updateV13SpaceToSpaceUi','POST:/config',
 'CH399低四位3～6→1/2、观察间隔≤1500ms时开启窗口；默认延迟2秒、持续30秒。FSD/泊车/通信/CH TX须开启，399仍为1/2且≤1500ms，CH257 raw500须连续2帧、间隔及年龄≤100ms。随CH293 DLC8复制，d3高四位=C、d6高四位计数+1、d7为seed95加前7字节；来源+20ms截止，stream19发送前复检。移动暂停请求而倒计时继续，到期停止覆盖。所查路径无显式协议13限制；399边沿无严格局部校验门控，293来源校验未在构造器检查。未证明原车离车后完成泊车。',
 '''// on CH399: state = d0 & 0x0F; 不额外假定来源校验通过。
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
// 暂停发送不延长窗口；恢复为停止覆盖，没有专用取消payload。''',
 '原网页、反编译与关键机器码确认；车辆效果未验证')
feature(m,'auto_start_master','自动激活总开关与 revision 事务','fsdAutoStartEnabled','setFsdAutoStartMaster bindFsdAutoStartControls','POST:/fsd_auto_start/master GET:/config',
 '专用接口处理总开关与子项归一化，使用 fsdConfigRevision，旧 revision 被拒绝并要求回读。子项默认重置的行为应按服务端回执而非页面默认猜测。',
 'require_fsd_master_if_enabling();\nif (request.revision != current_revision) return FSD_CONFIG_STALE;\nnormalize_master_and_children(candidate); submit_runtime_config(candidate);\nreturn_current_revision_and_persistence();','专用接口与前端处理确认')
feature(m,'availability_frames','AP 可用确认帧数','fsdAutoStartAvailableConfirmFrames','bindFsdAutoStartControls','POST:/config',
 '页面限定1～10帧，运行辅助函数也归一化为该范围；累积可用来源观察后再推进激活阶段，失效观察中断确认。',
 'required = clamp(config.available_frames, 1, 10);\non_fresh_ap_observation() {\n    if (available) consecutive_available++; else consecutive_available = 0;\n    activation_ready = consecutive_available >= required;\n}')
feature(m,'auto_long_press','右側长按持续激活','fsdAutoStartLongPressEnabled','bindFsdAutoStartControls updateFsdAutoStartInputLabels','POST:/config',
 '物理长按形成持续激活锁存，runtime_status 提供 continuousLatched、phase、attempts、successCount；退出条件和确认失败会收敛锁存。物理输入名称随协议改变。',
 'if (long_press_edge && master && child_enabled) continuous_latched = true;\nif (continuous_latched && activation_ready && gates_pass()) queue_activation_attempt();\nif (stop_condition_or_fault) stop_and_clear_latch();')
feature(m,'auto_pd','P→D 自动激活','fsdAutoStartFirstParkToDriveEnabled','bindFsdAutoStartControls','POST:/config',
 '监测挡位边沿，根据开关生成激活意图；必须同时满足可用帧确认与激活门控。First 字段对应首次流程，精确重置条件尚未完整确认。',
 'if (fresh_gear_edge(P, D) && first_pd_eligible() && enabled) arm_activation();\nif (armed && activation_ready && gates_pass()) submit_activation();\n// first_pd_eligible 的完整复位条件待核对。')
feature(m,'auto_rd','R→D 后15秒速度窗口','fsdAutoStartReverseToDriveSpeedKph','bindFsdAutoStartControls','POST:/config',
 '前端说明 R→D 后15秒内达到所选速度，页面速度1～120 km/h；运行按挡位转换和速度快照决定请求。不得把页面阈值当作自动换挡允许速度。',
 'on_fresh_gear_edge(R, D) { rd_deadline = now + 15000_ms; rd_armed = true; }\nif (rd_armed && now <= rd_deadline && speed_kph >= threshold && gates_pass())\n    request_activation_and_consume_rd_trigger();\nif (now > rd_deadline) rd_armed = false;')
feature(m,'auto_ground','R 挡右侧物理动作一键激活','fsdAutoStartGroundEnabled','updateFsdAutoStartInputLabels','POST:/config',
 '按协议对应的右侧物理输入、R挡和 Ground 子开关形成意图，由同一激活状态机执行。精确驾驶请求序列不能从前端说明直接推出。',
 'if (right_input_trigger && fresh_gear == R && ground_enabled)\n    submit_ground_activation_intent_if_permitted();')
feature(m,'occupancy_spoof','驾驶位有人与安全带信号模拟','fsdDriverOccupiedSpoofEnabled','bindFsdAutoStartControls','POST:/config GET:/runtime_status',
 '独立开关随PARTY30A DLC8且seed0D校验有效的来源计数，要求通信、PARTY TX与传输许可；无局部FSD总开关、泊车窗口、零车速或关门条件。d0=(原值&E0)|09同时模拟有人/已系带，d6高四位计数+1，d7重算；来源+5ms截止。原值已满足、计数重复或pending时跳过。只读VEH3A1 MUX2确认，连续两帧且间隔/年龄≤300ms。内部TX标志由终态更新；公开Active还要求开关启用、成功TX与两帧3A1目标反馈均≤300ms。反馈状态匹配不证明因果或泊车完成。自动换挡读取构造前的30A输入缓存，上游自回波剔除仍未完整确认。',
 '''remember_received_PARTY30A_belt_for_gear_gates(src);
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
// 不作为293泊车完成反馈；接收自回波剔除尚未全部追清。''',
 '原网页、反编译与关键机器码确认；车辆效果未验证')
feature(m,'warning_activation','车道／碰撞预警激活与级别掩码','fsdWarningActivationEnabled fsdWarningLaneStandard fsdWarningLaneSevere fsdWarningLaneModes','commercialToggle','POST:/config',
 '车道标准／严重通过位掩码1／2组合；在允许预警状态出现时生成激活意图。side collision 与疲倦另有独立开关。确切告警位和触发去重保留为抽象识别函数。',
 'modes = normalized_warning_lane_mask();\nif (warning_activation_enabled && warning_matches_selected_modes(vehicle, modes))\n    request_activation_if_ready();')
feature(m,'side_fatigue_activation','侧撞与疲倦预警激活','fsdSideCollisionActivationEnabled fsdDdawEnabled','commercialToggle','POST:/config',
 '两类告警独立进入激活策略，仍受 FSD 总开关、来源新鲜度和可用状态限制；并非浏览器轮询收到提示即发 CAN。',
 'if ((side_collision_enabled && eligible_side_warning()) ||\n    (fatigue_enabled && eligible_fatigue_warning()))\n    request_activation_through_shared_state_machine();')
feature(m,'safety_aggregate','“安全驾驶”组合开关','','commercialSafetyState commercialToggle','POST:/config POST:/ambient_config',
 '前端合并预警激活、侧撞、疲倦、标准＋严重车道模式，以及支持时的盲区氛围灯。它没有同名独立 C 主开关；部分开启显示 partial。',
 'on_safety_master(on) {\n    if (on) fsdWarningLaneModes = 3;\n    set(fsdWarningActivationEnabled, on); set(fsdSideCollisionActivationEnabled, on);\n    set(fsdDdawEnabled, on);\n    if (blind_spot_supported) save_ambient_blind_spot(on);\n}','前端组合逻辑确认')

m=module('05_speed','速度补偿与驾驶员目标模板','48101f34 480f9322 480f99bc 480f66c0 480381cc 4805883a 4809ec88 4810ca34',
 '设置链和 30 项模板格式已确认。runtime_status 区分限速、原车偏移、智能设速、目标来源、finalRaw 与 confirmedRaw。下面算式是语义表达；各协议的精确分段边界、百分比编码、舍入和计数器布局未全部确认，不能直接用于发车控帧。')
feature(m,'speed_enable','自动速度偏移与稳定模式','autoSpeedOffsetEnabled stableSpeedOffsetEnabled','bindStableSpeedControls updateV13SpeedOffsetUi','POST:/config',
 '启用稳定模式会在前端同时启用自动偏移；运行采用配置、协议、原车状态及驾驶员模板生成目标。稳定模式参数旧面板被隐藏，不能把隐藏字段视为无运行代码。',
 'if (!effective_auto_offset || !fresh_speed_sources) return NO_OVERRIDE;\ntarget = calculate_target_for_protocol_and_driver();\nif (stable_enabled) target = apply_stability_policy(target);\nsubmit_speed_override_from_fresh_source();')
feature(m,'hw3_strategy','HW3舒适／标准／迅捷及分段目标','hw3ManualStrategyEnabled hw3ManualStrategy','selectHw3Strategy updateHw3Strategy','POST:/config',
 '手动或随车策略；UI将舒适与车距3/4、标准与2、迅捷与1关联。每策略包含低于60及60、70…120的8个目标值。多数旧参数行隐藏但仍参与配置读写。',
 'strategy = manual_enabled ? manual_strategy : decode_vehicle_strategy();\nband = select_hw3_speed_band(limit_kph); // 精确所有边界待核对\ntarget_kph = hw3_targets[strategy][band];')
feature(m,'v14_profile','V14五种驾驶模式','v14ManualDrivingProfileEnabled v14ManualDrivingProfile','updateV14DrivingProfileUi','POST:/config',
 'Chill、Normal、Hurry、Max、Sloth枚举0～4，手动／车机自动来源独立记录。不能将 V14 模式枚举等同于 HW3 三种车距策略。',
 'effective_profile = manual_enabled ? clamp(profile, 0, 4) : observed_v14_profile;\nchoose_v14_speed_policy(effective_profile);\npublish_automatic_effective_profile_and_source();')
feature(m,'speed_low','低速偏移与 raw 百分比换算','v13LowSpeedOffsetPct speedOffsetMaxPctRaw v14SpeedOffsetMaxPctRaw','getVal setVal','POST:/config',
 'V13低速页面说明限速低于50；v13LowSpeedOffsetPct为0～60。其他最大偏移raw字段在浏览器显示 raw/4%，提交百分比乘4，页面0～60%对应raw0～240。这两种字段单位不同。',
 'v13_low_pct = clamp(ui_v13_low_pct, 0, 60);\nmax_pct_raw = clamp(round(ui_max_pct * 4), 0, 240);\nif (is_low_speed_protocol_case()) calculate_low_target_with_protocol_limits();','单位与配置校验确认；目标算法部分重建')
feature(m,'speed_high','高速偏移、原车智能设速与目标来源','v13HighSpeedOffsetPct','updateV13SpeedOffsetUi','POST:/config GET:/runtime_status',
 '页面注明 V13高速度偏移用于原车智能设速关闭场景；运行状态提供 originalSmartSetSpeedKnown/Enabled、vehicleOffsetUsable、highTargetSource。目标来源可能为原车设速或自定义模板，需按状态分支选择。',
 'if (!original_smart_set_speed_known) defer_override_until_source_known();\nif (original_smart_set_speed_enabled && vehicle_target_usable) use_vehicle_target_policy();\nelse use_configured_high_speed_target_policy();\n// 精确优先级及协议换算留在原反编译中，未伪造固定公式。')
feature(m,'speed_slew','降速阶梯与确认值恢复','speedDownStepKph','getVal saveConfig','POST:/config GET:/runtime_status',
 '当前界面为每500ms下降1～10 km/h；后台还保留 speedOffsetDownSlewPctPerSec、stableSpeedDownIntervalMs。运行追踪 downSlewActive、recoveryPhase、slewStepCount、confirmedRaw，说明以确认状态处理恢复。不要混淆两套单位。',
 'if (new_target < last_confirmed_target && down_step_due())\n    candidate_target = max(new_target, last_confirmed_target - step_kph);\nelse candidate_target = new_target;\nsubmit_candidate();\non_matching_terminal_or_vehicle_confirmation() update_confirmed_target();\non_failure() enter_recovery_without_assuming_candidate_was_applied();')
feature(m,'speed_templates','车机同步／自定义30格模板','customSpeedEnabled speedTargetSourceCustom speedTargetSourceVehicle','speedTargetChooseSource speedTargetPostBody speedTargetExpandV13Template','GET:/speed_target/config POST:/speed_target/save',
 '后端带driverId、revision、customSpeedEnabled与target0…target29，索引限速5、10…150，目标整数1～255。V13界面显示8段并展开到50～139中的对应5km/h格；以驾驶员隔离保存。',
 'require_current_driver_and_revision(driver_id, revision);\nfor (i = 0; i < 30; ++i) require_integer_in_range(target[i], 1, 255);\napply_speed_target_runtime_transaction(candidate);\ncommit_driver_speed_target_blob();\nreturn_revision_targets_and_effective_custom_enabled();','格式、接口与 V13 展开确认')
feature(m,'speed_quick','百分比批量设置模板','speedTemplateQuickPct speedTemplateQuickApply','speedTemplateQuickValues speedTemplateQuickApply','POST:/speed_target/save',
 '批量输入0～100%，浏览器以round(limit×(1+pct/100))计算8个起始值，再展开30格并经原接口保存；这只是编辑快捷方式。',
 'require(0 <= quick_pct && quick_pct <= 100);\nfor (limit in [50,60,70,80,90,100,110,120])\n    ui_start_target[limit] = round(limit * (1 + quick_pct / 100.0));\nexpand_v13_bands_into_30_targets(); save_template();','前端计算确认')
feature(m,'speed_conflict','驾驶员变化、版本冲突与保存重试','speedTargetRetrySave','speedTargetSave speedTargetEnsureDriver','POST:/speed_target/save GET:/speed_target/config',
 'stale_driver会重新加载；stale_revision保留草稿要求检查；flash_write与runtime_rejected分别提示。回执必须匹配驾驶员、请求、revision和提交的全部目标。',
 'if (driver_changed) reload_for_new_driver();\nelse if (revision_conflict) preserve_draft_and_require_review();\nelse if (runtime_rejected || flash_write_failed) preserve_draft_for_retry();\nelse verify_response_matches_submitted_targets();','接口与前端确认')

m=module('06_dnd_torque','免打扰、摄像头、滚轮与扭矩状态机','48101f34 4804e2a8 4804c54e 4804cfd2 4804ea2a 4804c858 4804cb48 4804cd2c',
 '扭矩模块的输入处理0x4804ea2a与状态机0x4804cfd2已定位，可直接核对0x370、0x39B、门控、相位、方向和随机区间。攝像头“关闭”是页面名称；静态证据支持报文状态修改，不能声称物理断电。')
feature(m,'dnd_master','免打扰主开关及必要子项','dndEnabled','applyDndMasterRequiredChildren applyNormalizedDndConfig','POST:/config',
 '启用主开关时前端同步要求摄像头屏蔽和ISA抑制；扭矩和滚轮有独立从项及运行门控。',
 'if (ui_enables_dnd) { cabin_camera_disable = 1; isa_chime_suppress = 1; }\nparse_and_normalize_dnd_configuration();\neffective_children = master && each_child && feature_source_gates();')
feature(m,'dnd_camera','摄像头状态屏蔽与V14回退延时','cabinCameraDisableEnabled v14CameraDisableDelaySec','getVal applyNormalizedDndConfig','POST:/config GET:/runtime_status',
 'V14延时页面限制3～10秒，按协议和运行状态决定覆盖／回退。camera运行快照独立于主开关，具体覆盖位与回退触发未完整恢复。',
 'if (dnd_enabled && camera_disable_enabled && camera_source_eligible())\n    apply_protocol_camera_status_override();\nif (v14_fallback_condition()) restore_source_after(configured_3_to_10_seconds);\n// 不推断真实摄像头供电。')
feature(m,'dnd_isa','ISA提示音条件抑制','isaChimeSuppressEnabled','applyNormalizedDndConfig','POST:/config GET:/runtime_status',
 'runtime_status记录ISA条件、HOS、来源位及apply／submit计数，说明满足条件时改变来源帧对应字段；不等于全局静音。',
 'if (master && isa_enabled && isa_chime_condition_active && fresh_source) {\n    output = clone_source(); suppress_selected_isa_chime_field(output); submit(output);\n}\ncount_apply_submit_and_terminal_results();')
feature(m,'dnd_scroll','左音量／右速度滚轮免打扰','dndScrollEnabled dndScrollMode','updateDndSpeedPeriodicUi','POST:/config',
 '滚轮方式枚举0=左音量、1=右速度，通过运行状态发送对应滚轮行为；与自动换挡的滚轮映射为不同功能，存在发送所有者协调。',
 'if (dnd_scroll_enabled && eligible_hands_on_reminder())\n    submit_selected_scroll_action(mode == 0 ? LEFT_VOLUME : RIGHT_SPEED);\nsettle_scroll_owner_before_next_action();')
feature(m,'dnd_periodic','滚轮后台随机周期','dndSpeedPeriodicEnabled dndSpeedPeriodMinMs dndSpeedPeriodMaxMs','getVal updateDndSpeedPeriodicUi','POST:/config',
 '页面秒数转换成毫秒，启用后按min/max随机安排下一次；只在相应滚轮模式和运行条件有效时提出动作。',
 'period_min_ms = round(ui_min_seconds * 1000);\nperiod_max_ms = round(ui_max_seconds * 1000);\nif (periodic_allowed && now >= next_at) {\n    request_scroll_action(); next_at = now + random_range(min_ms, max_ms);\n}')
feature(m,'torque_config','扭矩区间、单位、帧数与时间校验','dndTorqueEnabled torqueNagMaintenanceEnabled','saveTorqueNagEnabled torqueNagControlValue','POST:/config GET:/torque_nag/status',
 '0x4804e2a8检查预防幅值150～180 centi-Nm（1.50～1.80Nm），纠正180～250（1.80～2.50Nm）；min≤max；纠正帧数0或10～255；发送时段至少100ms，休息／暂停可同时为0，非0时至少100ms；DAS超时100～2000ms。前端默认纠正最大2.40Nm，区别于后端允许上限2.50。',
 'validate_ordered_range(preventive_magnitude, 150, 180);\nvalidate_ordered_range(corrective_magnitude, 180, 250);\nrequire(frames == 0 || (10 <= frames && frames <= 255));\nrequire_nonzero_time_ranges_at_least(100_ms);\nrequire_zero_pair_or_ordered_pause_range();\nrequire(100 <= das_timeout_ms && das_timeout_ms <= 2000);','C 校验确认')
feature(m,'torque_source','0x39B HOS 与0x370扭矩来源校验','','renderTorqueNagStatus','GET:/torque_nag/status',
 '0x4804ea2a仅处理相关输入；0x370要求DLC≥8，检查字节累加偏移0x73校验、扭矩原值范围、近100ms自回波；来源年龄超过5000us拒绝，pending状态也阻止覆盖。0x39B更新DAS有效性/HOS。',
 'on_frame(f) {\n    if (f.id == 0x39B) update_das_hos_freshness(f);\n    if (f.id != 0x370 || f.dlc < 8) return;\n    if (matches_recent_own_echo(f)) { echo_drop++; return; }\n    if (!oem_checksum_and_torque_raw_valid(f)) { reject++; return; }\n    if (source_age_us(f) > 5000 || output_pending) { stale_or_pending_drop++; return; }\n    process_torque_source(f);\n}','C 输入检查确认')
feature(m,'torque_gate','停发条件、DAS新鲜度与方向确认','','renderTorqueNagStatus','GET:/torque_nag/status',
 '有效开关链失效即停发；DAS未见／无效／过期进入等待；转角判断约±50°（参数deci-degree范围±500），并用3次观察确认方向，观察间隔过长会重新arming。方向通常反向于转角符号，接近中心时沿用已知方向。',
 'if (!effective_enable_chain) return disabled_no_output();\nif (!das_seen || !das_valid || das_age > timeout) return wait_das_no_output();\nif (angle_deci_deg < -500 || angle_deci_deg > 500) return angle_block_no_output();\ndir = angle > 10 ? NEGATIVE : angle < -10 ? POSITIVE : previous_direction;\nif (!three_observation_direction_confirmation()) return ARMING;','状态机与输入单位对应确认')
feature(m,'torque_maintenance','持续预防与活动／休息周期','','updateTorqueNagSummary','GET:/torque_nag/status POST:/config',
 'maintenance期间在方向对应幅值区间选目标；活动、休息区间由xorshift类PRNG选择，休息为0则连续维护；stability-verify也可发送预防幅值。',
 'switch (phase) {\ncase MAINTENANCE:\n    torque = signed_random_preventive_magnitude(direction);\n    if (activity_elapsed) enter(rest_range_is_zero ? MAINTENANCE : REST);\n    break;\ncase REST:\n    no_output(); if (rest_elapsed) enter(MAINTENANCE); break;\ncase STABILITY_VERIFY: send_preventive_until_verify_end(); break;\n}','C 状态／随机时间／幅值确认')
feature(m,'torque_corrective','H2等待、纠正前停发、纠正与恢复观察','','updateTorqueNagSummary renderTorqueNagStatus','POST:/config GET:/torque_nag/status',
 'H2持续达到配置等待进入pre-corrective-pause；之后在设置正／负帧数、幅值和发送／暂停周期内纠正；提示恢复后经过stability-verify再回maintenance。零帧方向禁用对应纠正。fault-hold与monitor-only是不发输出的独立相位。',
 'if (persistent_h2_ms >= h2_wait_ms) enter(PRE_CORRECTIVE_PAUSE);\nif (pre_pause_elapsed) enter(CORRECTIVE);\nif (phase == CORRECTIVE) {\n    choose_enabled_direction_and_remaining_frames();\n    send_corrective_magnitude_in_configured_bursts();\n    pause_between_bursts_if_configured();\n}\nif (hos_recovers) enter(STABILITY_VERIFY);\nif (stable_for_verify_duration) enter(MAINTENANCE);','状态机确认；全部HOS枚举映射未完整列出')
feature(m,'torque_terminal','发送确认、计数器冲突和终态统计','','renderTorqueNagStatus','GET:/torque_nag/status',
 'txAccepted、txSuccess/Failure、submitRejected、terminalTimeout、counterCollisions、lateReceipt分别统计，不能把accepted作为已生效。修改帧沿用协议计数器/校验规则并跟踪自己的回波。',
 'output = clone_valid_oem_template(); encode_selected_torque(output);\nupdate_counter_and_checksum_by_protocol();\ntoken = submit(output);\nif (accepted(token)) mark_pending_and_track_counter();\non_terminal(token, result) update_success_failure_and_clear_matching_pending();','计数与输入处理确认；完整终态调用链部分间接')

m=module('07_gear','自动换挡、方向盘、滚轮与障碍物','48101f34 480f1e34 480f43a8 48037d22 4810ab0a 48049bb6 48056082',
 '0x4810ab0a为换挡运行服务的主要关联入口，0x48056082提取障碍物状态。bleObstacle变量名不能证明使用蓝牙；前端明确V13/V14读取PARTY CAN的0x255和0x12B，V12采用雷达融合。')
feature(m,'gear_gates','总开关、车速、刹车、安全带、次数与冷却','gearAutomationEnabled gearSeatbeltSafetyEnabled gearBrakeSafetyBypassEnabled gearShiftLimit gearAutoShiftMaxSpeedKph gearCooldownMs','updateGearFeatureUi saveConfig','POST:/config GET:/runtime_status',
 '允许速度页面0～8km/h；单次刹车周期次数0表示无限；默认要求安全带，刹车旁路为独立设置。运行反馈有blockedCount、lastBlock、brakeConfirmed、driverSeatStatusAgeMs、templateAgeMs。',
 'allowed = master && fresh_gear_speed_template && speed <= max_speed;\nif (seatbelt_required) allowed &= fresh_confirmed_seatbelt;\nif (!brake_bypass) allowed &= brake_authorized;\nallowed &= cooldown_elapsed && (shift_limit == 0 || count < shift_limit);\nif (!allowed) publish_block_reason(); else accept_gear_intent();')
feature(m,'gear_steering','刹车＋转向D/R切换与P挡方向确认','gearBrakeToggleEnabled gearParkSteeringEnabled gearParkSteeringThresholdDeciDeg gearDriveReverseSteeringThresholdDeciDeg','updateGearFeatureUi getVal','POST:/config',
 '角度UI以度展示，提交乘10；P挡和D/R阈值分别设置。方向符号、当前挡位与启用项确定候选挡，仍经过共用门控。',
 'threshold_deci = round(ui_degrees * 10);\nif (brake_steering_enabled && steering_threshold_crossed()) {\n    if (gear == P && park_steering_enabled) target = infer_drive_reverse_from_direction();\n    else if (gear == D || gear == R) target = opposite_drive_reverse();\n    request_gear_if_shared_gates_pass(target);\n}')
feature(m,'gear_preset','智能流畅参数快捷设置','gearSmoothPreset','applyGearSmoothPreset','POST:/config',
 '前端批量设1000ms冷却、P30°、D/R60°、障碍物30°，经标准保存流程提交；不是C中新增的独立模式。',
 'set(gearCooldownMs, 1000);\nset(gearParkSteeringThresholdDeciDeg, 300);\nset(gearDriveReverseSteeringThresholdDeciDeg, 600);\nset(bleObstacleSteeringThresholdDeciDeg, 300);\nschedule_config_save();','前端常量确认')
feature(m,'obstacle_direct','PARTY直连障碍建议与方向校验','bleObstacleFeatureEnabled bleObstacleSteeringConfirmEnabled bleObstacleSteeringThresholdDeciDeg','updateObstacleProtocolUi saveBleObstacleConfig','POST:/config/ble_obstacle GET:/runtime_status',
 '专用revision/requestId接口保存功能开关；V13/V14只在P挡处理新鲜0x255建议及0x12B方向，进入D/R或挡位过期清空；回P需重新收到两类新数据。可选方向盘确认中D要求左转，R要求右转。',
 'if (protocol != V12) {\n    if (gear != P || gear_stale) clear_party_suggestion_and_direction();\n    if (!new_255_and_12b_after_entering_P) return WAIT_SOURCE;\n    if (steering_confirm_enabled && !direction_matches_suggestion()) return BLOCKED;\n    request_suggested_gear_through_shared_gates();\n}','前端协议说明与运行来源确认；位解码部分重建')
feature(m,'obstacle_v12','V12前后超声波／雷达融合','','updateObstacleProtocolUi','POST:/config/uss_radar GET:/config/uss_radar',
 'V12可在P/D/R提出目标；综合前后距离、有效探头数、雷达健康和方向，数据失效停止请求。gearUss前缀阈值为原始单位，不能直接按厘米解释。',
 'if (protocol == V12) {\n    if (!fresh_healthy_radar_and_uss()) return NO_SUGGESTION;\n    obstacle_state = classify_raw_distances_with_configured_thresholds();\n    target = fuse_front_rear_and_direction(obstacle_state);\n    request_gear_through_shared_gates(target);\n}')
feature(m,'uss_settings','雷达近／中／远／自定义及版本保存','gearUssDistancePreset gearUssSdiBlockMax gearUssSdiCautionMax gearUssMinValidSdi gearUssRadarBlockMaxRaw gearUssRetryLoad gearUssRetrySave','selectUssRadarPreset ussRadarConfigBody saveUssRadarConfig','GET:/config/uss_radar POST:/config/uss_radar',
 'revision控制并发；验证preset、block/caution阈值与有效数量，区分invalid_radar_config、stale_revision、radar_busy、flash_write、pending/stored。预设的原始阈值应以回读为准。',
 'if (revision != current_revision) return STALE_REVISION;\nvalidate_radar_preset_and_raw_thresholds(candidate);\nsubmit_radar_config_transaction();\nreturn_current_config_with_revision_and_persistence();','接口与参数确认')
feature(m,'gear_scroll','左右滚轮正负动作映射','gearScrollEnabled gearLeftPositiveAction gearLeftNegativeAction gearRightPositiveAction gearRightNegativeAction','updateGearFeatureUi','POST:/config',
 '各方向枚举0无、1D、2R、3P、4D/R切换。物理滚动产生候选请求，走相同速度、次数、冷却及反馈门控。',
 'on_scroll(side, direction) {\n    action = mappings[side][direction];\n    target = action == TOGGLE_DR ? opposite_of_current_DR() : action_to_gear(action);\n    if (target != NONE) request_gear_if_shared_gates_pass(target);\n}')
feature(m,'gear_brake_credit','滚轮低速单次刹车授权','gearScrollBrakeAuthorizationEnabled','updateGearFeatureUi','POST:/config',
 '在低速条件使用一次刹车授权；刹车旁路开启时页面禁用此项。授权的完整消费／复位边界未完全追出，保留抽象状态条件。',
 'if (eligible_low_speed_brake_cycle()) arm_one_shot_scroll_authorization();\nif (scroll_gear_request && one_shot_credit_valid()) {\n    consume_credit_at_confirmed_request_boundary(); request_gear();\n}\n// 具体消费与复位边沿仍需逐条反汇编核对。')
feature(m,'gear_feedback','请求提交、挡位反馈、失败与超时','','updateObstacleConfigDiagnostics','GET:/runtime_status GET:/status',
 '运行记录requestPending、lastAction/Block以及sourceFollow终态；在模板与安全状态新鲜时提交，确认实际挡位和终态后推进，失败/超时清理。',
 'if (gear_intent && !request_pending && gates_pass()) submit_gear_request();\nif (matching_tx_failure || action_deadline_expired) cancel_pending_and_publish_failure();\nif (fresh_vehicle_gear_matches_target) complete_action_and_update_cooldown_count();')

m=module('08_seats','座椅手动调节、位置记忆与停止','48100e14 48100218 4810051c 48100820 48100b10 480409ae 48041018 4804132a 480daefc',
 '网页左右各6组双向动作，共24个方向按钮；实际记忆反馈轴以固件状态字段为准，不能据按钮数推断每个方向都有独立位置传感器。十个slot按0～4左座、5～9右座映射。')
feature(m,'seat_enable','座椅功能许可与通道','seatMemoryEnabled seatControlBus','saveConfig','POST:/config GET:/status',
 'seatControlBus为隐藏字段，前端默认2；后端仍读写并验证通道及可发送状态。失效返回seat_disabled或seat_can_unavailable。',
 'seat_enabled = configured_enabled && selected_bus_available_for_tx;\nif (!configured_enabled) return SEAT_DISABLED;\nif (!selected_bus_available_for_tx) return SEAT_CAN_UNAVAILABLE;','配置与接口确认')
feature(m,'seat_manual','24方向按住调节、250ms续租与松开停止','','beginSeatManual postSeatManual releaseSeatManual bindSeatManualControls','POST:/seat_action',
 'data-seat-manual-mask编码方向，action=manual_start持续按住每250ms发送，manual_stop在释放、页面失焦等事件触发。C校验mask、所有者与停止状态，避免相反方向同时生效。完整租约到期值未确认。',
 'pointer_down(button) {\n    mask = button.data_seat_manual_mask; POST(manual_start, mask);\n    every(250_ms) while_held POST(manual_start, mask);\n}\npointer_up_or_page_lost() { stop_keepalive(); POST(manual_stop); }\nbackend_validate_mask_and_refresh_manual_lease();\non_release_or_expired_lease() send_stop_template();')
feature(m,'seat_save','十个位置槽保存与Flash确认','','triggerSeatAction waitSeatActionResult','POST:/seat_action GET:/status',
 'save(slot)不是保存名称，而是取当前位置写入位置槽；需要位置和0x4F3模板就绪，异步请求完成后sequence增加，前端等待新sequence和slot状态。',
 'require(slot >= 0 && slot < 10); require_fresh_position_and_4F3_template();\nif (seat_action_busy) return SEAT_BUSY;\nqueue_save_position(slot);\nruntime_commit_slot_to_flash_and_publish_new_action_sequence();\nui_wait_for_sequence_and_valid_slot_before_showing_saved();')
feature(m,'seat_recall','调用记忆、动作终态与物理输入让行','','triggerSeatAction waitSeatActionResult','POST:/seat_action GET:/status',
 'recall要求槽有效；目标已达到则可能不启动动作，否则运行按位置反馈生成调用请求。实时状态提供physicalRequest、recallActive、manualActive，物理输入和失败的精确优先级部分重建。',
 'require_valid_slot(slot);\nif (already_at_target_position()) publish_no_motion_success();\nelse { begin_recall(slot); submit_control_from_fresh_template(); }\non_target_reached_or_cancel_or_fault_or_physical_override() settle_and_stop_recall();')
feature(m,'seat_cancel','停止全部手动和记忆动作','seatStopButton','triggerSeatAction releaseSeatManual','POST:/seat_action',
 'cancel同时释放前端按住状态，并请求固件安全停止；seat_quiesce_busy表示还在结算。',
 'stop_ui_manual_timer(); clear_held_button();\nPOST("/seat_action", {action:"cancel"});\nbackend_cancel_pending_recall_and_manual_requests();\nsettle_stop_frame_before_reporting_idle();')
feature(m,'seat_names','十个槽位名称本地保存','','bindSeatSlotNames','',
 '名称使用t2can-seat-slot-names-v1 localStorage；槽名编辑不向/seat_action发送，不属于NVS位置槽数据。',
 'on_slot_name_edit(slot, text) {\n    names[slot] = text; local_storage_set("t2can-seat-slot-names-v1", names);\n}','前端确认')

m=module('09_ambient','六区氛围灯、FSD提示、盲区、转向与迎宾','480f584c 4803c556 4804162c 480416da 4809faa6 4804304e 48044258 4804354e 48043ab4',
 '六区为门0～3、仪表台4～5，驾驶员配置带revision。运行按区域合成目标并根据来源generation/terminal恢复。各覆盖功能的完整全序优先级尚未确认，不能擅自写成固定“盲区最高、迎宾次之”等。')
feature(m,'ambient_zones','六区常亮、区域使能、RGB与亮度','ambientEnabled ambientBrightness ambientColor ambientZone0Enabled ambientZone1Enabled ambientZone2Enabled ambientZone3Enabled ambientZone4Enabled ambientZone5Enabled','ambientPostBodyBase ambientPostSaveOnce','GET:/ambient_config POST:/ambient_config',
 '提交z0…z5 Enabled、Brightness、Color；Color为6位RGB十六进制，区域亮度0～100。按选区编辑保存，关闭区域不等于清除其存储颜色。',
 'require_six_zones();\nfor (z = 0; z < 6; ++z) validate_enabled_rgb_and_brightness(z);\nstore_driver_ambient_base();\nif (constant_enabled) request_enabled_zone_targets_from_fresh_sources();','配置结构确认；输出组合部分重建')
feature(m,'ambient_all','应用当前颜色亮度到全部区域','ambientApplyAll','ambientApplyZoneToAll','POST:/ambient_config',
 '浏览器把当前选区的enabled、RGB及亮度一起复制到全部区，再经相同接口保存；不是逐区六次HTTP写入。',
 'selected = config.zones[current_zone];\nfor (z = 0; z < 6; ++z) config.zones[z] = copy(selected); // 含enabled\nschedule_single_ambient_transaction();','前端确认')
feature(m,'ambient_fsd','FSD激活氛围提示','ambientFsdCueEnabled','ambientPostBodyBase','POST:/ambient_config',
 '页面ambientFsdCueEnabled映射后端fsdCueEnabled，由实际FSD状态驱动区域灯效；与常亮总开关、迎宾独立字段。确切提示颜色与时序未全部恢复。',
 'save_field("fsdCueEnabled", ui_fsd_cue);\nif (cue_enabled && eligible_fsd_state_transition()) compose_fsd_cue_target();\nmerge_with_other_active_zone_targets();')
feature(m,'ambient_blind','盲区区域、亮度与警报后恢复','blindSpotEnabled blindSpotBrightness blindSpotAreaFront blindSpotAreaRear blindSpotAreaDash blindSpotRestoreDelayMs','ambientPostBodyBase ambientBlindSpotDraftValid','POST:/ambient_config',
 '前／后／仪表台区域掩码，亮度10～100、延迟0～1000ms；有后端capability检查。警报解除后恢复原目标，而非硬编码一律关灯。',
 'if (!capability.blind_spot) reject_or_hide_unsupported_fields();\nif (blind_warning_active) compose_warning_for_selected_side_and_area_mask();\nif (warning_just_cleared) restore_at = now + delay_ms;\nif (now >= restore_at) restore_current_underlying_zone_target();')
feature(m,'ambient_turn','左右转向／双闪跟随','turnFollowEnabled turnFollowHazards turnFollowColor turnFollowBrightness turnFollowAreaFront turnFollowAreaRear turnFollowAreaDash','ambientTurnFollowDraftValid','POST:/ambient_config',
 '左转只覆盖左侧，右转只覆盖右侧；双闪由turnFollowHazards决定；颜色、亮度、三类区域分别设置并与灯效状态合成。',
 'if (turn_follow_enabled) {\n    sides = indicators_are_hazards ? (follow_hazards ? BOTH : NONE) : indicator_side;\n    compose_turn_follow_for(sides, areas, rgb, brightness);\n}\non_indicator_release() restore_underlying_target_when_owner_settled();')
feature(m,'welcome_styles','五种迎宾样式','welcomeEnabled welcomeStyle0 welcomeStyle1 welcomeStyle2 welcomeStyle3 welcomeStyle4','ambientWelcomeRenderSettings','POST:/ambient_config',
 '柔光环抱、冰蓝流光、暖金礼序、黑幕启幕、光迹回环，枚举0～4。0x4804304e/0x48044258提供迎宾阶段与目标生成证据；逐帧颜色曲线和区域路径未完整还原。',
 'if (welcome_enabled && accepted_welcome_trigger) {\n    style = clamp(config.welcomeStyle, 0, 4);\n    initialize_style_stage_and_zone_mask(style);\n}\neach_tick_advance_style_stage_and_compose_zone_targets();\n// 具体路径／曲线使用原状态机，本文不伪造数组。')
feature(m,'welcome_trigger','开门与座椅无人触发、过滤和重触发','welcomeTriggerMode0 welcomeTriggerMode1','ambientPostBodyBase','POST:/ambient_config GET:/runtime_status',
 'mode0要求座椅确认无人，mode1接受有效开门；runtime有openMask、origin、triggered/filtered/completed。座椅无数据不等价为无人。',
 'if (fresh_valid_door_open_edge) {\n    allowed = mode == ANY_VALID_DOOR || fresh_confirmed_unoccupied;\n    if (allowed) start_or_retrigger_welcome(); else filtered_count++;\n}\npublish_stage_reason_openmask_origin();')
feature(m,'welcome_params','迎宾亮度、节奏、颜色和六区掩码','welcomeBrightness welcomeTempo welcomeColor','ambientPostBodyBase','POST:/ambient_config',
 '亮度10～100，tempo0～2，mask1～63；迎宾独立于常亮开关，颜色为#RRGGBB。前端参数验证与后端结构验证均存在。',
 'validate(style <= 4, trigger_mode <= 1, 10 <= brightness <= 100);\nvalidate(tempo <= 2, 1 <= mask <= 63, rgb_is_valid);\napply_style_tempo_and_mask_to_welcome_state();','参数确认；曲线部分重建')
feature(m,'ambient_transaction','按驾驶员保存、冲突、待写与终态恢复','','ambientLoadConfig ambientPostSaveOnce ambientSaveBeforeDriverChange','GET:/ambient_config POST:/ambient_config GET:/runtime_status',
 '检查driverId与revision，OTA或驾驶员变化中止；后端区分available、blockedReason、persistence pending/stored及ambient_tx_fault。前端核对布尔、数值、颜色、6区回读。运行记录fault、outstandingMask、terminal超时并恢复来源。',
 'require_current_driver_and_revision(); validate_complete_config();\nsubmit_ambient_runtime_transaction(); persist_driver_blob();\nif (flash_failure) return_actual_revision_with_pending();\ntrack_zone_request_generation_and_outstanding_terminal_mask();\non_invalidated_or_failed_terminal() recover_or_publish_ambient_tx_fault();','接口与状态字段确认；精确恢复分支部分重建')

m=module('10_lighting','远光、爆闪与后雾灯','48101f34 480f4dda 481015a6 48054a82 48054722 480cca8a 48053f2a 4810bb96',
 '远光相关发送与vcleft共用所有者协调，rear_fog有独立配置和运行启动接口。减速度阈值单位0.01m/s²，原始来源年龄与发送反馈单独管理。转向氛围灯见09。')
feature(m,'high_force','FSD强制远光与合帧','fsdForceHighPhysicalEnabled','applyNormalizedLightingConfig','POST:/config GET:/runtime_status',
 'FSD/物理操作条件下覆盖灯光请求，runtime包含vcleft owner、generation、mergeCount、localEchoDrops、lightingMerges，说明和共用来源帧合并而非持续任意发包。',
 'if (force_high_enabled && eligible_fsd_physical_condition())\n    merge_force_high_request_into_fresh_vcleft_template();\nif (vcleft_owner_busy) defer_until_owner_can_merge();\nsubmit_and_settle_matching_generation();')
feature(m,'high_strobe','第二次长按0.5秒远光爆闪','longPressHighBeamStrobeEnabled highBeamStrobeIntervalMs highBeamStrobeCount','lightingNumericInputValid applyNormalizedLightingConfig','POST:/config',
 '页面描述第二次长按0.5秒触发；间隔1～100ms，次数0～20，0不限。前端无效值不提交，后端也验证；精确双次手势状态与波形边沿部分重建。',
 'if (second_eligible_long_press_500ms && strobe_enabled) begin_strobe();\nif (phase_deadline_due && (count_limit == 0 || emitted_count < count_limit))\n    toggle_high_request_and_schedule_next(interval_ms);\nif (release_or_stop_condition_or_fault) restore_original_light_request();')
feature(m,'fog_deceleration','减速后雾灯与轻重阈值','rear-fog-strobe-tgl rear-fog-mild-threshold rear-fog-hard-threshold','saveRearFogConfig','GET:/rear_fog/config POST:/rear_fog/config',
 '0x48054a82处理0x273、0x118等来源并调用减速判断0x48054722；配置enabled、mildDecelCx100、hardDecelCx100，来源新鲜和实际反馈控制请求。具体轻重脉冲节奏未全恢复。',
 'observe_vehicle_sources_and_compute_deceleration();\nif (auto_fog_enabled && fresh_feedback_and_source)\n    select_mild_or_hard_braking_pattern_by_thresholds();\nsubmit_fog_request_from_current_template_and_track_terminal();')
feature(m,'fog_reverse','倒车双闪＋8次雾灯警示','reverse-warning-tgl','saveRearFogConfig','POST:/rear_fog/config',
 'reverseWarningEnabled使倒车触发警示模式，前端明确双闪＋8次后雾灯；退出R、来源过期和故障需停止/恢复。8次为页面行为证据，详细脉冲时序待核对。',
 'if (fresh_reverse_entry && reverse_warning_enabled)\n    arm_reverse_hazard_and_fog_pattern(8);\nif (reverse_exit_or_source_stale_or_fault) settle_and_restore();')
feature(m,'fog_reverse_steady','倒车后雾灯常亮','reverse-rear-fog-steady-tgl','saveRearFogConfig','POST:/rear_fog/config',
 'reverseRearFogSteadyEnabled独立于倒车警示，按R挡持续请求；两者同时启用的完整仲裁序未全部确认。',
 'if (reverse_steady_enabled && fresh_gear == R) request_reverse_steady_fog();\nelse remove_reverse_steady_request_and_recompute_fog_owner_target();')
feature(m,'fog_pilot','领航许可与本次运行启动／停止','rear-fog-pilot-tgl rear-fog-pilot-run-btn','toggleRearFogRuntime','POST:/rear_fog/config POST:/rear_fog/runtime',
 'rearFogPilotEnabled保存许可，/rear_fog/runtime的enabled操作本次active；许可关闭拒绝启动pilot_not_permitted。活动状态无需等同于持久化许可。',
 'save_permission_to_config(pilot_permitted);\nPOST_runtime(enabled) {\n    if (enabled && !pilot_permitted) return PILOT_NOT_PERMITTED;\n    submit_runtime_pilot_start_or_stop(enabled);\n    return_actual_pilot_active_state();\n}','专用C接口确认')

m=module('11_preheat_service','电池预热和维修模式','48101f34 480e8070 4810bb96 48107fd2 4810834a 4805abf4',
 '预热开关是有确认、计时和关闭恢复的命令；配置enabled、runtimeAllowed、requestActive、heatingActive分别表示不同层次。维修模式参数存在，但全部厂家诊断报文操作未恢复。')
feature(m,'preheat_start','预热请求与15／30／45／60分钟许可','batteryPreheatEnabled batteryPreheatDurationMin','saveConfig renderBatteryPreheatStatus','POST:/config GET:/runtime_status',
 '支持四种时间，显式开启请求由运行状态机处理；监测heating、thermal、SOC、electrical新鲜度，展示目标/最低/最高温度、电压电流功率。许可不等于已实际加热。',
 'require_duration_one_of(15, 30, 45, 60);\non_explicit_enable() submit_preheat_control_intent_once();\ntick_preheat() {\n    update_heating_temperature_soc_and_electrical_observations();\n    if (runtime_allowed && sources_and_template_ready) request_preheat();\n    publish_requested_active_and_observed_heating_separately();\n}')
feature(m,'preheat_timer','运行倒计时、超时关闭与停止确认','','renderBatteryPreheatStatus','GET:/runtime_status POST:/config',
 'timerStarted、elapsedMs、remainingMs、timedOut与stopState独立存在；期限结束产生关闭流程，记录offFramesPending、terminalSeen/Pending和shutdownAttempts/Failures，关闭未确认保留恢复状态。计时启动的全部条件部分重建。',
 'if (timer_start_condition_confirmed && !timer_started) start_allowed_duration_timer();\nif (deadline_reached) { timed_out = true; begin_confirmed_shutdown(); }\nif (stop_frame_accepted) track_terminal_and_remaining_off_frames();\nif (shutdown_confirmed) mark_completed(); else retain_recovery_required();')
feature(m,'preheat_retry','关闭失败恢复与显式重试','batteryPreheatRetryStop','retryBatteryPreheatStop saveConfig','POST:/config GET:/config',
 'POST带batteryPreheatRetryStop；后端区分recovery_required、command_blocked、retry_blocked/invalid和restore_failed。前端每个显式预热编辑只尝试一次HTTP，连接结果未知不自动重放开关命令。',
 'if (explicit_retry_stop) validate_recovery_state_and_submit_stop_retry();\nif (command_result_unknown) read_state_without_replaying_enable();\nif (duration_change_blocked) preserve_other_edits_and_restore_duration_from_readback();','命令语义及前端防重放确认')
feature(m,'service_mode','CANB维修模式开关','canbServiceModeEnabled','saveConfig','POST:/config GET:/config',
 '后端解析并保存canbServiceModeEnabled，与CAN许可和关闭结算相关。运行端具体诊断/维修报文全序列未确认，只给出配置及有效状态框架。',
 'candidate.canbServiceModeEnabled = parse_bool_if_present();\nsubmit_config_and_persist();\neffective_service_mode = configured && relevant_bus_ready;\n// 维修协议的完整服务ID、触发及退出序列尚未恢复。','配置确认；完整运行协议未确认')

m=module('12_recorder','CAN抓包、过滤与文件下载','480fd584 480fd2fc 480fd37e 4806c4e8 4806fee2',
 '记录器包含过滤切换、缓冲、停止与下载生命周期。TX的统计单位在rec_status明确为lifecycle_events，不能当成物理总线上成功发送的帧数。')
feature(m,'rec_filters','包含／排除ID、三路总线和RX／TX','recInclude recExclude recBus1Enabled recBus2Enabled recBus3Enabled recRxEnabled recTxEnabled','recorderBody setRecorderPreset','POST:/rec_start',
 '包含/排除字符串解析标准ID，buses位掩码1/2/4；RX/TX不能同时关闭。duration页面1～3600秒，提交毫秒。非法ID列表拒绝。另保留setRecorderPreset快捷填值函数，设置指定ID/总线、RX+TX及30秒，但未发现页面调用，不能标为可见预设按钮。',
 'parse_standard_id_lists(include, exclude);\nrequire_nonempty_bus_mask(); require(rx || tx);\nduration_ms = clamp(ui_seconds, 1, 3600) * 1000;\nfilter = make_filter(include, exclude, buses, rx, tx);','请求结构与C验证确认')
feature(m,'rec_start','异步切换过滤器、内存缓冲与开始抓包','recDurationSec','startRec','POST:/rec_start GET:/rec_status',
 '阻止重复开始和下载中开始；分配PSRAM/内部RAM缓冲，启动三路过滤器转换，pending直到filterGeneration实际应用。错误包括buffer_unavailable、filter_transition_failed、pipeline_busy。',
 'if (active || download_in_progress) return BUSY;\nbuffer = allocate_recorder_buffer_with_available_memory_strategy();\nrequest_filter_transition_for_three_buses();\nif (!filters_applied) return PENDING;\nstart_capture_and_deadline();','C启动分支确认')
feature(m,'rec_collect','帧与TX生命周期采集、容量和丢弃状态','','pollRec','GET:/rec_status',
 '按过滤规则收集RX以及TX提交/终态等事件，发布count、bytes、ring、dropped、optionalSinkRejected、source、stopReason和各bus统计。缓冲满的确切覆盖策略以ring状态与原实现为准。',
 'on_optional_can_event(event) {\n    if (!recording || !matches_filter(event)) return;\n    append_to_recorder_buffer_or_count_drop(event);\n}\nif (duration_elapsed) stop_capture_with_reason();\npublish_count_bytes_ring_and_lifecycle_counters();')
feature(m,'rec_stop_clear','停止、清空与运行互斥','','stopRec clearRec','POST:/rec_stop POST:/rec_clear',
 '停止后保留已录内容供下载；清空在录制或下载时被拒绝。',
 'stop() { stop_capture_and_settle_filter_pipeline(); keep_saved_buffer(); }\nclear() {\n    if (recording || downloading) return BUSY;\n    reset_saved_length_counters_and_metadata();\n}','接口确认')
feature(m,'rec_download','CSV／BIN下载与文件头','','downloadRecorderFile','GET:/rec_download',
 'format选择csv或bin；必须已有记录且停止录制，下载互斥。Content-Disposition为p1_3can_recording.csv/bin。BIN不是简单原始CAN payload串联，包含版本/记录结构，未重写导出格式。',
 'if (!saved_recording) return NO_RECORDING;\nif (active || download_busy) return BUSY;\nlock_download_snapshot();\nstream(format == BIN ? versioned_binary_records : csv_records);\nunlock_download_snapshot_on_completion_or_disconnect();','C接口与输出类型确认')

m=module('13_can_experiment','CAN实验规则、发送、校验与预设','480ed598 480ab7ba 480ec3f8 480eb56e 480eab84 480e5cfa 480e6b84 480dc4f2 480ac732',
 '规则按每条选择的总线展开lane，每lane采用本线路真实来源模板并发回原线路。接管仅协调固件内置发送，不会阻止原车节点发送。P0仅限CH 3FD MUX0，由fsd_p0发送；can_rt准备来源与实验逻辑。')
feature(m,'experiment_rules','最多4规则、每规则3路与标准ID','','canExperimentCollect canExperimentAddRule canExperimentRemoveRule','POST:/api/can-experiment/listen',
 '每规则指定标准11位ID、buses、DLC及模式；删除/编辑导致已确认generation失效。至少一条，最多四条，每条最多三个lane。',
 'require(1 <= rule_count && rule_count <= 4);\nfor (rule in rules) { require(id <= 0x7ff && buses_mask != 0); expand_bus_lanes(rule); }\non_rule_edit() { confirmed_generation = 0; disable_start_button(); }','前端与后端结构确认')
feature(m,'experiment_listen','来源监听、停止监听与来源确认','','canExperimentListen canExperimentConfirmSource','POST:/api/can-experiment/listen POST:/api/can-experiment/listen/stop POST:/api/can-experiment/source/confirm',
 '监听按lane缓存最新帧、DLC、稳定来源帧和周期；确认来源返回DLC。状态提供waiting_bus/template、templateAgeMs、observedPeriodMs、sourceConfirmed。',
 'listen(rules) { register_optional_source_observers(); state = LISTENING; }\non_real_source_frame(bus, id) { update_lane_template_dlc_period_and_stability(); }\nconfirm(rule) { require_acceptable_source(); mark_source_confirmed(); return_dlc(); }\nstop_listen() { unregister_observers_when_settled(); }')
feature(m,'experiment_bits','按位匹配与修改掩码','','canExperimentCycleBit canExperimentCompileBits canExperimentCollect','POST:/api/can-experiment/validate',
 '每位为不关心/0/1；matchMask/value筛选来源，editMask/value修改输出。3FD/3C2的未改MUX匹配位可缩小接管范围；不能修改MUX位。',
 'if ((source_bytes & match_mask) != (match_value & match_mask)) return NO_MATCH;\noutput_bytes = (source_bytes & ~edit_mask) | (edit_value & edit_mask);\nreject_illegal_mux_edits_or_overlapping_reserved_fields();','按位语义确认；全部保留位规则参照原验证函数')
feature(m,'experiment_validate','确认修改、错误／警告和generation','','canExperimentValidate','POST:/api/can-experiment/validate',
 '后端检查规则、lane互冲突、DLC、counter/checksum、内置owner限制，返回errors/warnings和generation；前端有generation才允许开启。',
 'errors, warnings = validate_rules_and_cross_rule_resources(candidate);\nif (errors) return VALIDATION_FAILED;\nconfirmed_generation = publish_validated_candidate_generation();\nreturn(confirmed_generation, warnings);','接口与前端确认')
feature(m,'experiment_start','必须匹配已确认版本才能开始','','canExperimentStart','POST:/api/can-experiment/start',
 '提交confirmedGeneration和规则，后端比较已验证版本，拒绝编辑后旧版本。运行分waiting_bus/template/builtin_owner等lane状态，可恢复异常仅暂停对应lane。',
 'require(request.confirmedGeneration == validated_generation);\nrequire(request_rules_match_validated_candidate());\nstate = RUNNING;\nfor (lane in lanes) reevaluate_bus_template_and_builtin_owner_readiness();','启动代数检查与状态接口确认')
feature(m,'experiment_modes','单次／跟随／周期、延迟与模板超时','','canExperimentCollect','POST:/api/can-experiment/start GET:/api/can-experiment/status',
 'mode0单次、1跟随、2固定周期；period页面5～60000ms，template timeout0自动或≤5000ms，delayUs≤5000000，strict要求所选线路同时就绪。运行区分staleSkip、busySkip、delayedSuperseded。',
 'if (strict && !all_selected_lanes_ready) pause_rule();\nfor (lane in ready_lanes) {\n    trigger = mode == SINGLE ? !lane.single_completed :\n              mode == FOLLOW ? new_source_generation : period_due;\n    if (!trigger || template_expired()) continue;\n    if (delay_us) schedule_generation_bound_delayed_output();\n    else submit_generated_output();\n}\nif (new_source_supersedes_delayed_output) invalidate_old_delayed_generation();')
feature(m,'experiment_counter','原值偏移／独立自增计数器','','canExperimentCollect','POST:/api/can-experiment/validate',
 '可选字节、起bit、宽度1～8、步长、初值、min/max和offset；先生成编辑后的输出再按配置处理计数器字段。确认／失败时具体独立计数器推进点尚未完全核对。',
 'mask = bitfield_mask(counter_bit, counter_width);\nif (mode == SOURCE_OFFSET) value = normalize_counter(source_counter + offset);\nif (mode == INDEPENDENT) value = lane_counter_with_configured_bounds;\nreplace_counter_field(output, value, mask);\n// 独立计数器推进以原运行实现的提交／确认边界为准。')
feature(m,'experiment_checksums','SUM／XOR／CRC8及反射参数','','canExperimentCollect','POST:/api/can-experiment/validate',
 '选择参与字节掩码、输出字节、add/xor，CRC还指定多项式、初值、refIn/refOut、includeId。必须用修改后的帧参与校验，输出字节是否排除及CAN ID字节序由实现确定，未编造统一规则。',
 'selected = checksum_input_bytes_after_edit_and_counter(output);\nswitch (checksum_mode) {\ncase SUM: value = sum8(selected); break;\ncase XOR: value = xor8(selected); break;\ncase CRC8: value = configured_crc8(selected, poly, init, ref_in, ref_out, include_id); break;\n}\noutput[checksum_output] = finalize_with_configured_add_and_xor(value);\n// SUM/CRC输入细节和finalize顺序须以原实现校对。')
feature(m,'experiment_takeover','内置发送接管、优先级继承和停止结算','','canExperimentCollect canExperimentStop','POST:/api/can-experiment/start POST:/api/can-experiment/stop',
 '内置流按线路/ID/MUX让行；新增报文P1/2/3，255继承；P0固定在CH3FD MUX0。停止进入stopping，等待pending token结算后解除接管，防止旧回执影响新owner。',
 'acquire_selected_builtin_owner_scopes();\npriority = existing_stream ? inherited_priority : configured_P1_P2_P3;\nif (scope == CH_3FD_MUX0) route_actual_send_through_fsd_p0();\nstop() { invalidate_future_outputs(); state = STOPPING; }\nwhen_all_pending_tokens_settled() { release_takeover(); state = STOPPED; }','前端说明、状态与结算辅助函数确认')
feature(m,'experiment_metrics','逐lane来源／输出与延迟、终态计数','','canExperimentPollStatus','GET:/api/can-experiment/status',
 'generated、accepted、rejected、terminalOk/Fail、busy/staleSkip、DLC mismatch、accepted与terminal latency分别展示。独立生成帧不能算发送成功。',
 'on_generate() generated++;\non_submit(result) result.accepted ? accepted++ : rejected++;\non_terminal(result) result.ok ? terminal_ok++ : terminal_fail++;\npublish_each_lane_source_output_age_latency_and_pending_token();','C状态字段确认')
feature(m,'experiment_presets','8预设载入／保存／改名／删除与异步持久化','canExperimentPresetSlot canExperimentPresetName','canExperimentLoadPresets canExperimentPresetAction canExperimentPresetDelete','GET:/api/can-experiment/presets POST:/api/can-experiment/presets DELETE:/api/can-experiment/presets',
 '预设记录occupied、valid、name、generation、persistedGeneration、persistencePending；保存接受内存态与写入Flash完成是两阶段，前端轮询确认。',
 'preset_action(slot, action) {\n    validate_slot_0_to_7_and_current_quiesce_state();\n    if (action == SAVE) replace_preset_with_rules_and_name();\n    if (action == LOAD) return_rules_for_ui_editing_and_revalidation();\n    if (action == RENAME) update_name();\n    if (action == DELETE) clear_slot();\n    enqueue_persistence_generation();\n}\npoll_until_persisted_generation_catches_up();','预设接口与代数确认')

m=module('14_wifi','AP热点、外部Wi-Fi和网络状态','480f38e4 480f3d2c 480334d2 48030bc0',
 'ESP32-P4通过ESP-Hosted/esp_wifi_remote及SDIO无线协处理器联网。网页请求驱动异步网络状态，不能将HTTP成功等同于已经连上网络。')
feature(m,'wifi_status','AP/STA状态与异步扫描结果','','loadWifiStatus','GET:/wifi/status',
 '状态包含enabled、connected/connecting、SSID/IP、AP clients、retryDeferredForAp、scanState/networks、connectAttempts、lastDisconnectReason和configurationGeneration。',
 'snapshot = read_wifi_state_and_scan_cache();\nreturn_snapshot_without_starting_new_scan();\nui_apply_only_latest_request_sequence(snapshot);','状态接口与前端确认')
feature(m,'wifi_scan','扫描附近网络与列表选择','wifiScan wifiNetworkList','scanWifi','POST:/wifi/scan GET:/wifi/status',
 'POST开始扫描，结果通过status轮询；OTA期间拒绝。列表选择填充SSID，不自动发出连接请求。',
 'if (ota_busy) return OTA_BUSY;\nrequest_async_scan();\non_scan_complete() publish_network_cache_and_scan_state();\non_ui_select_network() copy_ssid_to_draft();','接口与前端确认')
feature(m,'wifi_connect','启用STA、保存SSID密码与连接','wifiExternalEnabled wifiSsid wifiPassword wifiConnect','connectWifi','POST:/wifi/connect',
 'SSID必填；配置保存失败返回flash_write，连接结果异步报告。状态提供连接重试、AP客户端导致延迟等；避免把完整重试策略简化为阻塞connect()。',
 'require_ssid(); parse_network_credentials();\nif (!persist_external_wifi_settings()) return FLASH_WRITE;\nrequest_sta_enabled_and_connect_transition();\nreturn_OK_for_accepted_request();\nnetwork_service_tick_updates_connect_retry_and_ap_deferral();')
feature(m,'wifi_disconnect_forget','断开与忘记网络','wifiDisconnect wifiForget','disconnectWifi forgetWifi','POST:/wifi/disconnect POST:/wifi/forget',
 '断开和忘记各有持久化流程；前者停止连接，后者移除保存的网络凭据。页面隐藏／启用和后端状态仍须回读核对。',
 'disconnect() { persist_disabled_or_disconnected_preference(); request_sta_disconnect(); }\nforget() { clear_saved_ssid_and_password(); persist(); request_disconnect(); }','C接口与前端确认')
feature(m,'wifi_ap_password','热点密码保存及异步重启','wifiApPassword wifiApSave','saveWifiAp','POST:/wifi/ap-config',
 'AP SSID为Albert-P4-FSD；非空新密码限定8～63字符，空输入保留原密码。检查ap_restart_pending、OTA；持久化成功返回HTTP202、apRestarting=true，约250ms后触发热点重启。密码改变同时清空网页登录会话；持久化失败恢复原密码。',
 'validate_ap_password_by_backend_policy();\nif (restart_pending || ota_busy) return BUSY;\nif (!persist_ap_password()) return PREFERENCES_WRITE;\nqueue_ap_restart_after_response(); return(apRestarting=true);','C接口确认')
feature(m,'wifi_ap_autooff','联网5分钟后关闭AP及客户端保留','wifiApAutoOff','setWifiApAutoOff','POST:/wifi/ap-auto-off GET:/wifi/status',
 '页面规定外部Wi-Fi连接成功5分钟后关AP，手机仍连接时保持；状态提供apDisableInSec与apClients，运行重新评估连接/客户端条件。',
 'if (auto_off && sta_connected && ap_clients == 0 && connected_for >= 5_minutes)\n    request_ap_stop();\nelse keep_ap_according_to_connectivity_and_client_policy();\npublish_remaining_ap_disable_seconds();','前端说明与状态确认；全部AP恢复边沿部分重建')
feature(m,'captive_portal','手机联网探测入口与热点首页','','','ANY:/generate_204 ANY:/gen_204 ANY:/hotspot-detect.html',
 '三个兼容路由共享0x48067692，返回Location=http://100.100.1.1/以引导手机打开管理页。',
 'on_captive_probe() { redirect("http://100.100.1.1/"); }','C路由与目标确认')

m=module('15_ota','本地／在线OTA、启动验证与重启','480ffd82 48064780 480ff860 480ff590 480fe83a 480fed16 4807be92 4811aede 480ffb40',
 '本地上传还有独立upload callback，见路由附表，不能只读POST /ota/upload最终响应函数。升级和重启采用停止CAN、结算、刷写持久数据、恢复／提交／重启流程；新应用需启动健康验证。')
feature(m,'ota_identity','固件身份、槽位、容量、状态和会话令牌','','loadOtaStatus','GET:/ota/status',
 'status包括version/buildVersion、sourceCommit、appElfSha256、bootSlot/targetSlot、maxSize、token、pendingVerify和state/bytes/error，令牌用于X-T2CAN-OTA-Token。',
 'publish_running_boot_target_partition_identity_and_ota_state();\nui_use_reported_maxSize_and_token();','C状态字段确认')
feature(m,'ota_file','本地BIN的浏览器预检查','otaFile','validateOtaFile','',
 '文件名.bin、至少288字节、不超过maxSize；offset0魔数E9，offset12芯片ID18，offset32描述符ABCD5432。bootstrap合并镜像不能作为application-only OTA上传。此预检不能替代完整镜像验证。',
 'require(extension == ".bin" && 288 <= size && size <= maxSize);\nrequire(byte[0] == 0xE9);\nrequire(le16(bytes + 12) == 0x12);\nrequire(le32(bytes + 32) == 0xABCD5432);','前端字节检查确认')
feature(m,'ota_prepare','令牌授权、CAN停止、持久化flush与ready','','startOta','POST:/ota/start',
 '检查授权、boot pending verify、session generation、Wi-Fi转换与CAN readiness；安全停止CAN和刷写待持久化项后才ready并签发当前会话令牌。失败尝试恢复CAN并区分can_restore/persistence_flush。',
 'require_valid_ota_token_and_no_pending_boot_verification();\nif (wifi_transition_or_other_ota || !can_ready) return BUSY;\nstart_session_generation(); state = PREPARING;\nif (!quiesce_can_and_settle()) fail(CAN_QUIESCE);\nif (!flush_pending_persistence()) fail_and_restore(PERSISTENCE_FLUSH);\nstate = READY; return_current_session_token();','C准备入口确认')
feature(m,'ota_upload','分块写入、结束验证、提交启动槽与重启','otaStart','startOta','POST:/ota/upload',
 'XHR超时180秒，上传进度最高99%。C流式回调0x48064780检查连接标识和session generation，严格解析Content-Length并限制在分区容量内，先收齐24字节镜像头检查E9及chip ID18，再按实际写入长度累计。结束要求收到长度=声明长度=Flash写入长度，end验证成功后进入committed。回调还设置120秒会话期限，这与浏览器180秒XHR超时不同。只有最终响应ok且bytes与文件长度一致才显示完成。',
 'upload_begin() {\n    require_session_token_ready_and_connection_generation();\n    expected = parse_decimal_Content_Length_with_overflow_and_partition_bound();\n    require(expected >= 24); begin_update(expected); deadline = now + 120000_ms;\n}\nchunk(data) {\n    require_same_connection_and_generation_and_remaining_length();\n    collect_first_24_bytes(); require(header.magic == 0xE9 && header.chip_id == 18);\n    written += write_update(data); require_full_chunk_write(); received += chunk_length;\n}\nend() {\n    require(header_checked && received == expected && written == expected);\n    if (Update_end_and_image_validation_succeed()) state = COMMITTED; else fail();\n}\nfinal_handler() {\n    require_committed(); respond(ok=true, bytes=written, rebooting=true); schedule_reboot();\n}','流式C长度／镜像头／会话分支确认；完整库验证细节见原C')
feature(m,'ota_cancel','取消、失败恢复和结果不确定回读','','startOta','POST:/ota/cancel GET:/ota/status',
 '取消需当前令牌，未活动拒绝；已提交且等待重启不能撤销。上传断线时前端明确结果未确认，重新连接检查版本和状态；取消失败不意味着固件一定未写入。',
 'if (committed_reboot_pending) return CANNOT_CANCEL_COMMITTED;\nif (!active_session || token_invalid) return ERROR;\nabort_write_if_active(); restore_can_and_mark_cancelled();\non_network_uncertainty() read_ota_state_and_identity_after_reconnect();','C取消分支与前端确认')
feature(m,'ota_online','在线检查、升级提示与管理目标一致性','onlineOtaCheck onlineOtaInstall','checkOnlineOta installOnlineOta closeOnlineOtaUpdateModal installOnlineOtaFromPrompt','GET:/ota/online/status POST:/ota/online/check POST:/ota/online/install',
 '需联网，无待验证或占用；check异步进入checking；install要求已发现available，重新检查management目标、版本/commit及release合法性，然后进入准备和下载。完整服务端release格式未全部恢复。',
 'check() { require_connected_and_idle(); queue_online_release_check(); }\ninstall() {\n    require_available_checked_release();\n    if (management_target_changed) return MANAGEMENT_TARGET_CHANGED;\n    validate_release_identity_and_reject_already_current();\n    queue_online_prepare_download_verify_commit();\n}\npoll_online_state_and_show_upgrade_prompt();','在线接口确认；完整下载链部分重建')
feature(m,'ota_boot_health','启动后120秒健康验证与回滚','','','GET:/health GET:/ota/status',
 '0x4811aede对待验证镜像做运行健康检查，涉及CAN、任务心跳、P0结算和持久化状态；120000ms期限内不能达到健康则走失败/回滚，而非无条件标记有效。',
 'if (boot_pending_verify) {\n    if (all_required_runtime_health_conditions_hold()) mark_new_app_valid();\n    else if (boot_health_elapsed >= 120000_ms) request_rollback_or_safe_failure_path();\n}','C期限与健康门控确认')
feature(m,'reboot','重启请求、安全停止和实际重启确认','rebootButton','rebootBoard rebootWaitForConfirmation','POST:/reboot GET:/health',
 'OTA/已重启请求拒绝；停止CAN并flush持久化失败则恢复并返回错误。浏览器通过启动会话变化确认实际重启，收到HTTP ok本身不算重启已发生。',
 'if (ota_busy || reboot_busy) return BUSY;\nif (!quiesce_can()) return CAN_QUIESCE;\nif (!flush_persistence()) { restore_can(); return PERSISTENCE_FLUSH; }\nrespond_rebooting_then_schedule_reset();\nui_wait_for_disconnect_and_changed_boot_session();','C入口与前端确认')

m=module('16_records','FSD行程、里程统计与手机时钟','480b41ec 480b4abe 4806ef66 480d338a 480d2a5e 48118d2c',
 '记录的数据源与时间锚点位于设备。浏览器只展示与发出明确的reset/clear请求；新bootstrap中NVS擦除态，不能恢复真实行程。精确速度积分、断行程判据和所有采样剔除阈值尚未完整追出。')
feature(m,'records_view','当前／历史行程、详情、小计与累计','fsdRecordsRefresh fsdRecordsDetailBack','loadFsdRecords','GET:/fsd_records',
 '序列化字段包括totalMeters、classifiedMeters、fsdMeters、longestFsdMeters、sourceState、tripEndDelayMs、fsdActive、dirty/persisted与history。页面trip/subtotal/cumulative选择是展示，不重新计算车端里程。',
 'snapshot = read_current_history_subtotal_cumulative();\nreturn_snapshot_with_source_and_persistence_state();\nui_select_view_and_detail(snapshot, selected_range);','C字段与前端确认')
feature(m,'records_accumulate','行驶与FSD里程分类累计','','','GET:/fsd_records',
 '根据车辆行驶源和FSD状态分类累计，等待稳定结束条件后形成历史行程，更新最长FSD等。以下distance_delta与trip_end_confirmed为未完整恢复的内部计算，不能假定普通浏览器计时积分。',
 'on_valid_vehicle_sample() {\n    delta = firmware_validated_distance_delta(); // 精确计算尚未完整恢复\n    trip.total += delta; cumulative.total += delta; subtotal.total += delta;\n    if (classification_known) update_classified_and_fsd_distances(delta);\n}\nif (trip_end_confirmed_after_configured_delay) finalize_and_persist_trip();','数据结构确认；累计内部算法部分重建')
feature(m,'records_clock','手机Unix时钟与设备uptime锚点','','fsdPhoneClockSync','GET:/fsd_records/clock POST:/fsd_records/clock',
 '提交bootId、unixMs、uptimeMs；后端拒绝stale_boot、invalid_clock/sample及busy，以启动会话防止跨重启错误锚定。有效锚点帮助显示行程日期，不能恢复没记录过的真实时间。',
 'clock = GET("/fsd_records/clock");\nif (round_trip_ms > 2000) reject_sample();\nif (clock.calibrated && clock.source == NETWORK) skip_phone_calibration();\nsample = {clock.bootId, unixMs:DateNow() - round_trip_ms/2, clock.uptimeMs};\nif (sample.bootId != current_boot) return STALE_BOOT;\nvalidate_clock_and_uptime_sample(sample); store_unix_to_uptime_anchor(sample);\n// 成功后5分钟再同步；失败后15秒可重试。','请求字段、浏览器采样与C错误分支确认')
feature(m,'records_subtotal','重置小计','fsdRecordsSubtotalReset fsdRecordsSubtotalResetConfirm','resetFsdSubtotal','POST:/fsd_records/subtotal/reset',
 '前端对话框与后端confirm=reset；仅重置小计，保留当前、历史和累计。持久化失败单独返回subtotal_reset_failed。',
 'require(request.confirm == "reset"); require_storage_and_not_ota();\nreset_subtotal_domain();\nif (!persist_subtotal()) return SUBTOTAL_RESET_FAILED;\nreturn(persistence="stored");','接口与页面说明确认')
feature(m,'records_clear','清空累计与行程历史','fsdRecordsClear fsdRecordsClearConfirm','clearFsdRecords','POST:/fsd_records/clear',
 'confirm=clear，清空当前、小计、累计和历史，同时处理云控制/数据epoch，避免旧备份无意复活删除数据；必须确认成功持久化。',
 'require(request.confirm == "clear"); require_storage_and_not_ota();\nclear_current_subtotal_cumulative_history();\nadvance_or_record_dataset_wipe_epoch_for_sync();\ncommit_record_and_cloud_control_storage();\nreturn_stored_or_clear_failed();','清空接口与云epoch字段确认；跨域提交顺序部分重建')

m=module('17_cloud_onboarding','云同步、备份恢复、冲突与首次引导','480b3dca 480b3b14 480b6d24 480d103e 4808e6ee 4808e07e 48118d2c',
 '云端后台worker 0x48118d2c 包含settings_backup、records_backup、user_restore、conflict_resolution及outbox/ack/epoch等证据。请求queued/pending不是同步完成。旧agent GET仍返回capabilities，POST固定405，不能删除为不存在或宣称旧接口可写。')
feature(m,'cloud_identity','设备ID、云网页地址与复制','cloudDeviceId cloudWebUrl cloudCopyButton cloudCopyUrl','cloudLoadStatus','GET:/cloud/status',
 '状态生成设备身份与用户网页入口；复制ID/URL为浏览器剪贴板操作，打开云网页是外部链接，均不新增固件动作。',
 'status = GET("/cloud/status"); render_device_identity_and_web_url(status);\non_copy() browser_clipboard_write(selected_text);','前端与接口确认')
feature(m,'cloud_config','服务URL、产品根Token、清除凭据和15～300秒周期','cloudUrl cloudToken cloudInterval cloudClearToken cloudSaveButton','cloudLoadConfig cloudSaveConfig','GET:/cloud/config POST:/cloud/config',
 '配置受开发者流程约束，读接口只返回tokenConfigured而非明文凭据。写入URL、token/clearToken、intervalSec等，generation与持久化状态分开。',
 'authorize_required_developer_request(); validate_url_token_and_interval();\nif (clear_token) remove_saved_token(); else if (new_token_present) replace_token();\nincrement_config_generation(); persist_unified_cloud_backend_configuration();\nreturn_configured_flags_and_persistence();','统一配置入口与字段确认')
feature(m,'cloud_test','测试v2连接','cloudTestButton','cloudTestConnection','POST:/cloud/test',
 '按已保存/草稿连接配置测试v2后端，并报告认证/网络结果；成功测试不等于备份已同步或恢复成功。完整网络错误映射见原伪代码。',
 'validate_test_configuration_and_access();\nrequest_v2_connectivity_test();\nreturn_connectivity_authentication_result();','接口确认；全部网络调用细节未列出')
feature(m,'cloud_sync','自动同步开关、立即同步及后台ack','cloudEnabled cloudUploadButton','cloudSetEnabled cloudUploadNow','POST:/cloud/enabled POST:/cloud/upload GET:/cloud/status',
 '关闭保留本地数据和连接配置。立即上传需enabled、URL和token、无OTA，返回queued=true；worker构造状态/设置/记录差量，跟踪awaiting_ack与持久化基线。',
 'set_enabled(on) { persist_configuration_with_new_generation(); }\nupload_now() {\n    require(enabled && url_configured && token_configured && !ota_busy);\n    mark_upload_due(); return(queued=true);\n}\nworker_tick() { build_payload_and_outbox(); send_v2(); consume_ack_and_update_baseline(); }','C排队分支与worker证据确认')
feature(m,'cloud_restore','设置驾驶员／FSD记录恢复、范围和request_id','cloudRestoreScopeSettings cloudRestoreScopeRecords cloudSettingsRestoreConfirm cloudRestoreConfirmButton','cloudRestoreSettings','POST:/cloud/settings/restore GET:/cloud/status',
 'confirmation=restore，scopes选settings/records，backup_revision可latest，请求带request_id。拒绝ID冲突、已有恢复或本地变更；回执queued、persistence pending、restore_id，之后按同一ID跟踪完成范围。',
 'require(confirmation == "restore" && valid_scopes && valid_request_id);\nreject_if_local_changed_or_restore_busy_or_id_collision();\nqueue_restore(request_id, scopes, selected_backup_revision);\nreturn(queued=true, persistence="pending", restore_id=request_id);\nworker_verify_backup_hash_and_apply_selected_domains();\nui_poll_matching_restore_id_completed_scopes_and_failures();','C参数/错误与worker字段确认')
feature(m,'cloud_conflicts','查看冲突、保留设备／应用云端','cloudSettingsConflictsRefresh','cloudLoadSettingsConflicts cloudResolveSettingsConflict','GET:/cloud/settings/conflicts POST:/cloud/settings/conflict',
 'command_id配action=keep_device/apply_cloud；冲突不存在、device_unsaved、resolution_pending、restore_busy_or_local_changed独立拒绝。保存resolution记录后后台处理并ack。',
 'conflict = lookup_pending_conflict(command_id);\nrequire_action_one_of("keep_device", "apply_cloud");\nrequire_no_unsaved_local_change_and_no_pending_restore();\npersist_resolution_intent(command_id, action);\nreturn(queued=true); worker_resolve_and_ack();','C接口分支确认')
feature(m,'cloud_generations','设置revision/epoch、记录epoch与本地草稿保护','','managementSyncCloudSettings cloudLoadStatus','GET:/cloud/status GET:/management/status',
 '前端以epoch/revision识别同步状态及本地待同步，旧状态不覆盖新草稿。worker有settings_revision/content_sha256、records_dataset_epoch/wipe_epoch/revision等用于备份和重置一致性。完整云协议事务保证不能只凭字符串确认。',
 'when_cloud_status_arrives() {\n    key = settings_epoch + device_revision;\n    if (local_dirty_or_save_busy) defer_remote_config_readback();\n    else GET_config_with_edit_generation_and_management_generation_checks();\n}\nworker_bind_payload_and_ack_to_resource_epoch_revision_and_hash();\n// cloudMarkSettingsSaved 仅见 typeof 保护的可选调用；本页未定义。','字段与前端代数确认；完整远端协议未恢复')
feature(m,'cloud_legacy','旧agent能力查询与废弃写入口','','','GET:/cloud/agent/config POST:/cloud/agent/config',
 'GET检查资源可用后调用0x4808e6ee返回capabilities/configured/origin，资源不足503 resource_wait。POST始终405 unified_backend_use_cloud_config。',
 'GET_agent_config() { authorize(); if (!resources) return 503; return_capabilities(); }\nPOST_agent_config() { authorize(); return 405("unified_backend_use_cloud_config"); }','C完整短处理函数确认')
feature(m,'onboarding','首次联网／新用户／稍后／恢复完成引导','onboardingConnectWifi onboardingSkipWifi onboardingNew onboardingLater onboardingRestore onboardingCompleteRetry wifiOnboardingContinue','onboardingStart onboardingConnectWifi onboardingCompleteChoice onboardingResumeAfterWifi','GET:/onboarding/status POST:/onboarding/complete',
 '状态持久化到p4_data/p4_onboard；choice=new/later/restored，restored需恢复完成；重复冲突choice_already_stored。Wi-Fi步骤复用网络接口，不是另外一套连接实现。',
 's = GET("/onboarding/status"); if (!s.completed) show_onboarding_steps();\nif (network_step) reuse_wifi_connect_and_wait_status();\ncomplete(choice) {\n    require_valid_choice_and_storage();\n    if (choice == RESTORED) require_selected_restore_completed();\n    prevent_conflicting_existing_choice(); persist_onboarding_choice();\n}','C持久化与前端流程确认')

m=module('18_diagnostics','健康、CAN、系统指标、JSON与崩溃转储','480c0f3c 4803b2ec 4806851c 4808334c 4807fa5c 4806f630 4806cbde 4806d406',
 '诊断快照可能未开放某些采集能力；available=false / diagnostics_disabled必须如实展示，不能将空数组当成正常零值。coredump是最新成功写入Flash的转储，可能来自旧启动；当前bootstrap文件未包含该分区实际内容。')
feature(m,'health','健康与心跳、CAN新鲜度和告警','','pollHealth','GET:/health',
 '含运行可用性、任务心跳、来源新鲜、Bus-Off/丢帧/恢复/P0结算等原因。告警级别与原因组合由0x4803b2ec一类函数判断，多个连续快照用于展示。',
 'health = evaluate_task_heartbeat_can_freshness_bus_state_and_settlement();\ninclude_boot_session_and_observation_sequence();\nui_do_not_replace_new_snapshot_with_old_boot_or_sequence();','C健康原因与前端确认')
feature(m,'can_diag','三路接收发送、控制器故障和热ID','','pollCanDiagnostics pollCanHotIds renderCanDiagnosticCard','GET:/can_diag GET:/can_hot_ids',
 '每通道逻辑名、GPIO、车辆针脚、TWAI/队列/错误/最近帧状态及热门ID列表；热门ID为观察统计，不是全部支持车辆报文的协议列表。',
 'for (bus in three_buses) snapshot_driver_rx_tx_errors_and_recent_observations(bus);\nreturn_hot_id_statistics_with_capture_scope();\nrender_vehicle_pin_numbers_separately_from_board_gpio();','接口与前端确认')
feature(m,'runtime_diag','各功能相位、延迟、来源与终态诊断','','loadRuntimeStatus renderP0Observation','GET:/runtime_status GET:/torque_nag/status',
 '包括FSD P0、摄像头、激活、速度、换挡、DND、灯光、预热、雾灯、座椅、PARTY和ambientTx等。配置enabled、effective、pending、accepted、terminal需要分开理解。某些fast path diagnostics被编译/配置关闭会返回available=false。',
 'snapshot_each_feature_owner_phase_source_generation_and_terminal_counters();\nif (!diagnostic_capability_enabled) publish_unavailable_reason();\nui_format_runtime_state_without_treating_config_enabled_as_active();','C状态字段确认')
feature(m,'system_diag','固件身份、CPU、温度、内存、任务与持久化','','loadSystemStatus','GET:/system_status',
 'chipId/model/revision、commit/ELF、温度、每core负载、内部RAM/PSRAM/DMA、stackHighWater、任务优先级/状态、SDIO stream fault、configurationPersistence、flashSafeLease、p4_data状态。task列表按tasks参数请求。',
 'snapshot_identity_reset_cpu_temperature_heap_and_runtime_loops();\nif (request.tasks) collect_bounded_task_details();\ninclude_nvs_load_reason_migration_checksum_and_recent_writes();\ninclude_current_boot_only_health_history();','C序列化字段确认')
feature(m,'web_metrics','HTTP构建发送耗时和浏览器请求证据','','captureWebTransportEvidence snapshotWebClientMetrics','GET:/web_metrics',
 'C记录buildUs/sendUs/totalUs、bytesWritten、writeCalls、partial/zero write、断线和超时；浏览器另记duration、队列与48条历史，二者用于分析网页卡顿。',
 'server_measure(build_start, send_start, bytes_and_write_results);\nclient_measure(queue_time, fetch_time, parse_time, endpoint_result);\nexport_both_sides_with_capture_times();','字段与前端确认')
feature(m,'diag_export','完整诊断JSON导出','','downloadCanDiagnostics','GET:/status GET:/runtime_status GET:/system_status GET:/can_diag GET:/health GET:/web_metrics',
 '浏览器合并多个接口快照、Web客户端证据及可用转储信息，创建Blob下载；不是后端额外提供一个“所有诊断”路由。各快照采集时间不同，不承诺原子同时。',
 'pause_conflicting_polling();\ncollect_status_runtime_system_can_health_and_transport_evidence();\ninclude_errors_for_failed_or_unavailable_sources();\ndownload_json_blob_with_capture_metadata(); resume_polling();','前端确认')
feature(m,'coredump_info','崩溃转储信息、寄存器、堆栈与身份','','loadCoreDumpInfo captureCoreDumpEvidence','GET:/coredump/info',
 '返回available、address/size、sha256、imageCheckResult、panicReason、崩溃app ELF、task、exceptionPc/mcause/mtval/ra等。originBootSessionKnown可能未知，不能断言来自当前启动。',
 'locate_latest_successful_flash_coredump(); validate_image_and_size();\nif (summary_available) publish_crash_identity_registers_stack_and_reason();\nelse publish_validation_or_unavailability_result();','C字段与转储来源说明确认')
feature(m,'coredump_download','令牌下载、大小与SHA256核对','coreDumpDownloadButton','fetchVerifiedCoreDump downloadCoreDump','GET:/coredump.bin GET:/coredump/info GET:/ota/status',
 '下载需要X-T2CAN-OTA-Token；HTTP头包含firmware、appELF、core SHA及diagnostic boot session，前端核对信息/长度/摘要/身份，最大65536字节。失败保留诊断错误，避免把任意.bin认作匹配的转储。',
 'require_ota_token(); stream_valid_coredump_with_identity_headers();\nui_require_size_within_65536_and_equal_info_size();\nui_verify_sha256_and_consistent_identity_headers();\nif (all_checks_pass) save_coredump_blob(); else export_verification_error();','C授权与前端校验确认')

if __name__ == '__main__':
    (OUT/'evidence'/'feature_catalog.json').write_text(json.dumps(modules, ensure_ascii=False, indent=2)+'\n')
    print(f'{len(modules)} modules, {sum(len(m["features"]) for m in modules)} semantic features')
