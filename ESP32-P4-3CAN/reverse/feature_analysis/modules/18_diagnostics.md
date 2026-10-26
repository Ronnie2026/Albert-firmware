# 健康、CAN、系统指标、JSON与崩溃转储

[返回总览](../README.md)

诊断快照可能未开放某些采集能力；available=false / diagnostics_disabled必须如实展示，不能将空数组当成正常零值。coredump是最新成功写入Flash的转储，可能来自旧启动；当前bootstrap文件未包含该分区实际内容。

**运行／解析关联函数（模块共享）**：[`0x480c0f3c`](../../decompiled/functions/480c0f3c_FUN_ram_480c0f3c.c)、[`0x4803b2ec`](../../decompiled/functions/4803b2ec_FUN_ram_4803b2ec.c)、[`0x4806851c`](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[`0x4808334c`](../../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)、[`0x4807fa5c`](../../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)、[`0x4806f630`](../../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)、[`0x4806cbde`](../../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c)、[`0x4806d406`](../../decompiled/functions/4806d406_recovered_http_get_coredump_bin_4806d406.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="health"></a>
## 1. 健康与心跳、CAN新鲜度和告警

**证据层次**：C健康原因与前端确认。

含运行可用性、任务心跳、来源新鲜、Bus-Off/丢帧/恢复/P0结算等原因。告警级别与原因组合由0x4803b2ec一类函数判断，多个连续快照用于展示。

**前端入口**：[pollHealth · JS L760](../../recovered_web/dashboard.script0.js#L760)。

**C 接口入口**：[GET /health · 0x480c2bda](../../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)。

```c
health = evaluate_task_heartbeat_can_freshness_bus_state_and_settlement();
include_boot_session_and_observation_sequence();
ui_do_not_replace_new_snapshot_with_old_boot_or_sequence();
```

<a id="can_diag"></a>
## 2. 三路接收发送、控制器故障和热ID

**证据层次**：接口与前端确认。

每通道逻辑名、GPIO、车辆针脚、TWAI/队列/错误/最近帧状态及热门ID列表；热门ID为观察统计，不是全部支持车辆报文的协议列表。

**前端入口**：[pollCanDiagnostics · JS L820](../../recovered_web/dashboard.script0.js#L820)、[pollCanHotIds · JS L766](../../recovered_web/dashboard.script0.js#L766)、[renderCanDiagnosticCard · JS L776](../../recovered_web/dashboard.script0.js#L776)。

**C 接口入口**：[GET /can_diag · 0x4807fa5c](../../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)、[GET /can_hot_ids · 0x480c037a](../../decompiled/functions/480c037a_recovered_http_get_can_hot_ids_480c037a.c)。

```c
for (bus in three_buses) snapshot_driver_rx_tx_errors_and_recent_observations(bus);
return_hot_id_statistics_with_capture_scope();
render_vehicle_pin_numbers_separately_from_board_gpio();
```

<a id="runtime_diag"></a>
## 3. 各功能相位、延迟、来源与终态诊断

**证据层次**：C状态字段确认。

包括FSD P0、摄像头、激活、速度、换挡、DND、灯光、预热、雾灯、座椅、PARTY和ambientTx等。配置enabled、effective、pending、accepted、terminal需要分开理解。某些fast path diagnostics被编译/配置关闭会返回available=false。

**前端入口**：[loadRuntimeStatus · JS L817](../../recovered_web/dashboard.script0.js#L817)、[renderP0Observation · JS L784](../../recovered_web/dashboard.script0.js#L784)。

**C 接口入口**：[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
snapshot_each_feature_owner_phase_source_generation_and_terminal_counters();
if (!diagnostic_capability_enabled) publish_unavailable_reason();
ui_format_runtime_state_without_treating_config_enabled_as_active();
```

<a id="system_diag"></a>
## 4. 固件身份、CPU、温度、内存、任务与持久化

**证据层次**：C序列化字段确认。

chipId/model/revision、commit/ELF、温度、每core负载、内部RAM/PSRAM/DMA、stackHighWater、任务优先级/状态、SDIO stream fault、configurationPersistence、flashSafeLease、p4_data状态。task列表按tasks参数请求。

**前端入口**：[loadSystemStatus · JS L818](../../recovered_web/dashboard.script0.js#L818)。

**C 接口入口**：[GET /system_status · 0x4808334c](../../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)。

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

**前端入口**：[captureWebTransportEvidence · JS L823](../../recovered_web/dashboard.script0.js#L823)、[snapshotWebClientMetrics · JS L20](../../recovered_web/dashboard.script0.js#L20)。

**C 接口入口**：[GET /web_metrics · 0x4806f630](../../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)。

```c
server_measure(build_start, send_start, bytes_and_write_results);
client_measure(queue_time, fetch_time, parse_time, endpoint_result);
export_both_sides_with_capture_times();
```

<a id="diag_export"></a>
## 6. 完整诊断JSON导出

**证据层次**：前端确认。

浏览器合并多个接口快照、Web客户端证据及可用转储信息，创建Blob下载；不是后端额外提供一个“所有诊断”路由。各快照采集时间不同，不承诺原子同时。

**前端入口**：[downloadCanDiagnostics · JS L837](../../recovered_web/dashboard.script0.js#L837)。

**C 接口入口**：[GET /status · 0x480c0178](../../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[GET /system_status · 0x4808334c](../../decompiled/functions/4808334c_recovered_http_get_system_status_4808334c.c)、[GET /can_diag · 0x4807fa5c](../../decompiled/functions/4807fa5c_recovered_http_get_can_diag_4807fa5c.c)、[GET /health · 0x480c2bda](../../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)、[GET /web_metrics · 0x4806f630](../../decompiled/functions/4806f630_recovered_http_get_web_metrics_4806f630.c)。

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

**前端入口**：[loadCoreDumpInfo · JS L834](../../recovered_web/dashboard.script0.js#L834)、[captureCoreDumpEvidence · JS L831](../../recovered_web/dashboard.script0.js#L831)。

**C 接口入口**：[GET /coredump/info · 0x4806cbde](../../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c)。

```c
locate_latest_successful_flash_coredump(); validate_image_and_size();
if (summary_available) publish_crash_identity_registers_stack_and_reason();
else publish_validation_or_unavailability_result();
```

<a id="coredump_download"></a>
## 8. 令牌下载、大小与SHA256核对

**证据层次**：C授权与前端校验确认。

下载需要X-T2CAN-OTA-Token；HTTP头包含firmware、appELF、core SHA及diagnostic boot session，前端核对信息/长度/摘要/身份，最大65536字节。失败保留诊断错误，避免把任意.bin认作匹配的转储。

**前端入口**：[fetchVerifiedCoreDump · JS L828](../../recovered_web/dashboard.script0.js#L828)、[downloadCoreDump · JS L836](../../recovered_web/dashboard.script0.js#L836)。

**C 接口入口**：[GET /coredump.bin · 0x4806d406](../../decompiled/functions/4806d406_recovered_http_get_coredump_bin_4806d406.c)、[GET /coredump/info · 0x4806cbde](../../decompiled/functions/4806cbde_recovered_http_get_coredump_info_4806cbde.c)、[GET /ota/status · 0x4806bbf8](../../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

**关键控件／参数**：`coreDumpDownloadButton`。

```c
require_ota_token(); stream_valid_coredump_with_identity_headers();
ui_require_size_within_65536_and_equal_info_size();
ui_verify_sha256_and_consistent_identity_headers();
if (all_checks_pass) save_coredump_blob(); else export_verification_error();
```

