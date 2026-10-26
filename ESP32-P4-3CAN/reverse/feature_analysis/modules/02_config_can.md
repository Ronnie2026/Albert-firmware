# 共用配置、自动保存与 CAN 基础

[返回总览](../README.md)

原程序是 Arduino/ESP-IDF 上的 C++ 固件；本文用 C 风格表达。HTTP 解析与控制命令提交、实时任务、状态快照、NVS 持久化分层。存在间接虚函数调用，calls.tsv 的直接调用表并不完整。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480bb868`](../../decompiled/functions/480bb868_FUN_ram_480bb868.c)、[`0x480e8070`](../../decompiled/functions/480e8070_FUN_ram_480e8070.c)、[`0x4810d080`](../../decompiled/functions/4810d080_recovered_can_rt_task.c)、[`0x4ff2520a`](../../decompiled/functions/4ff2520a_recovered_fsd_p0_task.c)、[`0x4803cdd8`](../../decompiled/functions/4803cdd8_FUN_ram_4803cdd8.c)、[`0x4805cb5e`](../../decompiled/functions/4805cb5e_FUN_ram_4805cb5e.c)、[`0x480dc4f2`](../../decompiled/functions/480dc4f2_FUN_ram_480dc4f2.c)、[`0x480312a6`](../../decompiled/functions/480312a6_recovered_probe_can_pin_layout.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="config_read"></a>
## 1. 加载配置、默认值和归一化回读

**证据层次**：接口与前端确认。

GET 通过 0x480bb868 序列化配置。前端使用默认值补足缺字段，并保护加载前已编辑字段；默认值是页面兜底，不等于空 NVS 时的全部固件默认值。

**前端入口**：[loadConfig · JS L890](../../recovered_web/dashboard.script0.js#L890)、[applyConfigDefaults · JS L261](../../recovered_web/dashboard.script0.js#L261)、[applyNormalizedGearConfig · JS L694](../../recovered_web/dashboard.script0.js#L694)。

**C 接口入口**：[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[body · JS L994](../../recovered_web/dashboard.script0.js#L994)、[scheduleAutoSave · JS L995](../../recovered_web/dashboard.script0.js#L995)、[bindAutoSave · JS L998](../../recovered_web/dashboard.script0.js#L998)、[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /save · 0x480f34ec](../../decompiled/functions/480f34ec_recovered_http_post_save_480f34ec.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /save · 0x480f34ec](../../decompiled/functions/480f34ec_recovered_http_post_save_480f34ec.c)。

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

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[loadCanPinLayout · JS L58](../../recovered_web/dashboard.script0.js#L58)、[saveCanPinLayout · JS L59](../../recovered_web/dashboard.script0.js#L59)。

**C 接口入口**：[GET /can_pin_layout · 0x480681de](../../decompiled/functions/480681de_recovered_http_get_can_pin_layout_480681de.c)、[POST /can_pin_layout · 0x480ff1e4](../../decompiled/functions/480ff1e4_recovered_http_post_can_pin_layout_480ff1e4.c)。

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

**C 接口入口**：[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /can_diag · 0x4807fa5c](../../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)。

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

**前端入口**：[createDashboardReadCoordinator · JS L922](../../recovered_web/dashboard.script0.js#L922)、[fetchStatusJson · JS L966](../../recovered_web/dashboard.script0.js#L966)、[pollFast · JS L980](../../recovered_web/dashboard.script0.js#L980)、[pollStatus · JS L981](../../recovered_web/dashboard.script0.js#L981)、[setPolling · JS L993](../../recovered_web/dashboard.script0.js#L993)。

**C 接口入口**：[GET /status_fast · 0x4806eb88](../../decompiled/functions/4806eb88_recovered_http_get_status_fast_4806eb88.c)、[GET /status · 0x480c0178](../../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)、[GET /health · 0x480c2bda](../../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)、[GET /web_metrics · 0x4806f630](../../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)。

**关键控件／参数**：`poll`。

```c
poll_if_scope_visible_and_not_paused(endpoint);
if (same_read_in_flight) coalesce_request();
fetch_with_abort_timeout_and_record_duration();
on_ota_begin() { pause_reads(); await_active_reads_to_settle(); }
```

