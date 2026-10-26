# 145 项网页功能的 CAN 对照表

[返回 Skill](../SKILL.md) · [线路/ID/控制值](control-protocol.md) · [功能状态机](control-logic.md) · [报文位布局](can-frames.md)

沿用原18模块、145项语义分组，每项说明在CAN链中的位置。编号是本次整理结果，包含配置、子功能和诊断；不是官方功能数量。点击最后一列可看本包收录的详细逻辑、原JS定位备注、HTTP handler、C地址与逐项伪代码。

“CAN状态机/输出”指该项参与输出链；部分具体编码或完整运行流程未确认，按该行与本包模块的证据等级和缺口阅读。“CAN接收/观察”也包含消费已有观察结果的存储与导出。

| 类型 | 项数 |
|---|---|
| 前端 | 11 |
| 管理/状态 | 44 |
| 运行配置/协调 | 25 |
| CAN接收/观察 | 14 |
| CAN状态机/输出 | 51 |

## 模块索引

- [界面、CSS 与访问认证](#01_ui_auth)：8项。
- [共用配置、自动保存与 CAN 基础](#02_config_can)：7项。
- [驾驶员与个性化设置](#03_drivers)：7项。
- [FSD、自动激活与预警激活](#04_fsd_activation)：16项。
- [速度补偿与驾驶员目标模板](#05_speed)：9项。
- [免打扰、摄像头、滚轮与扭矩状态机](#06_dnd_torque)：11项。
- [自动换挡、方向盘、滚轮与障碍物](#07_gear)：9项。
- [座椅手动调节、位置记忆与停止](#08_seats)：6项。
- [六区氛围灯、FSD提示、盲区、转向与迎宾](#09_ambient)：9项。
- [远光、爆闪与后雾灯](#10_lighting)：6项。
- [电池预热和维修模式](#11_preheat_service)：4项。
- [CAN抓包、过滤与文件下载](#12_recorder)：5项。
- [CAN实验规则、发送、校验与预设](#13_can_experiment)：11项。
- [AP热点、外部Wi-Fi和网络状态](#14_wifi)：7项。
- [本地／在线OTA、启动验证与重启](#15_ota)：8项。
- [FSD行程、里程统计与手机时钟](#16_records)：5项。
- [云同步、备份恢复、冲突与首次引导](#17_cloud_onboarding)：9项。
- [健康、CAN、系统指标、JSON与崩溃转储](#18_diagnostics)：8项。

<a id="01_ui_auth"></a>
## 界面、CSS 与访问认证

逐项逻辑：[本包模块详细分析](features/01_ui_auth.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#management)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 标准／车机／自动界面 | 前端 | 浏览器检测车机环境，localStorage与DOM属性选布局；无独立CAN动作。 | [ui_mode](features/01_ui_auth.md#ui_mode) |
| 日间／夜间主题 | 管理/状态 | C提供固件身份，JS保存主题、CSS配色；无独立车控。 | [theme](features/01_ui_auth.md#theme) |
| 功能页、详情页、帮助、折叠和响应式布局 | 前端 | CSS/DOM切换页面、折叠与帮助；不改变报文。 | [navigation](features/01_ui_auth.md#navigation) |
| 首次说明与已阅读状态 | 前端 | 首次说明确认写浏览器偏好；无CAN动作。 | [legal](features/01_ui_auth.md#legal) |
| 网页登录与错误限流 | 管理/状态 | C密码校验、会话Cookie和错误限流；决定HTTP访问，非CAN解析。 | [login](features/01_ui_auth.md#login) |
| 退出与会话失效 | 管理/状态 | C失效会话；不构造车辆报文。 | [logout](features/01_ui_auth.md#logout) |
| 开发者模式解锁、闲置锁定与令牌撤销 | 管理/状态 | 开发者令牌与闲置锁定控制实验等管理接口许可。 | [developer](features/01_ui_auth.md#developer) |
| 云管理状态与页面操作锁定 | 管理/状态 | 云管理状态限制页面操作；实际C许可还需各handler检查。 | [management_lock](features/01_ui_auth.md#management_lock) |

<a id="02_config_can"></a>
## 共用配置、自动保存与 CAN 基础

逐项逻辑：[本包模块详细分析](features/02_config_can.md)。
CAN机制阅读：[任务与发送生命周期](can-runtime.md)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 加载配置、默认值和归一化回读 | 管理/状态 | GET读取配置与默认回读；原车CAN状态另有状态接口。 | [config_read](features/02_config_can.md#config_read) |
| 防抖保存、脏字段、并发排队和结果回读 | 管理/状态 | JS防抖/revision/草稿代数；C应用与落盘反馈分开，不能按HTTP成功推导CAN生效。 | [autosave](features/02_config_can.md#autosave) |
| C 配置解析、冲突检查、命令提交和持久化 | 运行配置/协调 | HTTP构造候选并检查依赖/revision，运行域应用后持久化；非直接赋值就发帧。 | [config_transaction](features/02_config_can.md#config_transaction) |
| 通信总开关与三路 TX 开关 | 运行配置/协调 | 总通信/三路TX许可；关闭需结算在途动作再改变驱动。 | [can_gates](features/02_config_can.md#can_gates) |
| A／B／自动线序探测、保存和恢复 | 运行配置/协调 | A/B/Auto监听探测、保存、停止与恢复；GPIO与车辆针脚分开。 | [pin_layout](features/02_config_can.md#pin_layout) |
| 实时处理、模板修改、提交与终态确认 | 运行配置/协调 | can_rt接收/状态机/提交/终态，fsd_p0处理CH3FD MUX0高优先路径。 | [runtime_dispatch](features/02_config_can.md#runtime_dispatch) |
| 浏览器轮询调度、超时、暂停和性能记录 | 管理/状态 | 协调状态读取与OTA暂停；读取C快照，无独立车辆输出。 | [read_coordinator](features/02_config_can.md#read_coordinator) |

<a id="03_drivers"></a>
## 驾驶员与个性化设置

逐项逻辑：[本包模块详细分析](features/03_drivers.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#drivers)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 列表、当前驾驶员、参数来源与状态 | 管理/状态 | 显示来自座椅识别的activeDriverId、配置来源及feature状态。 | [driver_list](features/03_drivers.md#driver_list) |
| 添加驾驶员并绑定当前位置 | CAN接收/观察 | P挡与新鲜四轴位置绑定驾驶员；存储当前位置，不强制移动座椅。 | [driver_add](features/03_drivers.md#driver_add) |
| 重新绑定驾驶位 | CAN接收/观察 | 检查P挡、位置新鲜/冲突后覆盖绑定；不发送记忆调用。 | [driver_rebind](features/03_drivers.md#driver_rebind) |
| 重命名驾驶员 | 管理/状态 | 改名只写存储/回读；没有单独CAN命令。 | [driver_rename](features/03_drivers.md#driver_rename) |
| 删除与关联设置清理 | 管理/状态 | 删除配置与关联氛围/速度数据；间接影响当前运行参数。 | [driver_delete](features/03_drivers.md#driver_delete) |
| 自动识别／手动选择及切换 | CAN接收/观察 | 自动匹配座椅反馈或手动选ID；切换速度/氛围/功能许可。 | [driver_selection](features/03_drivers.md#driver_selection) |
| 每位驾驶员功能独立开关与并发检查 | 管理/状态 | 驾驶员feature许可及revision保存；运行功能采用当前驾驶员配置。 | [driver_features](features/03_drivers.md#driver_features) |

<a id="04_fsd_activation"></a>
## FSD、自动激活与预警激活

逐项逻辑：[本包模块详细分析](features/04_fsd_activation.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#3fd)。
CAN状态机阅读：[对应逻辑](control-logic.md#fsd)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| V12／V13／V14 协议选择与特性适配 | 运行配置/协调 | 12/13/14选择解码与动作策略；运行忙可能拒绝版本切换。 | [fsd_protocol](features/04_fsd_activation.md#fsd_protocol) |
| FSD 总开关与依赖门控 | 运行配置/协调 | FSD许可链及从项依赖；关闭时收敛FSD owner输出。 | [fsd_master](features/04_fsd_activation.md#fsd_master) |
| 稳盘模式、物理短按启动与取消 | CAN状态机/输出 | 物理短按启动/取消稳盘意图，经协议阶段发送与反馈推进。 | [fsd_steady](features/04_fsd_activation.md#fsd_steady) |
| P 挡一键出发与隐藏固定开启项 | CAN状态机/输出 | P挡出发意图与模板动作；本版开关隐藏强制true，完整序列待确认。 | [fsd_p_start](features/04_fsd_activation.md#fsd_p_start) |
| 隐藏增强 AP／智能召唤兼容设置 | 运行配置/协调 | 隐藏兼容配置存在；全部智能召唤输入/输出流程未恢复。 | [enhanced_ap](features/04_fsd_activation.md#enhanced_ap) |
| 退出 FSD 后自动请求泊车（v13 参数） | CAN状态机/输出 | CH399低四位3～6→1/2后延时，CH257两帧静止时随CH293请求；移动暂停、计时继续。 | [space_parking](features/04_fsd_activation.md#space_parking) |
| 自动激活总开关与 revision 事务 | 运行配置/协调 | FSD revision事务更新自动激活许可；不直接生成激活帧。 | [auto_start_master](features/04_fsd_activation.md#auto_start_master) |
| AP 可用确认帧数 | 运行配置/协调 | AP可用来源按1～10帧确认，失效观察打断确认。 | [availability_frames](features/04_fsd_activation.md#availability_frames) |
| 右側长按持续激活 | CAN状态机/输出 | 右侧长按输入产生激活意图，可用确认及协议门控后发送。 | [auto_long_press](features/04_fsd_activation.md#auto_long_press) |
| P→D 自动激活 | CAN状态机/输出 | P→D观察产生自动激活意图；首次边界和复位细节未全恢复。 | [auto_pd](features/04_fsd_activation.md#auto_pd) |
| R→D 后15秒速度窗口 | CAN状态机/输出 | R→D后15秒速度窗口中的激活意图；检查来源与开关依赖。 | [auto_rd](features/04_fsd_activation.md#auto_rd) |
| R 挡右侧物理动作一键激活 | CAN状态机/输出 | R挡右侧物理动作请求激活；具体协议帧序列待确认。 | [auto_ground](features/04_fsd_activation.md#auto_ground) |
| 驾驶位有人与安全带信号模拟 | CAN状态机/输出 | 独立开关随PARTY30A覆盖d0低5bit为09；VEH3A1只读确认，换挡仍读原始带状态。 | [occupancy_spoof](features/04_fsd_activation.md#occupancy_spoof) |
| 车道／碰撞预警激活与级别掩码 | CAN状态机/输出 | 车道/碰撞级别掩码筛选预警边沿，进入既有激活状态机。 | [warning_activation](features/04_fsd_activation.md#warning_activation) |
| 侧撞与疲倦预警激活 | CAN状态机/输出 | 侧撞/疲倦信号产生符合配置的激活意图，再走共同协议门控。 | [side_fatigue_activation](features/04_fsd_activation.md#side_fatigue_activation) |
| “安全驾驶”组合开关 | 前端 | JS组合多个预警配置开关；分别落到既有激活状态机，没有同名C总开关。 | [safety_aggregate](features/04_fsd_activation.md#safety_aggregate) |

<a id="05_speed"></a>
## 速度补偿与驾驶员目标模板

逐项逻辑：[本包模块详细分析](features/05_speed.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#speed)。
CAN状态机阅读：[对应逻辑](control-logic.md#speed)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 自动速度偏移与稳定模式 | CAN状态机/输出 | 自动偏移/稳定许可后基于原车来源计算目标并修改模板。 | [speed_enable](features/05_speed.md#speed_enable) |
| HW3舒适／标准／迅捷及分段目标 | CAN状态机/输出 | 手动或原车车距策略选择八段目标；3FD MUX0 d6[2:1]编码0舒适/1标准/2迅捷，目标计算全边界仍有缺口。 | [hw3_strategy](features/05_speed.md#hw3_strategy) |
| V14五种驾驶模式 | CAN状态机/输出 | 手动0～4或原车V14模式选择速度策略，与HW3三种车距策略分开。 | [v14_profile](features/05_speed.md#v14_profile) |
| 低速偏移与 raw 百分比换算 | CAN状态机/输出 | 低速限速与配置生成目标；V13百分比和maxPctRaw单位不同。 | [speed_low](features/05_speed.md#speed_low) |
| 高速偏移、原车智能设速与目标来源 | CAN状态机/输出 | 原车智能设速known/enabled、目标可用性选择高速目标；完整优先级待确认。 | [speed_high](features/05_speed.md#speed_high) |
| 降速阶梯与确认值恢复 | CAN状态机/输出 | 以confirmed值逐步降速，匹配确认后更新；失败进入恢复。 | [speed_slew](features/05_speed.md#speed_slew) |
| 车机同步／自定义30格模板 | CAN状态机/输出 | 驾驶员30格/车机同步目标输入运行速度策略；表索引不是CAN帧ID。 | [speed_templates](features/05_speed.md#speed_templates) |
| 百分比批量设置模板 | 前端 | JS按百分比批量填目标表；随后保存表，非立即发送30条报文。 | [speed_quick](features/05_speed.md#speed_quick) |
| 驾驶员变化、版本冲突与保存重试 | 管理/状态 | driverId/revision与草稿校验；旧版本拒绝，避免目标表覆盖错误驾驶员。 | [speed_conflict](features/05_speed.md#speed_conflict) |

<a id="06_dnd_torque"></a>
## 免打扰、摄像头、滚轮与扭矩状态机

逐项逻辑：[本包模块详细分析](features/06_dnd_torque.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#3fd)。
CAN状态机阅读：[对应逻辑](control-logic.md#dnd)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 免打扰主开关及必要子项 | 运行配置/协调 | 主开关归一化摄像头/ISA从项；各子状态机仍检查来源与许可。 | [dnd_master](features/06_dnd_torque.md#dnd_master) |
| 摄像头状态屏蔽与V14回退延时 | CAN状态机/输出 | CH/VEH3FD MUX1 d5bit3清0；V14延时3..10秒；电气断电未证明。 | [dnd_camera](features/06_dnd_torque.md#dnd_camera) |
| ISA提示音条件抑制 | CAN状态机/输出 | ISA独立配置链存在；真正TX ID、MUX、覆盖位尚未确认，不能借用增强AP字段。 | [dnd_isa](features/06_dnd_torque.md#dnd_isa) |
| 左音量／右速度滚轮免打扰 | CAN状态机/输出 | 左音量或右速度动作按提醒条件提出；与换挡滚轮owner协调。 | [dnd_scroll](features/06_dnd_torque.md#dnd_scroll) |
| 滚轮后台随机周期 | CAN状态机/输出 | 秒×1000保存随机周期，运行条件允许且到期才请求滚轮动作。 | [dnd_periodic](features/06_dnd_torque.md#dnd_periodic) |
| 扭矩区间、单位、帧数与时间校验 | 运行配置/协调 | 幅值centi-Nm、时间与帧数C校验；有效值用于后续0x370状态机。 | [torque_config](features/06_dnd_torque.md#torque_config) |
| 0x39B HOS 与0x370扭矩来源校验 | CAN接收/观察 | PARTY39B/370、DLC8；370求和+0x73、raw、回波、5ms年龄与pending校验。 | [torque_source](features/06_dnd_torque.md#torque_source) |
| 停发条件、DAS新鲜度与方向确认 | CAN接收/观察 | DAS seen/valid/超时、±50°角度与三次方向观察；决定是否允许修改370。 | [torque_gate](features/06_dnd_torque.md#torque_gate) |
| 持续预防与活动／休息周期 | CAN状态机/输出 | 确认方向后按预防幅值/活动/休息区间决定370输出，随机时间与幅值。 | [torque_maintenance](features/06_dnd_torque.md#torque_maintenance) |
| H2等待、纠正前停发、纠正与恢复观察 | CAN状态机/输出 | HOS观察触发等待/停发/纠正/验证/恢复相位；发帧不直接证明HOS恢复。 | [torque_corrective](features/06_dnd_torque.md#torque_corrective) |
| 发送确认、计数器冲突和终态统计 | CAN状态机/输出 | 专用提交token、pending、terminal、超时、lateReceipt及counter冲突观测。 | [torque_terminal](features/06_dnd_torque.md#torque_terminal) |

<a id="07_gear"></a>
## 自动换挡、方向盘、滚轮与障碍物

逐项逻辑：[本包模块详细分析](features/07_gear.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#gear)。
CAN状态机阅读：[对应逻辑](control-logic.md#gear)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 总开关、车速、刹车、安全带、次数与冷却 | 运行配置/协调 | 速度/刹车/安全带/新鲜模板/次数/冷却共同许可；每种换挡触发共用。 | [gear_gates](features/07_gear.md#gear_gates) |
| 刹车＋转向D/R切换与P挡方向确认 | CAN状态机/输出 | 刹车+转角或P挡方向生成D/R候选，degree×10；仍走共同门控。 | [gear_steering](features/07_gear.md#gear_steering) |
| 智能流畅参数快捷设置 | 前端 | JS批量设置冷却与转角阈值；经普通配置链影响后续换挡门控。 | [gear_preset](features/07_gear.md#gear_preset) |
| PARTY直连障碍建议与方向校验 | CAN接收/观察 | PARTY255/12B专用缓存DLC4；P挡两类新来源，离P/过期清理。 | [obstacle_direct](features/07_gear.md#obstacle_direct) |
| V12前后超声波／雷达融合 | CAN接收/观察 | 健康雷达/前后USS raw/有效数量/方向融合成建议，仍走共同换挡门控。 | [obstacle_v12](features/07_gear.md#obstacle_v12) |
| 雷达近／中／远／自定义及版本保存 | 运行配置/协调 | USS/雷达raw阈值、探头数和revision；raw单位不能猜成厘米。 | [uss_settings](features/07_gear.md#uss_settings) |
| 左右滚轮正负动作映射 | CAN状态机/输出 | VEH3C2 MUX1 d2左/d3右signed6输入；正负动作映射为意图，最终678/229请求。 | [gear_scroll](features/07_gear.md#gear_scroll) |
| 滚轮低速单次刹车授权 | CAN状态机/输出 | 低速单次刹车授权参与滚轮请求；全部消费/复位边界待确认。 | [gear_brake_credit](features/07_gear.md#gear_brake_credit) |
| 请求提交、挡位反馈、失败与超时 | CAN状态机/输出 | 提交与token终态、实际挡位反馈、动作超时分开；匹配实际挡位才确认效果。 | [gear_feedback](features/07_gear.md#gear_feedback) |

<a id="08_seats"></a>
## 座椅手动调节、位置记忆与停止

逐项逻辑：[本包模块详细分析](features/08_seats.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#seats)。
CAN状态机阅读：[对应逻辑](control-logic.md#seats)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 座椅功能许可与通道 | 运行配置/协调 | 座椅许可与通道/发送就绪；无新鲜模板时不能仅凭开关输出。 | [seat_enable](features/08_seats.md#seat_enable) |
| 24方向按住调节、250ms续租与松开停止 | CAN状态机/输出 | CH/VEH4F3 d0..2写24方向mask；网页250ms续租，C750ms租约/50ms调度；mask0停止。 | [seat_manual](features/08_seats.md#seat_manual) |
| 十个位置槽保存与Flash确认 | CAN接收/观察 | 新鲜位置和4F3模板就绪后保存十槽之一；序列与Flash确认。 | [seat_save](features/08_seats.md#seat_save) |
| 调用记忆、动作终态与物理输入让行 | CAN状态机/输出 | 4E2/4E3四轴12bit反馈与槽目标比较，±5内到位；用4F3方向mask闭环移动/停止。 | [seat_recall](features/08_seats.md#seat_recall) |
| 停止全部手动和记忆动作 | CAN状态机/输出 | 取消手动和记忆、发送停止并结算；quiesce_busy不是已停止。 | [seat_cancel](features/08_seats.md#seat_cancel) |
| 十个槽位名称本地保存 | 前端 | 十槽名称保存在localStorage；与Flash中的位置值分开，不发送座椅动作。 | [seat_names](features/08_seats.md#seat_names) |

<a id="09_ambient"></a>
## 六区氛围灯、FSD提示、盲区、转向与迎宾

逐项逻辑：[本包模块详细分析](features/09_ambient.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#ambient)。
CAN状态机阅读：[对应逻辑](control-logic.md#ambient)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 六区常亮、区域使能、RGB与亮度 | CAN状态机/输出 | 六区enable/RGB/亮度构造基础目标，经来源模板与终态管理输出。 | [ambient_zones](features/09_ambient.md#ambient_zones) |
| 应用当前颜色亮度到全部区域 | 前端 | JS复制当前RGB/亮度到六区草稿，再保存区域配置；输出走区域合成。 | [ambient_all](features/09_ambient.md#ambient_all) |
| FSD激活氛围提示 | CAN状态机/输出 | FSD观察覆盖指定区域提示色/亮度，结束后恢复底层目标。 | [ambient_fsd](features/09_ambient.md#ambient_fsd) |
| 盲区区域、亮度与警报后恢复 | CAN状态机/输出 | 盲区侧别/警告状态覆盖所选区域，解除后按owner状态恢复。 | [ambient_blind](features/09_ambient.md#ambient_blind) |
| 左右转向／双闪跟随 | CAN状态机/输出 | 左右转向或允许的双闪覆盖前/后/dash区域，释放后恢复。 | [ambient_turn](features/09_ambient.md#ambient_turn) |
| 五种迎宾样式 | CAN状态机/输出 | 样式0～4驱动阶段目标；五效果完整曲线/区域路径待恢复。 | [welcome_styles](features/09_ambient.md#welcome_styles) |
| 开门与座椅无人触发、过滤和重触发 | CAN接收/观察 | 开门边沿、占用seen/valid/age；未知座椅数据不能当无人。 | [welcome_trigger](features/09_ambient.md#welcome_trigger) |
| 迎宾亮度、节奏、颜色和六区掩码 | CAN状态机/输出 | 亮度10～100、tempo0～2、mask1～63、RGB约束迎宾状态机输出。 | [welcome_params](features/09_ambient.md#welcome_params) |
| 按驾驶员保存、冲突、待写与终态恢复 | 管理/状态 | driverId/revision及persisted状态管理；zone运行确认独立于落盘。 | [ambient_transaction](features/09_ambient.md#ambient_transaction) |

<a id="10_lighting"></a>
## 远光、爆闪与后雾灯

逐项逻辑：[本包模块详细分析](features/10_lighting.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#high-beam)。
CAN状态机阅读：[对应逻辑](control-logic.md#lighting)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| FSD强制远光与合帧 | CAN状态机/输出 | VEH3C2 MUX1 d5高2bit写2请求/0释放；V12 VEH249另有counter/校验；合帧许可。 | [high_force](features/10_lighting.md#high_force) |
| 第二次长按0.5秒远光爆闪 | CAN状态机/输出 | 第二次长按0.5秒触发爆闪阶段；完整波形待确认。 | [high_strobe](features/10_lighting.md#high_strobe) |
| 减速后雾灯与轻重阈值 | CAN状态机/输出 | 新鲜减速信号和轻/重阈值触发雾灯模式；估计/滤波/波形仍有缺口。 | [fog_deceleration](features/10_lighting.md#fog_deceleration) |
| 倒车双闪＋8次雾灯警示 | CAN状态机/输出 | 倒车状态触发双闪+8次雾灯提示；准确时序/组合仲裁待确认。 | [fog_reverse](features/10_lighting.md#fog_reverse) |
| 倒车后雾灯常亮 | CAN状态机/输出 | 倒车许可期间VEH273 d2bit7置1常亮请求；退出清0/恢复，反馈VEH3E3 d1bit0。 | [fog_reverse_steady](features/10_lighting.md#fog_reverse_steady) |
| 领航许可与本次运行启动／停止 | CAN状态机/输出 | 保存许可与本次start/stop分开；运行owner/反馈确认。 | [fog_pilot](features/10_lighting.md#fog_pilot) |

<a id="11_preheat_service"></a>
## 电池预热和维修模式

逐项逻辑：[本包模块详细分析](features/11_preheat_service.md)。
具体协议：[线路、ID、字段与数值](control-protocol.md#preheat)。
CAN状态机阅读：[对应逻辑](control-logic.md#preheat)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 预热请求与15／30／45／60分钟许可 | CAN状态机/输出 | 15/30/45/60分钟运行意图，热/SOC/电气来源门控；requestActive与heatingActive分开。 | [preheat_start](features/11_preheat_service.md#preheat_start) |
| 运行倒计时、超时关闭与停止确认 | CAN状态机/输出 | 预热计时到期输出VEH82关闭常量，pending/terminal与关闭恢复分开。 | [preheat_timer](features/11_preheat_service.md#preheat_timer) |
| 关闭失败恢复与显式重试 | CAN状态机/输出 | recovery_required时显式重试关闭；HTTP结果未知先回读不重放开启。 | [preheat_retry](features/11_preheat_service.md#preheat_retry) |
| CANB维修模式开关 | CAN状态机/输出 | VEH339/DLC8 d5bit7开0x80/关0；owner6提交结算；完整厂家维修服务仍未恢复。 | [service_mode](features/11_preheat_service.md#service_mode) |

<a id="12_recorder"></a>
## CAN抓包、过滤与文件下载

逐项逻辑：[本包模块详细分析](features/12_recorder.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#recorder)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 包含／排除ID、三路总线和RX／TX | 运行配置/协调 | 标准ID包含/排除、mask1/2/4、RX/TX；是观察过滤，非信号解码。 | [rec_filters](features/12_recorder.md#rec_filters) |
| 异步切换过滤器、内存缓冲与开始抓包 | 运行配置/协调 | 分配缓冲、请求三路过滤generation，实际应用后开始记录。 | [rec_start](features/12_recorder.md#rec_start) |
| 帧与TX生命周期采集、容量和丢弃状态 | CAN接收/观察 | 按过滤写RX帧与TX生命周期事件；buffer/drop/sink统计，不等同成功帧数。 | [rec_collect](features/12_recorder.md#rec_collect) |
| 停止、清空与运行互斥 | 运行配置/协调 | 停止保留记录，录制/下载时禁止清空；协调观察管线。 | [rec_stop_clear](features/12_recorder.md#rec_stop_clear) |
| CSV／BIN下载与文件头 | CAN接收/观察 | 锁定已停止的记录快照并导出CSV/版本化BIN，非纯payload拼接。 | [rec_download](features/12_recorder.md#rec_download) |

<a id="13_can_experiment"></a>
## CAN实验规则、发送、校验与预设

逐项逻辑：[本包模块详细分析](features/13_can_experiment.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#experiment)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 最多4规则、每规则3路与标准ID | 运行配置/协调 | 1～4规则，每规则最多3lane；编辑使confirmedGeneration失效。 | [experiment_rules](features/13_can_experiment.md#experiment_rules) |
| 来源监听、停止监听与来源确认 | CAN接收/观察 | 每lane观测本线路真实帧，保存DLC/模板/周期，单独确认来源。 | [experiment_listen](features/13_can_experiment.md#experiment_listen) |
| 按位匹配与修改掩码 | CAN状态机/输出 | 逐字节matchMask筛来源、editMask改模板，禁止修改MUX保留位。 | [experiment_bits](features/13_can_experiment.md#experiment_bits) |
| 确认修改、错误／警告和generation | 运行配置/协调 | 校验mask/DLC/MUX/counter/checksum/owner冲突，发布确认代数。 | [experiment_validate](features/13_can_experiment.md#experiment_validate) |
| 必须匹配已确认版本才能开始 | 运行配置/协调 | 规则和confirmedGeneration匹配才运行；lane分别等待总线/模板/owner。 | [experiment_start](features/13_can_experiment.md#experiment_start) |
| 单次／跟随／周期、延迟与模板超时 | CAN状态机/输出 | 单次/新来源跟随/周期触发；模板年龄、strict、delay绑定generation防旧输出。 | [experiment_modes](features/13_can_experiment.md#experiment_modes) |
| 原值偏移／独立自增计数器 | CAN状态机/输出 | 原值偏移或独立计数器覆盖已配置位域；独立推进全部边界待确认。 | [experiment_counter](features/13_can_experiment.md#experiment_counter) |
| SUM／XOR／CRC8及反射参数 | CAN状态机/输出 | 编辑/counter后按SUM/XOR/CRC8配置重算；输入/ID顺序/finalize细节待确认。 | [experiment_checksums](features/13_can_experiment.md#experiment_checksums) |
| 内置发送接管、优先级继承和停止结算 | 运行配置/协调 | 只让本固件内置owner按bus/ID/MUX让行；原车节点仍可发送，停止等结算。 | [experiment_takeover](features/13_can_experiment.md#experiment_takeover) |
| 逐lane来源／输出与延迟、终态计数 | CAN接收/观察 | 逐lane generated/accepted/terminal/age/latency分别计数。 | [experiment_metrics](features/13_can_experiment.md#experiment_metrics) |
| 8预设载入／保存／改名／删除与异步持久化 | 管理/状态 | 8槽存规则/名字并跟踪持久化代数；载入后仍需来源确认和验证。 | [experiment_presets](features/13_can_experiment.md#experiment_presets) |

<a id="14_wifi"></a>
## AP热点、外部Wi-Fi和网络状态

逐项逻辑：[本包模块详细分析](features/14_wifi.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#management)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| AP/STA状态与异步扫描结果 | 管理/状态 | 读取AP/STA与扫描状态；无车辆CAN命令。 | [wifi_status](features/14_wifi.md#wifi_status) |
| 扫描附近网络与列表选择 | 管理/状态 | 扫描附近Wi-Fi；非CAN抓包。 | [wifi_scan](features/14_wifi.md#wifi_scan) |
| 启用STA、保存SSID密码与连接 | 管理/状态 | C保存SSID/密码并连接网络；无独立车控报文。 | [wifi_connect](features/14_wifi.md#wifi_connect) |
| 断开与忘记网络 | 管理/状态 | 断开/删除网络配置；非CAN驱动停止。 | [wifi_disconnect_forget](features/14_wifi.md#wifi_disconnect_forget) |
| 热点密码保存及异步重启 | 管理/状态 | 修改AP密码并异步重启热点、失效旧会话；不等同CAN重启。 | [wifi_ap_password](features/14_wifi.md#wifi_ap_password) |
| 联网5分钟后关闭AP及客户端保留 | 管理/状态 | 网络连接5分钟后按客户端条件关AP；非车辆灯光/电源控制。 | [wifi_ap_autooff](features/14_wifi.md#wifi_ap_autooff) |
| 手机联网探测入口与热点首页 | 管理/状态 | 手机联网探测HTTP重定向；无CAN处理。 | [captive_portal](features/14_wifi.md#captive_portal) |

<a id="15_ota"></a>
## 本地／在线OTA、启动验证与重启

逐项逻辑：[本包模块详细分析](features/15_ota.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#management)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 固件身份、槽位、容量、状态和会话令牌 | 管理/状态 | 提供固件槽位/身份/容量与升级session token；管理信息。 | [ota_identity](features/15_ota.md#ota_identity) |
| 本地BIN的浏览器预检查 | 前端 | 浏览器校验BIN头与文件；不解析车辆信号。 | [ota_file](features/15_ota.md#ota_file) |
| 令牌授权、CAN停止、持久化flush与ready | 运行配置/协调 | session授权、CAN quiesce与持久化flush，ready是多步骤结果。 | [ota_prepare](features/15_ota.md#ota_prepare) |
| 分块写入、结束验证、提交启动槽与重启 | 运行配置/协调 | 严格session/length/head/write/commit；此时CAN已按prepare静默。 | [ota_upload](features/15_ota.md#ota_upload) |
| 取消、失败恢复和结果不确定回读 | 运行配置/协调 | abort升级并尝试恢复CAN；恢复失败单独报告，未知结果先回读。 | [ota_cancel](features/15_ota.md#ota_cancel) |
| 在线检查、升级提示与管理目标一致性 | 管理/状态 | 检查云release/目标并启动升级工作；升级停止CAN另走prepare协调。 | [ota_online](features/15_ota.md#ota_online) |
| 启动后120秒健康验证与回滚 | 管理/状态 | 启动健康窗口120秒与回滚；可参考运行健康，不是CAN动作期限。 | [ota_boot_health](features/15_ota.md#ota_boot_health) |
| 重启请求、安全停止和实际重启确认 | 运行配置/协调 | 运行停止、持久化与实际重启确认；非一个CAN报文完成。 | [reboot](features/15_ota.md#reboot) |

<a id="16_records"></a>
## FSD行程、里程统计与手机时钟

逐项逻辑：[本包模块详细分析](features/16_records.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#records)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 当前／历史行程、详情、小计与累计 | 管理/状态 | 读取由CAN观察累计的行程/里程；显示与查询无新车控。 | [records_view](features/16_records.md#records_view) |
| 行驶与FSD里程分类累计 | CAN接收/观察 | 消费有效驾驶/FSD观察分类累计里程；完整积分/剔除算法待确认。 | [records_accumulate](features/16_records.md#records_accumulate) |
| 手机Unix时钟与设备uptime锚点 | 管理/状态 | 保存手机Unix/uptime锚点，给CAN衍生记录标时。 | [records_clock](features/16_records.md#records_clock) |
| 重置小计 | 管理/状态 | 重置统计小计；不清除车辆节点计数或挡位。 | [records_subtotal](features/16_records.md#records_subtotal) |
| 清空累计与行程历史 | 管理/状态 | 清空本固件历史/累计并更新epoch；不发送清车辆数据命令。 | [records_clear](features/16_records.md#records_clear) |

<a id="17_cloud_onboarding"></a>
## 云同步、备份恢复、冲突与首次引导

逐项逻辑：[本包模块详细分析](features/17_cloud_onboarding.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#management)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 设备ID、云网页地址与复制 | 前端 | 显示或复制设备ID与云地址；无车辆报文输出。 | [cloud_identity](features/17_cloud_onboarding.md#cloud_identity) |
| 服务URL、产品根Token、清除凭据和15～300秒周期 | 管理/状态 | 服务URL/根Token/15～300秒周期；不定义车辆信号。 | [cloud_config](features/17_cloud_onboarding.md#cloud_config) |
| 测试v2连接 | 管理/状态 | 测试v2云连接；无CAN试发。 | [cloud_test](features/17_cloud_onboarding.md#cloud_test) |
| 自动同步开关、立即同步及后台ack | 管理/状态 | outbox/ack同步本地设置和记录；不等同车辆报文ack。 | [cloud_sync](features/17_cloud_onboarding.md#cloud_sync) |
| 设置驾驶员／FSD记录恢复、范围和request_id | 管理/状态 | 恢复设置/驾驶员/记录；配置域应用间接改变CAN状态机。 | [cloud_restore](features/17_cloud_onboarding.md#cloud_restore) |
| 查看冲突、保留设备／应用云端 | 管理/状态 | 选择设备或云配置并提交恢复；间接改变运行配置。 | [cloud_conflicts](features/17_cloud_onboarding.md#cloud_conflicts) |
| 设置revision/epoch、记录epoch与本地草稿保护 | 管理/状态 | settings revision/epoch与records epoch管理，不是CAN counter。 | [cloud_generations](features/17_cloud_onboarding.md#cloud_generations) |
| 旧agent能力查询与废弃写入口 | 管理/状态 | GET旧agent能力；POST写入固定405，不能推断仍可远端控制。 | [cloud_legacy](features/17_cloud_onboarding.md#cloud_legacy) |
| 首次联网／新用户／稍后／恢复完成引导 | 前端 | 联网/新用户/稍后/恢复提示；后续调用管理接口，无独立CAN协议。 | [onboarding](features/17_cloud_onboarding.md#onboarding) |

<a id="18_diagnostics"></a>
## 健康、CAN、系统指标、JSON与崩溃转储

逐项逻辑：[本包模块详细分析](features/18_diagnostics.md)。
CAN状态机阅读：[对应逻辑](control-logic.md#records)。

| 功能 | 类型 | CAN 输入／判断／输出位置 | 逐项证据与伪代码 |
|---|---|---|---|
| 健康与心跳、CAN新鲜度和告警 | 管理/状态 | 读取心跳、CAN新鲜度/告警等健康证据；无新车控输出。 | [health](features/18_diagnostics.md#health) |
| 三路接收发送、控制器故障和热ID | 管理/状态 | 读取三路RX/TX、控制器故障及热ID；事件计数与成功帧数分开。 | [can_diag](features/18_diagnostics.md#can_diag) |
| 各功能相位、延迟、来源与终态诊断 | 管理/状态 | 读取功能相位、来源年龄、提交/终态/反馈；用来验证状态机。 | [runtime_diag](features/18_diagnostics.md#runtime_diag) |
| 固件身份、CPU、温度、内存、任务与持久化 | 管理/状态 | CPU/温度/内存/任务/固件/持久化快照；非CAN信号编码。 | [system_diag](features/18_diagnostics.md#system_diag) |
| HTTP构建发送耗时和浏览器请求证据 | 管理/状态 | HTTP构造/发送及浏览器耗时；不能当CAN发送延迟。 | [web_metrics](features/18_diagnostics.md#web_metrics) |
| 完整诊断JSON导出 | 管理/状态 | 导出已有诊断JSON；不执行新的车辆请求。 | [diag_export](features/18_diagnostics.md#diag_export) |
| 崩溃转储信息、寄存器、堆栈与身份 | 管理/状态 | 读取Flash崩溃转储摘要/寄存器/堆栈；本镜像无实际转储。 | [coredump_info](features/18_diagnostics.md#coredump_info) |
| 令牌下载、大小与SHA256核对 | 管理/状态 | 令牌授权后下载已有转储并校验大小/SHA256；不恢复车辆通信轨迹。 | [coredump_download](features/18_diagnostics.md#coredump_download) |
