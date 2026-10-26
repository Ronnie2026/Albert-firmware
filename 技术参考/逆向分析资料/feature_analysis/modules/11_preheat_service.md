# 电池预热和维修模式

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../../skills/albert-p4-can-analysis/references/control-protocol.md#preheat)；其中明确区分已确认字段与剩余缺口。

[返回总览](../README.md)

预热开关是有确认、计时和关闭恢复的命令；配置enabled、runtimeAllowed、requestActive、heatingActive分别表示不同层次。维修模式参数存在，但全部厂家诊断报文操作未恢复。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480e8070`](../../decompiled/functions/480e8070_FUN_ram_480e8070.c)、[`0x4810bb96`](../../decompiled/functions/4810bb96_FUN_ram_4810bb96.c)、[`0x48107fd2`](../../decompiled/functions/48107fd2_FUN_ram_48107fd2.c)、[`0x4810834a`](../../decompiled/functions/4810834a_FUN_ram_4810834a.c)、[`0x4805abf4`](../../decompiled/functions/4805abf4_FUN_ram_4805abf4.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="preheat_start"></a>
## 1. 预热请求与15／30／45／60分钟许可

**证据层次**：接口确认；运行语义重建。

支持四种时间，显式开启请求由运行状态机处理；监测heating、thermal、SOC、electrical新鲜度，展示目标/最低/最高温度、电压电流功率。许可不等于已实际加热。

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)、[renderBatteryPreheatStatus · JS L713](../../recovered_web/dashboard.script0.js#L713)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

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

**前端入口**：[renderBatteryPreheatStatus · JS L713](../../recovered_web/dashboard.script0.js#L713)。

**C 接口入口**：[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)、[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[retryBatteryPreheatStop · JS L729](../../recovered_web/dashboard.script0.js#L729)、[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

**关键控件／参数**：`canbServiceModeEnabled`。

```c
candidate.canbServiceModeEnabled = parse_bool_if_present();
submit_config_and_persist();
effective_service_mode = configured && relevant_bus_ready;
// 维修协议的完整服务ID、触发及退出序列尚未恢复。
```

