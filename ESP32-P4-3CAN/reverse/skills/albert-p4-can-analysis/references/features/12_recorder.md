# CAN抓包、过滤与文件下载

[返回功能目录](../feature-can-map.md#12_recorder) · [Skill 入口](../../SKILL.md)

记录器包含过滤切换、缓冲、停止与下载生命周期。TX的统计单位在rec_status明确为lifecycle_events，不能当成物理总线上成功发送的帧数。

**运行／解析关联函数（模块共享）**：`0x480fd584`、`0x480fd2fc`、`0x480fd37e`、`0x4806c4e8`、`0x4806fee2`

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="rec_filters"></a>
## 1. 包含／排除ID、三路总线和RX／TX

**证据层次**：请求结构与C验证确认。

包含/排除字符串解析标准ID，buses位掩码1/2/4；RX/TX不能同时关闭。duration页面1～3600秒，提交毫秒。非法ID列表拒绝。另保留setRecorderPreset快捷填值函数，设置指定ID/总线、RX+TX及30秒，但未发现页面调用，不能标为可见预设按钮。

**前端入口**：recorderBody · 原 JS L1057、setRecorderPreset · 原 JS L1058。

**C 接口入口**：POST /rec_start · 0x480fd584。

**关键控件／参数**：`recInclude`、`recExclude`、`recBus1Enabled`、`recBus2Enabled`、`recBus3Enabled`、`recRxEnabled`、`recTxEnabled`。

```c
parse_standard_id_lists(include, exclude);
require_nonempty_bus_mask(); require(rx || tx);
duration_ms = clamp(ui_seconds, 1, 3600) * 1000;
filter = make_filter(include, exclude, buses, rx, tx);
```

<a id="rec_start"></a>
## 2. 异步切换过滤器、内存缓冲与开始抓包

**证据层次**：C启动分支确认。

阻止重复开始和下载中开始；分配PSRAM/内部RAM缓冲，启动三路过滤器转换，pending直到filterGeneration实际应用。错误包括buffer_unavailable、filter_transition_failed、pipeline_busy。

**前端入口**：startRec · 原 JS L1066。

**C 接口入口**：POST /rec_start · 0x480fd584、GET /rec_status · 0x4806c4e8。

**关键控件／参数**：`recDurationSec`。

```c
if (active || download_in_progress) return BUSY;
buffer = allocate_recorder_buffer_with_available_memory_strategy();
request_filter_transition_for_three_buses();
if (!filters_applied) return PENDING;
start_capture_and_deadline();
```

<a id="rec_collect"></a>
## 3. 帧与TX生命周期采集、容量和丢弃状态

**证据层次**：接口确认；运行语义重建。

按过滤规则收集RX以及TX提交/终态等事件，发布count、bytes、ring、dropped、optionalSinkRejected、source、stopReason和各bus统计。缓冲满的确切覆盖策略以ring状态与原实现为准。

**前端入口**：pollRec · 原 JS L1065。

**C 接口入口**：GET /rec_status · 0x4806c4e8。

```c
on_optional_can_event(event) {
    if (!recording || !matches_filter(event)) return;
    append_to_recorder_buffer_or_count_drop(event);
}
if (duration_elapsed) stop_capture_with_reason();
publish_count_bytes_ring_and_lifecycle_counters();
```

<a id="rec_stop_clear"></a>
## 4. 停止、清空与运行互斥

**证据层次**：接口确认。

停止后保留已录内容供下载；清空在录制或下载时被拒绝。

**前端入口**：stopRec · 原 JS L1067、clearRec · 原 JS L1068。

**C 接口入口**：POST /rec_stop · 0x480fd45c、POST /rec_clear · 0x4806e04e。

```c
stop() { stop_capture_and_settle_filter_pipeline(); keep_saved_buffer(); }
clear() {
    if (recording || downloading) return BUSY;
    reset_saved_length_counters_and_metadata();
}
```

<a id="rec_download"></a>
## 5. CSV／BIN下载与文件头

**证据层次**：C接口与输出类型确认。

format选择csv或bin；必须已有记录且停止录制，下载互斥。Content-Disposition为p1_3can_recording.csv/bin。BIN不是简单原始CAN payload串联，包含版本/记录结构，未重写导出格式。

**前端入口**：downloadRecorderFile · 原 JS L1070。

**C 接口入口**：GET /rec_download · 0x4806fee2。

```c
if (!saved_recording) return NO_RECORDING;
if (active || download_busy) return BUSY;
lock_download_snapshot();
stream(format == BIN ? versioned_binary_records : csv_records);
unlock_download_snapshot_on_completion_or_disconnect();
```

