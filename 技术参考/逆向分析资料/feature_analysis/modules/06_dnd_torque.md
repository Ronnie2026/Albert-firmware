# 免打扰、摄像头、滚轮与扭矩状态机

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../../skills/albert-p4-can-analysis/references/control-protocol.md#3fd)；其中明确区分已确认字段与剩余缺口。

[返回总览](../README.md)

扭矩模块的输入处理0x4804ea2a与状态机0x4804cfd2已定位，可直接核对0x370、0x39B、门控、相位、方向和随机区间。攝像头“关闭”是页面名称；静态证据支持报文状态修改，不能声称物理断电。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x4804e2a8`](../../decompiled/functions/4804e2a8_FUN_ram_4804e2a8.c)、[`0x4804c54e`](../../decompiled/functions/4804c54e_FUN_ram_4804c54e.c)、[`0x4804cfd2`](../../decompiled/functions/4804cfd2_FUN_ram_4804cfd2.c)、[`0x4804ea2a`](../../decompiled/functions/4804ea2a_FUN_ram_4804ea2a.c)、[`0x4804c858`](../../decompiled/functions/4804c858_FUN_ram_4804c858.c)、[`0x4804cb48`](../../decompiled/functions/4804cb48_FUN_ram_4804cb48.c)、[`0x4804cd2c`](../../decompiled/functions/4804cd2c_FUN_ram_4804cd2c.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="dnd_master"></a>
## 1. 免打扰主开关及必要子项

**证据层次**：接口确认；运行语义重建。

启用主开关时前端同步要求摄像头屏蔽和ISA抑制；扭矩和滚轮有独立从项及运行门控。

**前端入口**：[applyDndMasterRequiredChildren · JS L652](../../recovered_web/dashboard.script0.js#L652)、[applyNormalizedDndConfig · JS L664](../../recovered_web/dashboard.script0.js#L664)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[getVal · JS L262](../../recovered_web/dashboard.script0.js#L262)、[applyNormalizedDndConfig · JS L664](../../recovered_web/dashboard.script0.js#L664)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

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

**前端入口**：[applyNormalizedDndConfig · JS L664](../../recovered_web/dashboard.script0.js#L664)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

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

**前端入口**：[updateDndSpeedPeriodicUi · JS L651](../../recovered_web/dashboard.script0.js#L651)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[getVal · JS L262](../../recovered_web/dashboard.script0.js#L262)、[updateDndSpeedPeriodicUi · JS L651](../../recovered_web/dashboard.script0.js#L651)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[saveTorqueNagEnabled · JS L662](../../recovered_web/dashboard.script0.js#L662)、[torqueNagControlValue · JS L653](../../recovered_web/dashboard.script0.js#L653)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

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

**前端入口**：[renderTorqueNagStatus · JS L657](../../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

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

**前端入口**：[renderTorqueNagStatus · JS L657](../../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

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

**前端入口**：[updateTorqueNagSummary · JS L655](../../recovered_web/dashboard.script0.js#L655)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)、[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[updateTorqueNagSummary · JS L655](../../recovered_web/dashboard.script0.js#L655)、[renderTorqueNagStatus · JS L657](../../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

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

**前端入口**：[renderTorqueNagStatus · JS L657](../../recovered_web/dashboard.script0.js#L657)。

**C 接口入口**：[GET /torque_nag/status · 0x4806e388](../../decompiled/functions/4806e388_recovered_http_get_torque_nag_status_4806e388.c)。

```c
output = clone_valid_oem_template(); encode_selected_torque(output);
update_counter_and_checksum_by_protocol();
token = submit(output);
if (accepted(token)) mark_pending_and_track_counter();
on_terminal(token, result) update_success_failure_and_clear_matching_pending();
```

