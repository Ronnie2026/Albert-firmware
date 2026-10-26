# 页面输入参数索引

以下为从HTML和JS模板提取的范围／初始值。**这是UI声明，不能当成C后端完整校验规则**；运行回读会覆盖初始值。语义、单位转换和后端范围见各模块。无min/max的文本输入依JS和C验证。

| 单位转换／特殊情况 | 已核对行为 |
|---|---|
| 最大偏移raw | 页面百分比×4提交；raw/4显示；raw0～240对应0～60% |
| v13Low/HighSpeedOffsetPct | 直接整数百分比0～60，不乘4 |
| 转角ThresholdDeciDeg | 页面度×10提交；C用十分之一度 |
| 滚轮PeriodMin/MaxMs | 页面秒×1000提交 |
| 抓包duration | 页面1～3600秒×1000提交 |
| 扭矩幅值 | 页面Nm，内部centi-Nm；预防1.50～1.80，纠正C允许1.80～2.50 |
| 扭矩时间 | 页面秒，内部毫秒；DAS timeout单独直接ms |
| 雾灯减速Cx100 | 0.01m/s²原始单位 |
| USS/雷达阈值 | raw，未证明统一厘米换算 |
| 座椅槽名 | 浏览器localStorage；与位置记忆的C持久化分开 |

| 来源/行 | 参数或data字段 | 输入类型 | 初始值 | UI范围/长度/步长 | 选项 | 初始隐藏 | 功能 |
|---|---|---|---|---|---|---|---|
| dashboard.html L450 | canCommsEnabled | checkbox | unchecked |  |  | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) |
| dashboard.html L494 | stalkControlVersion | select |  |  | 12=V12, 13=V13, 14=V14 | 否 | [V12／V13／V14 协议选择与特性适配](modules/04_fsd_activation.md#fsd_protocol) |
| dashboard.html L495 | fsdEnabled | checkbox | unchecked |  |  | 否 | [FSD 总开关与依赖门控](modules/04_fsd_activation.md#fsd_master) |
| dashboard.html L496 | ambientFsdCueEnabled | checkbox | unchecked |  |  | 否 | [FSD激活氛围提示](modules/09_ambient.md#ambient_fsd) |
| dashboard.html L497 | fsdSteadyModeEnabled | checkbox | unchecked |  |  | 否 | [稳盘模式、物理短按启动与取消](modules/04_fsd_activation.md#fsd_steady) |
| dashboard.html L499 | fsdParkStartEnabled | checkbox | unchecked |  |  | 是 | [P 挡一键出发与隐藏固定开启项](modules/04_fsd_activation.md#fsd_p_start) |
| dashboard.html L501 | enhancedAutopilotEnabled | checkbox | unchecked |  |  | 是 | [隐藏增强 AP／智能召唤兼容设置](modules/04_fsd_activation.md#enhanced_ap) |
| dashboard.html L502 | v13SpaceToSpaceEnabled | checkbox | unchecked |  |  | 否 | [退出 FSD 后自动请求泊车（v13 参数）](modules/04_fsd_activation.md#space_parking) |
| dashboard.html L503 | v13ParkingDelayMs | number |  | min=0, max=10000, step=100 |  | 是 | [退出 FSD 后自动请求泊车（v13 参数）](modules/04_fsd_activation.md#space_parking) |
| dashboard.html L504 | v13ParkingDurationMs | number |  | min=1000, max=60000, step=100 |  | 是 | [退出 FSD 后自动请求泊车（v13 参数）](modules/04_fsd_activation.md#space_parking) |
| dashboard.html L510 | autoSpeedOffsetEnabled | checkbox | unchecked |  |  | 否 | [自动速度偏移与稳定模式](modules/05_speed.md#speed_enable) |
| dashboard.html L515 | stableSpeedOffsetEnabled | checkbox | unchecked |  |  | 否 | [自动速度偏移与稳定模式](modules/05_speed.md#speed_enable) |
| dashboard.html L516 | hw3ManualStrategyEnabled | checkbox | unchecked |  |  | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L518 | hw3ManualStrategy | hidden | 1 |  |  | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L530 | v14ManualDrivingProfileEnabled | checkbox | unchecked |  |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L531 | v14ManualDrivingProfile | select |  |  | 0=Chill 悠缓, 1=Normal 标准, 2=Hurry 迅捷, 3=Max 极致, 4=Sloth 慵懒 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L538 | customSpeedEnabled | checkbox | unchecked |  |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L539 | speedDownStepKph | number |  | min=1, max=10, step=1 |  | 否 | [降速阶梯与确认值恢复](modules/05_speed.md#speed_slew) |
| dashboard.html L541 | v13LowSpeedOffsetPct | number |  | min=0, max=60, step=1 |  | 否 | [低速偏移与 raw 百分比换算](modules/05_speed.md#speed_low) |
| dashboard.html L542 | speedOffsetMaxPctRaw | number |  | min=0, max=60, step=0.25 |  | 是 | [低速偏移与 raw 百分比换算](modules/05_speed.md#speed_low) |
| dashboard.html L543 | v14SpeedOffsetMaxPctRaw | number |  | min=0, max=60, step=1 |  | 是 | [低速偏移与 raw 百分比换算](modules/05_speed.md#speed_low) |
| dashboard.html L546 | speedTemplateQuickPct | number | 10 | min=0, max=100, step=0.1 |  | 是 | [百分比批量设置模板](modules/05_speed.md#speed_quick) |
| dashboard.html L556 | speedTarget50 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L557 | speedTarget60 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L558 | speedTarget70 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L559 | speedTarget80 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L560 | speedTarget90 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L561 | speedTarget100 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L562 | speedTarget110 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L563 | speedTarget120 | number |  | min=1, max=255, step=1 |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) |
| dashboard.html L567 | v13HighSpeedOffsetPct | number |  | min=0, max=60, step=1 |  | 是 | [高速偏移、原车智能设速与目标来源](modules/05_speed.md#speed_high) |
| dashboard.html L576 | hw3ComfortTargetBelow60 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L577 | hw3ComfortTarget60 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L578 | hw3ComfortTarget70 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L579 | hw3ComfortTarget80 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L580 | hw3ComfortTarget90 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L581 | hw3ComfortTarget100 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L582 | hw3ComfortTarget110 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L583 | hw3ComfortTarget120 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L586 | targetBelow60 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L587 | target60 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L588 | target70 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L589 | target80 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L590 | target90 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L591 | target100 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L592 | target110 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L593 | target120 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L596 | hw3HurryTargetBelow60 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L597 | hw3HurryTarget60 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L598 | hw3HurryTarget70 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L599 | hw3HurryTarget80 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L600 | hw3HurryTarget90 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L601 | hw3HurryTarget100 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L602 | hw3HurryTarget110 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L603 | hw3HurryTarget120 | number |  | min=0, max=255 |  | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) |
| dashboard.html L620 | v14TargetBelow60 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L621 | v14Target60 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L622 | v14Target70 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L623 | v14Target80 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L624 | v14Target90 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L625 | v14Target100 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L626 | v14Target110 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L627 | v14Target120 | number |  | min=0, max=255 |  | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) |
| dashboard.html L636 | dndEnabled | checkbox | unchecked |  |  | 否 | [免打扰主开关及必要子项](modules/06_dnd_torque.md#dnd_master) |
| dashboard.html L638 | cabinCameraDisableEnabled | checkbox | unchecked |  |  | 否 | [摄像头状态屏蔽与V14回退延时](modules/06_dnd_torque.md#dnd_camera) |
| dashboard.html L639 | v14CameraDisableDelaySec | number |  | min=3, max=10, step=1 |  | 是 | [摄像头状态屏蔽与V14回退延时](modules/06_dnd_torque.md#dnd_camera) |
| dashboard.html L641 | isaChimeSuppressEnabled | checkbox | unchecked |  |  | 否 | [ISA提示音条件抑制](modules/06_dnd_torque.md#dnd_isa) |
| dashboard.html L642 | dndTorqueEnabled | checkbox | checked |  |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L648 | torqueNagMaintenanceEnabled | checkbox | checked |  |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L658 | preventiveNegativeMinNm | number | 1.50 | min=1.50, max=1.80, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L658 | preventiveNegativeMaxNm | number | 1.80 | min=1.50, max=1.80, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L659 | preventivePositiveMinNm | number | 1.50 | min=1.50, max=1.80, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L659 | preventivePositiveMaxNm | number | 1.80 | min=1.50, max=1.80, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L664 | correctiveNegativeMinNm | number | 1.80 | min=1.80, max=2.50, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L664 | correctiveNegativeMaxNm | number | 2.40 | min=1.80, max=2.50, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L665 | correctivePositiveMinNm | number | 1.80 | min=1.80, max=2.50, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L665 | correctivePositiveMaxNm | number | 2.40 | min=1.80, max=2.50, step=0.01 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L666 | correctiveNegativeFrames | number | 100 | min=0, max=255, step=1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L666 | correctivePositiveFrames | number | 100 | min=0, max=255, step=1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L668 | correctiveSendMinSec | number | 3.0 | min=0.1, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L668 | correctiveSendMaxSec | number | 3.0 | min=0.1, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L669 | correctivePauseMinSec | number | 1.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L669 | correctivePauseMaxSec | number | 2.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L674 | activityMinSec | number | 2.0 | min=0.1, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L674 | activityMaxSec | number | 3.0 | min=0.1, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L676 | restMinSec | number | 0.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L676 | restMaxSec | number | 0.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L679 | h2PersistenceSec | number | 3.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L680 | preCorrectionPauseSec | number | 1.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L681 | stabilityVerifySec | number | 5.0 | min=0, step=0.1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L682 | dasFreshTimeoutMs | number | 750 | min=100, max=2000, step=1 |  | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) |
| dashboard.html L690 | dndScrollEnabled | checkbox | unchecked |  |  | 否 | [左音量／右速度滚轮免打扰](modules/06_dnd_torque.md#dnd_scroll) |
| dashboard.html L695 | dndScrollMode | select |  |  | 0=左滚轮音量, 1=右滚轮速度 | 否 | [左音量／右速度滚轮免打扰](modules/06_dnd_torque.md#dnd_scroll) |
| dashboard.html L696 | dndSpeedPeriodicEnabled | checkbox | unchecked |  |  | 否 | [滚轮后台随机周期](modules/06_dnd_torque.md#dnd_periodic) |
| dashboard.html L698 | dndSpeedPeriodMinMs | number | 5.0 | min=1, max=10, step=0.1 |  | 是 | [滚轮后台随机周期](modules/06_dnd_torque.md#dnd_periodic) |
| dashboard.html L699 | dndSpeedPeriodMaxMs | number | 8.0 | min=1, max=10, step=0.1 |  | 是 | [滚轮后台随机周期](modules/06_dnd_torque.md#dnd_periodic) |
| dashboard.html L707 | fsdAutoStartEnabled | checkbox | unchecked |  |  | 否 | [自动激活总开关与 revision 事务](modules/04_fsd_activation.md#auto_start_master) |
| dashboard.html L709 | fsdAutoStartAvailableConfirmFrames | number | 1 | min=1, max=10, step=1 |  | 否 | [AP 可用确认帧数](modules/04_fsd_activation.md#availability_frames) |
| dashboard.html L710 | fsdAutoStartLongPressEnabled | checkbox | unchecked |  |  | 否 | [右側长按持续激活](modules/04_fsd_activation.md#auto_long_press) |
| dashboard.html L711 | fsdAutoStartFirstParkToDriveEnabled | checkbox | unchecked |  |  | 否 | [P→D 自动激活](modules/04_fsd_activation.md#auto_pd) |
| dashboard.html L712 | fsdAutoStartReverseToDriveSpeedKph | number | 15 | min=1, max=120, step=1 |  | 否 | [R→D 后15秒速度窗口](modules/04_fsd_activation.md#auto_rd) |
| dashboard.html L713 | fsdAutoStartGroundEnabled | checkbox | unchecked |  |  | 否 | [R 挡右侧物理动作一键激活](modules/04_fsd_activation.md#auto_ground) |
| dashboard.html L714 | fsdDriverOccupiedSpoofEnabled | checkbox | unchecked |  |  | 否 | [驾驶位有人与安全带信号模拟](modules/04_fsd_activation.md#occupancy_spoof) |
| dashboard.html L748 | fsdWarningActivationEnabled | checkbox | unchecked |  |  | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) |
| dashboard.html L753 | fsdWarningLaneStandard | checkbox | checked |  |  | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) |
| dashboard.html L754 | fsdWarningLaneSevere | checkbox | unchecked |  |  | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) |
| dashboard.html L756 | fsdWarningLaneModes | hidden | 1 |  |  | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) |
| dashboard.html L759 | fsdSideCollisionActivationEnabled | checkbox | unchecked |  |  | 否 | [侧撞与疲倦预警激活](modules/04_fsd_activation.md#side_fatigue_activation) |
| dashboard.html L760 | fsdDdawEnabled | checkbox | unchecked |  |  | 否 | [侧撞与疲倦预警激活](modules/04_fsd_activation.md#side_fatigue_activation) |
| dashboard.html L767 | blindSpotEnabled | checkbox | unchecked |  |  | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) |
| dashboard.html L769 | blindSpotBrightness | range | 100 | min=10, max=100, step=1 |  | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) |
| dashboard.html L771 | blindSpotAreaFront | checkbox | checked |  |  | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) |
| dashboard.html L772 | blindSpotAreaRear | checkbox | checked |  |  | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) |
| dashboard.html L773 | blindSpotAreaDash | checkbox | checked |  |  | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) |
| dashboard.html L775 | blindSpotRestoreDelayMs | number | 0 | min=0, max=1000, step=1 |  | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) |
| dashboard.html L794 | gearAutomationEnabled | checkbox | unchecked |  |  | 否 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) |
| dashboard.html L795 | gearSeatbeltSafetyEnabled | checkbox | checked |  |  | 否 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) |
| dashboard.html L796 | gearBrakeSafetyBypassEnabled | checkbox | unchecked |  |  | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) |
| dashboard.html L800 | gearShiftLimit | number | 0 | min=0, max=255, step=1 |  | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) |
| dashboard.html L801 | gearAutoShiftMaxSpeedKph | number | 3 | min=0, max=8, step=1 |  | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) |
| dashboard.html L802 | gearCooldownMs | number | 100 | min=100, max=5000, step=50 |  | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) |
| dashboard.html L808 | gearBrakeToggleEnabled | checkbox | unchecked |  |  | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) |
| dashboard.html L810 | gearDriveReverseSteeringThresholdDeciDeg | number | 120 | min=1, max=360, step=1 |  | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) |
| dashboard.html L810 | gearParkSteeringEnabled | checkbox | unchecked |  |  | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) |
| dashboard.html L810 | gearParkSteeringThresholdDeciDeg | number | 120 | min=1, max=360, step=1 |  | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) |
| dashboard.html L813 | bleObstacleFeatureEnabled | checkbox | unchecked |  |  | 是 | [PARTY直连障碍建议与方向校验](modules/07_gear.md#obstacle_direct) |
| dashboard.html L815 | bleObstacleSteeringConfirmEnabled | checkbox | unchecked |  |  | 是 | [PARTY直连障碍建议与方向校验](modules/07_gear.md#obstacle_direct) |
| dashboard.html L815 | bleObstacleSteeringThresholdDeciDeg | number | 30 | min=1, max=360, step=1 |  | 是 | [PARTY直连障碍建议与方向校验](modules/07_gear.md#obstacle_direct) |
| dashboard.html L821 | gearUssDistancePreset | select |  |  | 0=近, 1=中（默认） [selected], 2=远, 3=自定义 | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) |
| dashboard.html L822 | gearUssSdiBlockMax | number |  | min=0, max=511, step=1 |  | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) |
| dashboard.html L822 | gearUssSdiCautionMax | number |  | min=0, max=511, step=1 |  | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) |
| dashboard.html L822 | gearUssMinValidSdi | number |  | min=0, max=6, step=1 |  | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) |
| dashboard.html L822 | gearUssRadarBlockMaxRaw | number |  | min=0, max=255, step=1 |  | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) |
| dashboard.html L836 | gearScrollEnabled | checkbox | unchecked |  |  | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) |
| dashboard.html L838 | gearScrollBrakeAuthorizationEnabled | checkbox | unchecked |  |  | 是 | [滚轮低速单次刹车授权](modules/07_gear.md#gear_brake_credit) |
| dashboard.html L841 | gearLeftPositiveAction | select |  |  | 0=无动作, 1=D, 2=R, 3=P, 4=D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) |
| dashboard.html L842 | gearLeftNegativeAction | select |  |  | 0=无动作, 1=D, 2=R, 3=P, 4=D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) |
| dashboard.html L845 | gearRightPositiveAction | select |  |  | 0=无动作, 1=D, 2=R, 3=P, 4=D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) |
| dashboard.html L846 | gearRightNegativeAction | select |  |  | 0=无动作, 1=D, 2=R, 3=P, 4=D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) |
| dashboard.html L873 | seatMemoryEnabled | checkbox | unchecked |  |  | 否 | [座椅功能许可与通道](modules/08_seats.md#seat_enable) |
| dashboard.html L875 | seatControlBus | hidden | 2 |  |  | 否 | [座椅功能许可与通道](modules/08_seats.md#seat_enable) |
| dashboard.html L894 | 0 | text | 左1 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L895 | 1 | text | 左2 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L896 | 2 | text | 左3 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L897 | 3 | text | 左4 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L898 | 4 | text | 左5 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L916 | 5 | text | 右1 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L917 | 6 | text | 右2 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L918 | 7 | text | 右3 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L919 | 8 | text | 右4 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L920 | 9 | text | 右5 | maxlength=12 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) |
| dashboard.html L938 | fsdForceHighPhysicalEnabled | checkbox | unchecked |  |  | 否 | [FSD强制远光与合帧](modules/10_lighting.md#high_force) |
| dashboard.html L940 | longPressHighBeamStrobeEnabled | checkbox | unchecked |  |  | 否 | [第二次长按0.5秒远光爆闪](modules/10_lighting.md#high_strobe) |
| dashboard.html L942 | highBeamStrobeIntervalMs | number |  | min=1, max=100, step=1 |  | 否 | [第二次长按0.5秒远光爆闪](modules/10_lighting.md#high_strobe) |
| dashboard.html L943 | highBeamStrobeCount | number |  | min=0, max=20, step=1 |  | 否 | [第二次长按0.5秒远光爆闪](modules/10_lighting.md#high_strobe) |
| dashboard.html L958 | turnFollowEnabled | checkbox | unchecked |  |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L960 | turnFollowColor | color | #ffa000 |  |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L961 | turnFollowBrightness | range | 80 | min=10, max=100, step=1 |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L963 | turnFollowAreaFront | checkbox | checked |  |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L964 | turnFollowAreaRear | checkbox | unchecked |  |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L965 | turnFollowAreaDash | checkbox | checked |  |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L967 | turnFollowHazards | checkbox | unchecked |  |  | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) |
| dashboard.html L975 | rear-fog-strobe-tgl | checkbox | unchecked |  |  | 否 | [减速后雾灯与轻重阈值](modules/10_lighting.md#fog_deceleration) |
| dashboard.html L976 | reverse-warning-tgl | checkbox | unchecked |  |  | 否 | [倒车双闪＋8次雾灯警示](modules/10_lighting.md#fog_reverse) |
| dashboard.html L977 | reverse-rear-fog-steady-tgl | checkbox | unchecked |  |  | 否 | [倒车后雾灯常亮](modules/10_lighting.md#fog_reverse_steady) |
| dashboard.html L978 | rear-fog-pilot-tgl | checkbox | unchecked |  |  | 否 | [领航许可与本次运行启动／停止](modules/10_lighting.md#fog_pilot) |
| dashboard.html L981 | rear-fog-mild-threshold | number | 80 | min=30, max=200, step=1 |  | 否 | [减速后雾灯与轻重阈值](modules/10_lighting.md#fog_deceleration) |
| dashboard.html L982 | rear-fog-hard-threshold | number | 250 | min=100, max=500, step=1 |  | 否 | [减速后雾灯与轻重阈值](modules/10_lighting.md#fog_deceleration) |
| dashboard.html L992 | canbServiceModeEnabled | checkbox | unchecked |  |  | 否 | [CANB维修模式开关](modules/11_preheat_service.md#service_mode) |
| dashboard.html L998 | batteryPreheatEnabled | checkbox | unchecked |  |  | 否 | [预热请求与15／30／45／60分钟许可](modules/11_preheat_service.md#preheat_start) |
| dashboard.html L999 | batteryPreheatDurationMin | select |  |  | 15=15 分钟, 30=30 分钟, 45=45 分钟 [selected], 60=60 分钟 | 否 | [预热请求与15／30／45／60分钟许可](modules/11_preheat_service.md#preheat_start) |
| dashboard.html L1026 | canPinLayoutSelect | select |  |  | 2=自动（默认：先检测 A，A 三路无有效帧再检测 B） [selected], 0=固定 A · CH TX2/RX3、VEH TX4/RX5、PARTY TX26/RX27, 1=固定 B · CH TX3/RX2、VEH TX50/RX49、PARTY TX31/RX30 | 否 | [A／B／自动线序探测、保存和恢复](modules/02_config_can.md#pin_layout) |
| dashboard.html L1029 | can0TxEnabled | checkbox | unchecked |  |  | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) |
| dashboard.html L1030 | can1TxEnabled | checkbox | unchecked |  |  | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) |
| dashboard.html L1031 | can2TxEnabled | checkbox | unchecked |  |  | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) |
| dashboard.html L1038 | recInclude | text |  |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1039 | recExclude | text |  |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1042 | recBus1Enabled | checkbox | checked |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1043 | recBus2Enabled | checkbox | unchecked |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1044 | recBus3Enabled | checkbox | unchecked |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1045 | recRxEnabled | checkbox | checked |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1046 | recTxEnabled | checkbox | checked |  |  | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) |
| dashboard.html L1047 | recDurationSec | number | 60 | min=1, max=3600 |  | 否 | [异步切换过滤器、内存缓冲与开始抓包](modules/12_recorder.md#rec_start) |
| dashboard.html L1087 | otaFile | file |  |  |  | 否 | [本地BIN的浏览器预检查](modules/15_ota.md#ota_file) |
| dashboard.html L1100 | ambientEnabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1116 | ambientZone4Enabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1117 | ambientZone5Enabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1118 | ambientZone0Enabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1119 | ambientZone1Enabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1120 | ambientZone2Enabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1121 | ambientZone3Enabled | checkbox | unchecked |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1126 | ambientBrightness | range | 60 | min=0, max=100, step=1 |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1127 | ambientColor | color | #5a9fe6 |  |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) |
| dashboard.html L1134 | welcomeEnabled | checkbox | unchecked |  |  | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) |
| dashboard.html L1137 | welcomeStyle0 | radio | unchecked |  |  | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) |
| dashboard.html L1138 | welcomeStyle1 | radio | unchecked |  |  | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) |
| dashboard.html L1139 | welcomeStyle2 | radio | unchecked |  |  | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) |
| dashboard.html L1140 | welcomeStyle3 | radio | checked |  |  | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) |
| dashboard.html L1141 | welcomeStyle4 | radio | unchecked |  |  | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) |
| dashboard.html L1144 | welcomeTriggerMode0 | radio | checked |  |  | 是 | [开门与座椅无人触发、过滤和重触发](modules/09_ambient.md#welcome_trigger) |
| dashboard.html L1145 | welcomeTriggerMode1 | radio | unchecked |  |  | 是 | [开门与座椅无人触发、过滤和重触发](modules/09_ambient.md#welcome_trigger) |
| dashboard.html L1149 | welcomeBrightness | range | 40 | min=10, max=100, step=1 |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1150 | welcomeTempo | select |  |  | 0=舒缓, 1=标准 [selected], 2=利落 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1152 | welcomeColor | color | #7EC2E6 |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1154 | 16 | checkbox | checked |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1154 | 32 | checkbox | checked |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1155 | 1 | checkbox | checked |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1155 | 2 | checkbox | checked |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1156 | 4 | checkbox | checked |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1156 | 8 | checkbox | checked |  |  | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) |
| dashboard.html L1172 | wifiApPassword | password |  | maxlength=63 |  | 是 | [热点密码保存及异步重启](modules/14_wifi.md#wifi_ap_password) |
| dashboard.html L1183 | wifiExternalEnabled | checkbox | unchecked |  |  | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) |
| dashboard.html L1184 | wifiApAutoOff | checkbox | unchecked |  |  | 是 | [联网5分钟后关闭AP及客户端保留](modules/14_wifi.md#wifi_ap_autooff) |
| dashboard.html L1185 | wifiNetworkList | select |  |  | =点击“扫描附近网络” | 是 | [扫描附近网络与列表选择](modules/14_wifi.md#wifi_scan) |
| dashboard.html L1186 | wifiSsid | text |  | maxlength=32 |  | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) |
| dashboard.html L1187 | wifiPassword | password |  | maxlength=63 |  | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) |
| dashboard.html L1197 | poll | checkbox | unchecked |  |  | 是 | [浏览器轮询调度、超时、暂停和性能记录](modules/02_config_can.md#read_coordinator) |
| dashboard.html L1239 | driverAddName | text |  | maxlength=24 |  | 是 | [添加驾驶员并绑定当前位置](modules/03_drivers.md#driver_add) |
| dashboard.html L1252 | driverRebindConfirm | checkbox | unchecked |  |  | 是 | [重新绑定驾驶位](modules/03_drivers.md#driver_rebind) |
| dashboard.html L1260 | driverRenameName | text |  | maxlength=24 |  | 是 | [重命名驾驶员](modules/03_drivers.md#driver_rename) |
| login.html L35 | password | password |  | required=None |  | 否 | [网页登录与错误限流](modules/01_ui_auth.md#login) |
| javascript_markup L65 | canExperimentPresetSlot | select |  |  |  | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) |
| javascript_markup L65 | canExperimentPresetName | text |  | maxlength=24 |  | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) |
| javascript_markup L71 | id | text |  | maxlength=5 |  | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) |
| javascript_markup L71 | 1 | checkbox | unchecked |  |  | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) |
| javascript_markup L71 | 2 | checkbox | unchecked |  |  | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) |
| javascript_markup L71 | 4 | checkbox | unchecked |  |  | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) |
| javascript_markup L71 | dlc | number | 0 | min=0, max=8 |  | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) |
| javascript_markup L71 | mode | select |  |  | 0=单次, 1=跟随原始帧, 2=固定周期 | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) |
| javascript_markup L71 | period | number | 100 | min=5, max=60000 |  | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) |
| javascript_markup L71 | timeout | number | 0 | min=0, max=5000 |  | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) |
| javascript_markup L71 | strict | checkbox | unchecked |  |  | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) |
| javascript_markup L71 | takeover | checkbox | checked |  |  | 否 | [内置发送接管、优先级继承和停止结算](modules/13_can_experiment.md#experiment_takeover) |
| javascript_markup L71 | priority | select |  |  | 255=继承原报文等级, 1=新增报文 P1, 2=新增报文 P2, 3=新增报文 P3 | 否 | [内置发送接管、优先级继承和停止结算](modules/13_can_experiment.md#experiment_takeover) |
| javascript_markup L71 | delayUs | number | 0 | min=0, max=5000000 |  | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) |
| javascript_markup L71 | counterMode | select |  |  | 0=不处理, 1=原值偏移, 2=独立自增 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterByte | number | 0 | min=0, max=7 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterBit | number | 0 | min=0, max=7 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterWidth | number | 4 | min=1, max=8 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterStep | number | 1 | min=1, max=255 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterInitial | number | 0 | min=0, max=255 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterMin | number | 0 | min=0, max=255 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterMax | number | 15 | min=0, max=255 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | counterOffset | number | 0 | min=-128, max=127 |  | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) |
| javascript_markup L71 | checksumMode | select |  |  | 0=不处理, 1=SUM, 2=XOR, 3=CRC8 | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | checksumOutput | number | 7 | min=0, max=7 |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | checksumAdd | text | 00 | maxlength=2 |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | checksumXor | text | 00 | maxlength=2 |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | crcPoly | text | 1D | maxlength=2 |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | crcInitial | text | FF | maxlength=2 |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | crcRefIn | checkbox | unchecked |  |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | crcRefOut | checkbox | unchecked |  |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L71 | crcIncludeId | checkbox | unchecked |  |  | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) |
| javascript_markup L1481 | cloudEnabled | checkbox | unchecked |  |  | 是 | [自动同步开关、立即同步及后台ack](modules/17_cloud_onboarding.md#cloud_sync) |
| javascript_markup L1481 | cloudDeviceId | textarea |  |  |  | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) |
| javascript_markup L1481 | cloudWebUrl | text | https://tesla.srlt.cc |  |  | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) |
| javascript_markup L1481 | cloudRestoreScopeSettings | checkbox | checked |  |  | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) |
| javascript_markup L1481 | cloudRestoreScopeRecords | checkbox | checked |  |  | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) |
| javascript_markup L1481 | cloudSettingsRestoreConfirm | checkbox | unchecked |  |  | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) |
| javascript_markup L1481 | cloudUrl | url |  |  |  | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) |
| javascript_markup L1481 | cloudToken | password |  |  |  | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) |
| javascript_markup L1481 | cloudInterval | number | 30 | min=15, max=300, step=1 |  | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) |
| javascript_markup L1481 | cloudClearToken | checkbox | unchecked |  |  | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) |
| javascript_markup L1481 | onboardingDeviceId | textarea |  |  |  | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) |
| javascript_markup L1481 | onboardingWebUrl | text | https://tesla.srlt.cc |  |  | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) |
| javascript_markup L1481 | commercialPassword | password |  | maxlength=63, required=None |  | 否 | [开发者模式解锁、闲置锁定与令牌撤销](modules/01_ui_auth.md#developer) |
| javascript_markup L1665 | (模板输入) | checkbox | unchecked |  |  | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) |
| javascript_markup L1905 | (模板输入) | checkbox | unchecked |  |  | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) |
