# 全部功能与C实现逻辑

145项是本次按语义整理的功能/子功能计数，不是原程序的官方模块数量。

# 界面、CSS 与访问认证

CSS 负责布局与状态呈现，浏览器处理主题、导航、折叠及草稿；这些不需要对应的 C 业务函数。网页会话与开发者令牌是两个独立机制。

**运行／解析关联函数（模块共享）**：[`0x4808a6b8`](../decompiled/functions/4808a6b8_FUN_ram_4808a6b8.c)、[`0x4808acac`](../decompiled/functions/4808acac_FUN_ram_4808acac.c)、[`0x4808d958`](../decompiled/functions/4808d958_recovered_http_post_cloud_developer_4808d958.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="ui_mode"></a>
## 1. 标准／车机／自动界面

**证据层次**：前端确认。

自动模式按浏览器环境和窗口条件判断；按钮在 auto、car、standard 三种模式间循环，写入 localStorage，改变 DOM 属性供 CSS 选择。

**前端入口**：[storedUiMode · JS L22](../recovered_web/dashboard.script0.js#L22)、[detectCarUi · JS L23](../recovered_web/dashboard.script0.js#L23)、[applyUiMode · JS L24](../recovered_web/dashboard.script0.js#L24)、[cycleUiMode · JS L25](../recovered_web/dashboard.script0.js#L25)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

**关键控件／参数**：`uiModeBtn`。

```c
mode = local_storage_get("t2can-ui-mode-v1", "auto");
if (mode == AUTO) mode = detect_car_browser_and_viewport();
set_html_dataset("ui", mode);
// 浏览器逻辑，无固件设置写入。
```

<a id="theme"></a>
## 2. 日间／夜间主题

**证据层次**：前端与身份接口确认。

主题偏好与 chipId、appElfSha256 组成的固件身份关联；C 只提供身份，CSS 切换颜色变量、背景和控件样式。

**前端入口**：[refreshFirmwareTheme · JS L44](../recovered_web/dashboard.script0.js#L44)。

**C 接口入口**：[GET /system_status · 0x4808334c](../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)。

**关键控件／参数**：`themeBtn`。

```c
identity = GET("/system_status").chipId + appElfSha256;
theme = local_storage_get(theme_key(identity));
set_html_dataset("theme", theme);
```

<a id="navigation"></a>
## 3. 功能页、详情页、帮助、折叠和响应式布局

**证据层次**：前端确认。

驾驶／换挡／车身／诊断／系统以及商业界面的功能／记录／设置导航均为 DOM 显隐和控件重新组织；CSS 提供 fixed 导航、网格、dialog、hidden、disabled、partial 等显示状态。

**前端入口**：[initAppPages · JS L145](../recovered_web/dashboard.script0.js#L145)、[initCommercialHierarchy · JS L1883](../recovered_web/dashboard.script0.js#L1883)、[initCommercialUi · JS L1939](../recovered_web/dashboard.script0.js#L1939)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

```c
on_navigation(tab) { set_active_tab(tab); show_related_cards(tab); }
on_help_click() { toggle_help_panel(); }
on_detail_toggle() { toggle_collapsed_state(); }
// hidden 或 disabled 是界面状态，不能替代后端权限与运行门控。
```

<a id="legal"></a>
## 4. 首次说明与已阅读状态

**证据层次**：前端确认。

用户确认后关闭说明并保存浏览器偏好；不调用车辆控制接口。

**前端入口**：[closeLegalNotice · JS L202](../recovered_web/dashboard.script0.js#L202)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

```c
on_acknowledge() { local_storage_set(legal_key, true); close_notice(); }
```

<a id="login"></a>
## 5. 网页登录与错误限流

**证据层次**：C 逻辑确认。

C 使用与AP热点相同的密码存储对象比较，连续 5 次错误后限制 30 秒；成功时使用 16 字节随机材料生成 32 位十六进制会话标识，最多管理 4 个会话槽。Cookie 为 P4SID，Max-Age=604800，HttpOnly、SameSite=Strict。服务端还检查7天创建期限与48小时未活动期限。AP密码实际改变会失效旧会话。

**前端入口**：[checkDashboardSession · JS L1473](../recovered_web/dashboard.script0.js#L1473)。

**C 接口入口**：[POST /auth/login · 0x4808a8c2](../decompiled/functions/4808a8c2_recovered_http_post_auth_login_4808a8c2.c)、[GET /auth/status · 0x480677f4](../decompiled/functions/480677f4_recovered_http_get_auth_status_480677f4.c)、[GET / · 0x4808b134](../decompiled/functions/4808b134_recovered_http_get_root_4808b134.c)。

**关键控件／参数**：`password`。

```c
if (failures >= 5 && now - lock_started < 30000) return LOCKED;
if (!constant_length_password_compare(input, stored, 63)) {
    failures++; if (failures == 5) lock_started = now; return WRONG;
}
expire_old_sessions(); slot = choose_free_or_oldest_session(4);
sid = hex(random_bytes(16)); store_session(slot, sid, now);
set_cookie("P4SID", sid, 604800, HTTP_ONLY | SAME_SITE_STRICT);
redirect_303("/");
```

<a id="logout"></a>
## 6. 退出与会话失效

**证据层次**：C 接口确认。

退出清理服务端会话和 Cookie；页面检查会话状态，失效时返回登录流程。

**前端入口**：[checkDashboardSession · JS L1473](../recovered_web/dashboard.script0.js#L1473)。

**C 接口入口**：[POST /auth/logout · 0x4808adc8](../decompiled/functions/4808adc8_recovered_http_post_auth_logout_4808adc8.c)、[GET /auth/status · 0x480677f4](../decompiled/functions/480677f4_recovered_http_get_auth_status_480677f4.c)。

```c
invalidate_session_from_cookie();
set_cookie("P4SID", "", 0);
redirect_to_root();
```

<a id="developer"></a>
## 7. 开发者模式解锁、闲置锁定与令牌撤销

**证据层次**：前端与 C 令牌接口确认。

密码提交后端验证，成功返回 developerToken；前端要求 32 位十六进制。高级界面仅在本次页面解锁，闲置 15 分钟锁定；需要授权的云请求使用 X-P4-Developer。锁定会请求撤销令牌。

**前端入口**：[commercialVerifyPassword · JS L1600](../recovered_web/dashboard.script0.js#L1600)、[commercialUnlock · JS L1843](../recovered_web/dashboard.script0.js#L1843)、[commercialLock · JS L1855](../recovered_web/dashboard.script0.js#L1855)、[commercialRecordActivity · JS L1859](../recovered_web/dashboard.script0.js#L1859)。

**C 接口入口**：[POST /cloud/developer · 0x4808d958](../decompiled/functions/4808d958_recovered_http_post_cloud_developer_4808d958.c)。

**关键控件／参数**：`commercialPassword`、`commercialLock`。

```c
r = POST("/cloud/developer", {password});
if (!r.ok || !is_hex32(r.developerToken)) keep_locked();
else { developer_token = r.developerToken; show_developer_ui(); }
if (idle_ms >= 15 * 60 * 1000) {
    POST("/cloud/developer", {lock:1}, X_P4_DEVELOPER);
    clear_token_and_lock_ui();
}
```

<a id="management_lock"></a>
## 8. 云管理状态与页面操作锁定

**证据层次**：接口确认；管理内部状态机部分重建。

管理状态包含 revision、锁定／待处理原因和目标版本。前端按状态禁用编辑；后台状态可能由云命令或升级改变，不能只依赖 CSS 禁用按钮。

**前端入口**：[managementLoadStatus · JS L1649](../recovered_web/dashboard.script0.js#L1649)。

**C 接口入口**：[GET /management/status · 0x480b2722](../decompiled/functions/480b2722_recovered_http_get_management_status_480b2722.c)。

```c
s = GET("/management/status");
if (s.revision >= displayed_revision) apply_management_state(s);
set_edit_controls_disabled(s.locked || s.pending);
```


# 共用配置、自动保存与 CAN 基础

原程序是 Arduino/ESP-IDF 上的 C++ 固件；本文用 C 风格表达。HTTP 解析与控制命令提交、实时任务、状态快照、NVS 持久化分层。存在间接虚函数调用，calls.tsv 的直接调用表并不完整。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480bb868`](../decompiled/functions/480bb868_FUN_ram_480bb868.c)、[`0x480e8070`](../decompiled/functions/480e8070_FUN_ram_480e8070.c)、[`0x4810d080`](../decompiled/functions/4810d080_recovered_can_rt_task.c)、[`0x4ff2520a`](../decompiled/functions/4ff2520a_recovered_fsd_p0_task.c)、[`0x4803cdd8`](../decompiled/functions/4803cdd8_FUN_ram_4803cdd8.c)、[`0x4805cb5e`](../decompiled/functions/4805cb5e_FUN_ram_4805cb5e.c)、[`0x480dc4f2`](../decompiled/functions/480dc4f2_FUN_ram_480dc4f2.c)、[`0x480312a6`](../decompiled/functions/480312a6_recovered_probe_can_pin_layout.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="config_read"></a>
## 1. 加载配置、默认值和归一化回读

**证据层次**：接口与前端确认。

GET 通过 0x480bb868 序列化配置。前端使用默认值补足缺字段，并保护加载前已编辑字段；默认值是页面兜底，不等于空 NVS 时的全部固件默认值。

**前端入口**：[loadConfig · JS L890](../recovered_web/dashboard.script0.js#L890)、[applyConfigDefaults · JS L261](../recovered_web/dashboard.script0.js#L261)、[applyNormalizedGearConfig · JS L694](../recovered_web/dashboard.script0.js#L694)。

**C 接口入口**：[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

```c
config = GET("/config");
for (field in supported_fields) {
    if (!locally_edited(field)) render(field, config_or_ui_default(field));
}
refresh_protocol_and_parent_child_visibility();
```

<a id="autosave"></a>
## 2. 防抖保存、脏字段、并发排队和结果回读

**证据层次**：前端与接口分支确认。

前端跟踪字段编辑代数，保存过程中出现新编辑则排队；带 fsdConfigRevision。pending／202 不视为已写 Flash。只有旧接口未返回 stored 时才补 POST /save。随后 GET 校对归一化结果，避免旧响应覆盖新草稿。

**前端入口**：[body · JS L994](../recovered_web/dashboard.script0.js#L994)、[scheduleAutoSave · JS L995](../recovered_web/dashboard.script0.js#L995)、[bindAutoSave · JS L998](../recovered_web/dashboard.script0.js#L998)、[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /save · 0x480f34ec](../decompiled/functions/480f34ec_recovered_http_post_save_480f34ec.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

```c
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
```

<a id="config_transaction"></a>
## 3. C 配置解析、冲突检查、命令提交和持久化

**证据层次**：C 控制入口确认；跨域顺序按原伪代码检查。

0x48101f34 从旧快照构造候选配置，解析已提供字段，检查主从依赖、数值范围、FSD revision、OTA 和运行停止条件。0x480e8070 按命令类型在 CAN 线程应用配置／动作。各配置域处理顺序不同，不能宣称所有字段跨域原子提交。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /save · 0x480f34ec](../decompiled/functions/480f34ec_recovered_http_post_save_480f34ec.c)。

```c
candidate = copy_current_config();
parse_present_fields(request, &candidate);
validate_ranges_dependencies_revision(candidate);
if (ota_busy || required_quiesce_not_complete) return BUSY;
submit_config_command_to_runtime(candidate);
if (!runtime_confirmed) return PENDING;
flush_required_configuration_domains();
return stored_or_flash_failure_with_actual_state();
```

<a id="can_gates"></a>
## 4. 通信总开关与三路 TX 开关

**证据层次**：接口确认；运行语义重建。

总通信和通道 TX 标志控制运行驱动及发送许可。关闭涉及停止在途动作和 CAN 运行恢复，可能返回 canb_disable_pending 等，不能等价为单个布尔值赋值后立即完成。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`canCommsEnabled`、`can0TxEnabled`、`can1TxEnabled`、`can2TxEnabled`。

```c
effective_tx[bus] = comms_enabled && tx_enabled[bus] && runtime_ready;
if (disabling) begin_controlled_stop_and_settle_pending_transmissions();
if (!stop_complete) return PENDING;
apply_can_driver_gate(); persist_configuration();
```

<a id="pin_layout"></a>
## 5. A／B／自动线序探测、保存和恢复

**证据层次**：C 与常量表确认。

0=A，1=B，2=Auto；A 为 2/3、4/5、26/27，B 为 3/2、50/49、31/30，均为 TX/RX GPIO、500 kbit/s。Auto 先 A，三路无有效帧才探测 B；探测约 1.5 秒且清理临时节点。保存需停止 CAN、写 NVS、恢复；已保存但恢复失败单独报告。

**前端入口**：[loadCanPinLayout · JS L58](../recovered_web/dashboard.script0.js#L58)、[saveCanPinLayout · JS L59](../recovered_web/dashboard.script0.js#L59)。

**C 接口入口**：[GET /can_pin_layout · 0x480681de](../decompiled/functions/480681de_recovered_http_get_can_pin_layout_480681de.c)、[POST /can_pin_layout · 0x480ff1e4](../decompiled/functions/480ff1e4_recovered_http_post_can_pin_layout_480ff1e4.c)。

**关键控件／参数**：`canPinLayoutSelect`、`canPinLayoutSave`。

```c
if (mode == AUTO) {
    pins = probe_listen_only(A, 1500000_us) ? A : probe_or_fallback(B);
    cleanup_probe_nodes_and_gpio();
}
POST_save(mode) {
    require_exact_enum(mode, 0, 1, 2); block_during_ota_or_boot_validation();
    quiesce_can(); commit_pin_mode_to_nvs(mode);
    if (!restore_can()) return SAVED_BUT_RESTORE_FAILED;
}
```

<a id="runtime_dispatch"></a>
## 6. 实时处理、模板修改、提交与终态确认

**证据层次**：任务与公共机制确认；具体业务通过后文重建。

can_rt 在 core1、优先级20运行；fsd_p0 在 core1、优先级24处理高优先路径。服务使用帧数和时间预算，模板、generation 和 token 匹配；提交成功与 terminal success 分开。0x4805cb5e 为多处业务发送的共用入口，0x480dc4f2 分派终态结果。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /can_diag · 0x4807fa5c](../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)。

```c
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
```

<a id="read_coordinator"></a>
## 7. 浏览器轮询调度、超时、暂停和性能记录

**证据层次**：前端确认；快照接口确认。

前端对多个读请求协调排队、去重、超时和暂停。按当前页面／展开状态选择诊断范围；OTA 期间暂停读取；本地保存最近48条 Web 客户端指标。C 分别构造快照和 HTTP 传输指标。

**前端入口**：[createDashboardReadCoordinator · JS L922](../recovered_web/dashboard.script0.js#L922)、[fetchStatusJson · JS L966](../recovered_web/dashboard.script0.js#L966)、[pollFast · JS L980](../recovered_web/dashboard.script0.js#L980)、[pollStatus · JS L981](../recovered_web/dashboard.script0.js#L981)、[setPolling · JS L993](../recovered_web/dashboard.script0.js#L993)。

**C 接口入口**：[GET /status_fast · 0x4806eb88](../decompiled/functions/4806eb88_recovered_http_get_status_fast_4806eb88.c)、[GET /status · 0x480c0178](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)、[GET /health · 0x480c2bda](../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)、[GET /web_metrics · 0x4806f630](../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)。

**关键控件／参数**：`poll`。

```c
poll_if_scope_visible_and_not_paused(endpoint);
if (same_read_in_flight) coalesce_request();
fetch_with_abort_timeout_and_record_duration();
on_ota_begin() { pause_reads(); await_active_reads_to_settle(); }
```


# 驾驶员与个性化设置

驾驶员位置识别主要采用 track、backrest、lift、tilt 四个位置字段；这与座椅手动六组动作不同。车辆未在 P 挡、位置数据过期、位置冲突、存储不足均有独立错误。识别距离的精确权重和阈值未完整还原。

**运行／解析关联函数（模块共享）**：[`0x480fa85c`](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)、[`0x48052ffe`](../decompiled/functions/48052ffe_FUN_ram_48052ffe.c)、[`0x4805228e`](../decompiled/functions/4805228e_FUN_ram_4805228e.c)、[`0x480ee8e2`](../decompiled/functions/480ee8e2_FUN_ram_480ee8e2.c)、[`0x480f6af8`](../decompiled/functions/480f6af8_FUN_ram_480f6af8.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="driver_list"></a>
## 1. 列表、当前驾驶员、参数来源与状态

**证据层次**：接口与前端确认。

返回 auto/manual、activeDriverId、lastDriverId、座椅快照和各驾驶员 feature 状态；未匹配时使用默认参数，前端区别开、关、未知。

**前端入口**：[loadDriverProfiles · JS L1324](../recovered_web/dashboard.script0.js#L1324)、[driverFeatureGroups · JS L1216](../recovered_web/dashboard.script0.js#L1216)。

**C 接口入口**：[GET /driver_profiles · 0x4806d76e](../decompiled/functions/4806d76e_recovered_http_get_driver_profiles_4806d76e.c)。

```c
s = GET("/driver_profiles");
render_current_and_last_driver(s);
render_parameter_source(s.activeDriverId > 0 ? DRIVER : DEFAULT);
render_features_as_on_off_unknown(s.drivers);
```

<a id="driver_add"></a>
## 2. 添加驾驶员并绑定当前位置

**证据层次**：接口确认；运行语义重建。

action=add，校验名称、P 挡及新鲜驾驶位位置；检查位置是否与已有驾驶员冲突，分配ID并持久化；冲突阻止覆盖。

**前端入口**：[postDriverProfile · JS L1347](../recovered_web/dashboard.script0.js#L1347)、[openDriverAddModal · JS L1386](../recovered_web/dashboard.script0.js#L1386)、[submitDriverAdd · JS L1393](../recovered_web/dashboard.script0.js#L1393)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverAddName`、`driverAddSubmit`。

```c
require_park_and_fresh_seat(); validate_name(name);
if (position_conflicts_with_existing_driver()) return POSITION_CONFLICT;
id = allocate_driver_id_or_full();
store_driver(id, name, current_four_axis_position); flush_driver_storage();
```

<a id="driver_rebind"></a>
## 3. 重新绑定驾驶位

**证据层次**：接口确认；运行语义重建。

页面明确确认覆盖，后端 action=rebind 验证 id、驻车及座椅数据，再检测位置冲突并写入新绑定。确认复选框是前端流程的一部分。

**前端入口**：[postDriverProfile · JS L1347](../recovered_web/dashboard.script0.js#L1347)、[openDriverRebindModal · JS L1411](../recovered_web/dashboard.script0.js#L1411)、[submitDriverRebind · JS L1420](../recovered_web/dashboard.script0.js#L1420)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverRebindConfirm`、`driverRebindSubmit`。

```c
ui_require_rebind_confirmation();
require_existing_driver(id); require_park_and_fresh_seat();
check_position_conflict_excluding(id);
replace_binding_position(id, current_position); persist();
```

<a id="driver_rename"></a>
## 4. 重命名驾驶员

**证据层次**：接口确认；运行语义重建。

后端检查驾驶员存在和名称合法后写存储；页面用回读列表更新显示。

**前端入口**：[postDriverProfile · JS L1347](../recovered_web/dashboard.script0.js#L1347)、[openDriverRenameModal · JS L1433](../recovered_web/dashboard.script0.js#L1433)、[submitDriverRename · JS L1440](../recovered_web/dashboard.script0.js#L1440)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverRenameName`、`driverRenameSubmit`。

```c
require_existing_driver(id); validate_name(name);
driver[id].name = name; persist(); reload_driver_list();
```

<a id="driver_delete"></a>
## 5. 删除与关联设置清理

**证据层次**：接口确认；运行语义重建。

删除驾驶员同时处理对应氛围灯、速度模板数据及当前选择。后端可报告 ambient_settings_erase_pending、speed_target_settings_erase，清理并非单个结构体删除。

**前端入口**：[postDriverProfile · JS L1347](../recovered_web/dashboard.script0.js#L1347)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

```c
require_existing_driver(id);
remove_driver_and_adjust_active_selection(id);
erase_driver_ambient_and_speed_target_domains(id);
if (erase_pending_or_failed) report_domain_and_persistence_state();
persist_driver_list();
```

<a id="driver_selection"></a>
## 6. 自动识别／手动选择及切换

**证据层次**：接口确认；运行语义重建。

action=auto/manual/select。切换前前端要求氛围灯草稿保存成功；运行端根据绑定位置或手动 id 应用驾驶员设置。具体自动匹配算法保留抽象谓词。

**前端入口**：[postDriverProfile · JS L1347](../recovered_web/dashboard.script0.js#L1347)、[driverParameterMode · JS L1210](../recovered_web/dashboard.script0.js#L1210)、[driverAutoRecognize · JS L1460](../recovered_web/dashboard.script0.js#L1460)。

**C 接口入口**：[POST /driver_profiles · 0x480fa85c](../decompiled/functions/480fa85c_recovered_http_post_driver_profiles_480fa85c.c)。

**关键控件／参数**：`driverModeToggle`。

```c
if (!save_pending_ambient_draft()) abort_ui_driver_change();
mode = AUTO_or_MANUAL;
selected = mode == AUTO ? match_fresh_seat_position() : requested_driver;
apply_driver_profile_or_default(selected); publish_active_driver();
```

<a id="driver_features"></a>
## 7. 每位驾驶员功能独立开关与并发检查

**证据层次**：前端路由选择与 C 入口确认。

请求带 driverId、driverFeature、expected，按功能选择对应接口；expected 用于检查旧状态。FSD 主开关、障碍物和雾灯有专用接口。驾驶员未变化时才应用回执，失败保留原显示。

**前端入口**：[driverFeatureRequest · JS L1226](../recovered_web/dashboard.script0.js#L1226)、[setDriverFeature · JS L1238](../recovered_web/dashboard.script0.js#L1238)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /fsd_auto_start/master · 0x480f2fc2](../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c)、[POST /config/ble_obstacle · 0x480f1e34](../decompiled/functions/480f1e34_recovered_http_post_config_ble_obstacle_480f1e34.c)、[POST /rear_fog/config · 0x480f4dda](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

```c
request = {driverId, driverFeature:key, expected:old};
route = choose_config_domain(key); request[domain_field(key)] = !old;
validate_driver_and_expected_value_on_backend();
apply_and_persist_driver_feature();
reload_driver_snapshot_without_overwriting_new_selection();
```


# FSD、自动激活与预警激活

0x481062c4 调用 0x480486a2、0x48048fea 等策略／状态辅助函数。泊车293请求与驾驶位30A模拟的字段、门控和发送前复检已核对；其他协议激活序列仍有缺口。信号、来源帧、计数、提交与终态共同决定执行，实际离车泊车效果未实测。下列语义函数名由分析者命名。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480f2fc2`](../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c)、[`0x481062c4`](../decompiled/functions/481062c4_FUN_ram_481062c4.c)、[`0x480486a2`](../decompiled/functions/480486a2_FUN_ram_480486a2.c)、[`0x48048fea`](../decompiled/functions/48048fea_FUN_ram_48048fea.c)、[`0x480c3830`](../decompiled/functions/480c3830_FUN_ram_480c3830.c)、[`0x4804bb9a`](../decompiled/functions/4804bb9a_FUN_ram_4804bb9a.c)、[`0x480d8f08`](../decompiled/functions/480d8f08_FUN_ram_480d8f08.c)、[`0x480da2a8`](../decompiled/functions/480da2a8_FUN_ram_480da2a8.c)、[`0x480c76a2`](../decompiled/functions/480c76a2_FUN_ram_480c76a2.c)、[`0x480c6318`](../decompiled/functions/480c6318_FUN_ram_480c6318.c)、[`0x480cb95c`](../decompiled/functions/480cb95c_FUN_ram_480cb95c.c)、[`0x480ccf42`](../decompiled/functions/480ccf42_FUN_ram_480ccf42.c)、[`0x480db9d4`](../decompiled/functions/480db9d4_FUN_ram_480db9d4.c)、[`0x480df834`](../decompiled/functions/480df834_FUN_ram_480df834.c)、[`0x4805abf4`](../decompiled/functions/4805abf4_FUN_ram_4805abf4.c)、[`0x4809ec88`](../decompiled/functions/4809ec88_FUN_ram_4809ec88.c)、[`0x4ff230e8`](../decompiled/functions/4ff230e8_FUN_ram_4ff230e8.c)、[`0x4ff232be`](../decompiled/functions/4ff232be_FUN_ram_4ff232be.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="fsd_protocol"></a>
## 1. V12／V13／V14 协议选择与特性适配

**证据层次**：C 归一化与前端适配确认。

协议值保留12、14，其余归一化为13。切换改变物理输入说明、V14驾驶模式、灯光和障碍物来源；运行动作未结束可能返回 control_version_busy。

**前端入口**：[updateFsdProtocolUi · JS L259](../recovered_web/dashboard.script0.js#L259)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`stalkControlVersion`。

```c
protocol = requested == 12 || requested == 14 ? requested : 13;
if (protocol_changes && control_action_in_flight()) return CONTROL_VERSION_BUSY;
apply_protocol_and_reset_protocol_dependent_state();
refresh_ui_capability_panels();
```

<a id="fsd_master"></a>
## 2. FSD 总开关与依赖门控

**证据层次**：接口确认；运行语义重建。

FSD 开关影响自动激活、增强功能等；总开关未开启而请求启用从属自动激活会被阻止。关闭需收敛在途状态，不能凭页面选中判断有效状态。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`fsdEnabled`。

```c
if (!candidate.fsdEnabled && request_enables_auto_start) return FSD_MASTER_REQUIRED;
effective_fsd = configured_fsd && runtime_can_ready && source_valid;
if (!effective_fsd) cancel_or_settle_fsd_owned_requests();
```

<a id="fsd_steady"></a>
## 3. 稳盘模式、物理短按启动与取消

**证据层次**：接口确认；运行语义重建。

页面说明右侧物理短按触发稳盘启动，再次短按取消。配置独立保存；运行策略包含稳盘相关激活逻辑，但未将该模式等同于机械固定方向盘。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)、[updateFsdProtocolUi · JS L259](../recovered_web/dashboard.script0.js#L259)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdSteadyModeEnabled`。

```c
on_right_short_press() {
    if (steady_latched) request_steady_cancel();
    else if (steady_enabled && activation_gates_pass()) request_steady_start();
}
advance_latch_only_after_matching_vehicle_or_tx_feedback();
```

<a id="fsd_p_start"></a>
## 4. P 挡一键出发与隐藏固定开启项

**证据层次**：固定开启行为确认；出发序列部分重建。

静态 HTML 将此行隐藏。updateFsdProtocolUi 强制 checkbox=true；POST /config 读取该字段后候选变量仍置1。应记为协议流程中的固定开启兼容字段，而非可自由关闭的独立开关。P 挡物理动作的完整报文序列仍有缺口。fsdParkLaunchCompleteCount在等待阶段观测到新一代、≤500ms的399状态6后增加，表示进入FSD，不是293泊车完成。

**前端入口**：[updateFsdProtocolUi · JS L259](../recovered_web/dashboard.script0.js#L259)、[applyNormalizedFsdParkStartConfig · JS L268](../recovered_web/dashboard.script0.js#L268)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdParkStartEnabled`。

```c
ui_hide(park_start_row); ui_checkbox(park_start, true);
candidate.fsdParkStartEnabled = true; // 本版归一化行为
on_park_short_press() {
    if (park_source_fresh && activation_gates_pass()) request_park_departure();
}
```

<a id="enhanced_ap"></a>
## 5. 隐藏增强 AP／智能召唤兼容设置

**证据层次**：配置到3FD字段覆盖链已确认；完整召唤未确认。

静态主卡开关隐藏，但驾驶员功能列表与配置字段仍包含 enhancedAutopilotEnabled。cfg+2B经4809EC88打包策略、4FF230E8解包，4FF232BE在CH/VEH3FD DLC8 MUX1清d2 bit3，V14另设d5 bit7；受对应线路运行许可限制。完整召唤会话、路线与完成反馈仍未确认。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)、[driverFeatureGroups · JS L1216](../recovered_web/dashboard.script0.js#L1216)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`enhancedAutopilotEnabled`。

```c
candidate.enhancedAutopilotEnabled = parse_bool_if_present();
persist_and_apply_candidate();
if (lane_allowed && enhanced_ap_for_lane && src_is_3FD_DLC8_MUX1) {
    out = src; out.d[2] &= 0xF7;
    if (protocol == 14) out.d[5] |= 0x80;
    submit_through_shared_source_path(out);
}
// 完整召唤状态机与厂家字段语义仍未确认。
```

<a id="space_parking"></a>
## 6. 退出 FSD 后自动请求泊车（v13 参数）

**证据层次**：原网页、反编译与关键机器码确认；车辆效果未验证。

CH399低四位3～6→1/2、观察间隔≤1500ms时开启窗口；默认延迟2秒、持续30秒。FSD/泊车/通信/CH TX须开启，399仍为1/2且≤1500ms，CH257 raw500须连续2帧、间隔及年龄≤100ms。随CH293 DLC8复制，d3高四位=C、d6高四位计数+1、d7为seed95加前7字节；来源+20ms截止，stream19发送前复检。移动暂停请求而倒计时继续，到期停止覆盖。所查路径无显式协议13限制；399边沿无严格局部校验门控，293来源校验未在构造器检查。未证明原车离车后完成泊车。

**前端入口**：[updateV13SpaceToSpaceUi · JS L249](../recovered_web/dashboard.script0.js#L249)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`v13SpaceToSpaceEnabled`、`v13ParkingDelayMs`、`v13ParkingDurationMs`。

```c
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
```

<a id="auto_start_master"></a>
## 7. 自动激活总开关与 revision 事务

**证据层次**：专用接口与前端处理确认。

专用接口处理总开关与子项归一化，使用 fsdConfigRevision，旧 revision 被拒绝并要求回读。子项默认重置的行为应按服务端回执而非页面默认猜测。

**前端入口**：[setFsdAutoStartMaster · JS L269](../recovered_web/dashboard.script0.js#L269)、[bindFsdAutoStartControls · JS L287](../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /fsd_auto_start/master · 0x480f2fc2](../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`fsdAutoStartEnabled`。

```c
require_fsd_master_if_enabling();
if (request.revision != current_revision) return FSD_CONFIG_STALE;
normalize_master_and_children(candidate); submit_runtime_config(candidate);
return_current_revision_and_persistence();
```

<a id="availability_frames"></a>
## 8. AP 可用确认帧数

**证据层次**：接口确认；运行语义重建。

页面限定1～10帧，运行辅助函数也归一化为该范围；累积可用来源观察后再推进激活阶段，失效观察中断确认。

**前端入口**：[bindFsdAutoStartControls · JS L287](../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdAutoStartAvailableConfirmFrames`。

```c
required = clamp(config.available_frames, 1, 10);
on_fresh_ap_observation() {
    if (available) consecutive_available++; else consecutive_available = 0;
    activation_ready = consecutive_available >= required;
}
```

<a id="auto_long_press"></a>
## 9. 右側长按持续激活

**证据层次**：接口确认；运行语义重建。

物理长按形成持续激活锁存，runtime_status 提供 continuousLatched、phase、attempts、successCount；退出条件和确认失败会收敛锁存。物理输入名称随协议改变。

**前端入口**：[bindFsdAutoStartControls · JS L287](../recovered_web/dashboard.script0.js#L287)、[updateFsdAutoStartInputLabels · JS L258](../recovered_web/dashboard.script0.js#L258)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdAutoStartLongPressEnabled`。

```c
if (long_press_edge && master && child_enabled) continuous_latched = true;
if (continuous_latched && activation_ready && gates_pass()) queue_activation_attempt();
if (stop_condition_or_fault) stop_and_clear_latch();
```

<a id="auto_pd"></a>
## 10. P→D 自动激活

**证据层次**：接口确认；运行语义重建。

监测挡位边沿，根据开关生成激活意图；必须同时满足可用帧确认与激活门控。First 字段对应首次流程，精确重置条件尚未完整确认。

**前端入口**：[bindFsdAutoStartControls · JS L287](../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdAutoStartFirstParkToDriveEnabled`。

```c
if (fresh_gear_edge(P, D) && first_pd_eligible() && enabled) arm_activation();
if (armed && activation_ready && gates_pass()) submit_activation();
// first_pd_eligible 的完整复位条件待核对。
```

<a id="auto_rd"></a>
## 11. R→D 后15秒速度窗口

**证据层次**：接口确认；运行语义重建。

前端说明 R→D 后15秒内达到所选速度，页面速度1～120 km/h；运行按挡位转换和速度快照决定请求。不得把页面阈值当作自动换挡允许速度。

**前端入口**：[bindFsdAutoStartControls · JS L287](../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdAutoStartReverseToDriveSpeedKph`。

```c
on_fresh_gear_edge(R, D) { rd_deadline = now + 15000_ms; rd_armed = true; }
if (rd_armed && now <= rd_deadline && speed_kph >= threshold && gates_pass())
    request_activation_and_consume_rd_trigger();
if (now > rd_deadline) rd_armed = false;
```

<a id="auto_ground"></a>
## 12. R 挡右侧物理动作一键激活

**证据层次**：接口确认；运行语义重建。

按协议对应的右侧物理输入、R挡和 Ground 子开关形成意图，由同一激活状态机执行。精确驾驶请求序列不能从前端说明直接推出。

**前端入口**：[updateFsdAutoStartInputLabels · JS L258](../recovered_web/dashboard.script0.js#L258)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdAutoStartGroundEnabled`。

```c
if (right_input_trigger && fresh_gear == R && ground_enabled)
    submit_ground_activation_intent_if_permitted();
```

<a id="occupancy_spoof"></a>
## 13. 驾驶位有人与安全带信号模拟

**证据层次**：原网页、反编译与关键机器码确认；车辆效果未验证。

独立开关随PARTY30A DLC8且seed0D校验有效的来源计数，要求通信、PARTY TX与传输许可；无局部FSD总开关、泊车窗口、零车速或关门条件。d0=(原值&E0)|09同时模拟有人/已系带，d6高四位计数+1，d7重算；来源+5ms截止。原值已满足、计数重复或pending时跳过。只读VEH3A1 MUX2确认，连续两帧且间隔/年龄≤300ms。内部TX标志由终态更新；公开Active还要求开关启用、成功TX与两帧3A1目标反馈均≤300ms。反馈状态匹配不证明因果或泊车完成。自动换挡读取构造前的30A输入缓存，上游自回波剔除仍未完整确认。

**前端入口**：[bindFsdAutoStartControls · JS L287](../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`fsdDriverOccupiedSpoofEnabled`。

```c
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
```

<a id="warning_activation"></a>
## 14. 车道／碰撞预警激活与级别掩码

**证据层次**：接口确认；运行语义重建。

车道标准／严重通过位掩码1／2组合；在允许预警状态出现时生成激活意图。side collision 与疲倦另有独立开关。确切告警位和触发去重保留为抽象识别函数。

**前端入口**：[commercialToggle · JS L1584](../recovered_web/dashboard.script0.js#L1584)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdWarningActivationEnabled`、`fsdWarningLaneStandard`、`fsdWarningLaneSevere`、`fsdWarningLaneModes`。

```c
modes = normalized_warning_lane_mask();
if (warning_activation_enabled && warning_matches_selected_modes(vehicle, modes))
    request_activation_if_ready();
```

<a id="side_fatigue_activation"></a>
## 15. 侧撞与疲倦预警激活

**证据层次**：接口确认；运行语义重建。

两类告警独立进入激活策略，仍受 FSD 总开关、来源新鲜度和可用状态限制；并非浏览器轮询收到提示即发 CAN。

**前端入口**：[commercialToggle · JS L1584](../recovered_web/dashboard.script0.js#L1584)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdSideCollisionActivationEnabled`、`fsdDdawEnabled`。

```c
if ((side_collision_enabled && eligible_side_warning()) ||
    (fatigue_enabled && eligible_fatigue_warning()))
    request_activation_through_shared_state_machine();
```

<a id="safety_aggregate"></a>
## 16. “安全驾驶”组合开关

**证据层次**：前端组合逻辑确认。

前端合并预警激活、侧撞、疲倦、标准＋严重车道模式，以及支持时的盲区氛围灯。它没有同名独立 C 主开关；部分开启显示 partial。

**前端入口**：[commercialSafetyState · JS L1577](../recovered_web/dashboard.script0.js#L1577)、[commercialToggle · JS L1584](../recovered_web/dashboard.script0.js#L1584)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

```c
on_safety_master(on) {
    if (on) fsdWarningLaneModes = 3;
    set(fsdWarningActivationEnabled, on); set(fsdSideCollisionActivationEnabled, on);
    set(fsdDdawEnabled, on);
    if (blind_spot_supported) save_ambient_blind_spot(on);
}
```


# 速度补偿与驾驶员目标模板

设置链和 30 项模板格式已确认。runtime_status 区分限速、原车偏移、智能设速、目标来源、finalRaw 与 confirmedRaw。下面算式是语义表达；各协议的精确分段边界、百分比编码、舍入和计数器布局未全部确认，不能直接用于发车控帧。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480f9322`](../decompiled/functions/480f9322_recovered_http_post_speed_target_save_480f9322.c)、[`0x480f99bc`](../decompiled/functions/480f99bc_recovered_http_get_speed_target_config_480f99bc.c)、[`0x480f66c0`](../decompiled/functions/480f66c0_FUN_ram_480f66c0.c)、[`0x480381cc`](../decompiled/functions/480381cc_FUN_ram_480381cc.c)、[`0x4805883a`](../decompiled/functions/4805883a_FUN_ram_4805883a.c)、[`0x4809ec88`](../decompiled/functions/4809ec88_FUN_ram_4809ec88.c)、[`0x4810ca34`](../decompiled/functions/4810ca34_FUN_ram_4810ca34.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="speed_enable"></a>
## 1. 自动速度偏移与稳定模式

**证据层次**：接口确认；运行语义重建。

启用稳定模式会在前端同时启用自动偏移；运行采用配置、协议、原车状态及驾驶员模板生成目标。稳定模式参数旧面板被隐藏，不能把隐藏字段视为无运行代码。

**前端入口**：[bindStableSpeedControls · JS L252](../recovered_web/dashboard.script0.js#L252)、[updateV13SpeedOffsetUi · JS L254](../recovered_web/dashboard.script0.js#L254)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`autoSpeedOffsetEnabled`、`stableSpeedOffsetEnabled`。

```c
if (!effective_auto_offset || !fresh_speed_sources) return NO_OVERRIDE;
target = calculate_target_for_protocol_and_driver();
if (stable_enabled) target = apply_stability_policy(target);
submit_speed_override_from_fresh_source();
```

<a id="hw3_strategy"></a>
## 2. HW3舒适／标准／迅捷及分段目标

**证据层次**：接口确认；运行语义重建。

手动或随车策略；UI将舒适与车距3/4、标准与2、迅捷与1关联。每策略包含低于60及60、70…120的8个目标值。多数旧参数行隐藏但仍参与配置读写。

**前端入口**：[selectHw3Strategy · JS L632](../recovered_web/dashboard.script0.js#L632)、[updateHw3Strategy · JS L650](../recovered_web/dashboard.script0.js#L650)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`hw3ManualStrategyEnabled`、`hw3ManualStrategy`。

```c
strategy = manual_enabled ? manual_strategy : decode_vehicle_strategy();
band = select_hw3_speed_band(limit_kph); // 精确所有边界待核对
target_kph = hw3_targets[strategy][band];
```

<a id="v14_profile"></a>
## 3. V14五种驾驶模式

**证据层次**：接口确认；运行语义重建。

Chill、Normal、Hurry、Max、Sloth枚举0～4，手动／车机自动来源独立记录。不能将 V14 模式枚举等同于 HW3 三种车距策略。

**前端入口**：[updateV14DrivingProfileUi · JS L250](../recovered_web/dashboard.script0.js#L250)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`v14ManualDrivingProfileEnabled`、`v14ManualDrivingProfile`。

```c
effective_profile = manual_enabled ? clamp(profile, 0, 4) : observed_v14_profile;
choose_v14_speed_policy(effective_profile);
publish_automatic_effective_profile_and_source();
```

<a id="speed_low"></a>
## 4. 低速偏移与 raw 百分比换算

**证据层次**：单位与配置校验确认；目标算法部分重建。

V13低速页面说明限速低于50；v13LowSpeedOffsetPct为0～60。其他最大偏移raw字段在浏览器显示 raw/4%，提交百分比乘4，页面0～60%对应raw0～240。这两种字段单位不同。

**前端入口**：[getVal · JS L262](../recovered_web/dashboard.script0.js#L262)、[setVal · JS L248](../recovered_web/dashboard.script0.js#L248)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`v13LowSpeedOffsetPct`、`speedOffsetMaxPctRaw`、`v14SpeedOffsetMaxPctRaw`。

```c
v13_low_pct = clamp(ui_v13_low_pct, 0, 60);
max_pct_raw = clamp(round(ui_max_pct * 4), 0, 240);
if (is_low_speed_protocol_case()) calculate_low_target_with_protocol_limits();
```

<a id="speed_high"></a>
## 5. 高速偏移、原车智能设速与目标来源

**证据层次**：接口确认；运行语义重建。

页面注明 V13高速度偏移用于原车智能设速关闭场景；运行状态提供 originalSmartSetSpeedKnown/Enabled、vehicleOffsetUsable、highTargetSource。目标来源可能为原车设速或自定义模板，需按状态分支选择。

**前端入口**：[updateV13SpeedOffsetUi · JS L254](../recovered_web/dashboard.script0.js#L254)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`v13HighSpeedOffsetPct`。

```c
if (!original_smart_set_speed_known) defer_override_until_source_known();
if (original_smart_set_speed_enabled && vehicle_target_usable) use_vehicle_target_policy();
else use_configured_high_speed_target_policy();
// 精确优先级及协议换算留在原反编译中，未伪造固定公式。
```

<a id="speed_slew"></a>
## 6. 降速阶梯与确认值恢复

**证据层次**：接口确认；运行语义重建。

当前界面为每500ms下降1～10 km/h；后台还保留 speedOffsetDownSlewPctPerSec、stableSpeedDownIntervalMs。运行追踪 downSlewActive、recoveryPhase、slewStepCount、confirmedRaw，说明以确认状态处理恢复。不要混淆两套单位。

**前端入口**：[getVal · JS L262](../recovered_web/dashboard.script0.js#L262)、[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`speedDownStepKph`。

```c
if (new_target < last_confirmed_target && down_step_due())
    candidate_target = max(new_target, last_confirmed_target - step_kph);
else candidate_target = new_target;
submit_candidate();
on_matching_terminal_or_vehicle_confirmation() update_confirmed_target();
on_failure() enter_recovery_without_assuming_candidate_was_applied();
```

<a id="speed_templates"></a>
## 7. 车机同步／自定义30格模板

**证据层次**：格式、接口与 V13 展开确认。

后端带driverId、revision、customSpeedEnabled与target0…target29，索引限速5、10…150，目标整数1～255。V13界面显示8段并展开到50～139中的对应5km/h格；以驾驶员隔离保存。

**前端入口**：[speedTargetChooseSource · JS L1517](../recovered_web/dashboard.script0.js#L1517)、[speedTargetPostBody · JS L1506](../recovered_web/dashboard.script0.js#L1506)、[speedTargetExpandV13Template · JS L1510](../recovered_web/dashboard.script0.js#L1510)。

**C 接口入口**：[GET /speed_target/config · 0x480f99bc](../decompiled/functions/480f99bc_recovered_http_get_speed_target_config_480f99bc.c)、[POST /speed_target/save · 0x480f9322](../decompiled/functions/480f9322_recovered_http_post_speed_target_save_480f9322.c)。

**关键控件／参数**：`customSpeedEnabled`、`speedTargetSourceCustom`、`speedTargetSourceVehicle`。

```c
require_current_driver_and_revision(driver_id, revision);
for (i = 0; i < 30; ++i) require_integer_in_range(target[i], 1, 255);
apply_speed_target_runtime_transaction(candidate);
commit_driver_speed_target_blob();
return_revision_targets_and_effective_custom_enabled();
```

<a id="speed_quick"></a>
## 8. 百分比批量设置模板

**证据层次**：前端计算确认。

批量输入0～100%，浏览器以round(limit×(1+pct/100))计算8个起始值，再展开30格并经原接口保存；这只是编辑快捷方式。

**前端入口**：[speedTemplateQuickValues · JS L1518](../recovered_web/dashboard.script0.js#L1518)、[speedTemplateQuickApply · JS L1519](../recovered_web/dashboard.script0.js#L1519)。

**C 接口入口**：[POST /speed_target/save · 0x480f9322](../decompiled/functions/480f9322_recovered_http_post_speed_target_save_480f9322.c)。

**关键控件／参数**：`speedTemplateQuickPct`、`speedTemplateQuickApply`。

```c
require(0 <= quick_pct && quick_pct <= 100);
for (limit in [50,60,70,80,90,100,110,120])
    ui_start_target[limit] = round(limit * (1 + quick_pct / 100.0));
expand_v13_bands_into_30_targets(); save_template();
```

<a id="speed_conflict"></a>
## 9. 驾驶员变化、版本冲突与保存重试

**证据层次**：接口与前端确认。

stale_driver会重新加载；stale_revision保留草稿要求检查；flash_write与runtime_rejected分别提示。回执必须匹配驾驶员、请求、revision和提交的全部目标。

**前端入口**：[speedTargetSave · JS L1515](../recovered_web/dashboard.script0.js#L1515)、[speedTargetEnsureDriver · JS L1514](../recovered_web/dashboard.script0.js#L1514)。

**C 接口入口**：[POST /speed_target/save · 0x480f9322](../decompiled/functions/480f9322_recovered_http_post_speed_target_save_480f9322.c)、[GET /speed_target/config · 0x480f99bc](../decompiled/functions/480f99bc_recovered_http_get_speed_target_config_480f99bc.c)。

**关键控件／参数**：`speedTargetRetrySave`。

```c
if (driver_changed) reload_for_new_driver();
else if (revision_conflict) preserve_draft_and_require_review();
else if (runtime_rejected || flash_write_failed) preserve_draft_for_retry();
else verify_response_matches_submitted_targets();
```


# 免打扰、摄像头、滚轮与扭矩状态机

扭矩模块的输入处理0x4804ea2a与状态机0x4804cfd2已定位，可直接核对0x370、0x39B、门控、相位、方向和随机区间。攝像头“关闭”是页面名称；静态证据支持报文状态修改，不能声称物理断电。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x4804e2a8`](../decompiled/functions/4804e2a8_FUN_ram_4804e2a8.c)、[`0x4804c54e`](../decompiled/functions/4804c54e_FUN_ram_4804c54e.c)、[`0x4804cfd2`](../decompiled/functions/4804cfd2_FUN_ram_4804cfd2.c)、[`0x4804ea2a`](../decompiled/functions/4804ea2a_FUN_ram_4804ea2a.c)、[`0x4804c858`](../decompiled/functions/4804c858_FUN_ram_4804c858.c)、[`0x4804cb48`](../decompiled/functions/4804cb48_FUN_ram_4804cb48.c)、[`0x4804cd2c`](../decompiled/functions/4804cd2c_FUN_ram_4804cd2c.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="dnd_master"></a>
## 1. 免打扰主开关及必要子项

**证据层次**：接口确认；运行语义重建。

启用主开关时前端同步要求摄像头屏蔽和ISA抑制；扭矩和滚轮有独立从项及运行门控。

**前端入口**：[applyDndMasterRequiredChildren · JS L652](../recovered_web/dashboard.script0.js#L652)、[applyNormalizedDndConfig · JS L664](../recovered_web/dashboard.script0.js#L664)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`dndEnabled`。

```c
if (ui_enables_dnd) { cabin_camera_disable = 1; isa_chime_suppress = 1; }
parse_and_normalize_dnd_configuration();
effective_children = master && each_child && feature_source_gates();
```

<a id="dnd_camera"></a>
## 2. 摄像头状态屏蔽与V14回退延时

**证据层次**：接口确认；运行语义重建。

V14延时页面限制3～10秒，按协议和运行状态决定覆盖／回退。camera运行快照独立于主开关，具体覆盖位与回退触发未完整恢复。

**前端入口**：[getVal · JS L262](../recovered_web/dashboard.script0.js#L262)、[applyNormalizedDndConfig · JS L664](../recovered_web/dashboard.script0.js#L664)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`cabinCameraDisableEnabled`、`v14CameraDisableDelaySec`。

```c
if (dnd_enabled && camera_disable_enabled && camera_source_eligible())
    apply_protocol_camera_status_override();
if (v14_fallback_condition()) restore_source_after(configured_3_to_10_seconds);
// 不推断真实摄像头供电。
```

<a id="dnd_isa"></a>
## 3. ISA提示音条件抑制

**证据层次**：接口确认；运行语义重建。

runtime_status记录ISA条件、HOS、来源位及apply／submit计数，说明满足条件时改变来源帧对应字段；不等于全局静音。

**前端入口**：[applyNormalizedDndConfig · JS L664](../recovered_web/dashboard.script0.js#L664)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`isaChimeSuppressEnabled`。

```c
if (master && isa_enabled && isa_chime_condition_active && fresh_source) {
    output = clone_source(); suppress_selected_isa_chime_field(output); submit(output);
}
count_apply_submit_and_terminal_results();
```

<a id="dnd_scroll"></a>
## 4. 左音量／右速度滚轮免打扰

**证据层次**：接口确认；运行语义重建。

滚轮方式枚举0=左音量、1=右速度，通过运行状态发送对应滚轮行为；与自动换挡的滚轮映射为不同功能，存在发送所有者协调。

**前端入口**：[updateDndSpeedPeriodicUi · JS L651](../recovered_web/dashboard.script0.js#L651)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`dndScrollEnabled`、`dndScrollMode`。

```c
if (dnd_scroll_enabled && eligible_hands_on_reminder())
    submit_selected_scroll_action(mode == 0 ? LEFT_VOLUME : RIGHT_SPEED);
settle_scroll_owner_before_next_action();
```

<a id="dnd_periodic"></a>
## 5. 滚轮后台随机周期

**证据层次**：接口确认；运行语义重建。

页面秒数转换成毫秒，启用后按min/max随机安排下一次；只在相应滚轮模式和运行条件有效时提出动作。

**前端入口**：[getVal · JS L262](../recovered_web/dashboard.script0.js#L262)、[updateDndSpeedPeriodicUi · JS L651](../recovered_web/dashboard.script0.js#L651)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`dndSpeedPeriodicEnabled`、`dndSpeedPeriodMinMs`、`dndSpeedPeriodMaxMs`。

```c
period_min_ms = round(ui_min_seconds * 1000);
period_max_ms = round(ui_max_seconds * 1000);
if (periodic_allowed && now >= next_at) {
    request_scroll_action(); next_at = now + random_range(min_ms, max_ms);
}
```

<a id="torque_config"></a>
## 6. 扭矩区间、单位、帧数与时间校验

**证据层次**：C 校验确认。

0x4804e2a8检查预防幅值150～180 centi-Nm（1.50～1.80Nm），纠正180～250（1.80～2.50Nm）；min≤max；纠正帧数0或10～255；发送时段至少100ms，休息／暂停可同时为0，非0时至少100ms；DAS超时100～2000ms。前端默认纠正最大2.40Nm，区别于后端允许上限2.50。

**前端入口**：[saveTorqueNagEnabled · JS L662](../recovered_web/dashboard.script0.js#L662)、[torqueNagControlValue · JS L653](../recovered_web/dashboard.script0.js#L653)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

**关键控件／参数**：`dndTorqueEnabled`、`torqueNagMaintenanceEnabled`。

```c
validate_ordered_range(preventive_magnitude, 150, 180);
validate_ordered_range(corrective_magnitude, 180, 250);
require(frames == 0 || (10 <= frames && frames <= 255));
require_nonzero_time_ranges_at_least(100_ms);
require_zero_pair_or_ordered_pause_range();
require(100 <= das_timeout_ms && das_timeout_ms <= 2000);
```

<a id="torque_source"></a>
## 7. 0x39B HOS 与0x370扭矩来源校验

**证据层次**：C 输入检查确认。

0x4804ea2a仅处理相关输入；0x370要求DLC≥8，检查字节累加偏移0x73校验、扭矩原值范围、近100ms自回波；来源年龄超过5000us拒绝，pending状态也阻止覆盖。0x39B更新DAS有效性/HOS。

**前端入口**：[renderTorqueNagStatus · JS L657](../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
on_frame(f) {
    if (f.id == 0x39B) update_das_hos_freshness(f);
    if (f.id != 0x370 || f.dlc < 8) return;
    if (matches_recent_own_echo(f)) { echo_drop++; return; }
    if (!oem_checksum_and_torque_raw_valid(f)) { reject++; return; }
    if (source_age_us(f) > 5000 || output_pending) { stale_or_pending_drop++; return; }
    process_torque_source(f);
}
```

<a id="torque_gate"></a>
## 8. 停发条件、DAS新鲜度与方向确认

**证据层次**：状态机与输入单位对应确认。

有效开关链失效即停发；DAS未见／无效／过期进入等待；转角判断约±50°（参数deci-degree范围±500），并用3次观察确认方向，观察间隔过长会重新arming。方向通常反向于转角符号，接近中心时沿用已知方向。

**前端入口**：[renderTorqueNagStatus · JS L657](../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
if (!effective_enable_chain) return disabled_no_output();
if (!das_seen || !das_valid || das_age > timeout) return wait_das_no_output();
if (angle_deci_deg < -500 || angle_deci_deg > 500) return angle_block_no_output();
dir = angle > 10 ? NEGATIVE : angle < -10 ? POSITIVE : previous_direction;
if (!three_observation_direction_confirmation()) return ARMING;
```

<a id="torque_maintenance"></a>
## 9. 持续预防与活动／休息周期

**证据层次**：C 状态／随机时间／幅值确认。

maintenance期间在方向对应幅值区间选目标；活动、休息区间由xorshift类PRNG选择，休息为0则连续维护；stability-verify也可发送预防幅值。

**前端入口**：[updateTorqueNagSummary · JS L655](../recovered_web/dashboard.script0.js#L655)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)、[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

```c
switch (phase) {
case MAINTENANCE:
    torque = signed_random_preventive_magnitude(direction);
    if (activity_elapsed) enter(rest_range_is_zero ? MAINTENANCE : REST);
    break;
case REST:
    no_output(); if (rest_elapsed) enter(MAINTENANCE); break;
case STABILITY_VERIFY: send_preventive_until_verify_end(); break;
}
```

<a id="torque_corrective"></a>
## 10. H2等待、纠正前停发、纠正与恢复观察

**证据层次**：状态机确认；全部HOS枚举映射未完整列出。

H2持续达到配置等待进入pre-corrective-pause；之后在设置正／负帧数、幅值和发送／暂停周期内纠正；提示恢复后经过stability-verify再回maintenance。零帧方向禁用对应纠正。fault-hold与monitor-only是不发输出的独立相位。

**前端入口**：[updateTorqueNagSummary · JS L655](../recovered_web/dashboard.script0.js#L655)、[renderTorqueNagStatus · JS L657](../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
if (persistent_h2_ms >= h2_wait_ms) enter(PRE_CORRECTIVE_PAUSE);
if (pre_pause_elapsed) enter(CORRECTIVE);
if (phase == CORRECTIVE) {
    choose_enabled_direction_and_remaining_frames();
    send_corrective_magnitude_in_configured_bursts();
    pause_between_bursts_if_configured();
}
if (hos_recovers) enter(STABILITY_VERIFY);
if (stable_for_verify_duration) enter(MAINTENANCE);
```

<a id="torque_terminal"></a>
## 11. 发送确认、计数器冲突和终态统计

**证据层次**：计数与输入处理确认；完整终态调用链部分间接。

txAccepted、txSuccess/Failure、submitRejected、terminalTimeout、counterCollisions、lateReceipt分别统计，不能把accepted作为已生效。修改帧沿用协议计数器/校验规则并跟踪自己的回波。

**前端入口**：[renderTorqueNagStatus · JS L657](../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
output = clone_valid_oem_template(); encode_selected_torque(output);
update_counter_and_checksum_by_protocol();
token = submit(output);
if (accepted(token)) mark_pending_and_track_counter();
on_terminal(token, result) update_success_failure_and_clear_matching_pending();
```


# 自动换挡、方向盘、滚轮与障碍物

0x4810ab0a为换挡运行服务的主要关联入口，0x48056082提取障碍物状态。bleObstacle变量名不能证明使用蓝牙；前端明确V13/V14读取PARTY CAN的0x255和0x12B，V12采用雷达融合。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480f1e34`](../decompiled/functions/480f1e34_recovered_http_post_config_ble_obstacle_480f1e34.c)、[`0x480f43a8`](../decompiled/functions/480f43a8_recovered_http_post_config_uss_radar_480f43a8.c)、[`0x48037d22`](../decompiled/functions/48037d22_FUN_ram_48037d22.c)、[`0x4810ab0a`](../decompiled/functions/4810ab0a_FUN_ram_4810ab0a.c)、[`0x48049bb6`](../decompiled/functions/48049bb6_FUN_ram_48049bb6.c)、[`0x48056082`](../decompiled/functions/48056082_FUN_ram_48056082.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="gear_gates"></a>
## 1. 总开关、车速、刹车、安全带、次数与冷却

**证据层次**：接口确认；运行语义重建。

允许速度页面0～8km/h；单次刹车周期次数0表示无限；默认要求安全带，刹车旁路为独立设置。运行反馈有blockedCount、lastBlock、brakeConfirmed、driverSeatStatusAgeMs、templateAgeMs。

**前端入口**：[updateGearFeatureUi · JS L689](../recovered_web/dashboard.script0.js#L689)、[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`gearAutomationEnabled`、`gearSeatbeltSafetyEnabled`、`gearBrakeSafetyBypassEnabled`、`gearShiftLimit`、`gearAutoShiftMaxSpeedKph`、`gearCooldownMs`。

```c
allowed = master && fresh_gear_speed_template && speed <= max_speed;
if (seatbelt_required) allowed &= fresh_confirmed_seatbelt;
if (!brake_bypass) allowed &= brake_authorized;
allowed &= cooldown_elapsed && (shift_limit == 0 || count < shift_limit);
if (!allowed) publish_block_reason(); else accept_gear_intent();
```

<a id="gear_steering"></a>
## 2. 刹车＋转向D/R切换与P挡方向确认

**证据层次**：接口确认；运行语义重建。

角度UI以度展示，提交乘10；P挡和D/R阈值分别设置。方向符号、当前挡位与启用项确定候选挡，仍经过共用门控。

**前端入口**：[updateGearFeatureUi · JS L689](../recovered_web/dashboard.script0.js#L689)、[getVal · JS L262](../recovered_web/dashboard.script0.js#L262)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`gearBrakeToggleEnabled`、`gearParkSteeringEnabled`、`gearParkSteeringThresholdDeciDeg`、`gearDriveReverseSteeringThresholdDeciDeg`。

```c
threshold_deci = round(ui_degrees * 10);
if (brake_steering_enabled && steering_threshold_crossed()) {
    if (gear == P && park_steering_enabled) target = infer_drive_reverse_from_direction();
    else if (gear == D || gear == R) target = opposite_drive_reverse();
    request_gear_if_shared_gates_pass(target);
}
```

<a id="gear_preset"></a>
## 3. 智能流畅参数快捷设置

**证据层次**：前端常量确认。

前端批量设1000ms冷却、P30°、D/R60°、障碍物30°，经标准保存流程提交；不是C中新增的独立模式。

**前端入口**：[applyGearSmoothPreset · JS L695](../recovered_web/dashboard.script0.js#L695)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`gearSmoothPreset`。

```c
set(gearCooldownMs, 1000);
set(gearParkSteeringThresholdDeciDeg, 300);
set(gearDriveReverseSteeringThresholdDeciDeg, 600);
set(bleObstacleSteeringThresholdDeciDeg, 300);
schedule_config_save();
```

<a id="obstacle_direct"></a>
## 4. PARTY直连障碍建议与方向校验

**证据层次**：前端协议说明与运行来源确认；位解码部分重建。

专用revision/requestId接口保存功能开关；V13/V14只在P挡处理新鲜0x255建议及0x12B方向，进入D/R或挡位过期清空；回P需重新收到两类新数据。可选方向盘确认中D要求左转，R要求右转。

**前端入口**：[updateObstacleProtocolUi · JS L680](../recovered_web/dashboard.script0.js#L680)、[saveBleObstacleConfig · JS L854](../recovered_web/dashboard.script0.js#L854)。

**C 接口入口**：[POST /config/ble_obstacle · 0x480f1e34](../decompiled/functions/480f1e34_recovered_http_post_config_ble_obstacle_480f1e34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`bleObstacleFeatureEnabled`、`bleObstacleSteeringConfirmEnabled`、`bleObstacleSteeringThresholdDeciDeg`。

```c
if (protocol != V12) {
    if (gear != P || gear_stale) clear_party_suggestion_and_direction();
    if (!new_255_and_12b_after_entering_P) return WAIT_SOURCE;
    if (steering_confirm_enabled && !direction_matches_suggestion()) return BLOCKED;
    request_suggested_gear_through_shared_gates();
}
```

<a id="obstacle_v12"></a>
## 5. V12前后超声波／雷达融合

**证据层次**：接口确认；运行语义重建。

V12可在P/D/R提出目标；综合前后距离、有效探头数、雷达健康和方向，数据失效停止请求。gearUss前缀阈值为原始单位，不能直接按厘米解释。

**前端入口**：[updateObstacleProtocolUi · JS L680](../recovered_web/dashboard.script0.js#L680)。

**C 接口入口**：[POST /config/uss_radar · 0x480f43a8](../decompiled/functions/480f43a8_recovered_http_post_config_uss_radar_480f43a8.c)、[GET /config/uss_radar · 0x4806afe2](../decompiled/functions/4806afe2_recovered_http_get_config_uss_radar_4806afe2.c)。

```c
if (protocol == V12) {
    if (!fresh_healthy_radar_and_uss()) return NO_SUGGESTION;
    obstacle_state = classify_raw_distances_with_configured_thresholds();
    target = fuse_front_rear_and_direction(obstacle_state);
    request_gear_through_shared_gates(target);
}
```

<a id="uss_settings"></a>
## 6. 雷达近／中／远／自定义及版本保存

**证据层次**：接口与参数确认。

revision控制并发；验证preset、block/caution阈值与有效数量，区分invalid_radar_config、stale_revision、radar_busy、flash_write、pending/stored。预设的原始阈值应以回读为准。

**前端入口**：[selectUssRadarPreset · JS L674](../recovered_web/dashboard.script0.js#L674)、[ussRadarConfigBody · JS L675](../recovered_web/dashboard.script0.js#L675)、[saveUssRadarConfig · JS L678](../recovered_web/dashboard.script0.js#L678)。

**C 接口入口**：[GET /config/uss_radar · 0x4806afe2](../decompiled/functions/4806afe2_recovered_http_get_config_uss_radar_4806afe2.c)、[POST /config/uss_radar · 0x480f43a8](../decompiled/functions/480f43a8_recovered_http_post_config_uss_radar_480f43a8.c)。

**关键控件／参数**：`gearUssDistancePreset`、`gearUssSdiBlockMax`、`gearUssSdiCautionMax`、`gearUssMinValidSdi`、`gearUssRadarBlockMaxRaw`、`gearUssRetryLoad`、`gearUssRetrySave`。

```c
if (revision != current_revision) return STALE_REVISION;
validate_radar_preset_and_raw_thresholds(candidate);
submit_radar_config_transaction();
return_current_config_with_revision_and_persistence();
```

<a id="gear_scroll"></a>
## 7. 左右滚轮正负动作映射

**证据层次**：接口确认；运行语义重建。

各方向枚举0无、1D、2R、3P、4D/R切换。物理滚动产生候选请求，走相同速度、次数、冷却及反馈门控。

**前端入口**：[updateGearFeatureUi · JS L689](../recovered_web/dashboard.script0.js#L689)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`gearScrollEnabled`、`gearLeftPositiveAction`、`gearLeftNegativeAction`、`gearRightPositiveAction`、`gearRightNegativeAction`。

```c
on_scroll(side, direction) {
    action = mappings[side][direction];
    target = action == TOGGLE_DR ? opposite_of_current_DR() : action_to_gear(action);
    if (target != NONE) request_gear_if_shared_gates_pass(target);
}
```

<a id="gear_brake_credit"></a>
## 8. 滚轮低速单次刹车授权

**证据层次**：接口确认；运行语义重建。

在低速条件使用一次刹车授权；刹车旁路开启时页面禁用此项。授权的完整消费／复位边界未完全追出，保留抽象状态条件。

**前端入口**：[updateGearFeatureUi · JS L689](../recovered_web/dashboard.script0.js#L689)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`gearScrollBrakeAuthorizationEnabled`。

```c
if (eligible_low_speed_brake_cycle()) arm_one_shot_scroll_authorization();
if (scroll_gear_request && one_shot_credit_valid()) {
    consume_credit_at_confirmed_request_boundary(); request_gear();
}
// 具体消费与复位边沿仍需逐条反汇编核对。
```

<a id="gear_feedback"></a>
## 9. 请求提交、挡位反馈、失败与超时

**证据层次**：接口确认；运行语义重建。

运行记录requestPending、lastAction/Block以及sourceFollow终态；在模板与安全状态新鲜时提交，确认实际挡位和终态后推进，失败/超时清理。

**前端入口**：[updateObstacleConfigDiagnostics · JS L288](../recovered_web/dashboard.script0.js#L288)。

**C 接口入口**：[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /status · 0x480c0178](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

```c
if (gear_intent && !request_pending && gates_pass()) submit_gear_request();
if (matching_tx_failure || action_deadline_expired) cancel_pending_and_publish_failure();
if (fresh_vehicle_gear_matches_target) complete_action_and_update_cooldown_count();
```


# 座椅手动调节、位置记忆与停止

网页左右各6组双向动作，共24个方向按钮；实际记忆反馈轴以固件状态字段为准，不能据按钮数推断每个方向都有独立位置传感器。十个slot按0～4左座、5～9右座映射。

**运行／解析关联函数（模块共享）**：[`0x48100e14`](../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)、[`0x48100218`](../decompiled/functions/48100218_FUN_ram_48100218.c)、[`0x4810051c`](../decompiled/functions/4810051c_FUN_ram_4810051c.c)、[`0x48100820`](../decompiled/functions/48100820_FUN_ram_48100820.c)、[`0x48100b10`](../decompiled/functions/48100b10_FUN_ram_48100b10.c)、[`0x480409ae`](../decompiled/functions/480409ae_FUN_ram_480409ae.c)、[`0x48041018`](../decompiled/functions/48041018_FUN_ram_48041018.c)、[`0x4804132a`](../decompiled/functions/4804132a_FUN_ram_4804132a.c)、[`0x480daefc`](../decompiled/functions/480daefc_FUN_ram_480daefc.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="seat_enable"></a>
## 1. 座椅功能许可与通道

**证据层次**：配置与接口确认。

seatControlBus为隐藏字段，前端默认2；后端仍读写并验证通道及可发送状态。失效返回seat_disabled或seat_can_unavailable。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /status · 0x480c0178](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

**关键控件／参数**：`seatMemoryEnabled`、`seatControlBus`。

```c
seat_enabled = configured_enabled && selected_bus_available_for_tx;
if (!configured_enabled) return SEAT_DISABLED;
if (!selected_bus_available_for_tx) return SEAT_CAN_UNAVAILABLE;
```

<a id="seat_manual"></a>
## 2. 24方向按住调节、250ms续租与松开停止

**证据层次**：接口确认；运行语义重建。

data-seat-manual-mask编码方向，action=manual_start持续按住每250ms发送，manual_stop在释放、页面失焦等事件触发。C校验mask、所有者与停止状态，避免相反方向同时生效。完整租约到期值未确认。

**前端入口**：[beginSeatManual · JS L294](../recovered_web/dashboard.script0.js#L294)、[postSeatManual · JS L292](../recovered_web/dashboard.script0.js#L292)、[releaseSeatManual · JS L293](../recovered_web/dashboard.script0.js#L293)、[bindSeatManualControls · JS L295](../recovered_web/dashboard.script0.js#L295)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)。

```c
pointer_down(button) {
    mask = button.data_seat_manual_mask; POST(manual_start, mask);
    every(250_ms) while_held POST(manual_start, mask);
}
pointer_up_or_page_lost() { stop_keepalive(); POST(manual_stop); }
backend_validate_mask_and_refresh_manual_lease();
on_release_or_expired_lease() send_stop_template();
```

<a id="seat_save"></a>
## 3. 十个位置槽保存与Flash确认

**证据层次**：接口确认；运行语义重建。

save(slot)不是保存名称，而是取当前位置写入位置槽；需要位置和0x4F3模板就绪，异步请求完成后sequence增加，前端等待新sequence和slot状态。

**前端入口**：[triggerSeatAction · JS L291](../recovered_web/dashboard.script0.js#L291)、[waitSeatActionResult · JS L290](../recovered_web/dashboard.script0.js#L290)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)、[GET /status · 0x480c0178](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

```c
require(slot >= 0 && slot < 10); require_fresh_position_and_4F3_template();
if (seat_action_busy) return SEAT_BUSY;
queue_save_position(slot);
runtime_commit_slot_to_flash_and_publish_new_action_sequence();
ui_wait_for_sequence_and_valid_slot_before_showing_saved();
```

<a id="seat_recall"></a>
## 4. 调用记忆、动作终态与物理输入让行

**证据层次**：接口确认；运行语义重建。

recall要求槽有效；目标已达到则可能不启动动作，否则运行按位置反馈生成调用请求。实时状态提供physicalRequest、recallActive、manualActive，物理输入和失败的精确优先级部分重建。

**前端入口**：[triggerSeatAction · JS L291](../recovered_web/dashboard.script0.js#L291)、[waitSeatActionResult · JS L290](../recovered_web/dashboard.script0.js#L290)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)、[GET /status · 0x480c0178](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

```c
require_valid_slot(slot);
if (already_at_target_position()) publish_no_motion_success();
else { begin_recall(slot); submit_control_from_fresh_template(); }
on_target_reached_or_cancel_or_fault_or_physical_override() settle_and_stop_recall();
```

<a id="seat_cancel"></a>
## 5. 停止全部手动和记忆动作

**证据层次**：接口确认；运行语义重建。

cancel同时释放前端按住状态，并请求固件安全停止；seat_quiesce_busy表示还在结算。

**前端入口**：[triggerSeatAction · JS L291](../recovered_web/dashboard.script0.js#L291)、[releaseSeatManual · JS L293](../recovered_web/dashboard.script0.js#L293)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)。

**关键控件／参数**：`seatStopButton`。

```c
stop_ui_manual_timer(); clear_held_button();
POST("/seat_action", {action:"cancel"});
backend_cancel_pending_recall_and_manual_requests();
settle_stop_frame_before_reporting_idle();
```

<a id="seat_names"></a>
## 6. 十个槽位名称本地保存

**证据层次**：前端确认。

名称使用t2can-seat-slot-names-v1 localStorage；槽名编辑不向/seat_action发送，不属于NVS位置槽数据。

**前端入口**：[bindSeatSlotNames · JS L208](../recovered_web/dashboard.script0.js#L208)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

```c
on_slot_name_edit(slot, text) {
    names[slot] = text; local_storage_set("t2can-seat-slot-names-v1", names);
}
```


# 六区氛围灯、FSD提示、盲区、转向与迎宾

六区为门0～3、仪表台4～5，驾驶员配置带revision。运行按区域合成目标并根据来源generation/terminal恢复。各覆盖功能的完整全序优先级尚未确认，不能擅自写成固定“盲区最高、迎宾次之”等。

**运行／解析关联函数（模块共享）**：[`0x480f584c`](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)、[`0x4803c556`](../decompiled/functions/4803c556_FUN_ram_4803c556.c)、[`0x4804162c`](../decompiled/functions/4804162c_FUN_ram_4804162c.c)、[`0x480416da`](../decompiled/functions/480416da_FUN_ram_480416da.c)、[`0x4809faa6`](../decompiled/functions/4809faa6_FUN_ram_4809faa6.c)、[`0x4804304e`](../decompiled/functions/4804304e_FUN_ram_4804304e.c)、[`0x48044258`](../decompiled/functions/48044258_FUN_ram_48044258.c)、[`0x4804354e`](../decompiled/functions/4804354e_FUN_ram_4804354e.c)、[`0x48043ab4`](../decompiled/functions/48043ab4_FUN_ram_48043ab4.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="ambient_zones"></a>
## 1. 六区常亮、区域使能、RGB与亮度

**证据层次**：配置结构确认；输出组合部分重建。

提交z0…z5 Enabled、Brightness、Color；Color为6位RGB十六进制，区域亮度0～100。按选区编辑保存，关闭区域不等于清除其存储颜色。

**前端入口**：[ambientPostBodyBase · JS L1529](../recovered_web/dashboard.script0.js#L1529)、[ambientPostSaveOnce · JS L1566](../recovered_web/dashboard.script0.js#L1566)。

**C 接口入口**：[GET /ambient_config · 0x4806adda](../decompiled/functions/4806adda_recovered_http_get_ambient_config_4806adda.c)、[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`ambientEnabled`、`ambientBrightness`、`ambientColor`、`ambientZone0Enabled`、`ambientZone1Enabled`、`ambientZone2Enabled`、`ambientZone3Enabled`、`ambientZone4Enabled`、`ambientZone5Enabled`。

```c
require_six_zones();
for (z = 0; z < 6; ++z) validate_enabled_rgb_and_brightness(z);
store_driver_ambient_base();
if (constant_enabled) request_enabled_zone_targets_from_fresh_sources();
```

<a id="ambient_all"></a>
## 2. 应用当前颜色亮度到全部区域

**证据层次**：前端确认。

浏览器把当前选区的enabled、RGB及亮度一起复制到全部区，再经相同接口保存；不是逐区六次HTTP写入。

**前端入口**：[ambientApplyZoneToAll · JS L1521](../recovered_web/dashboard.script0.js#L1521)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`ambientApplyAll`。

```c
selected = config.zones[current_zone];
for (z = 0; z < 6; ++z) config.zones[z] = copy(selected); // 含enabled
schedule_single_ambient_transaction();
```

<a id="ambient_fsd"></a>
## 3. FSD激活氛围提示

**证据层次**：接口确认；运行语义重建。

页面ambientFsdCueEnabled映射后端fsdCueEnabled，由实际FSD状态驱动区域灯效；与常亮总开关、迎宾独立字段。确切提示颜色与时序未全部恢复。

**前端入口**：[ambientPostBodyBase · JS L1529](../recovered_web/dashboard.script0.js#L1529)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`ambientFsdCueEnabled`。

```c
save_field("fsdCueEnabled", ui_fsd_cue);
if (cue_enabled && eligible_fsd_state_transition()) compose_fsd_cue_target();
merge_with_other_active_zone_targets();
```

<a id="ambient_blind"></a>
## 4. 盲区区域、亮度与警报后恢复

**证据层次**：接口确认；运行语义重建。

前／后／仪表台区域掩码，亮度10～100、延迟0～1000ms；有后端capability检查。警报解除后恢复原目标，而非硬编码一律关灯。

**前端入口**：[ambientPostBodyBase · JS L1529](../recovered_web/dashboard.script0.js#L1529)、[ambientBlindSpotDraftValid · JS L1525](../recovered_web/dashboard.script0.js#L1525)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`blindSpotEnabled`、`blindSpotBrightness`、`blindSpotAreaFront`、`blindSpotAreaRear`、`blindSpotAreaDash`、`blindSpotRestoreDelayMs`。

```c
if (!capability.blind_spot) reject_or_hide_unsupported_fields();
if (blind_warning_active) compose_warning_for_selected_side_and_area_mask();
if (warning_just_cleared) restore_at = now + delay_ms;
if (now >= restore_at) restore_current_underlying_zone_target();
```

<a id="ambient_turn"></a>
## 5. 左右转向／双闪跟随

**证据层次**：接口确认；运行语义重建。

左转只覆盖左侧，右转只覆盖右侧；双闪由turnFollowHazards决定；颜色、亮度、三类区域分别设置并与灯效状态合成。

**前端入口**：[ambientTurnFollowDraftValid · JS L1528](../recovered_web/dashboard.script0.js#L1528)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`turnFollowEnabled`、`turnFollowHazards`、`turnFollowColor`、`turnFollowBrightness`、`turnFollowAreaFront`、`turnFollowAreaRear`、`turnFollowAreaDash`。

```c
if (turn_follow_enabled) {
    sides = indicators_are_hazards ? (follow_hazards ? BOTH : NONE) : indicator_side;
    compose_turn_follow_for(sides, areas, rgb, brightness);
}
on_indicator_release() restore_underlying_target_when_owner_settled();
```

<a id="welcome_styles"></a>
## 6. 五种迎宾样式

**证据层次**：接口确认；运行语义重建。

柔光环抱、冰蓝流光、暖金礼序、黑幕启幕、光迹回环，枚举0～4。0x4804304e/0x48044258提供迎宾阶段与目标生成证据；逐帧颜色曲线和区域路径未完整还原。

**前端入口**：[ambientWelcomeRenderSettings · JS L1552](../recovered_web/dashboard.script0.js#L1552)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`welcomeEnabled`、`welcomeStyle0`、`welcomeStyle1`、`welcomeStyle2`、`welcomeStyle3`、`welcomeStyle4`。

```c
if (welcome_enabled && accepted_welcome_trigger) {
    style = clamp(config.welcomeStyle, 0, 4);
    initialize_style_stage_and_zone_mask(style);
}
each_tick_advance_style_stage_and_compose_zone_targets();
// 具体路径／曲线使用原状态机，本文不伪造数组。
```

<a id="welcome_trigger"></a>
## 7. 开门与座椅无人触发、过滤和重触发

**证据层次**：接口确认；运行语义重建。

mode0要求座椅确认无人，mode1接受有效开门；runtime有openMask、origin、triggered/filtered/completed。座椅无数据不等价为无人。

**前端入口**：[ambientPostBodyBase · JS L1529](../recovered_web/dashboard.script0.js#L1529)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`welcomeTriggerMode0`、`welcomeTriggerMode1`。

```c
if (fresh_valid_door_open_edge) {
    allowed = mode == ANY_VALID_DOOR || fresh_confirmed_unoccupied;
    if (allowed) start_or_retrigger_welcome(); else filtered_count++;
}
publish_stage_reason_openmask_origin();
```

<a id="welcome_params"></a>
## 8. 迎宾亮度、节奏、颜色和六区掩码

**证据层次**：参数确认；曲线部分重建。

亮度10～100，tempo0～2，mask1～63；迎宾独立于常亮开关，颜色为#RRGGBB。前端参数验证与后端结构验证均存在。

**前端入口**：[ambientPostBodyBase · JS L1529](../recovered_web/dashboard.script0.js#L1529)。

**C 接口入口**：[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

**关键控件／参数**：`welcomeBrightness`、`welcomeTempo`、`welcomeColor`。

```c
validate(style <= 4, trigger_mode <= 1, 10 <= brightness <= 100);
validate(tempo <= 2, 1 <= mask <= 63, rgb_is_valid);
apply_style_tempo_and_mask_to_welcome_state();
```

<a id="ambient_transaction"></a>
## 9. 按驾驶员保存、冲突、待写与终态恢复

**证据层次**：接口与状态字段确认；精确恢复分支部分重建。

检查driverId与revision，OTA或驾驶员变化中止；后端区分available、blockedReason、persistence pending/stored及ambient_tx_fault。前端核对布尔、数值、颜色、6区回读。运行记录fault、outstandingMask、terminal超时并恢复来源。

**前端入口**：[ambientLoadConfig · JS L1557](../recovered_web/dashboard.script0.js#L1557)、[ambientPostSaveOnce · JS L1566](../recovered_web/dashboard.script0.js#L1566)、[ambientSaveBeforeDriverChange · JS L1563](../recovered_web/dashboard.script0.js#L1563)。

**C 接口入口**：[GET /ambient_config · 0x4806adda](../decompiled/functions/4806adda_recovered_http_get_ambient_config_4806adda.c)、[POST /ambient_config · 0x480f584c](../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

```c
require_current_driver_and_revision(); validate_complete_config();
submit_ambient_runtime_transaction(); persist_driver_blob();
if (flash_failure) return_actual_revision_with_pending();
track_zone_request_generation_and_outstanding_terminal_mask();
on_invalidated_or_failed_terminal() recover_or_publish_ambient_tx_fault();
```


# 远光、爆闪与后雾灯

远光相关发送与vcleft共用所有者协调，rear_fog有独立配置和运行启动接口。减速度阈值单位0.01m/s²，原始来源年龄与发送反馈单独管理。转向氛围灯见09。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480f4dda`](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)、[`0x481015a6`](../decompiled/functions/481015a6_recovered_http_post_rear_fog_runtime_481015a6.c)、[`0x48054a82`](../decompiled/functions/48054a82_FUN_ram_48054a82.c)、[`0x48054722`](../decompiled/functions/48054722_FUN_ram_48054722.c)、[`0x480cca8a`](../decompiled/functions/480cca8a_FUN_ram_480cca8a.c)、[`0x48053f2a`](../decompiled/functions/48053f2a_FUN_ram_48053f2a.c)、[`0x4810bb96`](../decompiled/functions/4810bb96_FUN_ram_4810bb96.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="high_force"></a>
## 1. FSD强制远光与合帧

**证据层次**：接口确认；运行语义重建。

FSD/物理操作条件下覆盖灯光请求，runtime包含vcleft owner、generation、mergeCount、localEchoDrops、lightingMerges，说明和共用来源帧合并而非持续任意发包。

**前端入口**：[applyNormalizedLightingConfig · JS L665](../recovered_web/dashboard.script0.js#L665)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`fsdForceHighPhysicalEnabled`。

```c
if (force_high_enabled && eligible_fsd_physical_condition())
    merge_force_high_request_into_fresh_vcleft_template();
if (vcleft_owner_busy) defer_until_owner_can_merge();
submit_and_settle_matching_generation();
```

<a id="high_strobe"></a>
## 2. 第二次长按0.5秒远光爆闪

**证据层次**：接口确认；运行语义重建。

页面描述第二次长按0.5秒触发；间隔1～100ms，次数0～20，0不限。前端无效值不提交，后端也验证；精确双次手势状态与波形边沿部分重建。

**前端入口**：[lightingNumericInputValid · JS L243](../recovered_web/dashboard.script0.js#L243)、[applyNormalizedLightingConfig · JS L665](../recovered_web/dashboard.script0.js#L665)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`longPressHighBeamStrobeEnabled`、`highBeamStrobeIntervalMs`、`highBeamStrobeCount`。

```c
if (second_eligible_long_press_500ms && strobe_enabled) begin_strobe();
if (phase_deadline_due && (count_limit == 0 || emitted_count < count_limit))
    toggle_high_request_and_schedule_next(interval_ms);
if (release_or_stop_condition_or_fault) restore_original_light_request();
```

<a id="fog_deceleration"></a>
## 3. 减速后雾灯与轻重阈值

**证据层次**：接口确认；运行语义重建。

0x48054a82处理0x273、0x118等来源并调用减速判断0x48054722；配置enabled、mildDecelCx100、hardDecelCx100，来源新鲜和实际反馈控制请求。具体轻重脉冲节奏未全恢复。

**前端入口**：[saveRearFogConfig · JS L886](../recovered_web/dashboard.script0.js#L886)。

**C 接口入口**：[GET /rear_fog/config · 0x48066e12](../decompiled/functions/48066e12_recovered_http_get_rear_fog_config_48066e12.c)、[POST /rear_fog/config · 0x480f4dda](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

**关键控件／参数**：`rear-fog-strobe-tgl`、`rear-fog-mild-threshold`、`rear-fog-hard-threshold`。

```c
observe_vehicle_sources_and_compute_deceleration();
if (auto_fog_enabled && fresh_feedback_and_source)
    select_mild_or_hard_braking_pattern_by_thresholds();
submit_fog_request_from_current_template_and_track_terminal();
```

<a id="fog_reverse"></a>
## 4. 倒车双闪＋8次雾灯警示

**证据层次**：接口确认；运行语义重建。

reverseWarningEnabled使倒车触发警示模式，前端明确双闪＋8次后雾灯；退出R、来源过期和故障需停止/恢复。8次为页面行为证据，详细脉冲时序待核对。

**前端入口**：[saveRearFogConfig · JS L886](../recovered_web/dashboard.script0.js#L886)。

**C 接口入口**：[POST /rear_fog/config · 0x480f4dda](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

**关键控件／参数**：`reverse-warning-tgl`。

```c
if (fresh_reverse_entry && reverse_warning_enabled)
    arm_reverse_hazard_and_fog_pattern(8);
if (reverse_exit_or_source_stale_or_fault) settle_and_restore();
```

<a id="fog_reverse_steady"></a>
## 5. 倒车后雾灯常亮

**证据层次**：接口确认；运行语义重建。

reverseRearFogSteadyEnabled独立于倒车警示，按R挡持续请求；两者同时启用的完整仲裁序未全部确认。

**前端入口**：[saveRearFogConfig · JS L886](../recovered_web/dashboard.script0.js#L886)。

**C 接口入口**：[POST /rear_fog/config · 0x480f4dda](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)。

**关键控件／参数**：`reverse-rear-fog-steady-tgl`。

```c
if (reverse_steady_enabled && fresh_gear == R) request_reverse_steady_fog();
else remove_reverse_steady_request_and_recompute_fog_owner_target();
```

<a id="fog_pilot"></a>
## 6. 领航许可与本次运行启动／停止

**证据层次**：专用C接口确认。

rearFogPilotEnabled保存许可，/rear_fog/runtime的enabled操作本次active；许可关闭拒绝启动pilot_not_permitted。活动状态无需等同于持久化许可。

**前端入口**：[toggleRearFogRuntime · JS L889](../recovered_web/dashboard.script0.js#L889)。

**C 接口入口**：[POST /rear_fog/config · 0x480f4dda](../decompiled/functions/480f4dda_recovered_http_post_rear_fog_config_480f4dda.c)、[POST /rear_fog/runtime · 0x481015a6](../decompiled/functions/481015a6_recovered_http_post_rear_fog_runtime_481015a6.c)。

**关键控件／参数**：`rear-fog-pilot-tgl`、`rear-fog-pilot-run-btn`。

```c
save_permission_to_config(pilot_permitted);
POST_runtime(enabled) {
    if (enabled && !pilot_permitted) return PILOT_NOT_PERMITTED;
    submit_runtime_pilot_start_or_stop(enabled);
    return_actual_pilot_active_state();
}
```


# 电池预热和维修模式

预热开关是有确认、计时和关闭恢复的命令；配置enabled、runtimeAllowed、requestActive、heatingActive分别表示不同层次。维修模式参数存在，但全部厂家诊断报文操作未恢复。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480e8070`](../decompiled/functions/480e8070_FUN_ram_480e8070.c)、[`0x4810bb96`](../decompiled/functions/4810bb96_FUN_ram_4810bb96.c)、[`0x48107fd2`](../decompiled/functions/48107fd2_FUN_ram_48107fd2.c)、[`0x4810834a`](../decompiled/functions/4810834a_FUN_ram_4810834a.c)、[`0x4805abf4`](../decompiled/functions/4805abf4_FUN_ram_4805abf4.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="preheat_start"></a>
## 1. 预热请求与15／30／45／60分钟许可

**证据层次**：接口确认；运行语义重建。

支持四种时间，显式开启请求由运行状态机处理；监测heating、thermal、SOC、electrical新鲜度，展示目标/最低/最高温度、电压电流功率。许可不等于已实际加热。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)、[renderBatteryPreheatStatus · JS L713](../recovered_web/dashboard.script0.js#L713)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

**关键控件／参数**：`batteryPreheatEnabled`、`batteryPreheatDurationMin`。

```c
require_duration_one_of(15, 30, 45, 60);
on_explicit_enable() submit_preheat_control_intent_once();
tick_preheat() {
    update_heating_temperature_soc_and_electrical_observations();
    if (runtime_allowed && sources_and_template_ready) request_preheat();
    publish_requested_active_and_observed_heating_separately();
}
```

<a id="preheat_timer"></a>
## 2. 运行倒计时、超时关闭与停止确认

**证据层次**：接口确认；运行语义重建。

timerStarted、elapsedMs、remainingMs、timedOut与stopState独立存在；期限结束产生关闭流程，记录offFramesPending、terminalSeen/Pending和shutdownAttempts/Failures，关闭未确认保留恢复状态。计时启动的全部条件部分重建。

**前端入口**：[renderBatteryPreheatStatus · JS L713](../recovered_web/dashboard.script0.js#L713)。

**C 接口入口**：[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

```c
if (timer_start_condition_confirmed && !timer_started) start_allowed_duration_timer();
if (deadline_reached) { timed_out = true; begin_confirmed_shutdown(); }
if (stop_frame_accepted) track_terminal_and_remaining_off_frames();
if (shutdown_confirmed) mark_completed(); else retain_recovery_required();
```

<a id="preheat_retry"></a>
## 3. 关闭失败恢复与显式重试

**证据层次**：命令语义及前端防重放确认。

POST带batteryPreheatRetryStop；后端区分recovery_required、command_blocked、retry_blocked/invalid和restore_failed。前端每个显式预热编辑只尝试一次HTTP，连接结果未知不自动重放开关命令。

**前端入口**：[retryBatteryPreheatStop · JS L729](../recovered_web/dashboard.script0.js#L729)、[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`batteryPreheatRetryStop`。

```c
if (explicit_retry_stop) validate_recovery_state_and_submit_stop_retry();
if (command_result_unknown) read_state_without_replaying_enable();
if (duration_change_blocked) preserve_other_edits_and_restore_duration_from_readback();
```

<a id="service_mode"></a>
## 4. CANB维修模式开关

**证据层次**：配置确认；完整运行协议未确认。

后端解析并保存canbServiceModeEnabled，与CAN许可和关闭结算相关。运行端具体诊断/维修报文全序列未确认，只给出配置及有效状态框架。

**前端入口**：[saveConfig · JS L999](../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`canbServiceModeEnabled`。

```c
candidate.canbServiceModeEnabled = parse_bool_if_present();
submit_config_and_persist();
effective_service_mode = configured && relevant_bus_ready;
// 维修协议的完整服务ID、触发及退出序列尚未恢复。
```


# CAN抓包、过滤与文件下载

记录器包含过滤切换、缓冲、停止与下载生命周期。TX的统计单位在rec_status明确为lifecycle_events，不能当成物理总线上成功发送的帧数。

**运行／解析关联函数（模块共享）**：[`0x480fd584`](../decompiled/functions/480fd584_recovered_http_post_rec_start_480fd584.c)、[`0x480fd2fc`](../decompiled/functions/480fd2fc_FUN_ram_480fd2fc.c)、[`0x480fd37e`](../decompiled/functions/480fd37e_FUN_ram_480fd37e.c)、[`0x4806c4e8`](../decompiled/functions/4806c4e8_recovered_http_get_rec_status_4806c4e8.c)、[`0x4806fee2`](../decompiled/functions/4806fee2_recovered_http_get_rec_download_4806fee2.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="rec_filters"></a>
## 1. 包含／排除ID、三路总线和RX／TX

**证据层次**：请求结构与C验证确认。

包含/排除字符串解析标准ID，buses位掩码1/2/4；RX/TX不能同时关闭。duration页面1～3600秒，提交毫秒。非法ID列表拒绝。另保留setRecorderPreset快捷填值函数，设置指定ID/总线、RX+TX及30秒，但未发现页面调用，不能标为可见预设按钮。

**前端入口**：[recorderBody · JS L1057](../recovered_web/dashboard.script0.js#L1057)、[setRecorderPreset · JS L1058](../recovered_web/dashboard.script0.js#L1058)。

**C 接口入口**：[POST /rec_start · 0x480fd584](../decompiled/functions/480fd584_recovered_http_post_rec_start_480fd584.c)。

**关键控件／参数**：`recInclude`、`recExclude`、`recBus1Enabled`、`recBus2Enabled`、`recBus3Enabled`、`recRxEnabled`、`recTxEnabled`。

```c
parse_standard_id_lists(include, exclude);
require_nonempty_bus_mask(); require(rx || tx);
duration_ms = clamp(ui_seconds, 1, 3600) * 1000;
filter = make_filter(include, exclude, buses, rx, tx);
```

<a id="rec_start"></a>
## 2. 异步切换过滤器、内存缓冲与开始抓包

**证据层次**：C启动分支确认。

阻止重复开始和下载中开始；分配PSRAM/内部RAM缓冲，启动三路过滤器转换，pending直到filterGeneration实际应用。错误包括buffer_unavailable、filter_transition_failed、pipeline_busy。

**前端入口**：[startRec · JS L1066](../recovered_web/dashboard.script0.js#L1066)。

**C 接口入口**：[POST /rec_start · 0x480fd584](../decompiled/functions/480fd584_recovered_http_post_rec_start_480fd584.c)、[GET /rec_status · 0x4806c4e8](../decompiled/functions/4806c4e8_recovered_http_get_rec_status_4806c4e8.c)。

**关键控件／参数**：`recDurationSec`。

```c
if (active || download_in_progress) return BUSY;
buffer = allocate_recorder_buffer_with_available_memory_strategy();
request_filter_transition_for_three_buses();
if (!filters_applied) return PENDING;
start_capture_and_deadline();
```

<a id="rec_collect"></a>
## 3. 帧与TX生命周期采集、容量和丢弃状态

**证据层次**：接口确认；运行语义重建。

按过滤规则收集RX以及TX提交/终态等事件，发布count、bytes、ring、dropped、optionalSinkRejected、source、stopReason和各bus统计。缓冲满的确切覆盖策略以ring状态与原实现为准。

**前端入口**：[pollRec · JS L1065](../recovered_web/dashboard.script0.js#L1065)。

**C 接口入口**：[GET /rec_status · 0x4806c4e8](../decompiled/functions/4806c4e8_recovered_http_get_rec_status_4806c4e8.c)。

```c
on_optional_can_event(event) {
    if (!recording || !matches_filter(event)) return;
    append_to_recorder_buffer_or_count_drop(event);
}
if (duration_elapsed) stop_capture_with_reason();
publish_count_bytes_ring_and_lifecycle_counters();
```

<a id="rec_stop_clear"></a>
## 4. 停止、清空与运行互斥

**证据层次**：接口确认。

停止后保留已录内容供下载；清空在录制或下载时被拒绝。

**前端入口**：[stopRec · JS L1067](../recovered_web/dashboard.script0.js#L1067)、[clearRec · JS L1068](../recovered_web/dashboard.script0.js#L1068)。

**C 接口入口**：[POST /rec_stop · 0x480fd45c](../decompiled/functions/480fd45c_recovered_http_post_rec_stop_480fd45c.c)、[POST /rec_clear · 0x4806e04e](../decompiled/functions/4806e04e_recovered_http_post_rec_clear_4806e04e.c)。

```c
stop() { stop_capture_and_settle_filter_pipeline(); keep_saved_buffer(); }
clear() {
    if (recording || downloading) return BUSY;
    reset_saved_length_counters_and_metadata();
}
```

<a id="rec_download"></a>
## 5. CSV／BIN下载与文件头

**证据层次**：C接口与输出类型确认。

format选择csv或bin；必须已有记录且停止录制，下载互斥。Content-Disposition为p1_3can_recording.csv/bin。BIN不是简单原始CAN payload串联，包含版本/记录结构，未重写导出格式。

**前端入口**：[downloadRecorderFile · JS L1070](../recovered_web/dashboard.script0.js#L1070)。

**C 接口入口**：[GET /rec_download · 0x4806fee2](../decompiled/functions/4806fee2_recovered_http_get_rec_download_4806fee2.c)。

```c
if (!saved_recording) return NO_RECORDING;
if (active || download_busy) return BUSY;
lock_download_snapshot();
stream(format == BIN ? versioned_binary_records : csv_records);
unlock_download_snapshot_on_completion_or_disconnect();
```


# CAN实验规则、发送、校验与预设

规则按每条选择的总线展开lane，每lane采用本线路真实来源模板并发回原线路。接管仅协调固件内置发送，不会阻止原车节点发送。P0仅限CH 3FD MUX0，由fsd_p0发送；can_rt准备来源与实验逻辑。

**运行／解析关联函数（模块共享）**：[`0x480ed598`](../decompiled/functions/480ed598_recovered_http_post_api_can_experiment_listen_480ed598.c)、[`0x480ab7ba`](../decompiled/functions/480ab7ba_recovered_http_post_api_can_experiment_source_confirm_480ab7ba.c)、[`0x480ec3f8`](../decompiled/functions/480ec3f8_recovered_http_post_api_can_experiment_validate_480ec3f8.c)、[`0x480eb56e`](../decompiled/functions/480eb56e_recovered_http_post_api_can_experiment_start_480eb56e.c)、[`0x480eab84`](../decompiled/functions/480eab84_recovered_http_post_api_can_experiment_stop_480eab84.c)、[`0x480e5cfa`](../decompiled/functions/480e5cfa_FUN_ram_480e5cfa.c)、[`0x480e6b84`](../decompiled/functions/480e6b84_FUN_ram_480e6b84.c)、[`0x480dc4f2`](../decompiled/functions/480dc4f2_FUN_ram_480dc4f2.c)、[`0x480ac732`](../decompiled/functions/480ac732_recovered_http_post_api_can_experiment_presets_480ac732.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="experiment_rules"></a>
## 1. 最多4规则、每规则3路与标准ID

**证据层次**：前端与后端结构确认。

每规则指定标准11位ID、buses、DLC及模式；删除/编辑导致已确认generation失效。至少一条，最多四条，每条最多三个lane。

**前端入口**：[canExperimentCollect · JS L80](../recovered_web/dashboard.script0.js#L80)、[canExperimentAddRule · JS L74](../recovered_web/dashboard.script0.js#L74)、[canExperimentRemoveRule · JS L75](../recovered_web/dashboard.script0.js#L75)。

**C 接口入口**：[POST /api/can-experiment/listen · 0x480ed598](../decompiled/functions/480ed598_recovered_http_post_api_can_experiment_listen_480ed598.c)。

```c
require(1 <= rule_count && rule_count <= 4);
for (rule in rules) { require(id <= 0x7ff && buses_mask != 0); expand_bus_lanes(rule); }
on_rule_edit() { confirmed_generation = 0; disable_start_button(); }
```

<a id="experiment_listen"></a>
## 2. 来源监听、停止监听与来源确认

**证据层次**：接口确认；运行语义重建。

监听按lane缓存最新帧、DLC、稳定来源帧和周期；确认来源返回DLC。状态提供waiting_bus/template、templateAgeMs、observedPeriodMs、sourceConfirmed。

**前端入口**：[canExperimentListen · JS L84](../recovered_web/dashboard.script0.js#L84)、[canExperimentConfirmSource · JS L85](../recovered_web/dashboard.script0.js#L85)。

**C 接口入口**：[POST /api/can-experiment/listen · 0x480ed598](../decompiled/functions/480ed598_recovered_http_post_api_can_experiment_listen_480ed598.c)、[POST /api/can-experiment/listen/stop · 0x480ecf86](../decompiled/functions/480ecf86_recovered_http_post_api_can_experiment_listen_stop_480ecf86.c)、[POST /api/can-experiment/source/confirm · 0x480ab7ba](../decompiled/functions/480ab7ba_recovered_http_post_api_can_experiment_source_confirm_480ab7ba.c)。

```c
listen(rules) { register_optional_source_observers(); state = LISTENING; }
on_real_source_frame(bus, id) { update_lane_template_dlc_period_and_stability(); }
confirm(rule) { require_acceptable_source(); mark_source_confirmed(); return_dlc(); }
stop_listen() { unregister_observers_when_settled(); }
```

<a id="experiment_bits"></a>
## 3. 按位匹配与修改掩码

**证据层次**：按位语义确认；全部保留位规则参照原验证函数。

每位为不关心/0/1；matchMask/value筛选来源，editMask/value修改输出。3FD/3C2的未改MUX匹配位可缩小接管范围；不能修改MUX位。

**前端入口**：[canExperimentCycleBit · JS L76](../recovered_web/dashboard.script0.js#L76)、[canExperimentCompileBits · JS L78](../recovered_web/dashboard.script0.js#L78)、[canExperimentCollect · JS L80](../recovered_web/dashboard.script0.js#L80)。

**C 接口入口**：[POST /api/can-experiment/validate · 0x480ec3f8](../decompiled/functions/480ec3f8_recovered_http_post_api_can_experiment_validate_480ec3f8.c)。

```c
if ((source_bytes & match_mask) != (match_value & match_mask)) return NO_MATCH;
output_bytes = (source_bytes & ~edit_mask) | (edit_value & edit_mask);
reject_illegal_mux_edits_or_overlapping_reserved_fields();
```

<a id="experiment_validate"></a>
## 4. 确认修改、错误／警告和generation

**证据层次**：接口与前端确认。

后端检查规则、lane互冲突、DLC、counter/checksum、内置owner限制，返回errors/warnings和generation；前端有generation才允许开启。

**前端入口**：[canExperimentValidate · JS L86](../recovered_web/dashboard.script0.js#L86)。

**C 接口入口**：[POST /api/can-experiment/validate · 0x480ec3f8](../decompiled/functions/480ec3f8_recovered_http_post_api_can_experiment_validate_480ec3f8.c)。

```c
errors, warnings = validate_rules_and_cross_rule_resources(candidate);
if (errors) return VALIDATION_FAILED;
confirmed_generation = publish_validated_candidate_generation();
return(confirmed_generation, warnings);
```

<a id="experiment_start"></a>
## 5. 必须匹配已确认版本才能开始

**证据层次**：启动代数检查与状态接口确认。

提交confirmedGeneration和规则，后端比较已验证版本，拒绝编辑后旧版本。运行分waiting_bus/template/builtin_owner等lane状态，可恢复异常仅暂停对应lane。

**前端入口**：[canExperimentStart · JS L87](../recovered_web/dashboard.script0.js#L87)。

**C 接口入口**：[POST /api/can-experiment/start · 0x480eb56e](../decompiled/functions/480eb56e_recovered_http_post_api_can_experiment_start_480eb56e.c)。

```c
require(request.confirmedGeneration == validated_generation);
require(request_rules_match_validated_candidate());
state = RUNNING;
for (lane in lanes) reevaluate_bus_template_and_builtin_owner_readiness();
```

<a id="experiment_modes"></a>
## 6. 单次／跟随／周期、延迟与模板超时

**证据层次**：接口确认；运行语义重建。

mode0单次、1跟随、2固定周期；period页面5～60000ms，template timeout0自动或≤5000ms，delayUs≤5000000，strict要求所选线路同时就绪。运行区分staleSkip、busySkip、delayedSuperseded。

**前端入口**：[canExperimentCollect · JS L80](../recovered_web/dashboard.script0.js#L80)。

**C 接口入口**：[POST /api/can-experiment/start · 0x480eb56e](../decompiled/functions/480eb56e_recovered_http_post_api_can_experiment_start_480eb56e.c)、[GET /api/can-experiment/status · 0x480acf1c](../decompiled/functions/480acf1c_recovered_http_get_api_can_experiment_status_480acf1c.c)。

```c
if (strict && !all_selected_lanes_ready) pause_rule();
for (lane in ready_lanes) {
    trigger = mode == SINGLE ? !lane.single_completed :
              mode == FOLLOW ? new_source_generation : period_due;
    if (!trigger || template_expired()) continue;
    if (delay_us) schedule_generation_bound_delayed_output();
    else submit_generated_output();
}
if (new_source_supersedes_delayed_output) invalidate_old_delayed_generation();
```

<a id="experiment_counter"></a>
## 7. 原值偏移／独立自增计数器

**证据层次**：接口确认；运行语义重建。

可选字节、起bit、宽度1～8、步长、初值、min/max和offset；先生成编辑后的输出再按配置处理计数器字段。确认／失败时具体独立计数器推进点尚未完全核对。

**前端入口**：[canExperimentCollect · JS L80](../recovered_web/dashboard.script0.js#L80)。

**C 接口入口**：[POST /api/can-experiment/validate · 0x480ec3f8](../decompiled/functions/480ec3f8_recovered_http_post_api_can_experiment_validate_480ec3f8.c)。

```c
mask = bitfield_mask(counter_bit, counter_width);
if (mode == SOURCE_OFFSET) value = normalize_counter(source_counter + offset);
if (mode == INDEPENDENT) value = lane_counter_with_configured_bounds;
replace_counter_field(output, value, mask);
// 独立计数器推进以原运行实现的提交／确认边界为准。
```

<a id="experiment_checksums"></a>
## 8. SUM／XOR／CRC8及反射参数

**证据层次**：接口确认；运行语义重建。

选择参与字节掩码、输出字节、add/xor，CRC还指定多项式、初值、refIn/refOut、includeId。必须用修改后的帧参与校验，输出字节是否排除及CAN ID字节序由实现确定，未编造统一规则。

**前端入口**：[canExperimentCollect · JS L80](../recovered_web/dashboard.script0.js#L80)。

**C 接口入口**：[POST /api/can-experiment/validate · 0x480ec3f8](../decompiled/functions/480ec3f8_recovered_http_post_api_can_experiment_validate_480ec3f8.c)。

```c
selected = checksum_input_bytes_after_edit_and_counter(output);
switch (checksum_mode) {
case SUM: value = sum8(selected); break;
case XOR: value = xor8(selected); break;
case CRC8: value = configured_crc8(selected, poly, init, ref_in, ref_out, include_id); break;
}
output[checksum_output] = finalize_with_configured_add_and_xor(value);
// SUM/CRC输入细节和finalize顺序须以原实现校对。
```

<a id="experiment_takeover"></a>
## 9. 内置发送接管、优先级继承和停止结算

**证据层次**：前端说明、状态与结算辅助函数确认。

内置流按线路/ID/MUX让行；新增报文P1/2/3，255继承；P0固定在CH3FD MUX0。停止进入stopping，等待pending token结算后解除接管，防止旧回执影响新owner。

**前端入口**：[canExperimentCollect · JS L80](../recovered_web/dashboard.script0.js#L80)、[canExperimentStop · JS L88](../recovered_web/dashboard.script0.js#L88)。

**C 接口入口**：[POST /api/can-experiment/start · 0x480eb56e](../decompiled/functions/480eb56e_recovered_http_post_api_can_experiment_start_480eb56e.c)、[POST /api/can-experiment/stop · 0x480eab84](../decompiled/functions/480eab84_recovered_http_post_api_can_experiment_stop_480eab84.c)。

```c
acquire_selected_builtin_owner_scopes();
priority = existing_stream ? inherited_priority : configured_P1_P2_P3;
if (scope == CH_3FD_MUX0) route_actual_send_through_fsd_p0();
stop() { invalidate_future_outputs(); state = STOPPING; }
when_all_pending_tokens_settled() { release_takeover(); state = STOPPED; }
```

<a id="experiment_metrics"></a>
## 10. 逐lane来源／输出与延迟、终态计数

**证据层次**：C状态字段确认。

generated、accepted、rejected、terminalOk/Fail、busy/staleSkip、DLC mismatch、accepted与terminal latency分别展示。独立生成帧不能算发送成功。

**前端入口**：[canExperimentPollStatus · JS L119](../recovered_web/dashboard.script0.js#L119)。

**C 接口入口**：[GET /api/can-experiment/status · 0x480acf1c](../decompiled/functions/480acf1c_recovered_http_get_api_can_experiment_status_480acf1c.c)。

```c
on_generate() generated++;
on_submit(result) result.accepted ? accepted++ : rejected++;
on_terminal(result) result.ok ? terminal_ok++ : terminal_fail++;
publish_each_lane_source_output_age_latency_and_pending_token();
```

<a id="experiment_presets"></a>
## 11. 8预设载入／保存／改名／删除与异步持久化

**证据层次**：预设接口与代数确认。

预设记录occupied、valid、name、generation、persistedGeneration、persistencePending；保存接受内存态与写入Flash完成是两阶段，前端轮询确认。

**前端入口**：[canExperimentLoadPresets · JS L133](../recovered_web/dashboard.script0.js#L133)、[canExperimentPresetAction · JS L143](../recovered_web/dashboard.script0.js#L143)、[canExperimentPresetDelete · JS L144](../recovered_web/dashboard.script0.js#L144)。

**C 接口入口**：[GET /api/can-experiment/presets · 0x4806da0c](../decompiled/functions/4806da0c_recovered_http_get_api_can_experiment_presets_4806da0c.c)、[POST /api/can-experiment/presets · 0x480ac732](../decompiled/functions/480ac732_recovered_http_post_api_can_experiment_presets_480ac732.c)、[DELETE /api/can-experiment/presets · 0x4808a37e](../decompiled/functions/4808a37e_recovered_http_delete_api_can_experiment_presets_4808a37e.c)。

**关键控件／参数**：`canExperimentPresetSlot`、`canExperimentPresetName`。

```c
preset_action(slot, action) {
    validate_slot_0_to_7_and_current_quiesce_state();
    if (action == SAVE) replace_preset_with_rules_and_name();
    if (action == LOAD) return_rules_for_ui_editing_and_revalidation();
    if (action == RENAME) update_name();
    if (action == DELETE) clear_slot();
    enqueue_persistence_generation();
}
poll_until_persisted_generation_catches_up();
```


# AP热点、外部Wi-Fi和网络状态

ESP32-P4通过ESP-Hosted/esp_wifi_remote及SDIO无线协处理器联网。网页请求驱动异步网络状态，不能将HTTP成功等同于已经连上网络。

**运行／解析关联函数（模块共享）**：[`0x480f38e4`](../decompiled/functions/480f38e4_recovered_http_post_wifi_connect_480f38e4.c)、[`0x480f3d2c`](../decompiled/functions/480f3d2c_recovered_http_post_wifi_ap_config_480f3d2c.c)、[`0x480334d2`](../decompiled/functions/480334d2_FUN_ram_480334d2.c)、[`0x48030bc0`](../decompiled/functions/48030bc0_FUN_ram_48030bc0.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="wifi_status"></a>
## 1. AP/STA状态与异步扫描结果

**证据层次**：状态接口与前端确认。

状态包含enabled、connected/connecting、SSID/IP、AP clients、retryDeferredForAp、scanState/networks、connectAttempts、lastDisconnectReason和configurationGeneration。

**前端入口**：[loadWifiStatus · JS L1083](../recovered_web/dashboard.script0.js#L1083)。

**C 接口入口**：[GET /wifi/status · 0x48066f4c](../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c)。

```c
snapshot = read_wifi_state_and_scan_cache();
return_snapshot_without_starting_new_scan();
ui_apply_only_latest_request_sequence(snapshot);
```

<a id="wifi_scan"></a>
## 2. 扫描附近网络与列表选择

**证据层次**：接口与前端确认。

POST开始扫描，结果通过status轮询；OTA期间拒绝。列表选择填充SSID，不自动发出连接请求。

**前端入口**：[scanWifi · JS L1086](../recovered_web/dashboard.script0.js#L1086)。

**C 接口入口**：[POST /wifi/scan · 0x4806b7e4](../decompiled/functions/4806b7e4_recovered_http_post_wifi_scan_4806b7e4.c)、[GET /wifi/status · 0x48066f4c](../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c)。

**关键控件／参数**：`wifiScan`、`wifiNetworkList`。

```c
if (ota_busy) return OTA_BUSY;
request_async_scan();
on_scan_complete() publish_network_cache_and_scan_state();
on_ui_select_network() copy_ssid_to_draft();
```

<a id="wifi_connect"></a>
## 3. 启用STA、保存SSID密码与连接

**证据层次**：接口确认；运行语义重建。

SSID必填；配置保存失败返回flash_write，连接结果异步报告。状态提供连接重试、AP客户端导致延迟等；避免把完整重试策略简化为阻塞connect()。

**前端入口**：[connectWifi · JS L1087](../recovered_web/dashboard.script0.js#L1087)。

**C 接口入口**：[POST /wifi/connect · 0x480f38e4](../decompiled/functions/480f38e4_recovered_http_post_wifi_connect_480f38e4.c)。

**关键控件／参数**：`wifiExternalEnabled`、`wifiSsid`、`wifiPassword`、`wifiConnect`。

```c
require_ssid(); parse_network_credentials();
if (!persist_external_wifi_settings()) return FLASH_WRITE;
request_sta_enabled_and_connect_transition();
return_OK_for_accepted_request();
network_service_tick_updates_connect_retry_and_ap_deferral();
```

<a id="wifi_disconnect_forget"></a>
## 4. 断开与忘记网络

**证据层次**：C接口与前端确认。

断开和忘记各有持久化流程；前者停止连接，后者移除保存的网络凭据。页面隐藏／启用和后端状态仍须回读核对。

**前端入口**：[disconnectWifi · JS L1088](../recovered_web/dashboard.script0.js#L1088)、[forgetWifi · JS L1089](../recovered_web/dashboard.script0.js#L1089)。

**C 接口入口**：[POST /wifi/disconnect · 0x480f2624](../decompiled/functions/480f2624_recovered_http_post_wifi_disconnect_480f2624.c)、[POST /wifi/forget · 0x480f2918](../decompiled/functions/480f2918_recovered_http_post_wifi_forget_480f2918.c)。

**关键控件／参数**：`wifiDisconnect`、`wifiForget`。

```c
disconnect() { persist_disabled_or_disconnected_preference(); request_sta_disconnect(); }
forget() { clear_saved_ssid_and_password(); persist(); request_disconnect(); }
```

<a id="wifi_ap_password"></a>
## 5. 热点密码保存及异步重启

**证据层次**：C接口确认。

AP SSID为Albert-P4-FSD；非空新密码限定8～63字符，空输入保留原密码。检查ap_restart_pending、OTA；持久化成功返回HTTP202、apRestarting=true，约250ms后触发热点重启。密码改变同时清空网页登录会话；持久化失败恢复原密码。

**前端入口**：[saveWifiAp · JS L1084](../recovered_web/dashboard.script0.js#L1084)。

**C 接口入口**：[POST /wifi/ap-config · 0x480f3d2c](../decompiled/functions/480f3d2c_recovered_http_post_wifi_ap_config_480f3d2c.c)。

**关键控件／参数**：`wifiApPassword`、`wifiApSave`。

```c
validate_ap_password_by_backend_policy();
if (restart_pending || ota_busy) return BUSY;
if (!persist_ap_password()) return PREFERENCES_WRITE;
queue_ap_restart_after_response(); return(apRestarting=true);
```

<a id="wifi_ap_autooff"></a>
## 6. 联网5分钟后关闭AP及客户端保留

**证据层次**：前端说明与状态确认；全部AP恢复边沿部分重建。

页面规定外部Wi-Fi连接成功5分钟后关AP，手机仍连接时保持；状态提供apDisableInSec与apClients，运行重新评估连接/客户端条件。

**前端入口**：[setWifiApAutoOff · JS L1085](../recovered_web/dashboard.script0.js#L1085)。

**C 接口入口**：[POST /wifi/ap-auto-off · 0x480f2c14](../decompiled/functions/480f2c14_recovered_http_post_wifi_ap_auto_off_480f2c14.c)、[GET /wifi/status · 0x48066f4c](../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c)。

**关键控件／参数**：`wifiApAutoOff`。

```c
if (auto_off && sta_connected && ap_clients == 0 && connected_for >= 5_minutes)
    request_ap_stop();
else keep_ap_according_to_connectivity_and_client_policy();
publish_remaining_ap_disable_seconds();
```

<a id="captive_portal"></a>
## 7. 手机联网探测入口与热点首页

**证据层次**：C路由与目标确认。

三个兼容路由共享0x48067692，返回Location=http://100.100.1.1/以引导手机打开管理页。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[ANY /generate_204 · 0x48067692](../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c)、[ANY /gen_204 · 0x48067692](../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c)、[ANY /hotspot-detect.html · 0x48067692](../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c)。

```c
on_captive_probe() { redirect("http://100.100.1.1/"); }
```


# 本地／在线OTA、启动验证与重启

本地上传还有独立upload callback，见路由附表，不能只读POST /ota/upload最终响应函数。升级和重启采用停止CAN、结算、刷写持久数据、恢复／提交／重启流程；新应用需启动健康验证。

**运行／解析关联函数（模块共享）**：[`0x480ffd82`](../decompiled/functions/480ffd82_recovered_http_post_ota_start_480ffd82.c)、[`0x48064780`](../decompiled/functions/48064780_FUN_ram_48064780.c)、[`0x480ff860`](../decompiled/functions/480ff860_recovered_http_post_ota_upload_480ff860.c)、[`0x480ff590`](../decompiled/functions/480ff590_recovered_http_post_ota_cancel_480ff590.c)、[`0x480fe83a`](../decompiled/functions/480fe83a_FUN_ram_480fe83a.c)、[`0x480fed16`](../decompiled/functions/480fed16_FUN_ram_480fed16.c)、[`0x4807be92`](../decompiled/functions/4807be92_recovered_http_post_ota_online_install_4807be92.c)、[`0x4811aede`](../decompiled/functions/4811aede_recovered_runtime_service.c)、[`0x480ffb40`](../decompiled/functions/480ffb40_recovered_http_post_reboot_480ffb40.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="ota_identity"></a>
## 1. 固件身份、槽位、容量、状态和会话令牌

**证据层次**：C状态字段确认。

status包括version/buildVersion、sourceCommit、appElfSha256、bootSlot/targetSlot、maxSize、token、pendingVerify和state/bytes/error，令牌用于X-T2CAN-OTA-Token。

**前端入口**：[loadOtaStatus · JS L1121](../recovered_web/dashboard.script0.js#L1121)。

**C 接口入口**：[GET /ota/status · 0x4806bbf8](../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

```c
publish_running_boot_target_partition_identity_and_ota_state();
ui_use_reported_maxSize_and_token();
```

<a id="ota_file"></a>
## 2. 本地BIN的浏览器预检查

**证据层次**：前端字节检查确认。

文件名.bin、至少288字节、不超过maxSize；offset0魔数E9，offset12芯片ID18，offset32描述符ABCD5432。bootstrap合并镜像不能作为application-only OTA上传。此预检不能替代完整镜像验证。

**前端入口**：[validateOtaFile · JS L1122](../recovered_web/dashboard.script0.js#L1122)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

**关键控件／参数**：`otaFile`。

```c
require(extension == ".bin" && 288 <= size && size <= maxSize);
require(byte[0] == 0xE9);
require(le16(bytes + 12) == 0x12);
require(le32(bytes + 32) == 0xABCD5432);
```

<a id="ota_prepare"></a>
## 3. 令牌授权、CAN停止、持久化flush与ready

**证据层次**：C准备入口确认。

检查授权、boot pending verify、session generation、Wi-Fi转换与CAN readiness；安全停止CAN和刷写待持久化项后才ready并签发当前会话令牌。失败尝试恢复CAN并区分can_restore/persistence_flush。

**前端入口**：[startOta · JS L1132](../recovered_web/dashboard.script0.js#L1132)。

**C 接口入口**：[POST /ota/start · 0x480ffd82](../decompiled/functions/480ffd82_recovered_http_post_ota_start_480ffd82.c)。

```c
require_valid_ota_token_and_no_pending_boot_verification();
if (wifi_transition_or_other_ota || !can_ready) return BUSY;
start_session_generation(); state = PREPARING;
if (!quiesce_can_and_settle()) fail(CAN_QUIESCE);
if (!flush_pending_persistence()) fail_and_restore(PERSISTENCE_FLUSH);
state = READY; return_current_session_token();
```

<a id="ota_upload"></a>
## 4. 分块写入、结束验证、提交启动槽与重启

**证据层次**：流式C长度／镜像头／会话分支确认；完整库验证细节见原C。

XHR超时180秒，上传进度最高99%。C流式回调0x48064780检查连接标识和session generation，严格解析Content-Length并限制在分区容量内，先收齐24字节镜像头检查E9及chip ID18，再按实际写入长度累计。结束要求收到长度=声明长度=Flash写入长度，end验证成功后进入committed。回调还设置120秒会话期限，这与浏览器180秒XHR超时不同。只有最终响应ok且bytes与文件长度一致才显示完成。

**前端入口**：[startOta · JS L1132](../recovered_web/dashboard.script0.js#L1132)。

**C 接口入口**：[POST /ota/upload · 0x480ff860](../decompiled/functions/480ff860_recovered_http_post_ota_upload_480ff860.c)。

**关键控件／参数**：`otaStart`。

```c
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
```

<a id="ota_cancel"></a>
## 5. 取消、失败恢复和结果不确定回读

**证据层次**：C取消分支与前端确认。

取消需当前令牌，未活动拒绝；已提交且等待重启不能撤销。上传断线时前端明确结果未确认，重新连接检查版本和状态；取消失败不意味着固件一定未写入。

**前端入口**：[startOta · JS L1132](../recovered_web/dashboard.script0.js#L1132)。

**C 接口入口**：[POST /ota/cancel · 0x480ff590](../decompiled/functions/480ff590_recovered_http_post_ota_cancel_480ff590.c)、[GET /ota/status · 0x4806bbf8](../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

```c
if (committed_reboot_pending) return CANNOT_CANCEL_COMMITTED;
if (!active_session || token_invalid) return ERROR;
abort_write_if_active(); restore_can_and_mark_cancelled();
on_network_uncertainty() read_ota_state_and_identity_after_reconnect();
```

<a id="ota_online"></a>
## 6. 在线检查、升级提示与管理目标一致性

**证据层次**：在线接口确认；完整下载链部分重建。

需联网，无待验证或占用；check异步进入checking；install要求已发现available，重新检查management目标、版本/commit及release合法性，然后进入准备和下载。完整服务端release格式未全部恢复。

**前端入口**：[checkOnlineOta · JS L1119](../recovered_web/dashboard.script0.js#L1119)、[installOnlineOta · JS L1120](../recovered_web/dashboard.script0.js#L1120)、[closeOnlineOtaUpdateModal · JS L1114](../recovered_web/dashboard.script0.js#L1114)、[installOnlineOtaFromPrompt · JS L1116](../recovered_web/dashboard.script0.js#L1116)。

**C 接口入口**：[GET /ota/online/status · 0x480bdfce](../decompiled/functions/480bdfce_recovered_http_get_ota_online_status_480bdfce.c)、[POST /ota/online/check · 0x4806b9ae](../decompiled/functions/4806b9ae_recovered_http_post_ota_online_check_4806b9ae.c)、[POST /ota/online/install · 0x4807be92](../decompiled/functions/4807be92_recovered_http_post_ota_online_install_4807be92.c)。

**关键控件／参数**：`onlineOtaCheck`、`onlineOtaInstall`。

```c
check() { require_connected_and_idle(); queue_online_release_check(); }
install() {
    require_available_checked_release();
    if (management_target_changed) return MANAGEMENT_TARGET_CHANGED;
    validate_release_identity_and_reject_already_current();
    queue_online_prepare_download_verify_commit();
}
poll_online_state_and_show_upgrade_prompt();
```

<a id="ota_boot_health"></a>
## 7. 启动后120秒健康验证与回滚

**证据层次**：C期限与健康门控确认。

0x4811aede对待验证镜像做运行健康检查，涉及CAN、任务心跳、P0结算和持久化状态；120000ms期限内不能达到健康则走失败/回滚，而非无条件标记有效。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[GET /health · 0x480c2bda](../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)、[GET /ota/status · 0x4806bbf8](../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

```c
if (boot_pending_verify) {
    if (all_required_runtime_health_conditions_hold()) mark_new_app_valid();
    else if (boot_health_elapsed >= 120000_ms) request_rollback_or_safe_failure_path();
}
```

<a id="reboot"></a>
## 8. 重启请求、安全停止和实际重启确认

**证据层次**：C入口与前端确认。

OTA/已重启请求拒绝；停止CAN并flush持久化失败则恢复并返回错误。浏览器通过启动会话变化确认实际重启，收到HTTP ok本身不算重启已发生。

**前端入口**：[rebootBoard · JS L1055](../recovered_web/dashboard.script0.js#L1055)、[rebootWaitForConfirmation · JS L1054](../recovered_web/dashboard.script0.js#L1054)。

**C 接口入口**：[POST /reboot · 0x480ffb40](../decompiled/functions/480ffb40_recovered_http_post_reboot_480ffb40.c)、[GET /health · 0x480c2bda](../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)。

**关键控件／参数**：`rebootButton`。

```c
if (ota_busy || reboot_busy) return BUSY;
if (!quiesce_can()) return CAN_QUIESCE;
if (!flush_persistence()) { restore_can(); return PERSISTENCE_FLUSH; }
respond_rebooting_then_schedule_reset();
ui_wait_for_disconnect_and_changed_boot_session();
```


# FSD行程、里程统计与手机时钟

记录的数据源与时间锚点位于设备。浏览器只展示与发出明确的reset/clear请求；新bootstrap中NVS擦除态，不能恢复真实行程。精确速度积分、断行程判据和所有采样剔除阈值尚未完整追出。

**运行／解析关联函数（模块共享）**：[`0x480b41ec`](../decompiled/functions/480b41ec_FUN_ram_480b41ec.c)、[`0x480b4abe`](../decompiled/functions/480b4abe_recovered_http_get_fsd_records_480b4abe.c)、[`0x4806ef66`](../decompiled/functions/4806ef66_recovered_http_post_fsd_records_clock_4806ef66.c)、[`0x480d338a`](../decompiled/functions/480d338a_recovered_http_post_fsd_records_clear_480d338a.c)、[`0x480d2a5e`](../decompiled/functions/480d2a5e_recovered_http_post_fsd_records_subtotal_reset_480d2a5e.c)、[`0x48118d2c`](../decompiled/functions/48118d2c_FUN_ram_48118d2c.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="records_view"></a>
## 1. 当前／历史行程、详情、小计与累计

**证据层次**：C字段与前端确认。

序列化字段包括totalMeters、classifiedMeters、fsdMeters、longestFsdMeters、sourceState、tripEndDelayMs、fsdActive、dirty/persisted与history。页面trip/subtotal/cumulative选择是展示，不重新计算车端里程。

**前端入口**：[loadFsdRecords · JS L1738](../recovered_web/dashboard.script0.js#L1738)。

**C 接口入口**：[GET /fsd_records · 0x480b4abe](../decompiled/functions/480b4abe_recovered_http_get_fsd_records_480b4abe.c)。

**关键控件／参数**：`fsdRecordsRefresh`、`fsdRecordsDetailBack`。

```c
snapshot = read_current_history_subtotal_cumulative();
return_snapshot_with_source_and_persistence_state();
ui_select_view_and_detail(snapshot, selected_range);
```

<a id="records_accumulate"></a>
## 2. 行驶与FSD里程分类累计

**证据层次**：数据结构确认；累计内部算法部分重建。

根据车辆行驶源和FSD状态分类累计，等待稳定结束条件后形成历史行程，更新最长FSD等。以下distance_delta与trip_end_confirmed为未完整恢复的内部计算，不能假定普通浏览器计时积分。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[GET /fsd_records · 0x480b4abe](../decompiled/functions/480b4abe_recovered_http_get_fsd_records_480b4abe.c)。

```c
on_valid_vehicle_sample() {
    delta = firmware_validated_distance_delta(); // 精确计算尚未完整恢复
    trip.total += delta; cumulative.total += delta; subtotal.total += delta;
    if (classification_known) update_classified_and_fsd_distances(delta);
}
if (trip_end_confirmed_after_configured_delay) finalize_and_persist_trip();
```

<a id="records_clock"></a>
## 3. 手机Unix时钟与设备uptime锚点

**证据层次**：请求字段、浏览器采样与C错误分支确认。

提交bootId、unixMs、uptimeMs；后端拒绝stale_boot、invalid_clock/sample及busy，以启动会话防止跨重启错误锚定。有效锚点帮助显示行程日期，不能恢复没记录过的真实时间。

**前端入口**：[fsdPhoneClockSync · JS L1767](../recovered_web/dashboard.script0.js#L1767)。

**C 接口入口**：[GET /fsd_records/clock · 0x4806c0d4](../decompiled/functions/4806c0d4_recovered_http_get_fsd_records_clock_4806c0d4.c)、[POST /fsd_records/clock · 0x4806ef66](../decompiled/functions/4806ef66_recovered_http_post_fsd_records_clock_4806ef66.c)。

```c
clock = GET("/fsd_records/clock");
if (round_trip_ms > 2000) reject_sample();
if (clock.calibrated && clock.source == NETWORK) skip_phone_calibration();
sample = {clock.bootId, unixMs:DateNow() - round_trip_ms/2, clock.uptimeMs};
if (sample.bootId != current_boot) return STALE_BOOT;
validate_clock_and_uptime_sample(sample); store_unix_to_uptime_anchor(sample);
// 成功后5分钟再同步；失败后15秒可重试。
```

<a id="records_subtotal"></a>
## 4. 重置小计

**证据层次**：接口与页面说明确认。

前端对话框与后端confirm=reset；仅重置小计，保留当前、历史和累计。持久化失败单独返回subtotal_reset_failed。

**前端入口**：[resetFsdSubtotal · JS L1747](../recovered_web/dashboard.script0.js#L1747)。

**C 接口入口**：[POST /fsd_records/subtotal/reset · 0x480d2a5e](../decompiled/functions/480d2a5e_recovered_http_post_fsd_records_subtotal_reset_480d2a5e.c)。

**关键控件／参数**：`fsdRecordsSubtotalReset`、`fsdRecordsSubtotalResetConfirm`。

```c
require(request.confirm == "reset"); require_storage_and_not_ota();
reset_subtotal_domain();
if (!persist_subtotal()) return SUBTOTAL_RESET_FAILED;
return(persistence="stored");
```

<a id="records_clear"></a>
## 5. 清空累计与行程历史

**证据层次**：清空接口与云epoch字段确认；跨域提交顺序部分重建。

confirm=clear，清空当前、小计、累计和历史，同时处理云控制/数据epoch，避免旧备份无意复活删除数据；必须确认成功持久化。

**前端入口**：[clearFsdRecords · JS L1753](../recovered_web/dashboard.script0.js#L1753)。

**C 接口入口**：[POST /fsd_records/clear · 0x480d338a](../decompiled/functions/480d338a_recovered_http_post_fsd_records_clear_480d338a.c)。

**关键控件／参数**：`fsdRecordsClear`、`fsdRecordsClearConfirm`。

```c
require(request.confirm == "clear"); require_storage_and_not_ota();
clear_current_subtotal_cumulative_history();
advance_or_record_dataset_wipe_epoch_for_sync();
commit_record_and_cloud_control_storage();
return_stored_or_clear_failed();
```


# 云同步、备份恢复、冲突与首次引导

云端后台worker 0x48118d2c 包含settings_backup、records_backup、user_restore、conflict_resolution及outbox/ack/epoch等证据。请求queued/pending不是同步完成。旧agent GET仍返回capabilities，POST固定405，不能删除为不存在或宣称旧接口可写。

**运行／解析关联函数（模块共享）**：[`0x480b3dca`](../decompiled/functions/480b3dca_FUN_ram_480b3dca.c)、[`0x480b3b14`](../decompiled/functions/480b3b14_FUN_ram_480b3b14.c)、[`0x480b6d24`](../decompiled/functions/480b6d24_recovered_http_post_cloud_settings_restore_480b6d24.c)、[`0x480d103e`](../decompiled/functions/480d103e_recovered_http_post_cloud_settings_conflict_480d103e.c)、[`0x4808e6ee`](../decompiled/functions/4808e6ee_FUN_ram_4808e6ee.c)、[`0x4808e07e`](../decompiled/functions/4808e07e_recovered_http_post_onboarding_complete_4808e07e.c)、[`0x48118d2c`](../decompiled/functions/48118d2c_FUN_ram_48118d2c.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="cloud_identity"></a>
## 1. 设备ID、云网页地址与复制

**证据层次**：前端与接口确认。

状态生成设备身份与用户网页入口；复制ID/URL为浏览器剪贴板操作，打开云网页是外部链接，均不新增固件动作。

**前端入口**：[cloudLoadStatus · JS L1650](../recovered_web/dashboard.script0.js#L1650)。

**C 接口入口**：[GET /cloud/status · 0x480d0b14](../decompiled/functions/480d0b14_recovered_http_get_cloud_status_480d0b14.c)。

**关键控件／参数**：`cloudDeviceId`、`cloudWebUrl`、`cloudCopyButton`、`cloudCopyUrl`。

```c
status = GET("/cloud/status"); render_device_identity_and_web_url(status);
on_copy() browser_clipboard_write(selected_text);
```

<a id="cloud_config"></a>
## 2. 服务URL、产品根Token、清除凭据和15～300秒周期

**证据层次**：统一配置入口与字段确认。

配置受开发者流程约束，读接口只返回tokenConfigured而非明文凭据。写入URL、token/clearToken、intervalSec等，generation与持久化状态分开。

**前端入口**：[cloudLoadConfig · JS L1652](../recovered_web/dashboard.script0.js#L1652)、[cloudSaveConfig · JS L1653](../recovered_web/dashboard.script0.js#L1653)。

**C 接口入口**：[GET /cloud/config · 0x480b4fa4](../decompiled/functions/480b4fa4_recovered_http_get_cloud_config_480b4fa4.c)、[POST /cloud/config · 0x480b3e2c](../decompiled/functions/480b3e2c_recovered_http_post_cloud_config_480b3e2c.c)。

**关键控件／参数**：`cloudUrl`、`cloudToken`、`cloudInterval`、`cloudClearToken`、`cloudSaveButton`。

```c
authorize_required_developer_request(); validate_url_token_and_interval();
if (clear_token) remove_saved_token(); else if (new_token_present) replace_token();
increment_config_generation(); persist_unified_cloud_backend_configuration();
return_configured_flags_and_persistence();
```

<a id="cloud_test"></a>
## 3. 测试v2连接

**证据层次**：接口确认；全部网络调用细节未列出。

按已保存/草稿连接配置测试v2后端，并报告认证/网络结果；成功测试不等于备份已同步或恢复成功。完整网络错误映射见原伪代码。

**前端入口**：[cloudTestConnection · JS L1654](../recovered_web/dashboard.script0.js#L1654)。

**C 接口入口**：[POST /cloud/test · 0x4811e15c](../decompiled/functions/4811e15c_recovered_http_post_cloud_test_4811e15c.c)。

**关键控件／参数**：`cloudTestButton`。

```c
validate_test_configuration_and_access();
request_v2_connectivity_test();
return_connectivity_authentication_result();
```

<a id="cloud_sync"></a>
## 4. 自动同步开关、立即同步及后台ack

**证据层次**：C排队分支与worker证据确认。

关闭保留本地数据和连接配置。立即上传需enabled、URL和token、无OTA，返回queued=true；worker构造状态/设置/记录差量，跟踪awaiting_ack与持久化基线。

**前端入口**：[cloudSetEnabled · JS L1658](../recovered_web/dashboard.script0.js#L1658)、[cloudUploadNow · JS L1659](../recovered_web/dashboard.script0.js#L1659)。

**C 接口入口**：[POST /cloud/enabled · 0x480b3e6c](../decompiled/functions/480b3e6c_recovered_http_post_cloud_enabled_480b3e6c.c)、[POST /cloud/upload · 0x4808cf68](../decompiled/functions/4808cf68_recovered_http_post_cloud_upload_4808cf68.c)、[GET /cloud/status · 0x480d0b14](../decompiled/functions/480d0b14_recovered_http_get_cloud_status_480d0b14.c)。

**关键控件／参数**：`cloudEnabled`、`cloudUploadButton`。

```c
set_enabled(on) { persist_configuration_with_new_generation(); }
upload_now() {
    require(enabled && url_configured && token_configured && !ota_busy);
    mark_upload_due(); return(queued=true);
}
worker_tick() { build_payload_and_outbox(); send_v2(); consume_ack_and_update_baseline(); }
```

<a id="cloud_restore"></a>
## 5. 设置驾驶员／FSD记录恢复、范围和request_id

**证据层次**：C参数/错误与worker字段确认。

confirmation=restore，scopes选settings/records，backup_revision可latest，请求带request_id。拒绝ID冲突、已有恢复或本地变更；回执queued、persistence pending、restore_id，之后按同一ID跟踪完成范围。

**前端入口**：[cloudRestoreSettings · JS L1644](../recovered_web/dashboard.script0.js#L1644)。

**C 接口入口**：[POST /cloud/settings/restore · 0x480b6d24](../decompiled/functions/480b6d24_recovered_http_post_cloud_settings_restore_480b6d24.c)、[GET /cloud/status · 0x480d0b14](../decompiled/functions/480d0b14_recovered_http_get_cloud_status_480d0b14.c)。

**关键控件／参数**：`cloudRestoreScopeSettings`、`cloudRestoreScopeRecords`、`cloudSettingsRestoreConfirm`、`cloudRestoreConfirmButton`。

```c
require(confirmation == "restore" && valid_scopes && valid_request_id);
reject_if_local_changed_or_restore_busy_or_id_collision();
queue_restore(request_id, scopes, selected_backup_revision);
return(queued=true, persistence="pending", restore_id=request_id);
worker_verify_backup_hash_and_apply_selected_domains();
ui_poll_matching_restore_id_completed_scopes_and_failures();
```

<a id="cloud_conflicts"></a>
## 6. 查看冲突、保留设备／应用云端

**证据层次**：C接口分支确认。

command_id配action=keep_device/apply_cloud；冲突不存在、device_unsaved、resolution_pending、restore_busy_or_local_changed独立拒绝。保存resolution记录后后台处理并ack。

**前端入口**：[cloudLoadSettingsConflicts · JS L1637](../recovered_web/dashboard.script0.js#L1637)、[cloudResolveSettingsConflict · JS L1638](../recovered_web/dashboard.script0.js#L1638)。

**C 接口入口**：[GET /cloud/settings/conflicts · 0x480b31d8](../decompiled/functions/480b31d8_recovered_http_get_cloud_settings_conflicts_480b31d8.c)、[POST /cloud/settings/conflict · 0x480d103e](../decompiled/functions/480d103e_recovered_http_post_cloud_settings_conflict_480d103e.c)。

**关键控件／参数**：`cloudSettingsConflictsRefresh`。

```c
conflict = lookup_pending_conflict(command_id);
require_action_one_of("keep_device", "apply_cloud");
require_no_unsaved_local_change_and_no_pending_restore();
persist_resolution_intent(command_id, action);
return(queued=true); worker_resolve_and_ack();
```

<a id="cloud_generations"></a>
## 7. 设置revision/epoch、记录epoch与本地草稿保护

**证据层次**：字段与前端代数确认；完整远端协议未恢复。

前端以epoch/revision识别同步状态及本地待同步，旧状态不覆盖新草稿。worker有settings_revision/content_sha256、records_dataset_epoch/wipe_epoch/revision等用于备份和重置一致性。完整云协议事务保证不能只凭字符串确认。

**前端入口**：[managementSyncCloudSettings · JS L895](../recovered_web/dashboard.script0.js#L895)、[cloudLoadStatus · JS L1650](../recovered_web/dashboard.script0.js#L1650)。

**C 接口入口**：[GET /cloud/status · 0x480d0b14](../decompiled/functions/480d0b14_recovered_http_get_cloud_status_480d0b14.c)、[GET /management/status · 0x480b2722](../decompiled/functions/480b2722_recovered_http_get_management_status_480b2722.c)。

```c
when_cloud_status_arrives() {
    key = settings_epoch + device_revision;
    if (local_dirty_or_save_busy) defer_remote_config_readback();
    else GET_config_with_edit_generation_and_management_generation_checks();
}
worker_bind_payload_and_ack_to_resource_epoch_revision_and_hash();
// cloudMarkSettingsSaved 仅见 typeof 保护的可选调用；本页未定义。
```

<a id="cloud_legacy"></a>
## 8. 旧agent能力查询与废弃写入口

**证据层次**：C完整短处理函数确认。

GET检查资源可用后调用0x4808e6ee返回capabilities/configured/origin，资源不足503 resource_wait。POST始终405 unified_backend_use_cloud_config。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[GET /cloud/agent/config · 0x4808eb2e](../decompiled/functions/4808eb2e_recovered_http_get_cloud_agent_config_4808eb2e.c)、[POST /cloud/agent/config · 0x4808cf44](../decompiled/functions/4808cf44_recovered_http_post_cloud_agent_config_4808cf44.c)。

```c
GET_agent_config() { authorize(); if (!resources) return 503; return_capabilities(); }
POST_agent_config() { authorize(); return 405("unified_backend_use_cloud_config"); }
```

<a id="onboarding"></a>
## 9. 首次联网／新用户／稍后／恢复完成引导

**证据层次**：C持久化与前端流程确认。

状态持久化到p4_data/p4_onboard；choice=new/later/restored，restored需恢复完成；重复冲突choice_already_stored。Wi-Fi步骤复用网络接口，不是另外一套连接实现。

**前端入口**：[onboardingStart · JS L1606](../recovered_web/dashboard.script0.js#L1606)、[onboardingConnectWifi · JS L1609](../recovered_web/dashboard.script0.js#L1609)、[onboardingCompleteChoice · JS L1607](../recovered_web/dashboard.script0.js#L1607)、[onboardingResumeAfterWifi · JS L1610](../recovered_web/dashboard.script0.js#L1610)。

**C 接口入口**：[GET /onboarding/status · 0x4808d6c6](../decompiled/functions/4808d6c6_recovered_http_get_onboarding_status_4808d6c6.c)、[POST /onboarding/complete · 0x4808e07e](../decompiled/functions/4808e07e_recovered_http_post_onboarding_complete_4808e07e.c)。

**关键控件／参数**：`onboardingConnectWifi`、`onboardingSkipWifi`、`onboardingNew`、`onboardingLater`、`onboardingRestore`、`onboardingCompleteRetry`、`wifiOnboardingContinue`。

```c
s = GET("/onboarding/status"); if (!s.completed) show_onboarding_steps();
if (network_step) reuse_wifi_connect_and_wait_status();
complete(choice) {
    require_valid_choice_and_storage();
    if (choice == RESTORED) require_selected_restore_completed();
    prevent_conflicting_existing_choice(); persist_onboarding_choice();
}
```


# 健康、CAN、系统指标、JSON与崩溃转储

诊断快照可能未开放某些采集能力；available=false / diagnostics_disabled必须如实展示，不能将空数组当成正常零值。coredump是最新成功写入Flash的转储，可能来自旧启动；当前bootstrap文件未包含该分区实际内容。

**运行／解析关联函数（模块共享）**：[`0x480c0f3c`](../decompiled/functions/480c0f3c_FUN_ram_480c0f3c.c)、[`0x4803b2ec`](../decompiled/functions/4803b2ec_FUN_ram_4803b2ec.c)、[`0x4806851c`](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[`0x4808334c`](../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)、[`0x4807fa5c`](../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)、[`0x4806f630`](../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)、[`0x4806cbde`](../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c)、[`0x4806d406`](../decompiled/functions/4806d406_recovered_http_get_coredump_bin_4806d406.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="health"></a>
## 1. 健康与心跳、CAN新鲜度和告警

**证据层次**：C健康原因与前端确认。

含运行可用性、任务心跳、来源新鲜、Bus-Off/丢帧/恢复/P0结算等原因。告警级别与原因组合由0x4803b2ec一类函数判断，多个连续快照用于展示。

**前端入口**：[pollHealth · JS L760](../recovered_web/dashboard.script0.js#L760)。

**C 接口入口**：[GET /health · 0x480c2bda](../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)。

```c
health = evaluate_task_heartbeat_can_freshness_bus_state_and_settlement();
include_boot_session_and_observation_sequence();
ui_do_not_replace_new_snapshot_with_old_boot_or_sequence();
```

<a id="can_diag"></a>
## 2. 三路接收发送、控制器故障和热ID

**证据层次**：接口与前端确认。

每通道逻辑名、GPIO、车辆针脚、TWAI/队列/错误/最近帧状态及热门ID列表；热门ID为观察统计，不是全部支持车辆报文的协议列表。

**前端入口**：[pollCanDiagnostics · JS L820](../recovered_web/dashboard.script0.js#L820)、[pollCanHotIds · JS L766](../recovered_web/dashboard.script0.js#L766)、[renderCanDiagnosticCard · JS L776](../recovered_web/dashboard.script0.js#L776)。

**C 接口入口**：[GET /can_diag · 0x4807fa5c](../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)、[GET /can_hot_ids · 0x480c037a](../decompiled/functions/480c037a_recovered_http_get_can_hot_ids_480c037a.c)。

```c
for (bus in three_buses) snapshot_driver_rx_tx_errors_and_recent_observations(bus);
return_hot_id_statistics_with_capture_scope();
render_vehicle_pin_numbers_separately_from_board_gpio();
```

<a id="runtime_diag"></a>
## 3. 各功能相位、延迟、来源与终态诊断

**证据层次**：C状态字段确认。

包括FSD P0、摄像头、激活、速度、换挡、DND、灯光、预热、雾灯、座椅、PARTY和ambientTx等。配置enabled、effective、pending、accepted、terminal需要分开理解。某些fast path diagnostics被编译/配置关闭会返回available=false。

**前端入口**：[loadRuntimeStatus · JS L817](../recovered_web/dashboard.script0.js#L817)、[renderP0Observation · JS L784](../recovered_web/dashboard.script0.js#L784)。

**C 接口入口**：[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /torque_nag/status · 0x4806e388](../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
snapshot_each_feature_owner_phase_source_generation_and_terminal_counters();
if (!diagnostic_capability_enabled) publish_unavailable_reason();
ui_format_runtime_state_without_treating_config_enabled_as_active();
```

<a id="system_diag"></a>
## 4. 固件身份、CPU、温度、内存、任务与持久化

**证据层次**：C序列化字段确认。

chipId/model/revision、commit/ELF、温度、每core负载、内部RAM/PSRAM/DMA、stackHighWater、任务优先级/状态、SDIO stream fault、configurationPersistence、flashSafeLease、p4_data状态。task列表按tasks参数请求。

**前端入口**：[loadSystemStatus · JS L818](../recovered_web/dashboard.script0.js#L818)。

**C 接口入口**：[GET /system_status · 0x4808334c](../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)。

```c
snapshot_identity_reset_cpu_temperature_heap_and_runtime_loops();
if (request.tasks) collect_bounded_task_details();
include_nvs_load_reason_migration_checksum_and_recent_writes();
include_current_boot_only_health_history();
```

<a id="web_metrics"></a>
## 5. HTTP构建发送耗时和浏览器请求证据

**证据层次**：字段与前端确认。

C记录buildUs/sendUs/totalUs、bytesWritten、writeCalls、partial/zero write、断线和超时；浏览器另记duration、队列与48条历史，二者用于分析网页卡顿。

**前端入口**：[captureWebTransportEvidence · JS L823](../recovered_web/dashboard.script0.js#L823)、[snapshotWebClientMetrics · JS L20](../recovered_web/dashboard.script0.js#L20)。

**C 接口入口**：[GET /web_metrics · 0x4806f630](../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)。

```c
server_measure(build_start, send_start, bytes_and_write_results);
client_measure(queue_time, fetch_time, parse_time, endpoint_result);
export_both_sides_with_capture_times();
```

<a id="diag_export"></a>
## 6. 完整诊断JSON导出

**证据层次**：前端确认。

浏览器合并多个接口快照、Web客户端证据及可用转储信息，创建Blob下载；不是后端额外提供一个“所有诊断”路由。各快照采集时间不同，不承诺原子同时。

**前端入口**：[downloadCanDiagnostics · JS L837](../recovered_web/dashboard.script0.js#L837)。

**C 接口入口**：[GET /status · 0x480c0178](../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)、[GET /runtime_status · 0x4806851c](../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /system_status · 0x4808334c](../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)、[GET /can_diag · 0x4807fa5c](../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)、[GET /health · 0x480c2bda](../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)、[GET /web_metrics · 0x4806f630](../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)。

```c
pause_conflicting_polling();
collect_status_runtime_system_can_health_and_transport_evidence();
include_errors_for_failed_or_unavailable_sources();
download_json_blob_with_capture_metadata(); resume_polling();
```

<a id="coredump_info"></a>
## 7. 崩溃转储信息、寄存器、堆栈与身份

**证据层次**：C字段与转储来源说明确认。

返回available、address/size、sha256、imageCheckResult、panicReason、崩溃app ELF、task、exceptionPc/mcause/mtval/ra等。originBootSessionKnown可能未知，不能断言来自当前启动。

**前端入口**：[loadCoreDumpInfo · JS L834](../recovered_web/dashboard.script0.js#L834)、[captureCoreDumpEvidence · JS L831](../recovered_web/dashboard.script0.js#L831)。

**C 接口入口**：[GET /coredump/info · 0x4806cbde](../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c)。

```c
locate_latest_successful_flash_coredump(); validate_image_and_size();
if (summary_available) publish_crash_identity_registers_stack_and_reason();
else publish_validation_or_unavailability_result();
```

<a id="coredump_download"></a>
## 8. 令牌下载、大小与SHA256核对

**证据层次**：C授权与前端校验确认。

下载需要X-T2CAN-OTA-Token；HTTP头包含firmware、appELF、core SHA及diagnostic boot session，前端核对信息/长度/摘要/身份，最大65536字节。失败保留诊断错误，避免把任意.bin认作匹配的转储。

**前端入口**：[fetchVerifiedCoreDump · JS L828](../recovered_web/dashboard.script0.js#L828)、[downloadCoreDump · JS L836](../recovered_web/dashboard.script0.js#L836)。

**C 接口入口**：[GET /coredump.bin · 0x4806d406](../decompiled/functions/4806d406_recovered_http_get_coredump_bin_4806d406.c)、[GET /coredump/info · 0x4806cbde](../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c)、[GET /ota/status · 0x4806bbf8](../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

**关键控件／参数**：`coreDumpDownloadButton`。

```c
require_ota_token(); stream_valid_coredump_with_identity_headers();
ui_require_size_within_65536_and_equal_info_size();
ui_verify_sha256_and_consistent_identity_headers();
if (all_checks_pass) save_coredump_blob(); else export_verification_error();
```

