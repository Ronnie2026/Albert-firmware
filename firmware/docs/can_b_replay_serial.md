# CAN 回放固件串口控制说明

本文档适用于 PlatformIO 环境 `can_b_replay`，入口文件为 `src/can_b_replay.cpp`。

## 1. 串口参数

- 波特率：`921600`
- 数据位：8
- 停止位：1
- 校验：无
- 流控：无
- 命令结尾：换行 `\n`，同时兼容 `\r\n`
- CAN 速率：CAN_A、CAN_B 均为 `500 kbit/s`

设备启动完成后默认进入 FT10 座椅台架模式并输出：

```text
READY CAN_REPLAY frames=<帧数> baud=921600 capture=B blocks=0 replay=OFF bench_seat=ON
OK BENCH SEAT ON interval_ms=100 bus=B id=257 tx_count=1
INFO Send HELP for commands
```

通道对应关系：

- `A` / `CAN_A` / `0`：外置 MCP2515
- `B` / `CAN_B` / `1`：ESP32 内置 TWAI

CAN ID 和数据字节按十六进制解析。CAN ID 可写成 `123` 或 `0x123`，当前只允许标准 11 位 ID，即 `000` 到 `7FF`。

## 2. 接收抓包

启动时抓包输出关闭，但 CAN 接收队列仍会持续读取。使用以下命令控制串口输出：

```text
CAPTURE ON
CAPTURE ALL
CAPTURE A
CAPTURE B
CAPTURE OFF
CAPTURE STATUS
```

`ON` 与 `ALL` 等价。成功响应示例：

```text
OK CAPTURE ALL
```

每个收到的 CAN 帧输出一行，格式为：

```text
RX <micros> <bus> <hex_id> <dlc> <hex_data>
```

示例：

```text
RX 12345678 A 257 8 00A13F2A02F81F01
RX 12346102 B 3E3 4 04000000
```

其中 `micros` 是设备启动后的微秒计数，数据区连续输出两个十六进制字符表示一个字节。高总线负载时建议只抓取一个通道，避免串口带宽影响回放时序。

## 3. 串口发送 CAN 帧

命令格式：

```text
SEND <A|B> <HEX_ID> [HEX_BYTE ...]
```

数据长度由数据字节数量自动确定，允许 0 到 8 字节。例如：

```text
SEND A 257 00 A1 3F 2A 02 F8 1F 01
SEND B 0x3E3 04 00 00 00
SEND B 123
```

发送成功：

```text
OK SEND A 257 8
```

驱动未就绪、CAN 控制器离线或发送队列失败时：

```text
ERR SEND_FAILED A 257
```

## 4. 临时禁止回放帧

屏蔽规则由“通道 + CAN ID”组成，只拦截 `REPLAY_FRAMES` 的自动回放，不拦截 `SEND` 手动发送。最多保存 32 条规则，规则只在 RAM 中存在，设备复位或断电后全部失效。

增加规则：

```text
BLOCK ADD A 399
BLOCK ADD B 3E3
BLOCK ADD B 0x257
```

相同规则重复添加不会占用额外位置，并返回：

```text
OK BLOCK EXISTS B 257
```

删除一条规则：

```text
BLOCK REMOVE B 3E3
```

`BLOCK DEL B 3E3` 是相同操作的简写。

列出全部规则：

```text
BLOCK LIST
```

返回示例：

```text
OK BLOCK LIST 2
BLOCK A 399
BLOCK B 257
OK BLOCK LIST END
```

清空全部规则：

```text
BLOCK CLEAR
```

## 5. 状态与帮助

```text
STATUS
HELP
```

回放控制命令：

```text
REPLAY ON
REPLAY OFF
REPLAY STATUS
```

`REPLAY OFF` 只暂停 `REPLAY_FRAMES` 的自动发送，CAN 接收和 `SEND` 手动发送仍然可用；恢复时不会补发暂停期间错过的时间槽。设备复位后默认进入座椅台架模式，因此回放默认暂停；执行 `BENCH SEAT OFF` 后恢复回放。响应分别为 `OK REPLAY ON`、`OK REPLAY OFF` 或当前状态。

状态响应示例：

```text
OK STATUS can_a=READY can_b=READY capture_mask=3 blocks=2 replay=ON bench_seat=OFF bench_tx=0 replay_index=1234
```

`capture_mask`：`0` 表示关闭，`1` 表示 A，`2` 表示 B，`3` 表示两个通道。

`replay` 表示自动回放是否开启；`replay_index` 是回放表中的当前位置。`BLOCK` 规则只影响自动回放，不影响 `SEND`。

## 6. FT10 座椅台架模式

该模式只用于在台架上验证“BLE 控制 CH32 → CH32 发 CAN → ESP32 串口观察”。设备启动后默认开启，也可重复输入开启命令查询当前状态：

```text
BENCH SEAT ON
```

开启后 ESP32 会：

- 保存当前 `REPLAY` 和 `CAPTURE` 状态；
- 暂停自动回放；
- 每 100 ms 从 CAN_B 发送 `0x257 00 00 00 00 00 00 00 00`，满足 FT10 的新鲜零车速守卫；
- 打开 CAN_B 接收打印，用于观察 CH32 发出的 `0x4F3`。

此模式不会主动发送 `0x4F3`，也不会开启 CH32 的生产输出。方向命令仍必须由 BLE 页面发送。

查询和关闭：

```text
BENCH SEAT STATUS
BENCH SEAT OFF
```

关闭后恢复进入该模式前的回放和抓包状态。设备复位后会再次自动开启。模式开启期间，修改 `REPLAY` 或 `CAPTURE` 会返回 `ERR BENCH_SEAT_ACTIVE`；若周期零速发送失败，模式自动关闭并恢复原状态。`STATUS` 中 `bench_tx` 是本次台架模式已提交的零速帧数。

所有有效命令以 `OK` 响应；格式错误或执行失败以 `ERR` 响应。命令不区分大小写。

## 7. 编译与烧录

在工程根目录执行：

```bash
./compile.sh -e can_b_replay -u
```

烧录后打开串口监视器：

```bash
pio device monitor -b 921600
```

也可以编译、烧录后立即打开监视器：

```bash
./compile.sh -e can_b_replay -u -m
```

如果连接了多个串口，先查看端口：

```bash
pio device list
```

再明确指定端口：

```bash
pio run -e can_b_replay -t upload --upload-port /dev/cu.usbmodemXXXX
pio device monitor -b 921600 -p /dev/cu.usbmodemXXXX
```

退出监视器使用 `Ctrl+]`。
