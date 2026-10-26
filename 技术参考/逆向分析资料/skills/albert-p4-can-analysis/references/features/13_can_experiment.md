# CAN实验规则、发送、校验与预设

[返回功能目录](../feature-can-map.md#13_can_experiment) · [Skill 入口](../../SKILL.md)

规则按每条选择的总线展开lane，每lane采用本线路真实来源模板并发回原线路。接管仅协调固件内置发送，不会阻止原车节点发送。P0仅限CH 3FD MUX0，由fsd_p0发送；can_rt准备来源与实验逻辑。

**运行／解析关联函数（模块共享）**：`0x480ed598`、`0x480ab7ba`、`0x480ec3f8`、`0x480eb56e`、`0x480eab84`、`0x480e5cfa`、`0x480e6b84`、`0x480dc4f2`、`0x480ac732`

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="experiment_rules"></a>
## 1. 最多4规则、每规则3路与标准ID

**证据层次**：前端与后端结构确认。

每规则指定标准11位ID、buses、DLC及模式；删除/编辑导致已确认generation失效。至少一条，最多四条，每条最多三个lane。

**前端入口**：canExperimentCollect · 原 JS L80、canExperimentAddRule · 原 JS L74、canExperimentRemoveRule · 原 JS L75。

**C 接口入口**：POST /api/can-experiment/listen · 0x480ed598。

```c
require(1 <= rule_count && rule_count <= 4);
for (rule in rules) { require(id <= 0x7ff && buses_mask != 0); expand_bus_lanes(rule); }
on_rule_edit() { confirmed_generation = 0; disable_start_button(); }
```

<a id="experiment_listen"></a>
## 2. 来源监听、停止监听与来源确认

**证据层次**：接口确认；运行语义重建。

监听按lane缓存最新帧、DLC、稳定来源帧和周期；确认来源返回DLC。状态提供waiting_bus/template、templateAgeMs、observedPeriodMs、sourceConfirmed。

**前端入口**：canExperimentListen · 原 JS L84、canExperimentConfirmSource · 原 JS L85。

**C 接口入口**：POST /api/can-experiment/listen · 0x480ed598、POST /api/can-experiment/listen/stop · 0x480ecf86、POST /api/can-experiment/source/confirm · 0x480ab7ba。

```c
listen(rules) { register_optional_source_observers(); state = LISTENING; }
on_real_source_frame(bus, id) { update_lane_template_dlc_period_and_stability(); }
confirm(rule) { require_acceptable_source(); mark_source_confirmed(); return_dlc(); }
stop_listen() { unregister_observers_when_settled(); }
```

<a id="experiment_bits"></a>
## 3. 按位匹配与修改掩码

**证据层次**：按位语义确认；全部保留位规则参照原验证函数。

每位为不关心/0/1；matchMask/value筛选来源，editMask/value修改输出。3FD/3C2的未改MUX匹配位可缩小接管范围；不能修改MUX位。

**前端入口**：canExperimentCycleBit · 原 JS L76、canExperimentCompileBits · 原 JS L78、canExperimentCollect · 原 JS L80。

**C 接口入口**：POST /api/can-experiment/validate · 0x480ec3f8。

```c
if ((source_bytes & match_mask) != (match_value & match_mask)) return NO_MATCH;
output_bytes = (source_bytes & ~edit_mask) | (edit_value & edit_mask);
reject_illegal_mux_edits_or_overlapping_reserved_fields();
```

<a id="experiment_validate"></a>
## 4. 确认修改、错误／警告和generation

**证据层次**：接口与前端确认。

后端检查规则、lane互冲突、DLC、counter/checksum、内置owner限制，返回errors/warnings和generation；前端有generation才允许开启。

**前端入口**：canExperimentValidate · 原 JS L86。

**C 接口入口**：POST /api/can-experiment/validate · 0x480ec3f8。

```c
errors, warnings = validate_rules_and_cross_rule_resources(candidate);
if (errors) return VALIDATION_FAILED;
confirmed_generation = publish_validated_candidate_generation();
return(confirmed_generation, warnings);
```

<a id="experiment_start"></a>
## 5. 必须匹配已确认版本才能开始

**证据层次**：启动代数检查与状态接口确认。

提交confirmedGeneration和规则，后端比较已验证版本，拒绝编辑后旧版本。运行分waiting_bus/template/builtin_owner等lane状态，可恢复异常仅暂停对应lane。

**前端入口**：canExperimentStart · 原 JS L87。

**C 接口入口**：POST /api/can-experiment/start · 0x480eb56e。

```c
require(request.confirmedGeneration == validated_generation);
require(request_rules_match_validated_candidate());
state = RUNNING;
for (lane in lanes) reevaluate_bus_template_and_builtin_owner_readiness();
```

<a id="experiment_modes"></a>
## 6. 单次／跟随／周期、延迟与模板超时

**证据层次**：接口确认；运行语义重建。

mode0单次、1跟随、2固定周期；period页面5～60000ms，template timeout0自动或≤5000ms，delayUs≤5000000，strict要求所选线路同时就绪。运行区分staleSkip、busySkip、delayedSuperseded。

**前端入口**：canExperimentCollect · 原 JS L80。

**C 接口入口**：POST /api/can-experiment/start · 0x480eb56e、GET /api/can-experiment/status · 0x480acf1c。

```c
if (strict && !all_selected_lanes_ready) pause_rule();
for (lane in ready_lanes) {
    trigger = mode == SINGLE ? !lane.single_completed :
              mode == FOLLOW ? new_source_generation : period_due;
    if (!trigger || template_expired()) continue;
    if (delay_us) schedule_generation_bound_delayed_output();
    else submit_generated_output();
}
if (new_source_supersedes_delayed_output) invalidate_old_delayed_generation();
```

<a id="experiment_counter"></a>
## 7. 原值偏移／独立自增计数器

**证据层次**：接口确认；运行语义重建。

可选字节、起bit、宽度1～8、步长、初值、min/max和offset；先生成编辑后的输出再按配置处理计数器字段。确认／失败时具体独立计数器推进点尚未完全核对。

**前端入口**：canExperimentCollect · 原 JS L80。

**C 接口入口**：POST /api/can-experiment/validate · 0x480ec3f8。

```c
mask = bitfield_mask(counter_bit, counter_width);
if (mode == SOURCE_OFFSET) value = normalize_counter(source_counter + offset);
if (mode == INDEPENDENT) value = lane_counter_with_configured_bounds;
replace_counter_field(output, value, mask);
// 独立计数器推进以原运行实现的提交／确认边界为准。
```

<a id="experiment_checksums"></a>
## 8. SUM／XOR／CRC8及反射参数

**证据层次**：接口确认；运行语义重建。

选择参与字节掩码、输出字节、add/xor，CRC还指定多项式、初值、refIn/refOut、includeId。必须用修改后的帧参与校验，输出字节是否排除及CAN ID字节序由实现确定，未编造统一规则。

**前端入口**：canExperimentCollect · 原 JS L80。

**C 接口入口**：POST /api/can-experiment/validate · 0x480ec3f8。

```c
selected = checksum_input_bytes_after_edit_and_counter(output);
switch (checksum_mode) {
case SUM: value = sum8(selected); break;
case XOR: value = xor8(selected); break;
case CRC8: value = configured_crc8(selected, poly, init, ref_in, ref_out, include_id); break;
}
output[checksum_output] = finalize_with_configured_add_and_xor(value);
// SUM/CRC输入细节和finalize顺序须以原实现校对。
```

<a id="experiment_takeover"></a>
## 9. 内置发送接管、优先级继承和停止结算

**证据层次**：前端说明、状态与结算辅助函数确认。

内置流按线路/ID/MUX让行；新增报文P1/2/3，255继承；P0固定在CH3FD MUX0。停止进入stopping，等待pending token结算后解除接管，防止旧回执影响新owner。

**前端入口**：canExperimentCollect · 原 JS L80、canExperimentStop · 原 JS L88。

**C 接口入口**：POST /api/can-experiment/start · 0x480eb56e、POST /api/can-experiment/stop · 0x480eab84。

```c
acquire_selected_builtin_owner_scopes();
priority = existing_stream ? inherited_priority : configured_P1_P2_P3;
if (scope == CH_3FD_MUX0) route_actual_send_through_fsd_p0();
stop() { invalidate_future_outputs(); state = STOPPING; }
when_all_pending_tokens_settled() { release_takeover(); state = STOPPED; }
```

<a id="experiment_metrics"></a>
## 10. 逐lane来源／输出与延迟、终态计数

**证据层次**：C状态字段确认。

generated、accepted、rejected、terminalOk/Fail、busy/staleSkip、DLC mismatch、accepted与terminal latency分别展示。独立生成帧不能算发送成功。

**前端入口**：canExperimentPollStatus · 原 JS L119。

**C 接口入口**：GET /api/can-experiment/status · 0x480acf1c。

```c
on_generate() generated++;
on_submit(result) result.accepted ? accepted++ : rejected++;
on_terminal(result) result.ok ? terminal_ok++ : terminal_fail++;
publish_each_lane_source_output_age_latency_and_pending_token();
```

<a id="experiment_presets"></a>
## 11. 8预设载入／保存／改名／删除与异步持久化

**证据层次**：预设接口与代数确认。

预设记录occupied、valid、name、generation、persistedGeneration、persistencePending；保存接受内存态与写入Flash完成是两阶段，前端轮询确认。

**前端入口**：canExperimentLoadPresets · 原 JS L133、canExperimentPresetAction · 原 JS L143、canExperimentPresetDelete · 原 JS L144。

**C 接口入口**：GET /api/can-experiment/presets · 0x4806da0c、POST /api/can-experiment/presets · 0x480ac732、DELETE /api/can-experiment/presets · 0x4808a37e。

**关键控件／参数**：`canExperimentPresetSlot`、`canExperimentPresetName`。

```c
preset_action(slot, action) {
    validate_slot_0_to_7_and_current_quiesce_state();
    if (action == SAVE) replace_preset_with_rules_and_name();
    if (action == LOAD) return_rules_for_ui_editing_and_revalidation();
    if (action == RENAME) update_name();
    if (action == DELETE) clear_slot();
    enqueue_persistence_generation();
}
poll_until_persisted_generation_catches_up();
```

