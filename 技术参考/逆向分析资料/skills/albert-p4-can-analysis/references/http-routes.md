# HTTP 路由与 C 处理入口

[返回 Skill](../SKILL.md) · [功能目录](feature-can-map.md) · [参数与单位](parameters.md)

下表保留此固件恢复出的87条HTTP注册，地址为原固件虚拟地址。接口处理逻辑、权限、参数和结果语义见对应功能。它是阅读索引，不会访问设备或远端服务。

注册入口为 `0x480868B2`。`ANY` 是该注册接受的方法集合表示；主处理入口与上传分块回调分开。原始调用表、反编译文件不随包附带，关键行为在功能文档中用文字和伪代码说明。

| 方法 | 路径 | C handler 地址 | 上传分块回调 | 对应功能 |
|---|---|---|---|---|
| GET | `/` | `0x4808B134` | — | [网页登录与错误限流](features/01_ui_auth.md#login) |
| GET | `/management/status` | `0x480B2722` | — | [云管理状态与页面操作锁定](features/01_ui_auth.md#management_lock)、[设置revision/epoch、记录epoch与本地草稿保护](features/17_cloud_onboarding.md#cloud_generations) |
| POST | `/auth/login` | `0x4808A8C2` | — | [网页登录与错误限流](features/01_ui_auth.md#login) |
| POST | `/auth/logout` | `0x4808ADC8` | — | [退出与会话失效](features/01_ui_auth.md#logout) |
| GET | `/auth/status` | `0x480677F4` | — | [网页登录与错误限流](features/01_ui_auth.md#login)、[退出与会话失效](features/01_ui_auth.md#logout) |
| ANY | `/generate_204` | `0x48067692` | — | [手机联网探测入口与热点首页](features/14_wifi.md#captive_portal) |
| ANY | `/gen_204` | `0x48067692` | — | [手机联网探测入口与热点首页](features/14_wifi.md#captive_portal) |
| ANY | `/hotspot-detect.html` | `0x48067692` | — | [手机联网探测入口与热点首页](features/14_wifi.md#captive_portal) |
| GET | `/health` | `0x480C2BDA` | — | [浏览器轮询调度、超时、暂停和性能记录](features/02_config_can.md#read_coordinator)、[启动后120秒健康验证与回滚](features/15_ota.md#ota_boot_health)、[重启请求、安全停止和实际重启确认](features/15_ota.md#reboot)、[健康与心跳、CAN新鲜度和告警](features/18_diagnostics.md#health)、[完整诊断JSON导出](features/18_diagnostics.md#diag_export) |
| GET | `/web_metrics` | `0x4806F630` | — | [浏览器轮询调度、超时、暂停和性能记录](features/02_config_can.md#read_coordinator)、[HTTP构建发送耗时和浏览器请求证据](features/18_diagnostics.md#web_metrics)、[完整诊断JSON导出](features/18_diagnostics.md#diag_export) |
| GET | `/status_fast` | `0x4806EB88` | — | [浏览器轮询调度、超时、暂停和性能记录](features/02_config_can.md#read_coordinator) |
| GET | `/torque_nag/status` | `0x4806E388` | — | [扭矩区间、单位、帧数与时间校验](features/06_dnd_torque.md#torque_config)、[0x39B HOS 与0x370扭矩来源校验](features/06_dnd_torque.md#torque_source)、[停发条件、DAS新鲜度与方向确认](features/06_dnd_torque.md#torque_gate)、[持续预防与活动／休息周期](features/06_dnd_torque.md#torque_maintenance)、[H2等待、纠正前停发、纠正与恢复观察](features/06_dnd_torque.md#torque_corrective)、[发送确认、计数器冲突和终态统计](features/06_dnd_torque.md#torque_terminal)、[各功能相位、延迟、来源与终态诊断](features/18_diagnostics.md#runtime_diag) |
| GET | `/status` | `0x480C0178` | — | [浏览器轮询调度、超时、暂停和性能记录](features/02_config_can.md#read_coordinator)、[请求提交、挡位反馈、失败与超时](features/07_gear.md#gear_feedback)、[座椅功能许可与通道](features/08_seats.md#seat_enable)、[十个位置槽保存与Flash确认](features/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](features/08_seats.md#seat_recall)、[完整诊断JSON导出](features/18_diagnostics.md#diag_export) |
| GET | `/runtime_status` | `0x4806851C` | — | [实时处理、模板修改、提交与终态确认](features/02_config_can.md#runtime_dispatch)、[驾驶位有人与安全带信号模拟](features/04_fsd_activation.md#occupancy_spoof)、[高速偏移、原车智能设速与目标来源](features/05_speed.md#speed_high)、[降速阶梯与确认值恢复](features/05_speed.md#speed_slew)、[摄像头状态屏蔽与V14回退延时](features/06_dnd_torque.md#dnd_camera)、[ISA提示音条件抑制](features/06_dnd_torque.md#dnd_isa)、[总开关、车速、刹车、安全带、次数与冷却](features/07_gear.md#gear_gates)、[PARTY直连障碍建议与方向校验](features/07_gear.md#obstacle_direct)、[请求提交、挡位反馈、失败与超时](features/07_gear.md#gear_feedback)、[开门与座椅无人触发、过滤和重触发](features/09_ambient.md#welcome_trigger)、[按驾驶员保存、冲突、待写与终态恢复](features/09_ambient.md#ambient_transaction)、[FSD强制远光与合帧](features/10_lighting.md#high_force)、[预热请求与15／30／45／60分钟许可](features/11_preheat_service.md#preheat_start)、[运行倒计时、超时关闭与停止确认](features/11_preheat_service.md#preheat_timer)、[各功能相位、延迟、来源与终态诊断](features/18_diagnostics.md#runtime_diag)、[完整诊断JSON导出](features/18_diagnostics.md#diag_export) |
| GET | `/system_status` | `0x4808334C` | — | [日间／夜间主题](features/01_ui_auth.md#theme)、[固件身份、CPU、温度、内存、任务与持久化](features/18_diagnostics.md#system_diag)、[完整诊断JSON导出](features/18_diagnostics.md#diag_export) |
| GET | `/can_diag` | `0x4807FA5C` | — | [实时处理、模板修改、提交与终态确认](features/02_config_can.md#runtime_dispatch)、[三路接收发送、控制器故障和热ID](features/18_diagnostics.md#can_diag)、[完整诊断JSON导出](features/18_diagnostics.md#diag_export) |
| GET | `/can_hot_ids` | `0x480C037A` | — | [三路接收发送、控制器故障和热ID](features/18_diagnostics.md#can_diag) |
| GET | `/coredump/info` | `0x4806CBDE` | — | [崩溃转储信息、寄存器、堆栈与身份](features/18_diagnostics.md#coredump_info)、[令牌下载、大小与SHA256核对](features/18_diagnostics.md#coredump_download) |
| GET | `/coredump.bin` | `0x4806D406` | — | [令牌下载、大小与SHA256核对](features/18_diagnostics.md#coredump_download) |
| GET | `/config` | `0x480BD450` | — | [加载配置、默认值和归一化回读](features/02_config_can.md#config_read)、[防抖保存、脏字段、并发排队和结果回读](features/02_config_can.md#autosave)、[通信总开关与三路 TX 开关](features/02_config_can.md#can_gates)、[V12／V13／V14 协议选择与特性适配](features/04_fsd_activation.md#fsd_protocol)、[FSD 总开关与依赖门控](features/04_fsd_activation.md#fsd_master)、[自动激活总开关与 revision 事务](features/04_fsd_activation.md#auto_start_master)、[关闭失败恢复与显式重试](features/11_preheat_service.md#preheat_retry)、[CANB维修模式开关](features/11_preheat_service.md#service_mode) |
| POST | `/config` | `0x48101F34` | — | [防抖保存、脏字段、并发排队和结果回读](features/02_config_can.md#autosave)、[C 配置解析、冲突检查、命令提交和持久化](features/02_config_can.md#config_transaction)、[通信总开关与三路 TX 开关](features/02_config_can.md#can_gates)、[每位驾驶员功能独立开关与并发检查](features/03_drivers.md#driver_features)、[V12／V13／V14 协议选择与特性适配](features/04_fsd_activation.md#fsd_protocol)、[FSD 总开关与依赖门控](features/04_fsd_activation.md#fsd_master)、[稳盘模式、物理短按启动与取消](features/04_fsd_activation.md#fsd_steady)、[P 挡一键出发与隐藏固定开启项](features/04_fsd_activation.md#fsd_p_start)、[隐藏增强 AP／智能召唤兼容设置](features/04_fsd_activation.md#enhanced_ap)、[V13 退出 FSD 后自动请求泊车](features/04_fsd_activation.md#space_parking)、[AP 可用确认帧数](features/04_fsd_activation.md#availability_frames)、[右側长按持续激活](features/04_fsd_activation.md#auto_long_press)、[P→D 自动激活](features/04_fsd_activation.md#auto_pd)、[R→D 后15秒速度窗口](features/04_fsd_activation.md#auto_rd)、[R 挡右侧物理动作一键激活](features/04_fsd_activation.md#auto_ground)、[驾驶位有人与安全带信号模拟](features/04_fsd_activation.md#occupancy_spoof)、[车道／碰撞预警激活与级别掩码](features/04_fsd_activation.md#warning_activation)、[侧撞与疲倦预警激活](features/04_fsd_activation.md#side_fatigue_activation)、[“安全驾驶”组合开关](features/04_fsd_activation.md#safety_aggregate)、[自动速度偏移与稳定模式](features/05_speed.md#speed_enable)、[HW3舒适／标准／迅捷及分段目标](features/05_speed.md#hw3_strategy)、[V14五种驾驶模式](features/05_speed.md#v14_profile)、[低速偏移与 raw 百分比换算](features/05_speed.md#speed_low)、[高速偏移、原车智能设速与目标来源](features/05_speed.md#speed_high)、[降速阶梯与确认值恢复](features/05_speed.md#speed_slew)、[免打扰主开关及必要子项](features/06_dnd_torque.md#dnd_master)、[摄像头状态屏蔽与V14回退延时](features/06_dnd_torque.md#dnd_camera)、[ISA提示音条件抑制](features/06_dnd_torque.md#dnd_isa)、[左音量／右速度滚轮免打扰](features/06_dnd_torque.md#dnd_scroll)、[滚轮后台随机周期](features/06_dnd_torque.md#dnd_periodic)、[扭矩区间、单位、帧数与时间校验](features/06_dnd_torque.md#torque_config)、[持续预防与活动／休息周期](features/06_dnd_torque.md#torque_maintenance)、[H2等待、纠正前停发、纠正与恢复观察](features/06_dnd_torque.md#torque_corrective)、[总开关、车速、刹车、安全带、次数与冷却](features/07_gear.md#gear_gates)、[刹车＋转向D/R切换与P挡方向确认](features/07_gear.md#gear_steering)、[智能流畅参数快捷设置](features/07_gear.md#gear_preset)、[左右滚轮正负动作映射](features/07_gear.md#gear_scroll)、[滚轮低速单次刹车授权](features/07_gear.md#gear_brake_credit)、[座椅功能许可与通道](features/08_seats.md#seat_enable)、[FSD强制远光与合帧](features/10_lighting.md#high_force)、[第二次长按0.5秒远光爆闪](features/10_lighting.md#high_strobe)、[预热请求与15／30／45／60分钟许可](features/11_preheat_service.md#preheat_start)、[运行倒计时、超时关闭与停止确认](features/11_preheat_service.md#preheat_timer)、[关闭失败恢复与显式重试](features/11_preheat_service.md#preheat_retry)、[CANB维修模式开关](features/11_preheat_service.md#service_mode) |
| GET | `/config/uss_radar` | `0x4806AFE2` | — | [V12前后超声波／雷达融合](features/07_gear.md#obstacle_v12)、[雷达近／中／远／自定义及版本保存](features/07_gear.md#uss_settings) |
| POST | `/config/uss_radar` | `0x480F43A8` | — | [V12前后超声波／雷达融合](features/07_gear.md#obstacle_v12)、[雷达近／中／远／自定义及版本保存](features/07_gear.md#uss_settings) |
| GET | `/ambient_config` | `0x4806ADDA` | — | [六区常亮、区域使能、RGB与亮度](features/09_ambient.md#ambient_zones)、[按驾驶员保存、冲突、待写与终态恢复](features/09_ambient.md#ambient_transaction) |
| POST | `/ambient_config` | `0x480F584C` | — | [“安全驾驶”组合开关](features/04_fsd_activation.md#safety_aggregate)、[六区常亮、区域使能、RGB与亮度](features/09_ambient.md#ambient_zones)、[应用当前颜色亮度到全部区域](features/09_ambient.md#ambient_all)、[FSD激活氛围提示](features/09_ambient.md#ambient_fsd)、[盲区区域、亮度与警报后恢复](features/09_ambient.md#ambient_blind)、[左右转向／双闪跟随](features/09_ambient.md#ambient_turn)、[五种迎宾样式](features/09_ambient.md#welcome_styles)、[开门与座椅无人触发、过滤和重触发](features/09_ambient.md#welcome_trigger)、[迎宾亮度、节奏、颜色和六区掩码](features/09_ambient.md#welcome_params)、[按驾驶员保存、冲突、待写与终态恢复](features/09_ambient.md#ambient_transaction) |
| GET | `/speed_target/config` | `0x480F99BC` | — | [车机同步／自定义30格模板](features/05_speed.md#speed_templates)、[驾驶员变化、版本冲突与保存重试](features/05_speed.md#speed_conflict) |
| POST | `/speed_target/save` | `0x480F9322` | — | [车机同步／自定义30格模板](features/05_speed.md#speed_templates)、[百分比批量设置模板](features/05_speed.md#speed_quick)、[驾驶员变化、版本冲突与保存重试](features/05_speed.md#speed_conflict) |
| GET | `/can_pin_layout` | `0x480681DE` | — | [A／B／自动线序探测、保存和恢复](features/02_config_can.md#pin_layout) |
| POST | `/can_pin_layout` | `0x480FF1E4` | — | [A／B／自动线序探测、保存和恢复](features/02_config_can.md#pin_layout) |
| GET | `/rear_fog/config` | `0x48066E12` | — | [减速后雾灯与轻重阈值](features/10_lighting.md#fog_deceleration) |
| POST | `/rear_fog/config` | `0x480F4DDA` | — | [每位驾驶员功能独立开关与并发检查](features/03_drivers.md#driver_features)、[减速后雾灯与轻重阈值](features/10_lighting.md#fog_deceleration)、[倒车双闪＋8次雾灯警示](features/10_lighting.md#fog_reverse)、[倒车后雾灯常亮](features/10_lighting.md#fog_reverse_steady)、[领航许可与本次运行启动／停止](features/10_lighting.md#fog_pilot) |
| POST | `/rear_fog/runtime` | `0x481015A6` | — | [领航许可与本次运行启动／停止](features/10_lighting.md#fog_pilot) |
| POST | `/config/ble_obstacle` | `0x480F1E34` | — | [每位驾驶员功能独立开关与并发检查](features/03_drivers.md#driver_features)、[PARTY直连障碍建议与方向校验](features/07_gear.md#obstacle_direct) |
| POST | `/fsd_auto_start/master` | `0x480F2FC2` | — | [每位驾驶员功能独立开关与并发检查](features/03_drivers.md#driver_features)、[自动激活总开关与 revision 事务](features/04_fsd_activation.md#auto_start_master) |
| POST | `/save` | `0x480F34EC` | — | [防抖保存、脏字段、并发排队和结果回读](features/02_config_can.md#autosave)、[C 配置解析、冲突检查、命令提交和持久化](features/02_config_can.md#config_transaction) |
| POST | `/seat_action` | `0x48100E14` | — | [24方向按住调节、250ms续租与松开停止](features/08_seats.md#seat_manual)、[十个位置槽保存与Flash确认](features/08_seats.md#seat_save)、[调用记忆、动作终态与物理输入让行](features/08_seats.md#seat_recall)、[停止全部手动和记忆动作](features/08_seats.md#seat_cancel) |
| GET | `/driver_profiles` | `0x4806D76E` | — | [列表、当前驾驶员、参数来源与状态](features/03_drivers.md#driver_list) |
| POST | `/driver_profiles` | `0x480FA85C` | — | [添加驾驶员并绑定当前位置](features/03_drivers.md#driver_add)、[重新绑定驾驶位](features/03_drivers.md#driver_rebind)、[重命名驾驶员](features/03_drivers.md#driver_rename)、[删除与关联设置清理](features/03_drivers.md#driver_delete)、[自动识别／手动选择及切换](features/03_drivers.md#driver_selection) |
| GET | `/fsd_records` | `0x480B4ABE` | — | [当前／历史行程、详情、小计与累计](features/16_records.md#records_view)、[行驶与FSD里程分类累计](features/16_records.md#records_accumulate) |
| GET | `/fsd_records/clock` | `0x4806C0D4` | — | [手机Unix时钟与设备uptime锚点](features/16_records.md#records_clock) |
| POST | `/fsd_records/clock` | `0x4806EF66` | — | [手机Unix时钟与设备uptime锚点](features/16_records.md#records_clock) |
| POST | `/fsd_records/clear` | `0x480D338A` | — | [清空累计与行程历史](features/16_records.md#records_clear) |
| POST | `/fsd_records/subtotal/reset` | `0x480D2A5E` | — | [重置小计](features/16_records.md#records_subtotal) |
| GET | `/cloud/status` | `0x480D0B14` | — | [设备ID、云网页地址与复制](features/17_cloud_onboarding.md#cloud_identity)、[自动同步开关、立即同步及后台ack](features/17_cloud_onboarding.md#cloud_sync)、[设置驾驶员／FSD记录恢复、范围和request_id](features/17_cloud_onboarding.md#cloud_restore)、[设置revision/epoch、记录epoch与本地草稿保护](features/17_cloud_onboarding.md#cloud_generations) |
| GET | `/onboarding/status` | `0x4808D6C6` | — | [首次联网／新用户／稍后／恢复完成引导](features/17_cloud_onboarding.md#onboarding) |
| POST | `/onboarding/complete` | `0x4808E07E` | — | [首次联网／新用户／稍后／恢复完成引导](features/17_cloud_onboarding.md#onboarding) |
| GET | `/cloud/agent/config` | `0x4808EB2E` | — | [旧agent能力查询与废弃写入口](features/17_cloud_onboarding.md#cloud_legacy) |
| POST | `/cloud/agent/config` | `0x4808CF44` | — | [旧agent能力查询与废弃写入口](features/17_cloud_onboarding.md#cloud_legacy) |
| POST | `/cloud/settings/restore` | `0x480B6D24` | — | [设置驾驶员／FSD记录恢复、范围和request_id](features/17_cloud_onboarding.md#cloud_restore) |
| GET | `/cloud/settings/conflicts` | `0x480B31D8` | — | [查看冲突、保留设备／应用云端](features/17_cloud_onboarding.md#cloud_conflicts) |
| POST | `/cloud/settings/conflict` | `0x480D103E` | — | [查看冲突、保留设备／应用云端](features/17_cloud_onboarding.md#cloud_conflicts) |
| POST | `/cloud/developer` | `0x4808D958` | — | [开发者模式解锁、闲置锁定与令牌撤销](features/01_ui_auth.md#developer) |
| GET | `/cloud/config` | `0x480B4FA4` | — | [服务URL、产品根Token、清除凭据和15～300秒周期](features/17_cloud_onboarding.md#cloud_config) |
| POST | `/cloud/config` | `0x480B3E2C` | — | [服务URL、产品根Token、清除凭据和15～300秒周期](features/17_cloud_onboarding.md#cloud_config) |
| POST | `/cloud/test` | `0x4811E15C` | — | [测试v2连接](features/17_cloud_onboarding.md#cloud_test) |
| POST | `/cloud/enabled` | `0x480B3E6C` | — | [自动同步开关、立即同步及后台ack](features/17_cloud_onboarding.md#cloud_sync) |
| POST | `/cloud/upload` | `0x4808CF68` | — | [自动同步开关、立即同步及后台ack](features/17_cloud_onboarding.md#cloud_sync) |
| POST | `/rec_start` | `0x480FD584` | — | [包含／排除ID、三路总线和RX／TX](features/12_recorder.md#rec_filters)、[异步切换过滤器、内存缓冲与开始抓包](features/12_recorder.md#rec_start) |
| POST | `/rec_stop` | `0x480FD45C` | — | [停止、清空与运行互斥](features/12_recorder.md#rec_stop_clear) |
| POST | `/rec_clear` | `0x4806E04E` | — | [停止、清空与运行互斥](features/12_recorder.md#rec_stop_clear) |
| GET | `/rec_status` | `0x4806C4E8` | — | [异步切换过滤器、内存缓冲与开始抓包](features/12_recorder.md#rec_start)、[帧与TX生命周期采集、容量和丢弃状态](features/12_recorder.md#rec_collect) |
| GET | `/rec_download` | `0x4806FEE2` | — | [CSV／BIN下载与文件头](features/12_recorder.md#rec_download) |
| GET | `/wifi/status` | `0x48066F4C` | — | [AP/STA状态与异步扫描结果](features/14_wifi.md#wifi_status)、[扫描附近网络与列表选择](features/14_wifi.md#wifi_scan)、[联网5分钟后关闭AP及客户端保留](features/14_wifi.md#wifi_ap_autooff) |
| POST | `/wifi/scan` | `0x4806B7E4` | — | [扫描附近网络与列表选择](features/14_wifi.md#wifi_scan) |
| POST | `/wifi/connect` | `0x480F38E4` | — | [启用STA、保存SSID密码与连接](features/14_wifi.md#wifi_connect) |
| POST | `/wifi/disconnect` | `0x480F2624` | — | [断开与忘记网络](features/14_wifi.md#wifi_disconnect_forget) |
| POST | `/wifi/forget` | `0x480F2918` | — | [断开与忘记网络](features/14_wifi.md#wifi_disconnect_forget) |
| POST | `/wifi/ap-config` | `0x480F3D2C` | — | [热点密码保存及异步重启](features/14_wifi.md#wifi_ap_password) |
| POST | `/wifi/ap-auto-off` | `0x480F2C14` | — | [联网5分钟后关闭AP及客户端保留](features/14_wifi.md#wifi_ap_autooff) |
| GET | `/ota/status` | `0x4806BBF8` | — | [固件身份、槽位、容量、状态和会话令牌](features/15_ota.md#ota_identity)、[取消、失败恢复和结果不确定回读](features/15_ota.md#ota_cancel)、[启动后120秒健康验证与回滚](features/15_ota.md#ota_boot_health)、[令牌下载、大小与SHA256核对](features/18_diagnostics.md#coredump_download) |
| POST | `/ota/start` | `0x480FFD82` | — | [令牌授权、CAN停止、持久化flush与ready](features/15_ota.md#ota_prepare) |
| POST | `/ota/cancel` | `0x480FF590` | — | [取消、失败恢复和结果不确定回读](features/15_ota.md#ota_cancel) |
| POST | `/ota/upload` | `0x480FF860` | `0x48064780` | [分块写入、结束验证、提交启动槽与重启](features/15_ota.md#ota_upload) |
| GET | `/ota/online/status` | `0x480BDFCE` | — | [在线检查、升级提示与管理目标一致性](features/15_ota.md#ota_online) |
| POST | `/ota/online/check` | `0x4806B9AE` | — | [在线检查、升级提示与管理目标一致性](features/15_ota.md#ota_online) |
| POST | `/ota/online/install` | `0x4807BE92` | — | [在线检查、升级提示与管理目标一致性](features/15_ota.md#ota_online) |
| POST | `/reboot` | `0x480FFB40` | — | [重启请求、安全停止和实际重启确认](features/15_ota.md#reboot) |
| POST | `/api/can-experiment/listen` | `0x480ED598` | — | [最多4规则、每规则3路与标准ID](features/13_can_experiment.md#experiment_rules)、[来源监听、停止监听与来源确认](features/13_can_experiment.md#experiment_listen) |
| POST | `/api/can-experiment/listen/stop` | `0x480ECF86` | — | [来源监听、停止监听与来源确认](features/13_can_experiment.md#experiment_listen) |
| POST | `/api/can-experiment/source/confirm` | `0x480AB7BA` | — | [来源监听、停止监听与来源确认](features/13_can_experiment.md#experiment_listen) |
| POST | `/api/can-experiment/validate` | `0x480EC3F8` | — | [按位匹配与修改掩码](features/13_can_experiment.md#experiment_bits)、[确认修改、错误／警告和generation](features/13_can_experiment.md#experiment_validate)、[原值偏移／独立自增计数器](features/13_can_experiment.md#experiment_counter)、[SUM／XOR／CRC8及反射参数](features/13_can_experiment.md#experiment_checksums) |
| POST | `/api/can-experiment/start` | `0x480EB56E` | — | [必须匹配已确认版本才能开始](features/13_can_experiment.md#experiment_start)、[单次／跟随／周期、延迟与模板超时](features/13_can_experiment.md#experiment_modes)、[内置发送接管、优先级继承和停止结算](features/13_can_experiment.md#experiment_takeover) |
| POST | `/api/can-experiment/stop` | `0x480EAB84` | — | [内置发送接管、优先级继承和停止结算](features/13_can_experiment.md#experiment_takeover) |
| GET | `/api/can-experiment/status` | `0x480ACF1C` | — | [单次／跟随／周期、延迟与模板超时](features/13_can_experiment.md#experiment_modes)、[逐lane来源／输出与延迟、终态计数](features/13_can_experiment.md#experiment_metrics) |
| GET | `/api/can-experiment/presets` | `0x4806DA0C` | — | [8预设载入／保存／改名／删除与异步持久化](features/13_can_experiment.md#experiment_presets) |
| POST | `/api/can-experiment/presets` | `0x480AC732` | — | [8预设载入／保存／改名／删除与异步持久化](features/13_can_experiment.md#experiment_presets) |
| DELETE | `/api/can-experiment/presets` | `0x4808A37E` | — | [8预设载入／保存／改名／删除与异步持久化](features/13_can_experiment.md#experiment_presets) |
