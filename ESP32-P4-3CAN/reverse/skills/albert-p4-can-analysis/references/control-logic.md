# 功能怎样由 C 状态机实现

[返回 Skill](../SKILL.md) · [全部功能对照](feature-can-map.md) · [已确认字段](can-frames.md)

本文件按 CAN 数据流整理业务。除明确的位公式／数值外，函数名、结构名和枚举名称为分析者的语义表达；`protocol_*`、`*_gates_pass()` 等表示尚未逐位恢复的步骤。每节链接原来逐功能的 JS、HTTP、C 证据及伪代码。

## 配置先应用，再由运行状态决定是否输出

输入是网页配置或动作；`0x48101F34` 解析共用配置，`0x480E8070` 应用运行命令。先构造候选、检查参数、协议、依赖、revision 和运行互斥，再提交运行域与持久化。不同配置域的提交顺序不同，不宣称所有设置跨域原子生效。

```c
Config c = snapshot_current_config();
parse_only_present_fields(http_request, &c);
normalize_protocol_and_parent_child_dependencies(&c);
if (!ranges_valid(c)) return INVALID;
if (!revision_matches(c)) return STALE_REVISION;
if (ota_or_required_stop_blocks_change(c)) return BUSY;
submit_runtime_command(c);
if (!runtime_applied()) return PENDING;
return persist_required_domains_and_report_actual_state();
```

通信总开关与三路 TX 开关只是许可链的一部分；关闭时可能需要结算在途输出。每项 feature 还检查来源、协议、有效驾驶员配置与 owner。

详见[共用配置](features/02_config_can.md)。

<a id="drivers"></a>
## 驾驶员：用座椅反馈选择参数

CAN 输入是驾驶位位置反馈及挡位；自动识别使用 track、backrest、lift、tilt 四类位置，精确距离权重／阈值未完整恢复。新增／重新绑定要求 P 挡与新鲜位置，检查位置冲突后存储。改名没有独立 CAN 输出；删除要清理关联速度与氛围配置。

```c
if (mode == AUTO) {
    if (fresh_valid_driver_position())
        driver_id = match_bound_four_axis_position(); // 权重／阈值未确认
    else driver_id = unresolved_or_default_by_runtime_policy();
} else driver_id = selected_manual_id;

apply_driver_features_or_defaults(driver_id);
select_driver_speed_and_ambient_domains(driver_id);
publish_active_driver_and_parameter_source();
```

确认是 activeDriverId／参数来源与持久化结果，不是一次独立车控动作。主要证据 `0x480FA85C`、`0x48052FFE`、`0x4805228E`。详见[驾驶员](features/03_drivers.md)。

<a id="fsd"></a>
## FSD 与自动激活：事件 → 意图 → 协议动作

输入包含协议版本、FSD/AP 可用状态、物理短按／长按、P/D/R 挡位变化、车速、预警／疲倦信号。可用状态按配置累计 1～10 帧确认；协议12、14保留，其余归一化为13。

| 触发 | 意图 | 必须保留的限制 |
|---|---|---|
| 右侧短按／再次短按 | 稳盘启动／取消 | 页面的稳盘名称不能解释成机械固定方向盘 |
| P 挡物理动作 | P 挡出发流程 | `fsdParkStartEnabled` 本版隐藏并强制 true，完整出发帧序列待确认 |
| 长按、P→D、R→D | 自动激活 | R→D 有页面规定的15秒速度窗口；首次P→D全部复位边界未恢复 |
| R 挡右侧物理动作 | 对应激活意图 | 动作序列随版本变化，位布局未完全恢复 |
| 车道／碰撞／侧撞／疲倦预警 | 按配置和级别筛选激活 | 预警不是无条件触发许可 |
| CH399低四位3～6→1/2 | 延迟后随CH293提出开始泊车请求 | CH257两帧raw500、间隔／年龄≤100ms；d3高四位=C；发送前复检，移动暂停但计时继续 |
| enhanced AP兼容配置 | 保存增强功能许可 | 控件隐藏，不能据配置声称完整智能召唤已恢复 |

泊车默认延迟2秒、持续30秒，需FSD/泊车/通信/CH TX开关；所查路径无显式协议13限制。驾驶位模拟是另一独立开关，随PARTY30A把d0低5bit设为09并更新计数/校验，以VEH3A1 MUX2只读确认；没有局部泊车窗口限制，自动换挡仍读真实带状态。字段、来源校验边界及离车行为缺口见[泊车与驾驶位模拟](exit-parking.md)。

```c
void tick_fsd(void) {
    observe_protocol_specific_availability_and_input_edges();
    if (!fsd_master || !can_ready) { settle_owned_requests(); return; }
    if (!availability_confirmed(required_frames)) return;

    Intent intent = select_enabled_activation_or_cancel_event();
    if (!intent.present || !activation_gates_pass(intent)) return;
    advance_protocol_action_phase(intent, fresh_templates);
    // CH 0x3FD MUX0 的实际 P0 发送由 fsd_p0 执行。
    submit_eligible_phase_output();
    settle_phase_with_matching_tx_and_vehicle_observations();
}
```

网页“安全驾驶”开关是 JS 批量开关组合，无独立同名 C 总开关。它仍落到多个配置项和既有状态机。

主要证据 `0x481062C4`、`0x480486A2`、`0x48048FEA`、`0x480C3830`。详见[FSD与激活](features/04_fsd_activation.md)。

<a id="speed"></a>
## 速度补偿：选择目标，再跟踪确认值

CAN 输入包含限速、原车偏移／智能设速、驾驶模式、速度相关状态；另读取当前驾驶员的目标表。后端区分 `originalSmartSetSpeedKnown/Enabled`、`highTargetSource`、`finalRaw`、`confirmedRaw`。

| 参数／来源 | 已确认规则 |
|---|---|
| 自定义表 | 30格对应5、10…150 km/h，目标整数1～255，按driverId/revision保存 |
| V13页面八段 | 展开到50～139范围内对应的5km/h格，不是八条 CAN 帧 |
| 最大偏移 raw | 页面百分比×4；0～60%对应raw0～240 |
| V13低速偏移 | 独立百分比0～60；不要再乘4后冒充该字段 |
| HW3策略 | 舒适／标准／迅捷，与原车车距来源相关；八段目标 |
| V14模式 | Chill/Normal/Hurry/Max/Sloth，枚举0～4；与HW3策略分开 |
| 当前降速界面 | 每500ms下降1～10 km/h；旧百分比/秒字段另存 |

```c
if (!effective_auto_offset || !fresh_speed_policy_sources()) return;
Policy p = resolve_protocol_driver_and_vehicle_policy();
if (!p.source_known) return WAIT_SOURCE;
Target desired = select_target_from_vehicle_or_driver_table(p);
Target candidate = apply_confirmed_target_slew_and_stability(desired);
Frame out = protocol_encode_speed_from_source(candidate);
submit_with_source_and_owner_generation(out);

on_matching_confirmation() { update_confirmed_target(); }
on_failed_or_invalidated_submission() { enter_recovery_from_confirmed_state(); }
```

具体帧位、百分比编码、舍入和完整目标优先级仍有缺口，不能把抽象 `protocol_encode_speed_from_source()` 写成猜测的 `data[byte]`。

主要证据 `0x4809EC88`、`0x4805883A`、`0x480381CC`、`0x4810CA34`。详见[速度补偿](features/05_speed.md)。

<a id="dnd"></a>
## 摄像头、ISA 与滚轮：条件覆盖和动作调度

免打扰主开关在 JS 归一化时要求摄像头屏蔽、ISA抑制从项；扭矩与滚轮有独立开关链。摄像头是 CAN 状态覆盖，静态证据不能证明摄像头电气断电。V14延时 UI 为3～10秒，全部回退边沿待确认。

```c
if (dnd_master && camera_enabled && camera_source_eligible())
    apply_protocol_camera_status_override();
if (eligible_v14_camera_fallback())
    restore_source_after_configured_delay();

if (dnd_master && isa_enabled && fresh_source && isa_chime_condition_active)
    submit_template_with_selected_isa_chime_field_suppressed();

if (scroll_enabled && eligible_hands_on_reminder())
    request_scroll(mode == 0 ? LEFT_VOLUME : RIGHT_SPEED);
if (periodic_scroll_allowed() && now_ms >= next_periodic_at) {
    request_scroll_for_selected_mode();
    next_periodic_at = now_ms + random_ordered_range(min_ms, max_ms);
}
```

后台周期从网页秒数转换为毫秒。滚轮免打扰与滚轮换挡是不同功能，需要 owner 协调；ISA抑制也不能解释为全车静音。

详见[免打扰](features/06_dnd_torque.md)；扭矩详见下一节。

<a id="torque"></a>
## 扭矩：PARTY 0x39B + 0x370 的状态机

具体字段和 checksum 已在[报文文档](can-frames.md)给出。这里解释为什么符合报文格式仍可能不输出。

| 门控／参数 | 已确认值 |
|---|---|
| 来源与在途 | `0x370` 来源年龄≤5000 µs；pending时拒绝覆盖；识别近100 ms完整帧自回波 |
| DAS来源 | seen、valid、age 检查；配置 timeout100～2000 ms |
| 转角门控 | 约±500 deci-degree = ±50° |
| 方向 | angle>10取负、angle<−10取正，中心沿用方向；3次观察确认，间隔过长重新arming |
| 预防扭矩 | 幅值150～180 centi-Nm =1.50～1.80 Nm，min≤max |
| 纠正扭矩 | 幅值180～250 =1.80～2.50 Nm；UI默认max2.40，与后端上限不同 |
| 纠正帧数 | 0 或10～255；完整推进点依提交与终态边界 |
| 活动／发送时段 | 至少100 ms，区间有序 |
| 休息／暂停 | min/max可同时0，否则至少100 ms且有序 |

已恢复相位包括 disabled、wait-das、arming、maintenance、rest、corrective、verify、fault-hold、monitor-only、pre-corrective-pause、stability-verify。下列是相位关系概括，省略尚未完全核对的失败恢复全序：

```c
if (!effective_enable_chain) return set_phase(DISABLED);
if (!das_seen || !das_valid || das_age_ms > cfg.das_timeout_ms)
    return set_phase(WAIT_DAS);
if (angle_outside_gate) return NO_OUTPUT;
if (!three_observation_direction_confirmed()) return set_phase(ARMING);

switch (phase) {
case MAINTENANCE:
    select_preventive_magnitude_for_confirmed_direction();
    if (activity_elapsed && rest_nonzero) begin_rest();
    break;
case REST:
    if (rest_elapsed) begin_maintenance();
    return NO_OUTPUT;
case PRE_CORRECTIVE_PAUSE:
    if (pause_elapsed) begin_corrective();
    return NO_OUTPUT;
case CORRECTIVE:
    select_corrective_magnitude();
    if (correction_budget_completed_at_runtime_boundary()) begin_verify();
    break;
case VERIFY:
    observe_hos_and_recovery_without_assuming_send_changed_hos();
    break;
case STABILITY_VERIFY:
    optionally_emit_preventive_magnitude();
    break;
case FAULT_HOLD:
    require_confirmed_healthy_observation_window_for_recovery();
    return NO_OUTPUT;
case MONITOR_ONLY:
    update_observations(); return NO_OUTPUT;
}
return decision_for_fresh_370_source();
```

H2等待、纠正触发、恢复观察由 `0x39B` 状态原值与计时共同推进。不同相位不能无条件每tick发送；实际输出仍依赖新鲜 `0x370` 来源。随机幅值／时间采用 xorshift 类PRNG辅助。

发送 accepted、terminalOk/Fail、超时、lateReceipt、counter冲突分别计数。专用包装路径 `0x480C5306` 调用 `0x4804EA2A`，实际提交调用 `0x480459FE`，避免误认为仅公共提交入口接入。

状态机 `0x4804CFD2`，校验 `0x4804E2A8`，归一化 `0x4804C54E`，阶段辅助 `0x4804C858/CB48/CD2C`。详见[扭矩逐项分析](features/06_dnd_torque.md)。

<a id="gear"></a>
## 换挡：各种触发共享安全门控与反馈

输入包括挡位、速度、刹车、安全带、转角、物理滚轮；障碍功能另取 PARTY建议／方向，V12使用雷达／USS融合。输出是挡位意图，具体全部请求位未恢复。

```c
Intent i = collect_enabled_steering_scroll_or_obstacle_intent();
if (!i.present) return;
if (!master || !fresh_gear_speed_template()) return BLOCKED;
if (speed_kph > configured_max_kph) return BLOCKED;
if (seatbelt_required && !fresh_confirmed_seatbelt()) return BLOCKED;
if (!brake_bypass && !brake_authorized()) return BLOCKED;
if (!cooldown_elapsed()) return BLOCKED;
if (shift_limit != 0 && count >= shift_limit) return BLOCKED;
if (request_pending) return WAIT_PREVIOUS;

submit_protocol_gear_request(i.target);
on_matching_tx_failure_or_action_timeout() { cancel_and_publish_failure(); }
on_fresh_vehicle_gear_matching_target() { complete_and_update_action_accounting(); }
```

页面最大允许速度0～8 km/h，次数0表示无限。转角 degree×10提交；左右滚轮正负动作枚举0无、1D、2R、3P、4D/R切换。“智能流畅”是JS设置冷却1000 ms、P30°、D/R60°、障碍30°的快捷填值，不是新的C算法。

V13/V14障碍物路径：

```c
if (gear != P || gear_stale) {
    invalidate_party_suggestion_and_direction();
    return;
}
if (!both_fresh_sources_after_latest_park_entry(0x255, 0x12B)) return WAIT_SOURCE;
Target t = decode_validated_party_suggestion(); // 完整原值枚举尚未确认
if (steering_confirmation_enabled) {
    // 页面要求D左转、R右转，阈值deci-degree。
    if (!steering_matches_target(t)) return BLOCKED;
}
request_target_through_shared_gear_gates(t);
```

V12允许在P/D/R按健康雷达、前后距离、有效探头数与方向提出建议；权重未全部恢复，USS raw不能猜成厘米。滚轮单次刹车授权的消费／复位边界仍未完整恢复。

主要证据 `0x4810AB0A`、`0x48049BB6`、`0x48056082`，补充来源 `0x480DA2A8`、`0x480C7974`。详见[换挡与障碍物](features/07_gear.md)。

<a id="seats"></a>
## 座椅：续租手动动作、记忆和反馈停止

网页左右各6组双向按钮，共24个方向动作；不能据此推导六独立反馈传感器。位置槽0～4左、5～9右。槽名localStorage，位置数据Flash，存储目的不同。

```c
on_http_manual_start(mask) {
    validate_enabled_bus_and_one_bit_24bit_mask(mask);
    refresh_manual_request_lease(mask);
}
// 浏览器按住时每250 ms发送manual_start续租。
on_http_manual_stop_or_cancel() { release_manual_and_requested_recall(); }

tick_seat() {
    observe_position_templates_and_physical_requests();
    if (lease_expired_or_released()) request_stop();
    if (valid_manual_request()) compose_manual_from_fresh_template();
    if (recall_active()) advance_toward_stored_target_using_position_feedback();
    on_target_reached_cancel_fault_or_physical_override() { settle_and_stop(); }
    publish_action_sequence_and_manual_recall_states();
}

on_save_slot(slot) {
    require_slot_0_to_9_and_fresh_position_and_4F3_template();
    queue_position_storage();
    publish_new_action_sequence_after_runtime_result();
}
```

`manual_stop/cancel`请求与实际停止结算分开；`seat_quiesce_busy`说明仍在退出。已确认手动750ms租约、50ms发送间隔、4F3的24方向和4E2/4E3四轴12bit位置，详见[座椅控制数值](control-protocol.md#seats)。物理请求与各模式仲裁全序、位置物理单位仍有缺口。

主要入口 `0x48100E14`，动作辅助 `0x48100218/051C/0820/0B10`。共用模板／控制辅助 `0x48041018`、`0x4804132A`、`0x480DAEFC` 也参与其他功能，不能全部命名为座椅专用。

详见[座椅](features/08_seats.md)。

<a id="ambient"></a>
## 氛围灯：六区基础目标和条件覆盖

CAN 输入包括开门／占用、FSD、盲区、左右转向／双闪及来源模板。区域0～3是door，4～5是dash；具体实车映射尚未校准，有 `independent_targets_trial` 提示。

```c
Target zones[6] = driver_base_rgb_brightness_and_enable();
if (fresh_valid_door_open_edge()) {
    bool ok = trigger_mode == ANY_VALID_DOOR || fresh_confirmed_unoccupied();
    if (ok) start_or_retrigger_welcome(); else count_filtered();
}
advance_selected_welcome_stage_and_zone_mask();
compose_enabled_fsd_blind_turn_welcome_overrides(zones);
// 完整覆盖优先级及五种灯效逐帧曲线尚未恢复。
for_each_eligible_zone_template() {
    submit_changed_target_with_owner_and_generation();
}
on_matching_terminal() { confirm_or_retry_or_restore_by_zone_state(); }
```

“应用全部”是网页把当前RGB/亮度复制到6区；逐区输出仍按运行目标合成。迎宾五样式枚举0～4，亮度10～100、tempo0～2、mask1～63，独立于常亮开关。盲区／转向释放后需恢复底层目标，不能只清网页显示。

主要证据 `0x4809FAA6`、`0x4804304E`、`0x48044258`、终态 `0x4804354E/43AB4`。详见[氛围灯](features/09_ambient.md)。

<a id="lighting"></a>
## 远光、爆闪、减速雾灯与倒车灯效

输入是物理灯光动作、FSD状态、减速相关信号、挡位及灯光来源；`0x48054A82`观察 VEH `0x273`模板和CH `0x118`等状态。该函数也处理多个其他ID，不能把所有字段推成“雾灯状态”。

```c
observe_light_sources_and_vehicle_motion();
if (fsd_force_high_enabled && applicable_fsd_state()) request_high_override();
if (configured_second_long_press_over_half_second()) begin_high_strobe();
if (deceleration_feature_enabled && fresh_motion_sources()) {
    Level l = classify_configured_light_heavy_deceleration();
    request_deceleration_fog_pattern(l);
}
if (eligible_reverse_entry()) {
    if (reverse_warning_enabled) request_hazard_and_eight_fog_warning_pattern();
    if (reverse_steady_enabled) request_reverse_steady_fog();
}
if (fog_pilot_runtime_active) advance_pilot_pattern();
resolve_current_owner_and_send_from_fresh_light_template();
settle_terminal_and_observed_light_feedback();
```

减速阈值页面按0.01 m/s² raw换算；全部估计、滤波与轻重波形未完整恢复。领航“保存许可”与“本次运行开始／停止”分开；多种雾灯模式同时启用的全部仲裁顺序待确认。

主要证据 `0x48054A82`、`0x48054722`、`0x480CCA8A`、`0x48053F2A`。详见[灯光](features/10_lighting.md)。

<a id="preheat"></a>
## 预热与维修：请求不等于实际工作

输入是热管理、温度、SOC、电压／电流／功率和加热状态。`enabled`、`runtimeAllowed`、`requestActive`、`heatingActive`分别表示配置、许可、请求和实际观察。

```c
on_explicit_preheat_enable() {
    require_duration_one_of(15, 30, 45, 60);
    submit_single_runtime_control_intent();
}
tick_preheat() {
    observe_thermal_soc_electrical_and_heating_freshness();
    if (runtime_allowed && required_templates_ready()) request_preheat();
    if (confirmed_timer_start_condition()) start_allowed_duration_once();
    if (deadline_reached()) { timed_out = true; begin_shutdown(); }
    if (shutdown_requested()) submit_required_off_frames();
    if (shutdown_confirmed()) finish();
    else if (shutdown_failed()) retain_recovery_required();
    publish_requested_and_observed_heating_separately();
}
on_explicit_retry_stop() { validate_recovery_state_and_retry_stop(); }
```

预热已确认VEH82的启停payload及500ms重提调度，详见[预热编码](control-protocol.md#preheat)。计时全部启动条件、实际加热反馈语义及关闭完整确认序列仍有缺口。前端对明确开关动作单次尝试，连接结果未知时回读；不能在伪逻辑里加无条件重放。

维修模式已确认`canbServiceModeEnabled→VEH339 d5bit7`，开0x80/关0x00；见[维修字段](control-protocol.md#service)。完整厂家诊断服务、全部执行和退出序列未恢复。

主要证据 `0x4810BB96`、`0x48107FD2`、`0x4810834A`、`0x4805ABF4`。详见[预热与维修](features/11_preheat_service.md)。

<a id="recorder"></a>
## 抓包：观察 RX 与发送生命周期

```c
validate_standard_id_include_exclude_lists_and_buses();
require(rx_enabled || tx_enabled);
allocate_capture_buffer();
request_three_bus_filter_generation();
if (!generation_applied) return PENDING;
begin_capture_for_requested_duration();

on_can_event(e) {
    if (recording && filter_matches(e)) append_or_count_drop(e);
}
on_stop_or_duration_expired() { stop_capture_and_keep_saved_buffer(); }
download() { require_stopped_and_records_present(); lock_and_stream_snapshot(); }
clear() { require_not_recording_or_downloading(); reset_buffer_and_metadata(); }
```

UI duration1～3600秒，提交毫秒；mask1/2/4选择线路。TX单位 `lifecycle_events`。CSV／BIN分别下载，BIN有版本／记录结构，不能按纯payload串解释；缓冲覆盖策略未重新实现。

主要证据 `0x480FD584`、`0x4806C4E8`、`0x4806FEE2`。详见[抓包](features/12_recorder.md)。

<a id="experiment"></a>
## CAN 实验：原车来源确认后的可配置修改链

最多4条规则，每条选择最多3路lane；每个lane缓存本线路真实来源，修改后回发本线路。来源确认、修改验证与启动是分开的步骤。

```c
listen(rules) { validate_standard_ids(); register_selected_source_observers(); }
on_real_source(f) { update_lane_dlc_template_period_generation(f); }
confirm_source() { require_acceptable_source(); mark_source_confirmed(); }
validate(candidate) {
    check_masks_dlc_mux_counter_checksum_lane_conflicts_and_builtin_owners();
    return publish_confirmed_generation_if_valid();
}
start(rules, generation) {
    require_exact_validated_rules_and_generation();
    acquire_selected_builtin_scopes(); state = RUNNING;
}

tick_lane(lane) {
    if (strict_rule && !all_selected_lanes_ready()) return PAUSED;
    if (!bus_and_owner_ready() || !fresh_template()) return WAIT_OR_SKIP;
    bool trigger = mode == SINGLE ? !single_completed :
                   mode == FOLLOW ? new_source_generation : period_due;
    if (!trigger || pending) return;
    if (!byte_masks_match(source)) return;
    output = apply_edit_mask_to_source();
    apply_validated_counter(output);
    apply_validated_checksum(output);
    if (delay_us) schedule_output_bound_to_source_generation(output);
    else submit_to_selected_source_bus(output);
}
on_new_source_superseding_delayed_output() { invalidate_old_delayed_generation(); }
stop() { invalidate_future_outputs(); state = STOPPING; }
on_all_pending_settled() { release_takeover(); state = STOPPED; }
```

mode0单次、1跟随、2周期；UI周期5～60000 ms，模板timeout0自动或≤5000 ms，delayUs≤5000000。counter支持原值偏移／独立自增；checksum支持SUM/XOR/CRC8与参与字节、add/xor、多项式、初值、反射、includeId。独立counter推进边界、全部checksum输入与finalize顺序尚未逐项证明。

generated、accepted、terminalOk/Fail、stale/busySkip、delayedSuperseded按lane独立解释。接管仅让本固件内置owner让行；停止等pending结算后释放。CH `0x3FD MUX0` 的实验P0实际发送在 `fsd_p0`。8个预设是存储模板，载入仍需重新确认／验证。

主要证据 `0x480E5CFA`、`0x480E6B84` 及 listen/confirm/validate/start/stop handlers。详见[实验](features/13_can_experiment.md)。

<a id="records"></a>
## FSD 记录与诊断：消费数据，不独立车控

```c
on_valid_driving_observation() {
    delta = calculate_accepted_distance_increment(); // 全算法／剔除阈值未恢复
    accumulate_driving_and_fsd_categories(delta, observed_fsd_state);
    update_current_trip_subtotal_and_total();
}
on_phone_clock_sync() { store_unix_and_uptime_anchor(); }
on_subtotal_reset() { reset_subtotal_domain(); }
on_clear_history() { clear_records_and_advance_records_epoch(); }
publish_history_and_diagnostics_without_new_vehicle_action();
```

诊断读取总线故障、热ID、来源年龄、CPU、内存、任务、相位与HTTP指标。coredump是已有成功Flash转储的查询／下载；当前bootstrap无可恢复实际转储。记录统计虽消费CAN观察，但导出、时钟校准、重置不是新CAN控制动作。

详见[FSD记录](features/16_records.md)、[诊断](features/18_diagnostics.md)。

<a id="management"></a>
## CSS、认证、Wi-Fi、云、OTA 的职责

CSS管理布局、主题、显隐、禁用及反馈颜色；JS管理导航、localStorage、单位转换、草稿、revision和轮询。登录、开发者令牌、Wi-Fi、云HTTP属于管理路径；恢复设置会间接改变运行配置。

OTA和重启会协调CAN静默、在途动作及持久化。上传回调 `0x48064780` 验证session/connection/generation、Content-Length，先检查24字节镜像头（E9/chip18），要求received=expected=written后提交槽位。回调期限120秒、浏览器XHR180秒、启动健康验证120秒是三个不同计时。

```c
ota_prepare() { authorize_session(); quiesce_can(); flush_required_storage(); }
ota_upload_chunk() { validate_session_and_length(); verify_header(); write_chunk(); }
ota_finish() { require_exact_received_written_size(); verify_and_commit_boot_slot(); }
ota_cancel_or_failure() { abort_session(); restore_can_and_report_restore_state(); }
```

详见[界面认证](features/01_ui_auth.md)、[Wi-Fi](features/14_wifi.md)、[OTA](features/15_ota.md)、[云](features/17_cloud_onboarding.md)。
