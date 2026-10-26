# FSD行程、里程统计与手机时钟

[返回功能目录](../feature-can-map.md#16_records) · [Skill 入口](../../SKILL.md)

记录的数据源与时间锚点位于设备。浏览器只展示与发出明确的reset/clear请求；新bootstrap中NVS擦除态，不能恢复真实行程。精确速度积分、断行程判据和所有采样剔除阈值尚未完整追出。

**运行／解析关联函数（模块共享）**：`0x480b41ec`、`0x480b4abe`、`0x4806ef66`、`0x480d338a`、`0x480d2a5e`、`0x48118d2c`

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="records_view"></a>
## 1. 当前／历史行程、详情、小计与累计

**证据层次**：C字段与前端确认。

序列化字段包括totalMeters、classifiedMeters、fsdMeters、longestFsdMeters、sourceState、tripEndDelayMs、fsdActive、dirty/persisted与history。页面trip/subtotal/cumulative选择是展示，不重新计算车端里程。

**前端入口**：loadFsdRecords · 原 JS L1738。

**C 接口入口**：GET /fsd_records · 0x480b4abe。

**关键控件／参数**：`fsdRecordsRefresh`、`fsdRecordsDetailBack`。

```c
snapshot = read_current_history_subtotal_cumulative();
return_snapshot_with_source_and_persistence_state();
ui_select_view_and_detail(snapshot, selected_range);
```

<a id="records_accumulate"></a>
## 2. 行驶与FSD里程分类累计

**证据层次**：数据结构确认；累计内部算法部分重建。

根据车辆行驶源和FSD状态分类累计，等待稳定结束条件后形成历史行程，更新最长FSD等。以下distance_delta与trip_end_confirmed为未完整恢复的内部计算，不能假定普通浏览器计时积分。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：GET /fsd_records · 0x480b4abe。

```c
on_valid_vehicle_sample() {
    delta = firmware_validated_distance_delta(); // 精确计算尚未完整恢复
    trip.total += delta; cumulative.total += delta; subtotal.total += delta;
    if (classification_known) update_classified_and_fsd_distances(delta);
}
if (trip_end_confirmed_after_configured_delay) finalize_and_persist_trip();
```

<a id="records_clock"></a>
## 3. 手机Unix时钟与设备uptime锚点

**证据层次**：请求字段、浏览器采样与C错误分支确认。

提交bootId、unixMs、uptimeMs；后端拒绝stale_boot、invalid_clock/sample及busy，以启动会话防止跨重启错误锚定。有效锚点帮助显示行程日期，不能恢复没记录过的真实时间。

**前端入口**：fsdPhoneClockSync · 原 JS L1767。

**C 接口入口**：GET /fsd_records/clock · 0x4806c0d4、POST /fsd_records/clock · 0x4806ef66。

```c
clock = GET("/fsd_records/clock");
if (round_trip_ms > 2000) reject_sample();
if (clock.calibrated && clock.source == NETWORK) skip_phone_calibration();
sample = {clock.bootId, unixMs:DateNow() - round_trip_ms/2, clock.uptimeMs};
if (sample.bootId != current_boot) return STALE_BOOT;
validate_clock_and_uptime_sample(sample); store_unix_to_uptime_anchor(sample);
// 成功后5分钟再同步；失败后15秒可重试。
```

<a id="records_subtotal"></a>
## 4. 重置小计

**证据层次**：接口与页面说明确认。

前端对话框与后端confirm=reset；仅重置小计，保留当前、历史和累计。持久化失败单独返回subtotal_reset_failed。

**前端入口**：resetFsdSubtotal · 原 JS L1747。

**C 接口入口**：POST /fsd_records/subtotal/reset · 0x480d2a5e。

**关键控件／参数**：`fsdRecordsSubtotalReset`、`fsdRecordsSubtotalResetConfirm`。

```c
require(request.confirm == "reset"); require_storage_and_not_ota();
reset_subtotal_domain();
if (!persist_subtotal()) return SUBTOTAL_RESET_FAILED;
return(persistence="stored");
```

<a id="records_clear"></a>
## 5. 清空累计与行程历史

**证据层次**：清空接口与云epoch字段确认；跨域提交顺序部分重建。

confirm=clear，清空当前、小计、累计和历史，同时处理云控制/数据epoch，避免旧备份无意复活删除数据；必须确认成功持久化。

**前端入口**：clearFsdRecords · 原 JS L1753。

**C 接口入口**：POST /fsd_records/clear · 0x480d338a。

**关键控件／参数**：`fsdRecordsClear`、`fsdRecordsClearConfirm`。

```c
require(request.confirm == "clear"); require_storage_and_not_ota();
clear_current_subtotal_cumulative_history();
advance_or_record_dataset_wipe_epoch_for_sync();
commit_record_and_cloud_control_storage();
return_stored_or_clear_failed();
```

