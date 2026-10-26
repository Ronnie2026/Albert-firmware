# 座椅手动调节、位置记忆与停止

具体CAN线路、ID、字节/bit与控制数值见[协议字段补充](../../skills/albert-p4-can-analysis/references/control-protocol.md#seats)；其中明确区分已确认字段与剩余缺口。

[返回总览](../README.md)

网页左右各6组双向动作，共24个方向按钮；实际记忆反馈轴以固件状态字段为准，不能据按钮数推断每个方向都有独立位置传感器。十个slot按0～4左座、5～9右座映射。

**运行／解析关联函数（模块共享）**：[`0x48100e14`](../../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)、[`0x48100218`](../../decompiled/functions/48100218_FUN_ram_48100218.c)、[`0x4810051c`](../../decompiled/functions/4810051c_FUN_ram_4810051c.c)、[`0x48100820`](../../decompiled/functions/48100820_FUN_ram_48100820.c)、[`0x48100b10`](../../decompiled/functions/48100b10_FUN_ram_48100b10.c)、[`0x480409ae`](../../decompiled/functions/480409ae_FUN_ram_480409ae.c)、[`0x48041018`](../../decompiled/functions/48041018_FUN_ram_48041018.c)、[`0x4804132a`](../../decompiled/functions/4804132a_FUN_ram_4804132a.c)、[`0x480daefc`](../../decompiled/functions/480daefc_FUN_ram_480daefc.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="seat_enable"></a>
## 1. 座椅功能许可与通道

**证据层次**：配置与接口确认。

seatControlBus为隐藏字段，前端默认2；后端仍读写并验证通道及可发送状态。失效返回seat_disabled或seat_can_unavailable。

**前端入口**：[saveConfig · JS L999](../../recovered_web/dashboard.script0.js#L999)。

**C 接口入口**：[POST /config · 0x48101f34](../../decompiled/functions/48101f34_recovered_http_post_config_48101f34.c)、[GET /status · 0x480c0178](../../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

**关键控件／参数**：`seatMemoryEnabled`、`seatControlBus`。

```c
seat_enabled = configured_enabled && selected_bus_available_for_tx;
if (!configured_enabled) return SEAT_DISABLED;
if (!selected_bus_available_for_tx) return SEAT_CAN_UNAVAILABLE;
```

<a id="seat_manual"></a>
## 2. 24方向按住调节、250ms续租与松开停止

**证据层次**：接口确认；运行语义重建。

data-seat-manual-mask编码方向，action=manual_start持续按住每250ms发送，manual_stop在释放、页面失焦等事件触发。C校验mask、所有者与停止状态，避免相反方向同时生效。完整租约到期值未确认。

**前端入口**：[beginSeatManual · JS L294](../../recovered_web/dashboard.script0.js#L294)、[postSeatManual · JS L292](../../recovered_web/dashboard.script0.js#L292)、[releaseSeatManual · JS L293](../../recovered_web/dashboard.script0.js#L293)、[bindSeatManualControls · JS L295](../../recovered_web/dashboard.script0.js#L295)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)。

```c
pointer_down(button) {
    mask = button.data_seat_manual_mask; POST(manual_start, mask);
    every(250_ms) while_held POST(manual_start, mask);
}
pointer_up_or_page_lost() { stop_keepalive(); POST(manual_stop); }
backend_validate_mask_and_refresh_manual_lease();
on_release_or_expired_lease() send_stop_template();
```

<a id="seat_save"></a>
## 3. 十个位置槽保存与Flash确认

**证据层次**：接口确认；运行语义重建。

save(slot)不是保存名称，而是取当前位置写入位置槽；需要位置和0x4F3模板就绪，异步请求完成后sequence增加，前端等待新sequence和slot状态。

**前端入口**：[triggerSeatAction · JS L291](../../recovered_web/dashboard.script0.js#L291)、[waitSeatActionResult · JS L290](../../recovered_web/dashboard.script0.js#L290)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)、[GET /status · 0x480c0178](../../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

```c
require(slot >= 0 && slot < 10); require_fresh_position_and_4F3_template();
if (seat_action_busy) return SEAT_BUSY;
queue_save_position(slot);
runtime_commit_slot_to_flash_and_publish_new_action_sequence();
ui_wait_for_sequence_and_valid_slot_before_showing_saved();
```

<a id="seat_recall"></a>
## 4. 调用记忆、动作终态与物理输入让行

**证据层次**：接口确认；运行语义重建。

recall要求槽有效；目标已达到则可能不启动动作，否则运行按位置反馈生成调用请求。实时状态提供physicalRequest、recallActive、manualActive，物理输入和失败的精确优先级部分重建。

**前端入口**：[triggerSeatAction · JS L291](../../recovered_web/dashboard.script0.js#L291)、[waitSeatActionResult · JS L290](../../recovered_web/dashboard.script0.js#L290)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)、[GET /status · 0x480c0178](../../decompiled/functions/480c0178_recovered_http_get_status_480c0178.c)。

```c
require_valid_slot(slot);
if (already_at_target_position()) publish_no_motion_success();
else { begin_recall(slot); submit_control_from_fresh_template(); }
on_target_reached_or_cancel_or_fault_or_physical_override() settle_and_stop_recall();
```

<a id="seat_cancel"></a>
## 5. 停止全部手动和记忆动作

**证据层次**：接口确认；运行语义重建。

cancel同时释放前端按住状态，并请求固件安全停止；seat_quiesce_busy表示还在结算。

**前端入口**：[triggerSeatAction · JS L291](../../recovered_web/dashboard.script0.js#L291)、[releaseSeatManual · JS L293](../../recovered_web/dashboard.script0.js#L293)。

**C 接口入口**：[POST /seat_action · 0x48100e14](../../decompiled/functions/48100e14_recovered_http_post_seat_action_48100e14.c)。

**关键控件／参数**：`seatStopButton`。

```c
stop_ui_manual_timer(); clear_held_button();
POST("/seat_action", {action:"cancel"});
backend_cancel_pending_recall_and_manual_requests();
settle_stop_frame_before_reporting_idle();
```

<a id="seat_names"></a>
## 6. 十个槽位名称本地保存

**证据层次**：前端确认。

名称使用t2can-seat-slot-names-v1 localStorage；槽名编辑不向/seat_action发送，不属于NVS位置槽数据。

**前端入口**：[bindSeatSlotNames · JS L208](../../recovered_web/dashboard.script0.js#L208)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

```c
on_slot_name_edit(slot, text) {
    names[slot] = text; local_storage_set("t2can-seat-slot-names-v1", names);
}
```

