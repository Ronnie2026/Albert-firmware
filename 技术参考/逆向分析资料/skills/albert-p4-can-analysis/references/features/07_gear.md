# 自动换挡、方向盘、滚轮与障碍物

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../control-protocol.md#gear)；其中明确区分已确认字段与剩余缺口。

[返回功能目录](../feature-can-map.md#07_gear) · [Skill 入口](../../SKILL.md)

0x4810ab0a为换挡运行服务的主要关联入口，0x48056082提取障碍物状态。bleObstacle变量名不能证明使用蓝牙；前端明确V13/V14读取PARTY CAN的0x255和0x12B，V12采用雷达融合。

**运行／解析关联函数（模块共享）**：`0x48101f34`、`0x480f1e34`、`0x480f43a8`、`0x48037d22`、`0x4810ab0a`、`0x48049bb6`、`0x48056082`

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="gear_gates"></a>
## 1. 总开关、车速、刹车、安全带、次数与冷却

**证据层次**：接口确认；运行语义重建。

允许速度页面0～8km/h；单次刹车周期次数0表示无限；默认要求安全带，刹车旁路为独立设置。运行反馈有blockedCount、lastBlock、brakeConfirmed、driverSeatStatusAgeMs、templateAgeMs。

**前端入口**：updateGearFeatureUi · 原 JS L689、saveConfig · 原 JS L999。

**C 接口入口**：POST /config · 0x48101f34、GET /runtime_status · 0x4806851c。

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

**前端入口**：updateGearFeatureUi · 原 JS L689、getVal · 原 JS L262。

**C 接口入口**：POST /config · 0x48101f34。

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

**前端入口**：applyGearSmoothPreset · 原 JS L695。

**C 接口入口**：POST /config · 0x48101f34。

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

**前端入口**：updateObstacleProtocolUi · 原 JS L680、saveBleObstacleConfig · 原 JS L854。

**C 接口入口**：POST /config/ble_obstacle · 0x480f1e34、GET /runtime_status · 0x4806851c。

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

**前端入口**：updateObstacleProtocolUi · 原 JS L680。

**C 接口入口**：POST /config/uss_radar · 0x480f43a8、GET /config/uss_radar · 0x4806afe2。

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

**前端入口**：selectUssRadarPreset · 原 JS L674、ussRadarConfigBody · 原 JS L675、saveUssRadarConfig · 原 JS L678。

**C 接口入口**：GET /config/uss_radar · 0x4806afe2、POST /config/uss_radar · 0x480f43a8。

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

**前端入口**：updateGearFeatureUi · 原 JS L689。

**C 接口入口**：POST /config · 0x48101f34。

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

**前端入口**：updateGearFeatureUi · 原 JS L689。

**C 接口入口**：POST /config · 0x48101f34。

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

**前端入口**：updateObstacleConfigDiagnostics · 原 JS L288。

**C 接口入口**：GET /runtime_status · 0x4806851c、GET /status · 0x480c0178。

```c
if (gear_intent && !request_pending && gates_pass()) submit_gear_request();
if (matching_tx_failure || action_deadline_expired) cancel_pending_and_publish_failure();
if (fresh_vehicle_gear_matches_target) complete_action_and_update_cooldown_count();
```

