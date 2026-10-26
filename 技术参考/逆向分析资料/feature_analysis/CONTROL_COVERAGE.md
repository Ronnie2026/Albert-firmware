# HTML及JS模板控件覆盖

这是一份语法提取清单：325个dashboard静态控件、3个登录控件，另有109个JS片段控件，总437行。form、链接和同模板的重复片段也计数。循环生成的字节/位按钮、驾驶员列表等以模板和生成函数覆盖，不能把437解释为浏览器中唯一控件总数。

initial_hidden仅检查HTML自身及祖先hidden/class/display:none；JS会改变显隐。下表按控件ID、事件、属性或页面语义区域分组；“语义区域”归属不等于已证明独立C调用链。

| # | 来源与行 | 控件ID／名称 | 标签 | 初始隐藏 | 所属功能 | 归属依据 |
|---|---|---|---|---|---|---|
| 1 | dashboard.html L414 | 事件／属性控件 | 我已阅读并理解 | 否 | [首次说明与已阅读状态](modules/01_ui_auth.md#legal) | 内联事件函数 |
| 2 | dashboard.html L423 | 事件／属性控件 | 稍后升级 | 是 | [在线检查、升级提示与管理目标一致性](modules/15_ota.md#ota_online) | 内联事件函数 |
| 3 | dashboard.html L423 | 事件／属性控件 | 立即升级 | 是 | [在线检查、升级提示与管理目标一致性](modules/15_ota.md#ota_online) | 内联事件函数 |
| 4 | dashboard.html L434 | uiModeBtn | UI·自动 | 否 | [标准／车机／自动界面](modules/01_ui_auth.md#ui_mode) | 功能显式列出的控件ID |
| 5 | dashboard.html L435 | themeBtn | 日间 | 否 | [日间／夜间主题](modules/01_ui_auth.md#theme) | 功能显式列出的控件ID |
| 6 | dashboard.html L436 | 事件／属性控件 | 退出 | 否 | [退出与会话失效](modules/01_ui_auth.md#logout) | 退出表单action |
| 7 | dashboard.html L436 | 事件／属性控件 | 退出 | 否 | [退出与会话失效](modules/01_ui_auth.md#logout) | 退出表单action |
| 8 | dashboard.html L437 | rebootButton | 重启 | 否 | [重启请求、安全停止和实际重启确认](modules/15_ota.md#reboot) | 功能显式列出的控件ID |
| 9 | dashboard.html L450 | canCommsEnabled |  | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) | 功能显式列出的控件ID |
| 10 | dashboard.html L471 | 事件／属性控件 | 添加驾驶员 | 否 | [添加驾驶员并绑定当前位置](modules/03_drivers.md#driver_add) | 内联事件函数 |
| 11 | dashboard.html L472 | driverModeToggle | 切换到手动选择 | 否 | [自动识别／手动选择及切换](modules/03_drivers.md#driver_selection) | 功能显式列出的控件ID |
| 12 | dashboard.html L473 | 事件／属性控件 | 刷新 | 否 | [列表、当前驾驶员、参数来源与状态](modules/03_drivers.md#driver_list) | 内联事件函数 |
| 13 | dashboard.html L494 | stalkControlVersion | FSD 车型协议V12 V13 V14 | 否 | [V12／V13／V14 协议选择与特性适配](modules/04_fsd_activation.md#fsd_protocol) | 功能显式列出的控件ID |
| 14 | dashboard.html L495 | fsdEnabled | FSD 功能 | 否 | [FSD 总开关与依赖门控](modules/04_fsd_activation.md#fsd_master) | 功能显式列出的控件ID |
| 15 | dashboard.html L496 | ambientFsdCueEnabled | FSD 激活氛围灯 | 否 | [FSD激活氛围提示](modules/09_ambient.md#ambient_fsd) | 功能显式列出的控件ID |
| 16 | dashboard.html L497 | fsdSteadyModeEnabled | 稳盘模式 | 否 | [稳盘模式、物理短按启动与取消](modules/04_fsd_activation.md#fsd_steady) | 功能显式列出的控件ID |
| 17 | dashboard.html L499 | fsdParkStartEnabled | P 挡启动 FSD | 是 | [P 挡一键出发与隐藏固定开启项](modules/04_fsd_activation.md#fsd_p_start) | 功能显式列出的控件ID |
| 18 | dashboard.html L501 | enhancedAutopilotEnabled | 增强 AP / 智能召唤 | 是 | [隐藏增强 AP／智能召唤兼容设置](modules/04_fsd_activation.md#enhanced_ap) | 功能显式列出的控件ID |
| 19 | dashboard.html L502 | v13SpaceToSpaceEnabled | 自动激活泊车 | 否 | [退出 FSD 后自动请求泊车（v13 参数）](modules/04_fsd_activation.md#space_parking) | 功能显式列出的控件ID |
| 20 | dashboard.html L503 | v13ParkingDelayMs | 退出 FSD 后开始泊车延迟（毫秒） | 是 | [退出 FSD 后自动请求泊车（v13 参数）](modules/04_fsd_activation.md#space_parking) | 功能显式列出的控件ID |
| 21 | dashboard.html L504 | v13ParkingDurationMs | 开始泊车请求持续时间（毫秒） | 是 | [退出 FSD 后自动请求泊车（v13 参数）](modules/04_fsd_activation.md#space_parking) | 功能显式列出的控件ID |
| 22 | dashboard.html L510 | autoSpeedOffsetEnabled | 自动速度偏移 | 否 | [自动速度偏移与稳定模式](modules/05_speed.md#speed_enable) | 功能显式列出的控件ID |
| 23 | dashboard.html L515 | stableSpeedOffsetEnabled | 稳定模式 | 否 | [自动速度偏移与稳定模式](modules/05_speed.md#speed_enable) | 功能显式列出的控件ID |
| 24 | dashboard.html L516 | hw3ManualStrategyEnabled | 手动选择驾驶策略 | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 功能显式列出的控件ID |
| 25 | dashboard.html L518 | hw3ManualStrategy |  | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 功能显式列出的控件ID |
| 26 | dashboard.html L520 | 事件／属性控件 | 舒适 车距 3·4兼容 | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 内联事件函数 |
| 27 | dashboard.html L521 | 事件／属性控件 | 标准 车距 2 | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 内联事件函数 |
| 28 | dashboard.html L522 | 事件／属性控件 | 迅捷 车距 1 | 否 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 内联事件函数 |
| 29 | dashboard.html L530 | v14ManualDrivingProfileEnabled | 手动选择驾驶模式 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | 功能显式列出的控件ID |
| 30 | dashboard.html L531 | v14ManualDrivingProfile | 驾驶模式Chill 悠缓 Normal 标准 Hurry 迅捷 Max 极致 Sloth 慵懒 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | 功能显式列出的控件ID |
| 31 | dashboard.html L536 | speedTargetSourceCustom | 自定义模板 | 否 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 功能显式列出的控件ID |
| 32 | dashboard.html L537 | speedTargetSourceVehicle | 车机同步 | 否 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 功能显式列出的控件ID |
| 33 | dashboard.html L538 | speedTargetRetrySave | 重试保存 | 是 | [驾驶员变化、版本冲突与保存重试](modules/05_speed.md#speed_conflict) | 功能显式列出的控件ID |
| 34 | dashboard.html L538 | customSpeedEnabled |  | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 功能显式列出的控件ID |
| 35 | dashboard.html L539 | speedDownStepKph | 缓降幅度 km/h / 500ms | 否 | [降速阶梯与确认值恢复](modules/05_speed.md#speed_slew) | 功能显式列出的控件ID |
| 36 | dashboard.html L541 | v13LowSpeedOffsetPct | 低速偏移（限速低于 50 km/h）% | 否 | [低速偏移与 raw 百分比换算](modules/05_speed.md#speed_low) | 功能显式列出的控件ID |
| 37 | dashboard.html L542 | speedOffsetMaxPctRaw | 低速最大偏移 % | 是 | [低速偏移与 raw 百分比换算](modules/05_speed.md#speed_low) | 功能显式列出的控件ID |
| 38 | dashboard.html L543 | v14SpeedOffsetMaxPctRaw | 低速最大偏移 % | 是 | [低速偏移与 raw 百分比换算](modules/05_speed.md#speed_low) | 功能显式列出的控件ID |
| 39 | dashboard.html L546 | speedTemplateQuickPct | 模板快速设置 | 是 | [百分比批量设置模板](modules/05_speed.md#speed_quick) | 功能显式列出的控件ID |
| 40 | dashboard.html L546 | speedTemplateQuickApply | 同步目标 | 是 | [百分比批量设置模板](modules/05_speed.md#speed_quick) | 功能显式列出的控件ID |
| 41 | dashboard.html L556 | speedTarget50 | 限速 50 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 42 | dashboard.html L557 | speedTarget60 | 限速 60 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 43 | dashboard.html L558 | speedTarget70 | 限速 70 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 44 | dashboard.html L559 | speedTarget80 | 限速 80 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 45 | dashboard.html L560 | speedTarget90 | 限速 90 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 46 | dashboard.html L561 | speedTarget100 | 限速 100 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 47 | dashboard.html L562 | speedTarget110 | 限速 110 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 48 | dashboard.html L563 | speedTarget120 | 限速 120 | 是 | [车机同步／自定义30格模板](modules/05_speed.md#speed_templates) | 模板参数组 |
| 49 | dashboard.html L567 | v13HighSpeedOffsetPct | 高速偏移（原车智能设速关闭时使用）% | 是 | [高速偏移、原车智能设速与目标来源](modules/05_speed.md#speed_high) | 功能显式列出的控件ID |
| 50 | dashboard.html L576 | hw3ComfortTargetBelow60 | 目标速度 50～59 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 51 | dashboard.html L577 | hw3ComfortTarget60 | 目标速度 60..69 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 52 | dashboard.html L578 | hw3ComfortTarget70 | 目标速度 70..79 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 53 | dashboard.html L579 | hw3ComfortTarget80 | 目标速度 80..89 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 54 | dashboard.html L580 | hw3ComfortTarget90 | 目标速度 90..99 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 55 | dashboard.html L581 | hw3ComfortTarget100 | 目标速度 100..109 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 56 | dashboard.html L582 | hw3ComfortTarget110 | 目标速度 110..119 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 57 | dashboard.html L583 | hw3ComfortTarget120 | 目标速度 120..139 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 58 | dashboard.html L586 | targetBelow60 | 目标速度 50～59 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 59 | dashboard.html L587 | target60 | 目标速度 60..69 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 60 | dashboard.html L588 | target70 | 目标速度 70..79 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 61 | dashboard.html L589 | target80 | 目标速度 80..89 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 62 | dashboard.html L590 | target90 | 目标速度 90..99 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 63 | dashboard.html L591 | target100 | 目标速度 100..109 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 64 | dashboard.html L592 | target110 | 目标速度 110..119 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 65 | dashboard.html L593 | target120 | 目标速度 120..139 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 66 | dashboard.html L596 | hw3HurryTargetBelow60 | 目标速度 50～59 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 67 | dashboard.html L597 | hw3HurryTarget60 | 目标速度 60..69 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 68 | dashboard.html L598 | hw3HurryTarget70 | 目标速度 70..79 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 69 | dashboard.html L599 | hw3HurryTarget80 | 目标速度 80..89 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 70 | dashboard.html L600 | hw3HurryTarget90 | 目标速度 90..99 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 71 | dashboard.html L601 | hw3HurryTarget100 | 目标速度 100..109 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 72 | dashboard.html L602 | hw3HurryTarget110 | 目标速度 110..119 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 73 | dashboard.html L603 | hw3HurryTarget120 | 目标速度 120..139 | 是 | [HW3舒适／标准／迅捷及分段目标](modules/05_speed.md#hw3_strategy) | 策略参数组 |
| 74 | dashboard.html L620 | v14TargetBelow60 | 目标速度 50～59 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 75 | dashboard.html L621 | v14Target60 | 目标速度 60..69 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 76 | dashboard.html L622 | v14Target70 | 目标速度 70..79 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 77 | dashboard.html L623 | v14Target80 | 目标速度 80..89 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 78 | dashboard.html L624 | v14Target90 | 目标速度 90..99 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 79 | dashboard.html L625 | v14Target100 | 目标速度 100..109 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 80 | dashboard.html L626 | v14Target110 | 目标速度 110..119 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 81 | dashboard.html L627 | v14Target120 | 目标速度 120..139 | 是 | [V14五种驾驶模式](modules/05_speed.md#v14_profile) | V14策略参数组 |
| 82 | dashboard.html L636 | dndEnabled | 免打扰总开关 | 否 | [免打扰主开关及必要子项](modules/06_dnd_torque.md#dnd_master) | 功能显式列出的控件ID |
| 83 | dashboard.html L638 | cabinCameraDisableEnabled | 关闭摄像头 | 否 | [摄像头状态屏蔽与V14回退延时](modules/06_dnd_torque.md#dnd_camera) | 功能显式列出的控件ID |
| 84 | dashboard.html L639 | v14CameraDisableDelaySec | V14 摄像头回退延时（秒） | 是 | [摄像头状态屏蔽与V14回退延时](modules/06_dnd_torque.md#dnd_camera) | 功能显式列出的控件ID |
| 85 | dashboard.html L641 | isaChimeSuppressEnabled | ISA提示音抑制 | 否 | [ISA提示音条件抑制](modules/06_dnd_torque.md#dnd_isa) | 功能显式列出的控件ID |
| 86 | dashboard.html L642 | dndTorqueEnabled | 扭矩免打扰 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 功能显式列出的控件ID |
| 87 | dashboard.html L648 | torqueNagMaintenanceEnabled | 持续预防扭矩 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 功能显式列出的控件ID |
| 88 | dashboard.html L658 | preventiveNegativeMinNm | 最小 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 89 | dashboard.html L658 | preventiveNegativeMaxNm | 最大 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 90 | dashboard.html L659 | preventivePositiveMinNm | 最小 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 91 | dashboard.html L659 | preventivePositiveMaxNm | 最大 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 92 | dashboard.html L664 | correctiveNegativeMinNm | 最小 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 93 | dashboard.html L664 | correctiveNegativeMaxNm | 最大 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 94 | dashboard.html L665 | correctivePositiveMinNm | 最小 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 95 | dashboard.html L665 | correctivePositiveMaxNm | 最大 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 96 | dashboard.html L666 | correctiveNegativeFrames | 负向 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 97 | dashboard.html L666 | correctivePositiveFrames | 正向 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 98 | dashboard.html L668 | correctiveSendMinSec | 最短（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 99 | dashboard.html L668 | correctiveSendMaxSec | 最长（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 100 | dashboard.html L669 | correctivePauseMinSec | 最短（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 101 | dashboard.html L669 | correctivePauseMaxSec | 最长（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 102 | dashboard.html L674 | activityMinSec | 最短（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 103 | dashboard.html L674 | activityMaxSec | 最长（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 104 | dashboard.html L676 | restMinSec | 最短（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 105 | dashboard.html L676 | restMaxSec | 最长（秒） | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 106 | dashboard.html L679 | h2PersistenceSec | H2升级等待（秒） H2 连续达到该时间后进入纠正前停发 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 107 | dashboard.html L680 | preCorrectionPauseSec | 纠正前停发（秒） 填 0 表示立即进入纠正 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 108 | dashboard.html L681 | stabilityVerifySec | 恢复稳定观察（秒） 观察期间仍发送预防扭矩 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 109 | dashboard.html L682 | dasFreshTimeoutMs | HOS数据超时（ms） 0x39B 超时未更新即停止注入 | 否 | [扭矩区间、单位、帧数与时间校验](modules/06_dnd_torque.md#torque_config) | 扭矩参数组 |
| 110 | dashboard.html L690 | dndScrollEnabled | 滚轮免打扰 | 否 | [左音量／右速度滚轮免打扰](modules/06_dnd_torque.md#dnd_scroll) | 功能显式列出的控件ID |
| 111 | dashboard.html L695 | dndScrollMode | 免打扰方式左滚轮音量 右滚轮速度 | 否 | [左音量／右速度滚轮免打扰](modules/06_dnd_torque.md#dnd_scroll) | 功能显式列出的控件ID |
| 112 | dashboard.html L696 | dndSpeedPeriodicEnabled | 滚轮持续发送 | 否 | [滚轮后台随机周期](modules/06_dnd_torque.md#dnd_periodic) | 功能显式列出的控件ID |
| 113 | dashboard.html L698 | dndSpeedPeriodMinMs | 右滚轮后台随机最短间隔（秒） | 是 | [滚轮后台随机周期](modules/06_dnd_torque.md#dnd_periodic) | 功能显式列出的控件ID |
| 114 | dashboard.html L699 | dndSpeedPeriodMaxMs | 右滚轮后台随机最长间隔（秒） | 是 | [滚轮后台随机周期](modules/06_dnd_torque.md#dnd_periodic) | 功能显式列出的控件ID |
| 115 | dashboard.html L707 | fsdAutoStartEnabled | 启用 FSD 自动激活 | 否 | [自动激活总开关与 revision 事务](modules/04_fsd_activation.md#auto_start_master) | 功能显式列出的控件ID |
| 116 | dashboard.html L709 | fsdAutoStartAvailableConfirmFrames | AP 可用确认帧数 | 否 | [AP 可用确认帧数](modules/04_fsd_activation.md#availability_frames) | 功能显式列出的控件ID |
| 117 | dashboard.html L710 | fsdAutoStartLongPressEnabled | 右滚轮长按持续激活 | 否 | [右側长按持续激活](modules/04_fsd_activation.md#auto_long_press) | 功能显式列出的控件ID |
| 118 | dashboard.html L711 | fsdAutoStartFirstParkToDriveEnabled | P→D 自动激活 | 否 | [P→D 自动激活](modules/04_fsd_activation.md#auto_pd) | 功能显式列出的控件ID |
| 119 | dashboard.html L712 | fsdAutoStartReverseToDriveSpeedKph | R→D 15秒内达到的车速（km/h） | 否 | [R→D 后15秒速度窗口](modules/04_fsd_activation.md#auto_rd) | 功能显式列出的控件ID |
| 120 | dashboard.html L713 | fsdAutoStartGroundEnabled | 右滚轮 R 档一键激活 | 否 | [R 挡右侧物理动作一键激活](modules/04_fsd_activation.md#auto_ground) | 功能显式列出的控件ID |
| 121 | dashboard.html L714 | fsdDriverOccupiedSpoofEnabled | 驾驶位有人与安全带模拟 | 否 | [驾驶位有人与安全带信号模拟](modules/04_fsd_activation.md#occupancy_spoof) | 功能显式列出的控件ID |
| 122 | dashboard.html L748 | fsdWarningActivationEnabled | 预警防撞激活 推荐 车道偏离或前撞提醒出现时激活 | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) | 功能显式列出的控件ID |
| 123 | dashboard.html L753 | fsdWarningLaneStandard | 标准 左侧与右侧 | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) | 功能显式列出的控件ID |
| 124 | dashboard.html L754 | fsdWarningLaneSevere | 严重 左侧与右侧 | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) | 功能显式列出的控件ID |
| 125 | dashboard.html L756 | fsdWarningLaneModes |  | 否 | [车道／碰撞预警激活与级别掩码](modules/04_fsd_activation.md#warning_activation) | 功能显式列出的控件ID |
| 126 | dashboard.html L759 | fsdSideCollisionActivationEnabled | 侧撞警告激活 侧方碰撞警告出现时激活 | 否 | [侧撞与疲倦预警激活](modules/04_fsd_activation.md#side_fatigue_activation) | 功能显式列出的控件ID |
| 127 | dashboard.html L760 | fsdDdawEnabled | 疲倦检测 推荐 检测到疲倦提醒时激活 | 否 | [侧撞与疲倦预警激活](modules/04_fsd_activation.md#side_fatigue_activation) | 功能显式列出的控件ID |
| 128 | dashboard.html L767 | blindSpotEnabled | 启用盲区氛围灯警报 默认关闭；警报解除后恢复原灯光 | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) | 功能显式列出的控件ID |
| 129 | dashboard.html L769 | blindSpotBrightness | 亮度 100% | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) | 功能显式列出的控件ID |
| 130 | dashboard.html L771 | blindSpotAreaFront | 前门一对 | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) | 功能显式列出的控件ID |
| 131 | dashboard.html L772 | blindSpotAreaRear | 后门一对 | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) | 功能显式列出的控件ID |
| 132 | dashboard.html L773 | blindSpotAreaDash | 仪表台一对 | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) | 功能显式列出的控件ID |
| 133 | dashboard.html L775 | blindSpotRestoreDelayMs | 恢复延时 ms | 否 | [盲区区域、亮度与警报后恢复](modules/09_ambient.md#ambient_blind) | 功能显式列出的控件ID |
| 134 | dashboard.html L794 | gearAutomationEnabled | 启动自动换挡 | 否 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) | 功能显式列出的控件ID |
| 135 | dashboard.html L795 | gearSeatbeltSafetyEnabled | 换挡前必须系安全带 | 否 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) | 功能显式列出的控件ID |
| 136 | dashboard.html L796 | gearBrakeSafetyBypassEnabled | 关闭刹车安全门 | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) | 功能显式列出的控件ID |
| 137 | dashboard.html L800 | gearShiftLimit | 换挡次数（单次刹车周期；0 = 无限） | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) | 功能显式列出的控件ID |
| 138 | dashboard.html L801 | gearAutoShiftMaxSpeedKph | 允许自动换挡速度 km/h | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) | 功能显式列出的控件ID |
| 139 | dashboard.html L802 | gearCooldownMs | 动作冷却 ms | 是 | [总开关、车速、刹车、安全带、次数与冷却](modules/07_gear.md#gear_gates) | 功能显式列出的控件ID |
| 140 | dashboard.html L804 | gearSmoothPreset | 应用智能流畅参数（1000 ms · P 30° · D/R 60° · 障碍物 30°） | 是 | [智能流畅参数快捷设置](modules/07_gear.md#gear_preset) | 功能显式列出的控件ID |
| 141 | dashboard.html L808 | gearBrakeToggleEnabled | 刹车＋方向盘确认 | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) | 功能显式列出的控件ID |
| 142 | dashboard.html L810 | gearDriveReverseSteeringThresholdDeciDeg | D/R 挡转向角度 ° | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) | 功能显式列出的控件ID |
| 143 | dashboard.html L810 | gearParkSteeringEnabled | P 挡方向盘确认 | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) | 功能显式列出的控件ID |
| 144 | dashboard.html L810 | gearParkSteeringThresholdDeciDeg | P 挡转向角度 ° | 是 | [刹车＋转向D/R切换与P挡方向确认](modules/07_gear.md#gear_steering) | 功能显式列出的控件ID |
| 145 | dashboard.html L813 | bleObstacleFeatureEnabled | 障碍物自动换挡 | 是 | [PARTY直连障碍建议与方向校验](modules/07_gear.md#obstacle_direct) | 功能显式列出的控件ID |
| 146 | dashboard.html L815 | bleObstacleSteeringConfirmEnabled | 方向盘角度确认 | 是 | [PARTY直连障碍建议与方向校验](modules/07_gear.md#obstacle_direct) | 功能显式列出的控件ID |
| 147 | dashboard.html L815 | bleObstacleSteeringThresholdDeciDeg | 方向盘确认角度 ° | 是 | [PARTY直连障碍建议与方向校验](modules/07_gear.md#obstacle_direct) | 功能显式列出的控件ID |
| 148 | dashboard.html L821 | gearUssDistancePreset | 雷达距离预设近 中（默认） 远 自定义 | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 149 | dashboard.html L822 | gearUssSdiBlockMax | 受阻阈值（原始值） | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 150 | dashboard.html L822 | gearUssSdiCautionMax | 谨慎阈值（原始值） | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 151 | dashboard.html L822 | gearUssMinValidSdi | 有效雷达数（个） | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 152 | dashboard.html L822 | gearUssRadarBlockMaxRaw | 前向雷达受阻阈值（原始值） | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 153 | dashboard.html L823 | gearUssRetryLoad | 重试读取 | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 154 | dashboard.html L823 | gearUssRetrySave | 重试保存 | 是 | [雷达近／中／远／自定义及版本保存](modules/07_gear.md#uss_settings) | 功能显式列出的控件ID |
| 155 | dashboard.html L836 | gearScrollEnabled | 滚轮换挡 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) | 功能显式列出的控件ID |
| 156 | dashboard.html L838 | gearScrollBrakeAuthorizationEnabled | 低速单次刹车授权 | 是 | [滚轮低速单次刹车授权](modules/07_gear.md#gear_brake_credit) | 功能显式列出的控件ID |
| 157 | dashboard.html L841 | gearLeftPositiveAction | 正方向无动作 D R P D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) | 功能显式列出的控件ID |
| 158 | dashboard.html L842 | gearLeftNegativeAction | 负方向无动作 D R P D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) | 功能显式列出的控件ID |
| 159 | dashboard.html L845 | gearRightPositiveAction | 正方向无动作 D R P D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) | 功能显式列出的控件ID |
| 160 | dashboard.html L846 | gearRightNegativeAction | 负方向无动作 D R P D/R切换 | 是 | [左右滚轮正负动作映射](modules/07_gear.md#gear_scroll) | 功能显式列出的控件ID |
| 161 | dashboard.html L873 | seatMemoryEnabled | 启用座椅记忆 | 否 | [座椅功能许可与通道](modules/08_seats.md#seat_enable) | 功能显式列出的控件ID |
| 162 | dashboard.html L875 | seatControlBus |  | 否 | [座椅功能许可与通道](modules/08_seats.md#seat_enable) | 功能显式列出的控件ID |
| 163 | dashboard.html L885 | 事件／属性控件 | 向前 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 164 | dashboard.html L885 | 事件／属性控件 | 向后 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 165 | dashboard.html L886 | 事件／属性控件 | 前倾 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 166 | dashboard.html L886 | 事件／属性控件 | 后仰 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 167 | dashboard.html L887 | 事件／属性控件 | 升高 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 168 | dashboard.html L887 | 事件／属性控件 | 降低 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 169 | dashboard.html L888 | 事件／属性控件 | 抬高 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 170 | dashboard.html L888 | 事件／属性控件 | 降低 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 171 | dashboard.html L889 | 事件／属性控件 | 向上 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 172 | dashboard.html L889 | 事件／属性控件 | 向下 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 173 | dashboard.html L890 | 事件／属性控件 | 向内 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 174 | dashboard.html L890 | 事件／属性控件 | 向外 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 175 | dashboard.html L894 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 176 | dashboard.html L894 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 177 | dashboard.html L894 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 178 | dashboard.html L895 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 179 | dashboard.html L895 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 180 | dashboard.html L895 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 181 | dashboard.html L896 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 182 | dashboard.html L896 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 183 | dashboard.html L896 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 184 | dashboard.html L897 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 185 | dashboard.html L897 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 186 | dashboard.html L897 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 187 | dashboard.html L898 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 188 | dashboard.html L898 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 189 | dashboard.html L898 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 190 | dashboard.html L907 | 事件／属性控件 | 向前 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 191 | dashboard.html L907 | 事件／属性控件 | 向后 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 192 | dashboard.html L908 | 事件／属性控件 | 前倾 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 193 | dashboard.html L908 | 事件／属性控件 | 后仰 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 194 | dashboard.html L909 | 事件／属性控件 | 升高 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 195 | dashboard.html L909 | 事件／属性控件 | 降低 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 196 | dashboard.html L910 | 事件／属性控件 | 抬高 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 197 | dashboard.html L910 | 事件／属性控件 | 降低 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 198 | dashboard.html L911 | 事件／属性控件 | 向上 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 199 | dashboard.html L911 | 事件／属性控件 | 向下 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 200 | dashboard.html L912 | 事件／属性控件 | 向内 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 201 | dashboard.html L912 | 事件／属性控件 | 向外 | 否 | [24方向按住调节、250ms续租与松开停止](modules/08_seats.md#seat_manual) | 方向掩码属性 |
| 202 | dashboard.html L916 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 203 | dashboard.html L916 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 204 | dashboard.html L916 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 205 | dashboard.html L917 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 206 | dashboard.html L917 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 207 | dashboard.html L917 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 208 | dashboard.html L918 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 209 | dashboard.html L918 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 210 | dashboard.html L918 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 211 | dashboard.html L919 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 212 | dashboard.html L919 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 213 | dashboard.html L919 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 214 | dashboard.html L920 | 事件／属性控件 |  | 否 | [十个槽位名称本地保存](modules/08_seats.md#seat_names) | 槽名属性 |
| 215 | dashboard.html L920 | 事件／属性控件 | 保存 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 216 | dashboard.html L920 | 事件／属性控件 | 调用 | 否 | [十个位置槽保存与Flash确认](modules/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](modules/08_seats.md#seat_recall)、[停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 内联事件函数 |
| 217 | dashboard.html L924 | seatStopButton | 停止全部座椅动作 | 否 | [停止全部手动和记忆动作](modules/08_seats.md#seat_cancel) | 功能显式列出的控件ID |
| 218 | dashboard.html L924 | 事件／属性控件 | 刷新状态 | 否 | [浏览器轮询调度、超时、暂停和性能记录](modules/02_config_can.md#read_coordinator) | 内联事件函数 |
| 219 | dashboard.html L938 | fsdForceHighPhysicalEnabled | FSD 强制远光 | 否 | [FSD强制远光与合帧](modules/10_lighting.md#high_force) | 功能显式列出的控件ID |
| 220 | dashboard.html L940 | longPressHighBeamStrobeEnabled | 第二次长按0.5秒远光爆闪 | 否 | [第二次长按0.5秒远光爆闪](modules/10_lighting.md#high_strobe) | 功能显式列出的控件ID |
| 221 | dashboard.html L942 | highBeamStrobeIntervalMs | 爆闪间隔（1～100 毫秒） | 否 | [第二次长按0.5秒远光爆闪](modules/10_lighting.md#high_strobe) | 功能显式列出的控件ID |
| 222 | dashboard.html L943 | highBeamStrobeCount | 爆闪次数（0～20，0=不限） | 否 | [第二次长按0.5秒远光爆闪](modules/10_lighting.md#high_strobe) | 功能显式列出的控件ID |
| 223 | dashboard.html L958 | turnFollowEnabled | 氛围灯跟随转向灯 默认关闭；左转仅影响左侧，右转仅影响右侧 | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 224 | dashboard.html L960 | turnFollowColor | 跟随颜色 | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 225 | dashboard.html L961 | turnFollowBrightness | 亮度 80% | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 226 | dashboard.html L963 | turnFollowAreaFront | 前车门 | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 227 | dashboard.html L964 | turnFollowAreaRear | 后车门 | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 228 | dashboard.html L965 | turnFollowAreaDash | 仪表台 | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 229 | dashboard.html L967 | turnFollowHazards | 跟随双闪 关闭时双闪不会触发氛围灯 | 否 | [左右转向／双闪跟随](modules/09_ambient.md#ambient_turn) | 功能显式列出的控件ID |
| 230 | dashboard.html L975 | rear-fog-strobe-tgl | 自动减速后雾灯 | 否 | [减速后雾灯与轻重阈值](modules/10_lighting.md#fog_deceleration) | 功能显式列出的控件ID |
| 231 | dashboard.html L976 | reverse-warning-tgl | 倒车警示（双闪 + 8 次后雾灯） | 否 | [倒车双闪＋8次雾灯警示](modules/10_lighting.md#fog_reverse) | 功能显式列出的控件ID |
| 232 | dashboard.html L977 | reverse-rear-fog-steady-tgl | 倒车后雾灯常亮 | 否 | [倒车后雾灯常亮](modules/10_lighting.md#fog_reverse_steady) | 功能显式列出的控件ID |
| 233 | dashboard.html L978 | rear-fog-pilot-tgl | 后雾灯领航许可 | 否 | [领航许可与本次运行启动／停止](modules/10_lighting.md#fog_pilot) | 功能显式列出的控件ID |
| 234 | dashboard.html L979 | rear-fog-pilot-run-btn | 启动后雾灯领航 | 否 | [领航许可与本次运行启动／停止](modules/10_lighting.md#fog_pilot) | 功能显式列出的控件ID |
| 235 | dashboard.html L981 | rear-fog-mild-threshold | 轻度减速度阈值（0.01 m/s²） | 否 | [减速后雾灯与轻重阈值](modules/10_lighting.md#fog_deceleration) | 功能显式列出的控件ID |
| 236 | dashboard.html L982 | rear-fog-hard-threshold | 重度减速度阈值（0.01 m/s²） | 否 | [减速后雾灯与轻重阈值](modules/10_lighting.md#fog_deceleration) | 功能显式列出的控件ID |
| 237 | dashboard.html L992 | canbServiceModeEnabled | 启用维修模式 | 否 | [CANB维修模式开关](modules/11_preheat_service.md#service_mode) | 功能显式列出的控件ID |
| 238 | dashboard.html L998 | batteryPreheatEnabled | 启用电池预热请求 | 否 | [预热请求与15／30／45／60分钟许可](modules/11_preheat_service.md#preheat_start) | 功能显式列出的控件ID |
| 239 | dashboard.html L999 | batteryPreheatDurationMin | 允许时间15 分钟 30 分钟 45 分钟 60 分钟 | 否 | [预热请求与15／30／45／60分钟许可](modules/11_preheat_service.md#preheat_start) | 功能显式列出的控件ID |
| 240 | dashboard.html L1001 | batteryPreheatRetryStop | 重试关闭 | 是 | [关闭失败恢复与显式重试](modules/11_preheat_service.md#preheat_retry) | 功能显式列出的控件ID |
| 241 | dashboard.html L1026 | canPinLayoutSelect | 线序自动（默认：先检测 A，A 三路无有效帧再检测 B） 固定 A · CH TX2/RX3、VEH TX4/RX5、PARTY TX26/RX27 固定 B · CH TX3/RX2、VEH TX50/RX49、PARTY TX31/RX30 | 否 | [A／B／自动线序探测、保存和恢复](modules/02_config_can.md#pin_layout) | 功能显式列出的控件ID |
| 242 | dashboard.html L1027 | canPinLayoutSave | 保存线序 | 否 | [A／B／自动线序探测、保存和恢复](modules/02_config_can.md#pin_layout) | 功能显式列出的控件ID |
| 243 | dashboard.html L1029 | can0TxEnabled | CAN0 发送 | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) | 功能显式列出的控件ID |
| 244 | dashboard.html L1030 | can1TxEnabled | CAN1 发送 | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) | 功能显式列出的控件ID |
| 245 | dashboard.html L1031 | can2TxEnabled | CAN2 发送 | 否 | [通信总开关与三路 TX 开关](modules/02_config_can.md#can_gates) | 功能显式列出的控件ID |
| 246 | dashboard.html L1038 | recInclude | 包含ID | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 247 | dashboard.html L1039 | recExclude | 排除ID | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 248 | dashboard.html L1042 | recBus1Enabled | bus=0 | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 249 | dashboard.html L1043 | recBus2Enabled | bus=1 | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 250 | dashboard.html L1044 | recBus3Enabled | bus=2 | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 251 | dashboard.html L1045 | recRxEnabled | RX | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 252 | dashboard.html L1046 | recTxEnabled | TX | 否 | [包含／排除ID、三路总线和RX／TX](modules/12_recorder.md#rec_filters) | 功能显式列出的控件ID |
| 253 | dashboard.html L1047 | recDurationSec | 时长秒 | 否 | [异步切换过滤器、内存缓冲与开始抓包](modules/12_recorder.md#rec_start) | 功能显式列出的控件ID |
| 254 | dashboard.html L1051 | 事件／属性控件 | 开始抓包 | 否 | [异步切换过滤器、内存缓冲与开始抓包](modules/12_recorder.md#rec_start) | 内联事件函数 |
| 255 | dashboard.html L1052 | 事件／属性控件 | 停止 | 否 | [停止、清空与运行互斥](modules/12_recorder.md#rec_stop_clear) | 内联事件函数 |
| 256 | dashboard.html L1053 | 事件／属性控件 | 清空 | 否 | [停止、清空与运行互斥](modules/12_recorder.md#rec_stop_clear) | 内联事件函数 |
| 257 | dashboard.html L1054 | recDownloadCsv | 下载 CSV | 否 | [CSV／BIN下载与文件头](modules/12_recorder.md#rec_download) | 内联事件函数 |
| 258 | dashboard.html L1055 | recDownloadBin | 高速下载 BIN | 否 | [CSV／BIN下载与文件头](modules/12_recorder.md#rec_download) | 内联事件函数 |
| 259 | dashboard.html L1082 | onlineOtaCheck | 检测更新 | 否 | [在线检查、升级提示与管理目标一致性](modules/15_ota.md#ota_online) | 功能显式列出的控件ID |
| 260 | dashboard.html L1082 | onlineOtaInstall | 立即升级 | 否 | [在线检查、升级提示与管理目标一致性](modules/15_ota.md#ota_online) | 功能显式列出的控件ID |
| 261 | dashboard.html L1087 | otaFile |  | 否 | [本地BIN的浏览器预检查](modules/15_ota.md#ota_file) | 功能显式列出的控件ID |
| 262 | dashboard.html L1088 | otaStart | 开始升级 | 否 | [分块写入、结束验证、提交启动槽与重启](modules/15_ota.md#ota_upload) | 功能显式列出的控件ID |
| 263 | dashboard.html L1100 | ambientEnabled | 常亮氛围灯 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 264 | dashboard.html L1106 | 事件／属性控件 | 仪表台左 配置开 · 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 区域选择属性 |
| 265 | dashboard.html L1107 | 事件／属性控件 | 仪表台右 配置开 · 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 区域选择属性 |
| 266 | dashboard.html L1109 | 事件／属性控件 | 左前门 配置开 · 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 区域选择属性 |
| 267 | dashboard.html L1111 | 事件／属性控件 | 右前门 配置开 · 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 区域选择属性 |
| 268 | dashboard.html L1112 | 事件／属性控件 | 左后门 配置开 · 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 区域选择属性 |
| 269 | dashboard.html L1113 | 事件／属性控件 | 右后门 配置开 · 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 区域选择属性 |
| 270 | dashboard.html L1116 | ambientZone4Enabled | 仪表台左 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 271 | dashboard.html L1117 | ambientZone5Enabled | 仪表台右 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 272 | dashboard.html L1118 | ambientZone0Enabled | 左前门 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 273 | dashboard.html L1119 | ambientZone1Enabled | 右前门 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 274 | dashboard.html L1120 | ambientZone2Enabled | 左后门 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 275 | dashboard.html L1121 | ambientZone3Enabled | 右后门 | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 276 | dashboard.html L1126 | ambientBrightness | 亮度 60% | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 277 | dashboard.html L1127 | ambientColor |  | 是 | [六区常亮、区域使能、RGB与亮度](modules/09_ambient.md#ambient_zones) | 功能显式列出的控件ID |
| 278 | dashboard.html L1128 | ambientApplyAll | 应用到全部区域 | 是 | [应用当前颜色亮度到全部区域](modules/09_ambient.md#ambient_all) | 功能显式列出的控件ID |
| 279 | dashboard.html L1134 | welcomeEnabled | 启用迎宾灯效 与常亮氛围灯独立；默认关闭 | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) | 功能显式列出的控件ID |
| 280 | dashboard.html L1137 | welcomeStyle0 | 柔光环抱 灯光沿既有路径平滑渐亮，柔和收尾 | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) | 功能显式列出的控件ID |
| 281 | dashboard.html L1138 | welcomeStyle1 | 冰蓝流光 光束沿路径移动，并留下低亮尾迹 | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) | 功能显式列出的控件ID |
| 282 | dashboard.html L1139 | welcomeStyle2 | 暖金礼序 灯光沿既有路径依次展开 | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) | 功能显式列出的控件ID |
| 283 | dashboard.html L1140 | welcomeStyle3 | 黑幕启幕 先进入暗场，再按既有路径渐亮 | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) | 功能显式列出的控件ID |
| 284 | dashboard.html L1141 | welcomeStyle4 | 光迹回环 暗场后逐点巡游，仪表台汇聚再渐亮 | 是 | [五种迎宾样式](modules/09_ambient.md#welcome_styles) | 功能显式列出的控件ID |
| 285 | dashboard.html L1144 | welcomeTriggerMode0 | 座椅确认无人后触发 | 是 | [开门与座椅无人触发、过滤和重触发](modules/09_ambient.md#welcome_trigger) | 功能显式列出的控件ID |
| 286 | dashboard.html L1145 | welcomeTriggerMode1 | 任何有效开门都触发 | 是 | [开门与座椅无人触发、过滤和重触发](modules/09_ambient.md#welcome_trigger) | 功能显式列出的控件ID |
| 287 | dashboard.html L1149 | welcomeBrightness | 迎宾亮度 40% | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 功能显式列出的控件ID |
| 288 | dashboard.html L1150 | welcomeTempo | 灯效节奏舒缓 标准 利落 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 功能显式列出的控件ID |
| 289 | dashboard.html L1152 | welcomeColor | 迎宾颜色 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 功能显式列出的控件ID |
| 290 | dashboard.html L1154 | 事件／属性控件 | 仪表台左 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 迎宾区域属性 |
| 291 | dashboard.html L1154 | 事件／属性控件 | 仪表台右 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 迎宾区域属性 |
| 292 | dashboard.html L1155 | 事件／属性控件 | 左前门 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 迎宾区域属性 |
| 293 | dashboard.html L1155 | 事件／属性控件 | 右前门 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 迎宾区域属性 |
| 294 | dashboard.html L1156 | 事件／属性控件 | 左后门 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 迎宾区域属性 |
| 295 | dashboard.html L1156 | 事件／属性控件 | 右后门 | 是 | [迎宾亮度、节奏、颜色和六区掩码](modules/09_ambient.md#welcome_params) | 迎宾区域属性 |
| 296 | dashboard.html L1172 | wifiApPassword | 热点密码 | 是 | [热点密码保存及异步重启](modules/14_wifi.md#wifi_ap_password) | 功能显式列出的控件ID |
| 297 | dashboard.html L1173 | wifiApSave | 保存并重启热点 | 是 | [热点密码保存及异步重启](modules/14_wifi.md#wifi_ap_password) | 功能显式列出的控件ID |
| 298 | dashboard.html L1173 | wifiOnboardingContinue | 继续引导 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 299 | dashboard.html L1183 | wifiExternalEnabled | 启用外部 Wi-Fi | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) | 功能显式列出的控件ID |
| 300 | dashboard.html L1184 | wifiApAutoOff | 外部 Wi-Fi 连接成功 5 分钟后自动关闭 AP（手机连接时保持开启） | 是 | [联网5分钟后关闭AP及客户端保留](modules/14_wifi.md#wifi_ap_autooff) | 功能显式列出的控件ID |
| 301 | dashboard.html L1185 | wifiNetworkList | 手动扫描结果 点击“扫描附近网络” | 是 | [扫描附近网络与列表选择](modules/14_wifi.md#wifi_scan) | 功能显式列出的控件ID |
| 302 | dashboard.html L1186 | wifiSsid | SSID | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) | 功能显式列出的控件ID |
| 303 | dashboard.html L1187 | wifiPassword | 密码 | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) | 功能显式列出的控件ID |
| 304 | dashboard.html L1188 | wifiScan | 扫描附近网络 | 是 | [扫描附近网络与列表选择](modules/14_wifi.md#wifi_scan) | 功能显式列出的控件ID |
| 305 | dashboard.html L1188 | wifiConnect | 保存并连接 | 是 | [启用STA、保存SSID密码与连接](modules/14_wifi.md#wifi_connect) | 功能显式列出的控件ID |
| 306 | dashboard.html L1188 | wifiDisconnect | 断开 | 是 | [断开与忘记网络](modules/14_wifi.md#wifi_disconnect_forget) | 功能显式列出的控件ID |
| 307 | dashboard.html L1188 | wifiForget | 忘记网络 | 是 | [断开与忘记网络](modules/14_wifi.md#wifi_disconnect_forget) | 功能显式列出的控件ID |
| 308 | dashboard.html L1197 | poll | 轮询 | 是 | [浏览器轮询调度、超时、暂停和性能记录](modules/02_config_can.md#read_coordinator) | 功能显式列出的控件ID |
| 309 | dashboard.html L1201 | 事件／属性控件 | 刷新 | 是 | [三路接收发送、控制器故障和热ID](modules/18_diagnostics.md#can_diag) | 内联事件函数 |
| 310 | dashboard.html L1201 | 事件／属性控件 | 导出完整诊断JSON | 是 | [完整诊断JSON导出](modules/18_diagnostics.md#diag_export) | 内联事件函数 |
| 311 | dashboard.html L1201 | coreDumpDownloadButton | 下载崩溃转储 | 是 | [令牌下载、大小与SHA256核对](modules/18_diagnostics.md#coredump_download) | 功能显式列出的控件ID |
| 312 | dashboard.html L1239 | driverAddName | 驾驶员名称 | 是 | [添加驾驶员并绑定当前位置](modules/03_drivers.md#driver_add) | 功能显式列出的控件ID |
| 313 | dashboard.html L1241 | 事件／属性控件 | 取消 | 是 | [列表、当前驾驶员、参数来源与状态](modules/03_drivers.md#driver_list) | HTML语义区域；不是调用链证明 |
| 314 | dashboard.html L1241 | driverAddSubmit | 保存 | 是 | [添加驾驶员并绑定当前位置](modules/03_drivers.md#driver_add) | 功能显式列出的控件ID |
| 315 | dashboard.html L1252 | driverRebindConfirm | 我已核对上方位置，并确认用当前驾驶位覆盖原保存位置。 | 是 | [重新绑定驾驶位](modules/03_drivers.md#driver_rebind) | 功能显式列出的控件ID |
| 316 | dashboard.html L1254 | 事件／属性控件 | 取消 | 是 | [列表、当前驾驶员、参数来源与状态](modules/03_drivers.md#driver_list) | HTML语义区域；不是调用链证明 |
| 317 | dashboard.html L1254 | driverRebindSubmit | 确认覆盖 | 是 | [重新绑定驾驶位](modules/03_drivers.md#driver_rebind) | 功能显式列出的控件ID |
| 318 | dashboard.html L1260 | driverRenameName | 驾驶员名称 | 是 | [重命名驾驶员](modules/03_drivers.md#driver_rename) | 功能显式列出的控件ID |
| 319 | dashboard.html L1262 | 事件／属性控件 | 取消 | 是 | [列表、当前驾驶员、参数来源与状态](modules/03_drivers.md#driver_list) | HTML语义区域；不是调用链证明 |
| 320 | dashboard.html L1262 | driverRenameSubmit | 保存 | 是 | [重命名驾驶员](modules/03_drivers.md#driver_rename) | 功能显式列出的控件ID |
| 321 | dashboard.html L1266 | 事件／属性控件 | ✦ 智驾 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 导航属性 |
| 322 | dashboard.html L1267 | 事件／属性控件 | ⇄ 换挡 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 导航属性 |
| 323 | dashboard.html L1268 | 事件／属性控件 | ◇ 车身 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 导航属性 |
| 324 | dashboard.html L1269 | 事件／属性控件 | ⌁ 诊断 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 导航属性 |
| 325 | dashboard.html L1270 | 事件／属性控件 | ⚙ 系统 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 导航属性 |
| 326 | login.html L34 | 事件／属性控件 | 热点密码 登录 | 否 | [网页登录与错误限流](modules/01_ui_auth.md#login) | 登录表单 |
| 327 | login.html L35 | password | 热点密码 | 否 | [网页登录与错误限流](modules/01_ui_auth.md#login) | 登录表单 |
| 328 | login.html L36 | 事件／属性控件 | 登录 | 否 | [网页登录与错误限流](modules/01_ui_auth.md#login) | 登录表单 |
| 329 | JS:createCanExperimentCard L65 | canExperimentHeaderStop | 立即停止 | 是 | [内置发送接管、优先级继承和停止结算](modules/13_can_experiment.md#experiment_takeover) | 内联事件函数 |
| 330 | JS:createCanExperimentCard L65 | 事件／属性控件 | ＋ 添加规则 | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 内联事件函数 |
| 331 | JS:createCanExperimentCard L65 | 事件／属性控件 | 1. 开始监听 | 否 | [来源监听、停止监听与来源确认](modules/13_can_experiment.md#experiment_listen) | 内联事件函数 |
| 332 | JS:createCanExperimentCard L65 | 事件／属性控件 | 2. 确认修改内容 | 否 | [确认修改、错误／警告和generation](modules/13_can_experiment.md#experiment_validate) | 内联事件函数 |
| 333 | JS:createCanExperimentCard L65 | canExperimentStartButton | 开启测试 | 否 | [必须匹配已确认版本才能开始](modules/13_can_experiment.md#experiment_start) | 内联事件函数 |
| 334 | JS:createCanExperimentCard L65 | 事件／属性控件 | 立即停止 | 否 | [内置发送接管、优先级继承和停止结算](modules/13_can_experiment.md#experiment_takeover) | 内联事件函数 |
| 335 | JS:createCanExperimentCard L65 | canExperimentPresetSlot |  | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) | 功能显式列出的控件ID |
| 336 | JS:createCanExperimentCard L65 | canExperimentPresetName |  | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) | 功能显式列出的控件ID |
| 337 | JS:createCanExperimentCard L65 | 事件／属性控件 | 载入 | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) | 内联事件函数 |
| 338 | JS:createCanExperimentCard L65 | 事件／属性控件 | 保存 | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) | 内联事件函数 |
| 339 | JS:createCanExperimentCard L65 | 事件／属性控件 | 重命名 | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) | 内联事件函数 |
| 340 | JS:createCanExperimentCard L65 | 事件／属性控件 | 删除 | 否 | [8预设载入／保存／改名／删除与异步持久化](modules/13_can_experiment.md#experiment_presets) | 内联事件函数 |
| 341 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 确认帧来源 | 否 | [来源监听、停止监听与来源确认](modules/13_can_experiment.md#experiment_listen) | 内联事件函数 |
| 342 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 删除 | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 内联事件函数 |
| 343 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 标准 CAN ID（HEX） | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 模板所属函数／data属性 |
| 344 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 线路CAN0 13/14 CAN1 9/10 CAN2 2/3 | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 模板所属函数／data属性 |
| 345 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 线路CAN0 13/14 CAN1 9/10 CAN2 2/3 | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 模板所属函数／data属性 |
| 346 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 线路CAN0 13/14 CAN1 9/10 CAN2 2/3 | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 模板所属函数／data属性 |
| 347 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 已确认 DLC | 否 | [最多4规则、每规则3路与标准ID](modules/13_can_experiment.md#experiment_rules) | 模板所属函数／data属性 |
| 348 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 发送方式单次 跟随原始帧 固定周期 | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) | 模板所属函数／data属性 |
| 349 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 周期 ms | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) | 模板所属函数／data属性 |
| 350 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 模板有效 ms（0自动） | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) | 模板所属函数／data属性 |
| 351 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 要求所选线路同时就绪 | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) | 模板所属函数／data属性 |
| 352 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 接管对应内置发送 | 否 | [内置发送接管、优先级继承和停止结算](modules/13_can_experiment.md#experiment_takeover) | 模板所属函数／data属性 |
| 353 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 发送等级继承原报文等级 新增报文 P1 新增报文 P2 新增报文 P3 | 否 | [内置发送接管、优先级继承和停止结算](modules/13_can_experiment.md#experiment_takeover) | 模板所属函数／data属性 |
| 354 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 跟随延迟 μs（0立即） | 否 | [单次／跟随／周期、延迟与模板超时](modules/13_can_experiment.md#experiment_modes) | 模板所属函数／data属性 |
| 355 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 计数器不处理 原值偏移 独立自增 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 356 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 字节 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 357 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 起始 bit | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 358 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 宽度 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 359 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 步长 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 360 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 初值 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 361 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 最小 / 最大 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 362 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 最小 / 最大 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 363 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 原值偏移 | 否 | [原值偏移／独立自增计数器](modules/13_can_experiment.md#experiment_counter) | 模板所属函数／data属性 |
| 364 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 校验不处理 SUM XOR CRC8 | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 365 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 输出字节 | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 366 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 加值 HEX | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 367 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | 最终 XOR HEX | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 368 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | CRC 多项式 HEX | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 369 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | CRC 初值 HEX | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 370 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | CRC 输入反射 | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 371 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | CRC 输出反射 | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 372 | JS:canExperimentRuleMarkup L71 | 事件／属性控件 | CRC 包含 CAN ID | 否 | [SUM／XOR／CRC8及反射参数](modules/13_can_experiment.md#experiment_checksums) | 模板所属函数／data属性 |
| 373 | JS:initAppPages L156 | 事件／属性控件 | 展开 / 收起任务明细 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | DOM布局构造 |
| 374 | JS:(global) L1481 | 事件／属性控件 | 智驾 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 商业界面模板上下文 |
| 375 | JS:(global) L1481 | 事件／属性控件 | 换挡与车身 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 商业界面模板上下文 |
| 376 | JS:(global) L1481 | 事件／属性控件 | 行程 | 是 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 模板文本上下文 |
| 377 | JS:(global) L1481 | 事件／属性控件 | 小计 | 是 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 模板文本上下文 |
| 378 | JS:(global) L1481 | 事件／属性控件 | 累计 | 是 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 模板文本上下文 |
| 379 | JS:(global) L1481 | fsdRecordsRefresh | 刷新 | 是 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 功能显式列出的控件ID |
| 380 | JS:(global) L1481 | fsdRecordsDetailBack | 返回行程 | 是 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 功能显式列出的控件ID |
| 381 | JS:(global) L1481 | fsdRecordsSubtotalReset | 重置小计 | 是 | [重置小计](modules/16_records.md#records_subtotal) | 功能显式列出的控件ID |
| 382 | JS:(global) L1481 | fsdRecordsClear | 清空累计与行程历史 | 是 | [清空累计与行程历史](modules/16_records.md#records_clear) | 功能显式列出的控件ID |
| 383 | JS:(global) L1481 | 事件／属性控件 | 重置小计？ 仅重置小计，当前驾驶、历史与累计里程保留。 确认重置 取消 | 否 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 模板文本上下文 |
| 384 | JS:(global) L1481 | fsdRecordsSubtotalResetConfirm | 确认重置 | 否 | [重置小计](modules/16_records.md#records_subtotal) | 功能显式列出的控件ID |
| 385 | JS:(global) L1481 | fsdRecordsSubtotalResetCancel | 取消 | 否 | [重置小计](modules/16_records.md#records_subtotal) | 动态控件ID |
| 386 | JS:(global) L1481 | 事件／属性控件 | 清空累计与行程历史？ 将清空当前驾驶、小计、累计和历史记录，此操作不可撤销。 确认清空 取消 | 否 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 模板文本上下文 |
| 387 | JS:(global) L1481 | fsdRecordsClearConfirm | 确认清空 | 否 | [清空累计与行程历史](modules/16_records.md#records_clear) | 功能显式列出的控件ID |
| 388 | JS:(global) L1481 | fsdRecordsClearCancel | 取消 | 否 | [清空累计与行程历史](modules/16_records.md#records_clear) | 动态控件ID |
| 389 | JS:(global) L1481 | cloudEnabled | 自动同步 关闭后保留设备本地数据与连接状态 | 是 | [自动同步开关、立即同步及后台ack](modules/17_cloud_onboarding.md#cloud_sync) | 功能显式列出的控件ID |
| 390 | JS:(global) L1481 | cloudDeviceId |  | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 功能显式列出的控件ID |
| 391 | JS:(global) L1481 | cloudCopyButton | 复制 ID | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 功能显式列出的控件ID |
| 392 | JS:(global) L1481 | 事件／属性控件 | 打开云端网页 | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 模板文本上下文 |
| 393 | JS:(global) L1481 | cloudWebUrl |  | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 功能显式列出的控件ID |
| 394 | JS:(global) L1481 | cloudCopyUrl | 复制网址 | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 功能显式列出的控件ID |
| 395 | JS:(global) L1481 | cloudUploadButton | 立即同步 | 是 | [自动同步开关、立即同步及后台ack](modules/17_cloud_onboarding.md#cloud_sync) | 功能显式列出的控件ID |
| 396 | JS:(global) L1481 | cloudSettingsRestoreButton | 从云端恢复 | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) | 动态控件ID |
| 397 | JS:(global) L1481 | cloudSettingsConflictsRefresh | 查看冲突 | 是 | [查看冲突、保留设备／应用云端](modules/17_cloud_onboarding.md#cloud_conflicts) | 功能显式列出的控件ID |
| 398 | JS:(global) L1481 | 事件／属性控件 | 恢复云端备份 恢复范围 设置与驾驶员 已选择 FSD 驾驶记录 已选择 我已确认恢复所选数据 取消 确认恢复 | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 模板文本上下文 |
| 399 | JS:(global) L1481 | cloudRestoreScopeSettings | 设置与驾驶员 已选择 | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) | 功能显式列出的控件ID |
| 400 | JS:(global) L1481 | cloudRestoreScopeRecords | FSD 驾驶记录 已选择 | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) | 功能显式列出的控件ID |
| 401 | JS:(global) L1481 | cloudSettingsRestoreConfirm | 我已确认恢复所选数据 | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) | 功能显式列出的控件ID |
| 402 | JS:(global) L1481 | cloudRestoreCancelButton | 取消 | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) | 动态控件ID |
| 403 | JS:(global) L1481 | cloudRestoreConfirmButton | 确认恢复 | 是 | [设置驾驶员／FSD记录恢复、范围和request_id](modules/17_cloud_onboarding.md#cloud_restore) | 功能显式列出的控件ID |
| 404 | JS:(global) L1481 | cloudUrl | 服务 URL | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) | 功能显式列出的控件ID |
| 405 | JS:(global) L1481 | cloudToken | 产品根 Token | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) | 功能显式列出的控件ID |
| 406 | JS:(global) L1481 | cloudInterval | 同步间隔（15–300 秒） | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) | 功能显式列出的控件ID |
| 407 | JS:(global) L1481 | cloudClearToken | 清除已保存的产品根 Token | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) | 功能显式列出的控件ID |
| 408 | JS:(global) L1481 | cloudTestButton | 测试 v2 连接 | 是 | [测试v2连接](modules/17_cloud_onboarding.md#cloud_test) | 功能显式列出的控件ID |
| 409 | JS:(global) L1481 | cloudSaveButton | 保存连接设置 | 是 | [服务URL、产品根Token、清除凭据和15～300秒周期](modules/17_cloud_onboarding.md#cloud_config) | 功能显式列出的控件ID |
| 410 | JS:(global) L1481 | 事件／属性控件 | 连接 Wi-Fi 连接网络后，可登录云端网站绑定设备，使用云同步功能。 连接 Wi-Fi 跳过，开始使用 云端数据恢复 已有账户可以恢复原设备的数据，也可以稍后恢复或作为新用户开始使用。 账户状态暂不可确认 设备 ID 复制 ID 打开云端网页 复制网址 重新检查 恢复云端数据 稍后恢复 我是新用户 重试完成 | 否 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 模板文本上下文 |
| 411 | JS:(global) L1481 | onboardingConnectWifi | 连接 Wi-Fi | 否 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 412 | JS:(global) L1481 | onboardingSkipWifi | 跳过，开始使用 | 否 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 413 | JS:(global) L1481 | onboardingDeviceId | 设备 ID | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 动态控件ID |
| 414 | JS:(global) L1481 | onboardingCopyId | 复制 ID | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 动态控件ID |
| 415 | JS:(global) L1481 | 事件／属性控件 | 打开云端网页 | 是 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 模板文本上下文 |
| 416 | JS:(global) L1481 | onboardingWebUrl |  | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 动态控件ID |
| 417 | JS:(global) L1481 | onboardingCopyUrl | 复制网址 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 动态控件ID |
| 418 | JS:(global) L1481 | onboardingRecheck | 重新检查 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 动态控件ID |
| 419 | JS:(global) L1481 | onboardingRestore | 恢复云端数据 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 420 | JS:(global) L1481 | onboardingLater | 稍后恢复 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 421 | JS:(global) L1481 | onboardingNew | 我是新用户 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 422 | JS:(global) L1481 | onboardingCompleteRetry | 重试完成 | 是 | [首次联网／新用户／稍后／恢复完成引导](modules/17_cloud_onboarding.md#onboarding) | 功能显式列出的控件ID |
| 423 | JS:(global) L1481 | commercialBack | 返回 | 是 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 动态控件ID |
| 424 | JS:(global) L1481 | commercialHelp | 说明 | 是 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 动态控件ID |
| 425 | JS:(global) L1481 | commercialLock | 退出并锁定 | 是 | [开发者模式解锁、闲置锁定与令牌撤销](modules/01_ui_auth.md#developer) | 功能显式列出的控件ID |
| 426 | JS:(global) L1481 | 事件／属性控件 | 功能 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 商业界面模板上下文 |
| 427 | JS:(global) L1481 | 事件／属性控件 | FSD记录 | 否 | [当前／历史行程、详情、小计与累计](modules/16_records.md#records_view) | 动态控件ID |
| 428 | JS:(global) L1481 | 事件／属性控件 | 设置 | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | 商业界面模板上下文 |
| 429 | JS:(global) L1481 | commercialUnlockForm | 开发者模式 输入开发者密码，显示诊断、日志与高级工具。 开发者密码 解锁 取消 | 否 | [开发者模式解锁、闲置锁定与令牌撤销](modules/01_ui_auth.md#developer) | 动态控件ID |
| 430 | JS:(global) L1481 | commercialPassword | 开发者密码 | 否 | [开发者模式解锁、闲置锁定与令牌撤销](modules/01_ui_auth.md#developer) | 功能显式列出的控件ID |
| 431 | JS:(global) L1481 | commercialUnlockButton | 解锁 | 否 | [开发者模式解锁、闲置锁定与令牌撤销](modules/01_ui_auth.md#developer) | 动态控件ID |
| 432 | JS:(global) L1481 | commercialUnlockCancel | 取消 | 否 | [开发者模式解锁、闲置锁定与令牌撤销](modules/01_ui_auth.md#developer) | 动态控件ID |
| 433 | JS:commercialRow L1665 | 事件／属性控件 |  | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | DOM布局构造 |
| 434 | JS:commercialRow L1665 | 事件／属性控件 |  | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | DOM布局构造 |
| 435 | JS:commercialRow L1665 | 事件／属性控件 |  | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | DOM布局构造 |
| 436 | JS:initCommercialHierarchy L1905 | 事件／属性控件 |  | 否 | [功能页、详情页、帮助、折叠和响应式布局](modules/01_ui_auth.md#navigation) | DOM布局构造 |
| 437 | JS:initCommercialUi L1941 | settingsSyncBanner | ☁ 云同步 读取同步状态 | 否 | [设备ID、云网页地址与复制](modules/17_cloud_onboarding.md#cloud_identity) | 动态控件ID |
