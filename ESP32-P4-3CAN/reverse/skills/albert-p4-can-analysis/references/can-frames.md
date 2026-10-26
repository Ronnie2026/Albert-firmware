# 报文、字段与已确认的修改公式

[返回 Skill](../SKILL.md) · [功能控制值总表](control-protocol.md) · [运行机制](can-runtime.md) · [证据与缺口](evidence.md)

所有 payload 字节采用从零开始的 `d[0]…d[7]`，bit0 为该字节最低位。以下是当前已核对的子集，**不是完整 DBC**；字段的原始位运算与业务名称的证据等级分别说明。

## ID 对照

| 总线 | ID | 已核对用途／识别条件 | 证据与限制 |
|---|---|---|---|
| PARTY / mask4 | `0x39B` | 扭矩状态机 DAS/HOS 观察；包装入口 DLC=8 | `0x480C5306`、`0x4804EA2A`；状态原值公式如下，枚举名称未全部确认 |
| PARTY / mask4 | `0x370` | 扭矩原车模板及修改后的同 ID 输出；包装入口 DLC=8 | `0x480C5306`、`0x4804EA2A`、`0x480459FE`；完整位运算见下文 |
| PARTY / mask4 | `0x255` | V13/V14障碍建议；专用缓存DLC=4；`d3&3`值1前进/2后退 | 与12B方向共同匹配，具体值见[障碍表](control-protocol.md#obstacle) |
| PARTY / mask4 | `0x12B` | 配套方向观察；专用缓存 DLC=4 | 十进制 `299` 同此 ID，`0x480C7974`、`0x480DA2A8` |
| CH / mask1、VEH / mask2 | `0x3FD` | DLC=8，MUX=`d[0]&7`；CH MUX0有FSD P0路径 | 摄像头/速度/profile/策略覆盖见[3FD字段表](control-protocol.md#3fd) |
| VEH / mask2 | `0x3C2` | DLC=8，MUX=`d[0] & 3`；MUX0/1 被发送流识别器区分 | `0x480409AE`；报文含多类控制字段，不能整体称为单一座椅命令 |
| 默认VEH，可设CH | `0x4F3` | DLC3或4；座椅24bit方向掩码；mask0停止 | 配置1→CH、2→VEH；PARTY无该分支；见[方向表](control-protocol.md#seats) |
| VEH / mask2 | `0x273` | 后雾灯来源模板；观察DLC≥8，输出DLC8 | d2 bit7开/关覆盖，另有3C2开关事件；见[雾灯](control-protocol.md#fog) |
| CH / mask1 | `0x118` | 灯光/换挡等来源；`d2>>5`观察实际挡位 | P1/R2/D4已确认，生成器另走VEH678/229，见[换挡](control-protocol.md#gear) |
| 所选座椅线路 | `0x4E2/0x4E3` | 四轴12bit位置，DLC≥7，`d0&7=5` | 起始位3/16/28/40；见[位置反馈](control-protocol.md#seat-feedback) |
| VEH / mask2 | `0x678/0x229` | 非V12/V12挡位请求模板 | 编码、counter、checksum见[换挡](control-protocol.md#gear) |
| VEH / mask2 | `0x679` | DLC7；RGB、亮度、六区mask | 来源/字段见[氛围灯](control-protocol.md#ambient) |
| VEH / mask2 | `0x82` | DLC8；预热开启/关闭完整常量 | 见[预热](control-protocol.md#preheat) |
| VEH / mask2 | `0x339` | DLC8；维修开关d5bit7 | 见[维修](control-protocol.md#service) |

`seatControlBus=2`是配置值；本版本已经核对配置到运行模板的映射。其数字恰与VEH mask2相同，但TWAI控制器索引为1，三种编号不要混用。

## 先确认反编译对象的 payload 偏移

本轮解析函数使用的帧对象中：ID 在 `+0`，DLC 在 `+4`，payload 在 `+5…+12`，总线 mask 在 `+13`，来源时间戳在 `+16`。这是所核对函数的对象解释，不表示所有库或导出记录都使用此布局。

因此反编译的 `param_2[2]` 低字节是对象 `+8`，对应 `d[3]`；不能把 `uint*` 索引直接当作CAN字节编号。另有14byte动作对象payload从`+6`开始，详见[对象布局说明](control-protocol.md#buses)。Ghidra中异常类型推断需要回到`lbu/sb`指令核对。

<a id="torque-fields"></a>
## PARTY 0x370：输入解码

`0x4804EA2A` 的主要公式经真实地址反汇编复核：

| 字段 | 原始公式／位置 | 已确认含义 |
|---|---|---|
| checksum | `d[7] == (sum(d[0..6]) + 0x73) & 0xFF` | 输入校验，非 CRC |
| torque raw | `((d[2] & 0x0F) << 8) | d[3]` | 12 位原值 |
| raw有效范围 | `1 ≤ raw ≤ 0xFFD` | 反编译条件 `(raw-1)&0xFFFF ≤ 0xFFC` |
| torque数值 | `raw - 0x802` | 状态机使用的有符号原单位；配置以 centi-Nm 表示 |
| angle raw | `((d[4] & 0x3F) << 8) | d[5]` | 14 位原值 |
| angle数值 | `angle_raw - 0x2000` | 状态机按 deci-degree 门控 |
| counter | `d[6] & 0x0F` | 4 位，输出原值加1并模16 |
| 输出状态字段 | `d[4] bit7:6 = 01` | 确认强制写入 `0x40`；厂家完整名称未确认 |

反汇编位置：输入 checksum `0x4804ED5A…0x4804ED80`，raw `0x4804EE06…0x4804EE26`，输出修改 `0x4804EF5A…0x4804EF9E`，输出 checksum `0x4804EFA8…0x4804EFC6`。

## PARTY 0x370：输出伪代码

```c
// 对 0x4804EA2A 的字段运算重建；不包含完整状态机和发送服务。
uint8_t checksum_370(const uint8_t d[8]) {
    unsigned s = 0x73;
    for (unsigned i = 0; i < 7; ++i) s += d[i];
    return (uint8_t)s;
}

bool build_torque_output(const Frame *f, Frame *out,
                         TorqueState *st, unsigned now_ms, unsigned now_us) {
    // 未建函数入口 0x480C5306 的外层过滤：
    if (f->bus_mask != 4 || f->dlc != 8) return false;
    if (f->id == 0x39B) { observe_das_hos(st, f, now_ms); return false; }
    if (f->id != 0x370) return false;

    if (same_as_recent_own_output(f, /* cache window */ 100_ms)) return false;
    if (f->d[7] != checksum_370(f->d)) return false;
    unsigned raw = ((f->d[2] & 0x0F) << 8) | f->d[3];
    if (raw < 1 || raw > 0xFFD) return false;

    observe_expected_counter_if_waiting(st, f->d[6] & 0x0F, now_us);
    if (!has_usable_source_timestamp(f)) return false;
    if ((unsigned)(now_us - f->source_us) > 5000) return false;
    if (!all_five_outer_enable_gates(st) || st->output_pending) return false;

    int angle = (((f->d[4] & 0x3F) << 8) | f->d[5]) - 0x2000;
    int torque = (int)raw - 0x802;
    Decision a = torque_state_machine(st, now_ms, angle, torque,
                                      source_signature(f));
    if (!a.emit) return false;

    int target = clamp(a.target_centi_nm, -250, 250);
    unsigned encoded = (unsigned)(target + 0x802);
    *out = *f;
    out->id = 0x370; out->dlc = 8;
    out->d[2] = (f->d[2] & 0xF0) | ((encoded >> 8) & 0x0F);
    out->d[3] = encoded & 0xFF;
    out->d[4] = (f->d[4] & 0x3F) | 0x40;
    out->d[6] = (f->d[6] & 0xF0) | ((f->d[6] + 1) & 0x0F);
    out->d[7] = checksum_370(out->d);
    preserve_source_metadata_and_bind_decision(out, a);
    return true; // 尚未表示发送接受或车辆确认。
}
```

近 100 ms 自回波缓存比较和 counter 观察分开：counter 等待分支检查预期 low nibble、时间差 `1…100000 µs`，并记观测延迟。它不是完整 payload 回波比较，也不是车辆执行证明。

内部生成器检查 DLC≥8；现发现包装路径首先要求恰为8。来源期限 5000 µs 是本功能的即时来源预算，不能替换成 DAS 的毫秒超时或应用到全部功能。

## PARTY 0x39B：状态原值

```c
state_raw = (d[5] >> 2) & 0x0F;
state_value_valid = state_raw < 9;
if (state_raw == 0x0F) classification = 2;
else if ((d[5] & 0x38) == 0) classification = 0;
else classification = ((d[5] & 0x20) != 0) ? 2 : 1;
```

`0x4804EA2A` 更新 seen／valid／来源时间并按 raw `<3`、`3…5`、`>5` 等分支推进扭矩相关状态。不能仅凭这些比较把所有 raw 值写成厂家完整 HOS 枚举。

## PARTY 0x255 / 0x12B：两种观察路径

`0x480DA2A8` 的公共观察器在 mask4、DLC≥4 条件下提取：

| ID | 字段表达式 | 文档命名边界 |
|---|---|---|
| `0x255` | `d[3] & 3` | 障碍专用路径1前进/2后退，需12B配套匹配；其他枚举待确认 |
| `0x255` | `(d[3] >> 2) & 0x1F` | 原值；等于1／不等于1分别累计确认，最大3次 |
| `0x255` | `d[2] & 1`、`(d[2] >> 1) & 1` | 两个布尔观察值，完整名称待确认 |
| `0x12B` | `d[2] >> 6` | 原值，与方向判断有关 |
| `0x12B` | `d[3] & 1` | 布尔观察值，完整名称待确认 |

`0x480C7974` 的障碍功能专用缓存要求 **DLC恰为4**，更新每类报文的 seen、valid、timestamp、generation，并拷贝4字节；不合格DLC使对应缓存无效。两种路径不能混写为同一接收条件。

功能流程只在符合协议的 P 挡状态使用新鲜建议与方向；离 P／挡位过期清理，重新回 P 后等待两种新观察。完整条件见[换挡伪逻辑](control-logic.md#gear)。字段名 `bleObstacle` 不能证明传输采用 Bluetooth，已确认来源为 PARTY CAN。

专用匹配进一步确认：12B字段为`(d2>>4)&7`，255建议1需方向值3，建议2需方向值2；随后转为挡位D4/R2。该字段不同于公共观察器`d2>>6`，详见[数值匹配表](control-protocol.md#obstacle)。

<a id="experiment-edit"></a>
## MUX 与实验编辑

发送流识别器 `0x480409AE` 对 `0x3FD` 使用 `d[0] & 7`，对 VEH `0x3C2` 使用 `d[0] & 3`。

实验匹配可限定这些 MUX 的未改位来缩小内置 owner scope，验证器禁止修改保留 MUX 位。不能把未修改位全部当成 don't-care；scope 扩大可能改变需要让行的固件 owner。

```c
for (i = 0; i < dlc; ++i) {
    if ((src[i] & match_mask[i]) != (match_value[i] & match_mask[i]))
        return NO_MATCH;
    dst[i] = (src[i] & ~edit_mask[i]) | (edit_value[i] & edit_mask[i]);
}
apply_validated_counter(dst);
apply_validated_checksum(dst);
```

SUM/XOR/CRC8 的配置已确认，但 checksum参与字节、ID字节序、输出位排除及 finalize 的全部边界仍需逐条核对。不能从 `0x370` 的求和公式推广到其他 ID。
