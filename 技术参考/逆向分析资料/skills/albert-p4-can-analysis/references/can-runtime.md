# CAN 运行、来源模板与发送生命周期

[返回 Skill](../SKILL.md) · [功能状态机](control-logic.md) · [报文位布局](can-frames.md)

## 三路总线与线序

| 控制器 | 逻辑名称 | 帧内总线 mask | A TX/RX GPIO | B TX/RX GPIO | 网页标注车辆连接器针脚 |
|---|---|---|---|---|---|
| CAN0 | CH | `1` | `2 / 3` | `3 / 2` | `13 / 14` |
| CAN1 | VEH | `2` | `4 / 5` | `50 / 49` | `9 / 10` |
| CAN2 | PARTY | `4` | `26 / 27` | `31 / 30` | `2 / 3` |

三路均为 500 kbit/s。控制器索引 `0/1/2` 与 mask `1/2/4` 是两套表示；不能混用。GPIO 也不同于车辆连接器针脚。

配置 `0=A、1=B、2=Auto`。Auto 先以监听方式探测 A，约 1.5 秒内三路没有有效帧才进入 B 探测；探测结束清理临时节点、GPIO。保存线序涉及停止 CAN、写 NVS、恢复 CAN；可能出现“保存成功但恢复失败”。

来源备注：针脚常量表`0x48222610`、通道常量表`0x48222640`、setup`0x48117336`、线序探测`0x480312A6`。上表已收录必要数值；网页连接器标签只表示原页面标注，未做实物校准。

## 任务与执行域

| 入口地址 | 角色 | 已恢复设置 |
|---|---|---|
| `0x48117336` | setup：初始化、线序、驱动、创建任务 | ESP32-P4 / Arduino / IDF |
| `0x4810D080` | `can_rt`：主要 CAN 实时处理 | core1、优先级 20、栈 8192 字节 |
| `0x4FF2520A` | `fsd_p0`：FSD P0 处理 | core1、优先级 24、栈 4096 字节 |
| `0x48121206` | supervisor：健康与管理协调 | core0、优先级 3 |
| `0x4803CDD8` | RX／相关队列服务 | 帧数和时间预算；存在函数指针与虚函数调用 |
| `0x4810CA34` | feature 调度 | 推进运行功能与状态快照 |
| `0x480E8070` | 应用控制命令 | 配置、动作在运行域生效 |

网页 HTTP 线程解析参数后提交命令。CAN 任务从原车输入更新状态，再依照配置推进功能；HTTP 连接成功不表示命令已完成，更不表示已落盘。

```c
// 架构伪代码：顺序按角色表达，具体预算与阶段以原函数为准。
void can_rt_iteration(void) {
    service_rx_and_tx_receipts_with_budget();
    update_signal_and_template_snapshots();
    apply_queued_runtime_commands();
    tick_enabled_feature_state_machines();
    submit_outputs_that_pass_owner_and_source_checks();
    publish_readable_status_snapshot();
}
```

## 解析信号与保留模板是两件事

信号快照供功能判断，例如挡位、刹车、HOS、座椅位置；模板保留报文的其他字节，供需要输出的功能只改指定字段。每个来源还关联时间、代数或帧序列，用来拒绝旧数据和重复处理。

```c
// 分析者定义的说明结构，不是原 C++ 对象内存布局。
struct Source {
    unsigned bus_mask, id, dlc, mux;
    unsigned char payload[8];
    unsigned rx_timestamp_us, source_generation;
    bool seen, valid, from_real_source;
};
struct Signal {
    int raw;
    bool seen, valid;
    unsigned observed_at_ms;
};
```

必须先区分“没有数据”“有数据但无效”“有效但过期”。例如迎宾触发的座椅未见数据不等于无人；换挡的刹车旧值不能按持续有效处理。功能自己的期限不同，不能统一套成 500 ms。

功能会识别自身回波，防止把自己修改的输出当成新的原车来源。扭矩 `0x370` 分支比较近 100 ms 输出缓存中的 ID、DLC、8 字节内容；它和 counter 冲突观测是不同机制。

## 过滤 ID 集合不等于报文解码表

`0x4804F4BA → 0x4805934A` 根据配置组合接收过滤 ID 集合。抓包、实验监听也会影响所需 ID／过滤代数。这里出现一个 ID，只能证明某配置需要接收它；信号名称和位布局必须去对应 parser 核对。

`0x480409AE` 根据总线 mask、ID、DLC、MUX 与调用参数识别发送流类。它覆盖多种业务，不能因为座椅模块引用它就将全部识别分支命名为座椅报文。

## 模板修改、owner 和优先级

```c
bool prepare_output(const Source *src, const Intent *intent, Output *out) {
    if (!source_eligible_for_this_feature(src)) return false;
    if (!feature_gates_pass(intent)) return false;
    if (!owner_scope_available(src->bus_mask, src->id, src->mux)) return false;
    *out = clone_source(src);
    modify_only_confirmed_fields(out, intent);
    update_protocol_counter_and_checksum(out);
    bind_source_generation_and_owner_generation(out);
    return true;
}
```

`owner` 表示本固件某业务对特定发送流的控制归属，scope 可包含总线、ID、MUX。不是 CAN 总线物理节点独占权。实验“接管”使固件内置 owner 让行；原车节点仍可能继续发送。

多数业务共用提交入口 `0x4805CB5E`。此入口检查总线、流类、许可、代数并管理 token。**不是所有输出都必须经过它**：PARTY 扭矩的专门分支在 `0x480C5874` 调用 `0x480459FE`，CH `0x3FD MUX0` 的实际 P0 发送由 `fsd_p0` 执行。

实验新增流可选 P1/P2/P3，`255` 继承内置流优先级；P0 限定 CH `0x3FD MUX0`。数值及 scope 是本版本的调度规则，不要推导成全部业务的统一优先级全序。

## 四个结果层次

| 层次 | 含义 | 可用来确认什么 |
|---|---|---|
| HTTP／配置结果 | 参数通过、候选接收或运行命令已排队／应用 | 管理请求的处理状态 |
| `generated`／`accepted` | 输出已生成／发送服务接受提交 | 固件发送生命周期开始 |
| `terminalOk / terminalFail` | 固件报告匹配 token 的 TX 终态 | 对应提交的发送处理结果 |
| 车辆反馈 | 新鲜实际挡位、位置、加热状态等 | 有相应观察链时确认动作效果 |

NVS 的 `stored/persistedGeneration` 是另一个维度。不能把 `202/pending` 当成已落盘，也不能把 `terminalOk` 当成座椅已到位。

```c
void on_terminal(const Receipt *r) {
    Pending *p = find_pending_by_token(r->token);
    if (!p || !matches_current_owner_generation(p, r)) {
        count_late_or_invalidated_receipt();
        return;
    }
    clear_matching_pending(p);
    update_owner_tx_result(p, r);
    advance_feature_according_to_its_state_machine(p, r);
    // 需要动作反馈的功能继续等待车辆反馈。
}
```

公共终态分派证据：`0x480DC4F2`。不同 feature 的全部间接回调链仍有缺口；以上是机制抽象。

## 停止、OTA 与恢复

通信关闭、线序切换、实验停止、座椅停止、预热关闭及 OTA 都涉及在途状态收敛。一般要停止未来输出、使旧 generation 失效、结算 pending，再释放 owner 或改变驱动；各功能的具体退出步骤不同。

OTA prepare 包含 CAN quiesce 和持久化 flush。CAN 已静默、配置已保存、升级 ready、失败后 CAN 已恢复是不同状态。重启及取消不能只按一个开关判断完成。

```c
begin_runtime_stop(reason);
invalidate_future_outputs_for_affected_generations();
settle_required_pending_actions_and_stop_frames();
if (!quiesce_complete) return PENDING;
perform_requested_management_operation();
report_persistence_and_can_restore_results_separately();
```

## 观察与诊断

抓包记录 RX 与 TX 生命周期事件，`lifecycle_events` 不是总线上成功帧数。诊断的 accepted、terminal、source age、lateReceipt、blocked、busy/staleSkip 分别解释，不相加推导物理帧数。

后端 `/runtime_status`、`/status`、`/can_diag`、`/health` 等发布快照，浏览器再用 CSS 显示相位、未知、等待、失败。页面颜色与 disabled 只是显示状态；实际许可由 C 的门控决定。
