# CAN 线解析研究

整理日期：2026-10-26。用于汇总本项目讨论、官方接口资料与逆向研究结论。

**电气图口径：Tesla 官方 Model Y 2025 目录下的 SOP7 图纸，不代表所有“2025 款”、所有产地或实车版本。逆向口径：Albert P4 / P1.6.4 / V3.2 / `4d97f369`。两种资料分别引用，尚未进行接线、上板或实车验证。**

## 1. 项目出处与当前能力

[原作者发布页](https://github.com/204442021/Albert-firmware/releases)将 `P1.6.4.source.code.package.zip` 描述为第三方逆向源码。ZIP 同时包含外层 ESP32-S3 双 CAN 工程，以及内层 `Albert/reverse/` 的 ESP32-P4 三 CAN 逆向资料；本独立项目对应后者。

逆向输入标识为 `4d97f369`，整理时正式 OTA 文件名标识为 `8915f5c7`，不能因都叫 P1.6.4 就视为同一构建。当前可运行的是部分重建的主机诊断程序；没有完整、功能等价且经过验证的 P4 车控固件。详见 [逆向总说明](../reverse/README.md)及 [HTML 原理手册](Albert-P4三CAN-功能架构与报文原理.html)。

## 2. CAN 网络、连接器与控制模块是不同概念

- **CAN 网络**：一组控制器共享的通信线路。
- **连接器**：物理插头，如 X179、X181；一个插头可放多组通信线。
- **控制器编号**：Albert 的 CAN0/1/2 是设备侧编号，不是车辆全部网络的官方序号。
- **控制模块**：MCU、Autopilot ECU、转向助力、车身控制器等；一个模块可能接多条网络。
- **DMS/DSM**：在指驾驶员监控时是功能或模块概念，不能直接作为 CH、VEH、PARTY 的同义词。

普通高速 CAN 使用 CAN-H / CAN-L 一对差分线。官方图中的 P / N 在这里对应这对线，不是电源正负。它们并非两条独立 CAN。

### 2.1 官方网络名称及功能范围

| 项目简称 | 官方章节名 | 中文理解 | 官方图中连接的代表模块 |
| --- | --- | --- | --- |
| CH | CAN Chassis | 底盘 CAN | EPAS 转向助力、制动控制器、约束控制模块、Autopilot ECU、MCU、左车身控制器等 |
| VEH | CAN Vehicle | 车辆 CAN | 高压电池、高压空调压缩机、转向角/拨杆模块、车内雷达、前/左/右车身控制器、Autopilot ECU、MCU |
| PARTY | CAN Party | 保留 Party 名称 | 转向助力、制动、约束控制、前/左/右车身控制器、Autopilot ECU、MCU 等 |

按节点可以概括为底盘协作、车辆状态/热管理/操作输入及跨系统通信等范围，但这不是官方对报文功能的完整分工定义。**Party 不能简单译为“娱乐总线”，Vehicle 也不等于只有车身附件。** 多模块同时接多条网络，功能存在交叉。

官方来源：[Chassis 图](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=8)、[Vehicle 图](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=10)、[Party 图](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=9)。

### 2.2 一个接口怎样接三路 CAN

```text
一个多针连接器 X179
  ├─ 第一对 H/L → CAN0 收发电路 → CH
  ├─ 第二对 H/L → CAN1 收发电路 → VEH
  ├─ 第三对 H/L → CAN2 收发电路 → PARTY
  └─ 接地
```

CAN 收发器处理物理信号，控制器接收帧，软件记录通道、ID、DLC、数据与时间，再解析信号。接收不是车辆反馈验证；normal 模式还可能对帧 ACK，不能把“只读软件”自动视为电气被动监听。

若接口只引出一对 CAN，把它并接到三个接收器仍是同一个网络。按本份 X179 定义，三对已覆盖该连接器引出的全部 CAN；加到四/五/六路不会凭空增加网络。但这不能证明整车只有三条网络，车内还可能存在其他 CAN、LIN、以太网等连接。

## 3. X179：三路 CAN 接口

官方名称 CAN Port；本图连接器为 KSE K30M31014、灰色，Tesla 零件号 `1849225-03-B`。

| 针脚 | 官方信号名 | 含义 | 线色 | 官方连接器表中的去向 |
| --- | --- | --- | --- | --- |
| 2 | Party Can P | Party CAN-H | YE/LTBU 黄/浅蓝 | X051-13 |
| 3 | Party Can N | Party CAN-L | YE 黄 | X051-29 |
| 9 | Vh Can P | Vehicle CAN-H | BN/WH 棕/白 | X050-56 |
| 10 | Vh Can N | Vehicle CAN-L | BN 棕 | X050-55 |
| 13 | Ch Can P | Chassis CAN-H | DKGN/WH 深绿/白 | X908F-17 |
| 14 | Ch Can N | Chassis CAN-L | GN 绿 | X908F-18 |
| 20 | Gnd | 接地 | BK 黑 | G032-8 |
| 1、4–8、11–12、15–19 | unused | 本版未使用 | — | — |

信号名依据官方 Diagnostics SVG，线色与目的端依据连接器表。**该表没有电源正极，15 脚是 unused，不能套用其他年款或网络流传的供电定义。** 未使用针位也不等于预留了可任意利用的信号。

查看：[X179 官方定义](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/connector/x179/)、[Diagnostics 交互图](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=13)、[Diagnostics 原始 SVG](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/svg/diagnostics.svg)、[G032 接地点](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/connector/g032/)。

### 3.1 不要混用针脚、GPIO 和 bus mask

| 逻辑通道 | 设备控制器索引 | 固件 bus mask | 原资料 A 组 GPIO TX/RX | 原资料 B 组 GPIO TX/RX | 连接器针脚标签 |
| --- | --- | --- | --- | --- | --- |
| CH | 0 | 1 | 2/3 | 3/2 | 13/14 |
| VEH | 1 | 2 | 4/5 | 50/49 | 9/10 |
| PARTY | 2 | 4 | 26/27 | 31/30 | 2/3 |

上述 GPIO 是 ESP32-P4 到板上 CAN 电路的逻辑侧接线，不能接到车辆 CAN-H/L 代替收发器。三路 500 kbit/s 及 GPIO 值来自逆向资料，不是官方对 Albert 硬件的认可。针脚排列应按官方连接器正视图与实物锁扣方向识别。

## 4. X181：OBD / 诊断连接器

本份图中官方名称 OBD，连接器为 KSE K20F02401、黑色，零件号 `1969102-00-A`。

| 针脚 | Diagnostics 图中的名称 | 可确认的含义 | 本版连接器表去向 |
| --- | --- | --- | --- |
| 6 | Can H | 一对 CAN 的 H | X037-23 |
| 14 | Can L | 同一对 CAN 的 L | X037-22 |
| 16 | Vbatt | 低压电源，电压/可用电流需按实车和适用文件核对 | X037-27 |
| 4 | Chassis Ground | 车身接地 | X037-9 |
| 5 | Ground | 接地 | X037-10 |
| 8 | Activation Line | 诊断激活线，不能自行假定电平或接电 | X037-26 |
| 3 / 13 | Rx / Tx | 按图为 Rx/Tx 通信线，不代表普通 TTL/UART | X173-5 / X173-6 |
| 11 / 12 | Rx / Tx | 按图为另一组 Rx/Tx 通信线 | X173A-1 / X173A-2 |
| 1、2、7、9、10、15 | unused | 本版未使用 | — |

X173 与 X173A 在图中分别关联左右舵 MCU，不能把表中两组 Rx/Tx 当成每辆车均独立提供的两个用户端口。本图没有证明 X181 CAN 等同于 X179 的任意一路，不按针数或接口形状猜测其可见报文范围。

查看：[X181 官方定义](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/connector/x181/)、[Diagnostics 图](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=13)、[官方诊断线缆选择](https://service.tesla.com/en-US/diagnostic-cables)。

### 4.1 年款差异与资料冲突的处理

讨论时查到早期第三方 CAN 接口文件对 X181 的 3/11 脚列有辅助供电定义，而本份 SOP7 图将其列为通信。**这是必须按车型、生产时间与文件修订区分的地方，不将不同版本拼成一张通用接线表。** OBD 外形也不保证支持特定 DoIP 转接线。

检索曾返回官方文件 `CD-20-17-001 R5`（2025-04-17 修订），但整理时其直链返回404，因此不能把检索摘要视为当前可完整访问的接线依据。后续请从官方诊断线缆页面及对应车辆手册重新定位适用版本。

## 5. 座椅下的接口：尚未辨认

用户提到座椅下另有连接器，目前没有确认驾驶侧/乘客侧、针数、标签与实物照片，**不能给它指定 X 编号，也不能断言是第四条 CAN 或另一套三 CAN。**

官方座椅维修资料出现过座椅控制、加热、电机、乘员占用、安全带及 CAN 连接。某处存在 CAN 也可能只是已有网络分支，不一定是新网络。涉及约束系统的线束不可按普通附件口试接。

后续确认需要：具体车型与生产版本、座位侧别、接口及周围位置照片、颜色与标签、原厂线束还是第三方转接件。参考：[官方副驾座椅线束维修说明](https://service.tesla.com/docs/ModelY/ServiceManual/de-de/GUID-807AEFFA-0BF5-40CB-9470-B3C2E0C99109.html)（2020–2024 手册路径，仅说明存在相关连接，不能代替 SOP7 接口定义）。

## 6. 逆向报文与功能原理

以下来自包内逆向分析，**不是 Tesla 官方 DBC、厂家字段释义或已验证执行结果**。

### 6.1 共用执行架构

```text
网页配置/动作 → HTTP校验 → 运行命令
                              ↓
车辆三路输入 → 信号快照/新鲜模板 → 功能状态机
                              ↓
                    owner、来源代数、token、截止时间
                              ↓
                      CAN发送 → 回执及车辆观察
```

多数功能复制新鲜模板，仅修改局部字段，再按对应协议处理计数/校验；维修等路径则独立构造请求。不是所有报文都采用相同校验方式，也不是所有输出都经过同一提交函数。

- **owner**：固件内发送归属，不是物理独占总线。
- **generation**：来源、配置或请求代数，防止旧请求在取消后继续有效。
- **token**：某次提交的回执关联标识。
- **四层结果**：HTTP接受、发送服务接受、TX终态、车辆反馈；不能互相替代。

CAN 的ID不是可靠发送者身份；格式与校验正确不代表被授权或一定被采纳。资料也没有证明所有路径都能拦截原帧或压制原节点。

### 6.2 功能与报文对照

| 功能 | 逆向关联线路/ID | 原理与边界 |
| --- | --- | --- |
| FSD激活 | CH/VEH `0x3FD`，VEH `0x3C2` | 观察可用状态与输入事件，分阶段提出协议动作；不是ESP32重新实现感知/规划，完整阶段未恢复 |
| 速度补偿 | CH/VEH `0x3FD MUX2` | 限速/目标表经限幅与缓降转换为偏移；不是仪表车速修改或直接控制电机 |
| 驾驶模式 | `0x3FD` 对应MUX | 写入HW3策略或V14 profile意图；原车决定实际行为，不等于所有动力/悬架设置 |
| 滚轮免打扰 | VEH `0x3C2 MUX1` | 模拟滚轮活动并合并其他按键字段；有动作/释放与仲裁，不保证适用于全部提醒 |
| 扭矩免打扰 | PARTY `0x39B`、`0x370` | 观察状态/转角，分相位修改扭矩相关输入；不证明机械施力或驾驶员实际握盘 |
| 摄像头相关覆盖 | CH/VEH `0x3FD MUX1` | 改局部状态字段；厂家完整语义及接收方策略未确认，不等于摄像头断电或停止录像 |
| 自动换挡/倒挡请求 | VEH `0x678` / V12 `0x229`，CH `0x118`反馈 | 生成P/R/D请求并观察实际挡位；不等于自动控制车辆后退、转向和避障 |
| 障碍方向建议 | PARTY `0x255`、`0x12B` | V13/V14配对输入，在P挡结合门控形成建议；变量bleObstacle不证明蓝牙来源 |
| 座椅记忆 | `0x4F3`动作，`0x4E2/0x4E3`位置 | 比较四轴目标与反馈，持续提出方向动作直至到位/停止；不是直接发送记忆槽编号 |
| 氛围灯 | VEH `0x679` | 事件计算颜色/亮度/区域目标，再统一编码，实物区位未校准 |
| 灯光 | VEH `0x3C2/0x249/0x273/0x3E3` | 区分开关事件、状态覆盖与反馈，部分波形和恢复仍缺失 |
| 电池预热 | VEH `0x82`及温度/电气观察 | 提出热管理请求，固件计时及停止恢复；发送成功不等于实际加热 |
| 维修模式 | VEH `0x339` | 配置开关进入运行调度，构造服务请求并结算发送；不是完整厂家诊断/UDS流程 |
| 退出FSD后泊车 | CH `0x399/0x257/0x293` | 状态边沿、时间窗口和静止条件后提出请求；未证明无人泊车完成 |
| 驾驶位模拟 | PARTY `0x30A`，VEH `0x3A1`观察 | 与泊车独立的状态覆盖路径；不能把反馈相关性当作因果或执行完成 |

### 6.3 四组重点研究

**速度与模式：** 原车已有目标速度/驾驶策略执行器。固件选择目标来源，经限幅、稳定及缓降生成协议偏移或模式枚举，再跟踪确认值。V12与V13/V14编码不同；配置单位、百分比与km/h不可混同。完整目标优先级及回退仍不齐。

**滚轮：** 通过模拟操作活动尝试影响提醒链，而不是从源码层修改原车提醒算法。可能改变音量或设速；周期、幅度、释放以及多个功能共享字段都需协调。

**扭矩：** 等待有效DAS/HOS观察，确认方向后进入维护、休息、纠正、验证及故障保持等相位。输出受新鲜模板、pending和时效约束。报文扭矩值、实际机械力、驾驶员握盘是三件事，不能等同。

**摄像头：** 目前最符合证据的是在状态/策略层干预，而非图像采集层。可能涉及可用性、许可或其他条件，但这是机制推断，不能确定其厂家字段含义。未证明直接伪造注视结果，也未证明关闭监控。原始帧可能继续存在，接收方如何采纳仍待追踪。

### 6.4 自动倒车与维修模式的具体链路

自动倒车目前应称“自动倒挡请求”：触发事件/建议 → 新鲜挡位车速与安全条件 → 冷却/次数/在途门控 → 按协议构造请求 → TX结算 → 实际挡位观察。即便反馈为R，也不证明车辆已经移动或具备自动倒车规划。

维修模式：网页 `canbServiceModeEnabled` → `POST /config` → 运行请求 → 通信和VEH发送许可/在途检查 → 构造339请求 → owner/token回执更新。页面“已应用”不能直接当作车辆独立确认已进入完整维修模式；关闭请求也不证明完成退出。

## 7. 官方图能证明什么，不能证明什么

| 资料 | 可以确认 | 不能直接推出 |
| --- | --- | --- |
| 官方电气图 | 某生产版本模块、线路、信号标签与连接关系 | 完整CAN字段、每条报文语义与全部控制权限 |
| 官方连接器表 | 针位、端子、线色及目的端 | 其他年款接线、任意附件适配或授权 |
| 包内逆向资料 | 特定构建的已定位位运算与部分调用链 | 最新固件全功能、全部厂家语义、实车效果 |
| 主机诊断程序构建 | 恢复的元数据程序可运行 | P4完整固件或车辆验证通过 |

此前“这些名称只是固件自定义”的说法已更正：CAN Chassis、CAN Vehicle、CAN Party 确实见于官方图；设备索引与mask仍属于本固件。此前“源码就是双CAN”也已更正，内层逆向对象是P4三CAN。

“最早的FSD注入用哪条CAN”尚未完成历史来源核对；当前P1.6.4存在CH/VEH相关路径，不能把它当作最早方案的证明。

## 8. 官方资料入口与阅读方式

1. [Model Y SOP7 电气图入口](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?expbackground=true&page=0)：HTML交互页面，按页加载SVG矢量图；不是嵌入PDF或普通截图。
2. [Chassis](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=8)、[Party](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=9)、[Vehicle](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=10)、[Diagnostics](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/interactive/html/index.html?page=13)。
3. [X179](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/connector/x179/)、[X181](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/connector/x181/)、[G032](https://service.tesla.com/docs/ModelY/ElectricalReference/2025/connector/g032/)。
4. [Tesla 诊断线缆](https://service.tesla.com/en-US/diagnostic-cables)：按车辆与生产版本核对，不因接口外形相同混接。
5. [Tesla Service Portal](https://service.tesla.com/)：维修手册、电气图与诊断资源入口；资料访问与诊断服务权限不是同一件事。

不是只有Tesla提供官方维修资料。其他示例：[Toyota TIS及公开订阅说明](https://support.toyota.com/s/article/Where-can-I-find-Toyo-7707?language=en_US)、[大众erWin](https://www.drivesomethinggreater.com/erwininfo)、[福特Motorcraft](https://www.motorcraft.com/us/en_us/home/technical-resources.html/1000)、[BMW TechInfo](https://bmwtechinfo.bmwgroup.com/)、[比亚迪TIS](https://tis.bydauto.com.cn/)。各地账号、收费与车型范围不同；不把公开维修入口等同于完整DBC开放。

## 9. 后续研究与风险边界

优先补齐：实车生产版本及连接器身份、原始分析构建BIN、被观察帧的线路/时序、接收方状态变化和完整失败恢复。按“配置→运行条件→输出→发送终态→独立车辆反馈”保留证据链，不以某个ID出现就命名功能。

- 先在与车辆断开的测试台验证，研究页面与脚本不自动接车或烧录。
- 修改提醒、挡位、座椅、灯光或热管理输入可能改变车辆行为；提醒减少不代表安全提升。
- 约束系统连接、激活线、供电和差分通信不可按普通GPIO试接；本文件是研究索引，不是通用安装接线指南。
- 官方公开不等于任意修改、再分发或商用授权。第三方逆向材料也不是原厂开源工程。

本地证据：[CAN运行机制](../reverse/skills/albert-p4-can-analysis/references/can-runtime.md)、[功能状态机](../reverse/skills/albert-p4-can-analysis/references/control-logic.md)、[协议与字段](../reverse/skills/albert-p4-can-analysis/references/control-protocol.md)、[反编译字段公式](../reverse/skills/albert-p4-can-analysis/references/can-frames.md)、[证据与缺口](../reverse/feature_analysis/EVIDENCE_AND_LIMITS.md)。
