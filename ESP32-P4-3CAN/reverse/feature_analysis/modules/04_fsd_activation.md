# FSD、自动激活与预警激活

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../../skills/albert-p4-can-analysis/references/control-protocol.md#3fd)；其中明确区分已确认字段与剩余缺口。

[离车泊车完整证据](../../analysis/EXIT_PARKING.md)包含293/30A字段、时限、来源有效性边界及实车缺口。

[返回总览](../README.md)

0x481062c4 调用 0x480486a2、0x48048fea 等策略／状态辅助函数。泊车293请求与驾驶位30A模拟的字段、门控和发送前复检已核对；其他协议激活序列仍有缺口。信号、来源帧、计数、提交与终态共同决定执行，实际离车泊车效果未实测。下列语义函数名由分析者命名。

**运行／解析关联函数（模块共享）**：[`0x48101f34`](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[`0x480f2fc2`](../../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c)、[`0x481062c4`](../../decompiled/functions/481062c4_FUN_ram_481062c4.c)、[`0x480486a2`](../../decompiled/functions/480486a2_FUN_ram_480486a2.c)、[`0x48048fea`](../../decompiled/functions/48048fea_FUN_ram_48048fea.c)、[`0x480c3830`](../../decompiled/functions/480c3830_FUN_ram_480c3830.c)、[`0x4804bb9a`](../../decompiled/functions/4804bb9a_FUN_ram_4804bb9a.c)、[`0x480d8f08`](../../decompiled/functions/480d8f08_FUN_ram_480d8f08.c)、[`0x480da2a8`](../../decompiled/functions/480da2a8_FUN_ram_480da2a8.c)、[`0x480c76a2`](../../decompiled/functions/480c76a2_FUN_ram_480c76a2.c)、[`0x480c6318`](../../decompiled/functions/480c6318_FUN_ram_480c6318.c)、[`0x480cb95c`](../../decompiled/functions/480cb95c_FUN_ram_480cb95c.c)、[`0x480ccf42`](../../decompiled/functions/480ccf42_FUN_ram_480ccf42.c)、[`0x480db9d4`](../../decompiled/functions/480db9d4_FUN_ram_480db9d4.c)、[`0x480df834`](../../decompiled/functions/480df834_FUN_ram_480df834.c)、[`0x4805abf4`](../../decompiled/functions/4805abf4_FUN_ram_4805abf4.c)、[`0x4809ec88`](../../decompiled/functions/4809ec88_FUN_ram_4809ec88.c)、[`0x4ff230e8`](../../decompiled/functions/4ff230e8_FUN_ram_4ff230e8.c)、[`0x4ff232be`](../../decompiled/functions/4ff232be_FUN_ram_4ff232be.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="fsd_protocol"></a>
## 1. V12／V13／V14 协议选择与特性适配

**证据层次**：C 归一化与前端适配确认。

协议值保留12、14，其余归一化为13。切换改变物理输入说明、V14驾驶模式、灯光和障碍物来源；运行动作未结束可能返回 control_version_busy。

**前端入口**：[updateFsdProtocolUi · JS L259](../../recovered_web/dashboard.script0.js#L259)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)、[updateFsdProtocolUi · JS L259](../../recovered_web/dashboard.script0.js#L259)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[updateFsdProtocolUi · JS L259](../../recovered_web/dashboard.script0.js#L259)、[applyNormalizedFsdParkStartConfig · JS L268](../../recovered_web/dashboard.script0.js#L268)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)、[driverFeatureGroups · JS L1216](../../recovered_web/dashboard.script0.js#L1216)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[updateV13SpaceToSpaceUi · JS L249](../../recovered_web/dashboard.script0.js#L249)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[setFsdAutoStartMaster · JS L269](../../recovered_web/dashboard.script0.js#L269)、[bindFsdAutoStartControls · JS L287](../../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /fsd_auto_start/master · 0x480f2fc2](../../decompiled/functions/480f2fc2_recovered_http_post_fsd_auto_start_master_480f2fc2.c)、[GET /config · 0x480bd450](../../decompiled/functions/480bd450_recovered_http_get_config_480bd450.c)。

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

**前端入口**：[bindFsdAutoStartControls · JS L287](../../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[bindFsdAutoStartControls · JS L287](../../recovered_web/dashboard.script0.js#L287)、[updateFsdAutoStartInputLabels · JS L258](../../recovered_web/dashboard.script0.js#L258)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[bindFsdAutoStartControls · JS L287](../../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[bindFsdAutoStartControls · JS L287](../../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[updateFsdAutoStartInputLabels · JS L258](../../recovered_web/dashboard.script0.js#L258)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

**关键控件／参数**：`fsdAutoStartGroundEnabled`。

```c
if (right_input_trigger && fresh_gear == R && ground_enabled)
    submit_ground_activation_intent_if_permitted();
```

<a id="occupancy_spoof"></a>
## 13. 驾驶位有人与安全带信号模拟

**证据层次**：原网页、反编译与关键机器码确认；车辆效果未验证。

独立开关随PARTY30A DLC8且seed0D校验有效的来源计数，要求通信、PARTY TX与传输许可；无局部FSD总开关、泊车窗口、零车速或关门条件。d0=(原值&E0)|09同时模拟有人/已系带，d6高四位计数+1，d7重算；来源+5ms截止。原值已满足、计数重复或pending时跳过。只读VEH3A1 MUX2确认，连续两帧且间隔/年龄≤300ms。内部TX标志由终态更新；公开Active还要求开关启用、成功TX与两帧3A1目标反馈均≤300ms。反馈状态匹配不证明因果或泊车完成。自动换挡读取构造前的30A输入缓存，上游自回波剔除仍未完整确认。

**前端入口**：[bindFsdAutoStartControls · JS L287](../../recovered_web/dashboard.script0.js#L287)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /runtime_status · 0x4806851c](../../decompiled/functions/4806851c_recovered_http_get_runtime_status_4806851c.c)。

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

**前端入口**：[commercialToggle · JS L1584](../../recovered_web/dashboard.script0.js#L1584)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[commercialToggle · JS L1584](../../recovered_web/dashboard.script0.js#L1584)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)。

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

**前端入口**：[commercialSafetyState · JS L1577](../../recovered_web/dashboard.script0.js#L1577)、[commercialToggle · JS L1584](../../recovered_web/dashboard.script0.js#L1584)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[POST /ambient_config · 0x480f584c](../../decompiled/functions/480f584c_recovered_http_post_ambient_config_480f584c.c)。

```c
on_safety_master(on) {
    if (on) fsdWarningLaneModes = 3;
    set(fsdWarningActivationEnabled, on); set(fsdSideCollisionActivationEnabled, on);
    set(fsdDdawEnabled, on);
    if (blind_spot_supported) save_ambient_blind_spot(on);
}
```

