# 本地／在线OTA、启动验证与重启

[返回总览](../README.md)

本地上传还有独立upload callback，见路由附表，不能只读POST /ota/upload最终响应函数。升级和重启采用停止CAN、结算、刷写持久数据、恢复／提交／重启流程；新应用需启动健康验证。

**运行／解析关联函数（模块共享）**：[`0x480ffd82`](../../decompiled/functions/480ffd82_recovered_http_post_ota_start_480ffd82.c)、[`0x48064780`](../../decompiled/functions/48064780_FUN_ram_48064780.c)、[`0x480ff860`](../../decompiled/functions/480ff860_recovered_http_post_ota_upload_480ff860.c)、[`0x480ff590`](../../decompiled/functions/480ff590_recovered_http_post_ota_cancel_480ff590.c)、[`0x480fe83a`](../../decompiled/functions/480fe83a_FUN_ram_480fe83a.c)、[`0x480fed16`](../../decompiled/functions/480fed16_FUN_ram_480fed16.c)、[`0x4807be92`](../../decompiled/functions/4807be92_recovered_http_post_ota_online_install_4807be92.c)、[`0x4811aede`](../../decompiled/functions/4811aede_recovered_runtime_service.c)、[`0x480ffb40`](../../decompiled/functions/480ffb40_recovered_http_post_reboot_480ffb40.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="ota_identity"></a>
## 1. 固件身份、槽位、容量、状态和会话令牌

**证据层次**：C状态字段确认。

status包括version/buildVersion、sourceCommit、appElfSha256、bootSlot/targetSlot、maxSize、token、pendingVerify和state/bytes/error，令牌用于X-T2CAN-OTA-Token。

**前端入口**：[loadOtaStatus · JS L1121](../../recovered_web/dashboard.script0.js#L1121)。

**C 接口入口**：[GET /ota/status · 0x4806bbf8](../../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

```c
publish_running_boot_target_partition_identity_and_ota_state();
ui_use_reported_maxSize_and_token();
```

<a id="ota_file"></a>
## 2. 本地BIN的浏览器预检查

**证据层次**：前端字节检查确认。

文件名.bin、至少288字节、不超过maxSize；offset0魔数E9，offset12芯片ID18，offset32描述符ABCD5432。bootstrap合并镜像不能作为application-only OTA上传。此预检不能替代完整镜像验证。

**前端入口**：[validateOtaFile · JS L1122](../../recovered_web/dashboard.script0.js#L1122)。

**C 接口入口**：无新增HTTP请求；由浏览器或共用运行任务完成。

**关键控件／参数**：`otaFile`。

```c
require(extension == ".bin" && 288 <= size && size <= maxSize);
require(byte[0] == 0xE9);
require(le16(bytes + 12) == 0x12);
require(le32(bytes + 32) == 0xABCD5432);
```

<a id="ota_prepare"></a>
## 3. 令牌授权、CAN停止、持久化flush与ready

**证据层次**：C准备入口确认。

检查授权、boot pending verify、session generation、Wi-Fi转换与CAN readiness；安全停止CAN和刷写待持久化项后才ready并签发当前会话令牌。失败尝试恢复CAN并区分can_restore/persistence_flush。

**前端入口**：[startOta · JS L1132](../../recovered_web/dashboard.script0.js#L1132)。

**C 接口入口**：[POST /ota/start · 0x480ffd82](../../decompiled/functions/480ffd82_recovered_http_post_ota_start_480ffd82.c)。

```c
require_valid_ota_token_and_no_pending_boot_verification();
if (wifi_transition_or_other_ota || !can_ready) return BUSY;
start_session_generation(); state = PREPARING;
if (!quiesce_can_and_settle()) fail(CAN_QUIESCE);
if (!flush_pending_persistence()) fail_and_restore(PERSISTENCE_FLUSH);
state = READY; return_current_session_token();
```

<a id="ota_upload"></a>
## 4. 分块写入、结束验证、提交启动槽与重启

**证据层次**：流式C长度／镜像头／会话分支确认；完整库验证细节见原C。

XHR超时180秒，上传进度最高99%。C流式回调0x48064780检查连接标识和session generation，严格解析Content-Length并限制在分区容量内，先收齐24字节镜像头检查E9及chip ID18，再按实际写入长度累计。结束要求收到长度=声明长度=Flash写入长度，end验证成功后进入committed。回调还设置120秒会话期限，这与浏览器180秒XHR超时不同。只有最终响应ok且bytes与文件长度一致才显示完成。

**前端入口**：[startOta · JS L1132](../../recovered_web/dashboard.script0.js#L1132)。

**C 接口入口**：[POST /ota/upload · 0x480ff860](../../decompiled/functions/480ff860_recovered_http_post_ota_upload_480ff860.c)。

**关键控件／参数**：`otaStart`。

```c
upload_begin() {
    require_session_token_ready_and_connection_generation();
    expected = parse_decimal_Content_Length_with_overflow_and_partition_bound();
    require(expected >= 24); begin_update(expected); deadline = now + 120000_ms;
}
chunk(data) {
    require_same_connection_and_generation_and_remaining_length();
    collect_first_24_bytes(); require(header.magic == 0xE9 && header.chip_id == 18);
    written += write_update(data); require_full_chunk_write(); received += chunk_length;
}
end() {
    require(header_checked && received == expected && written == expected);
    if (Update_end_and_image_validation_succeed()) state = COMMITTED; else fail();
}
final_handler() {
    require_committed(); respond(ok=true, bytes=written, rebooting=true); schedule_reboot();
}
```

<a id="ota_cancel"></a>
## 5. 取消、失败恢复和结果不确定回读

**证据层次**：C取消分支与前端确认。

取消需当前令牌，未活动拒绝；已提交且等待重启不能撤销。上传断线时前端明确结果未确认，重新连接检查版本和状态；取消失败不意味着固件一定未写入。

**前端入口**：[startOta · JS L1132](../../recovered_web/dashboard.script0.js#L1132)。

**C 接口入口**：[POST /ota/cancel · 0x480ff590](../../decompiled/functions/480ff590_recovered_http_post_ota_cancel_480ff590.c)、[GET /ota/status · 0x4806bbf8](../../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

```c
if (committed_reboot_pending) return CANNOT_CANCEL_COMMITTED;
if (!active_session || token_invalid) return ERROR;
abort_write_if_active(); restore_can_and_mark_cancelled();
on_network_uncertainty() read_ota_state_and_identity_after_reconnect();
```

<a id="ota_online"></a>
## 6. 在线检查、升级提示与管理目标一致性

**证据层次**：在线接口确认；完整下载链部分重建。

需联网，无待验证或占用；check异步进入checking；install要求已发现available，重新检查management目标、版本/commit及release合法性，然后进入准备和下载。完整服务端release格式未全部恢复。

**前端入口**：[checkOnlineOta · JS L1119](../../recovered_web/dashboard.script0.js#L1119)、[installOnlineOta · JS L1120](../../recovered_web/dashboard.script0.js#L1120)、[closeOnlineOtaUpdateModal · JS L1114](../../recovered_web/dashboard.script0.js#L1114)、[installOnlineOtaFromPrompt · JS L1116](../../recovered_web/dashboard.script0.js#L1116)。

**C 接口入口**：[GET /ota/online/status · 0x480bdfce](../../decompiled/functions/480bdfce_recovered_http_get_ota_online_status_480bdfce.c)、[POST /ota/online/check · 0x4806b9ae](../../decompiled/functions/4806b9ae_recovered_http_post_ota_online_check_4806b9ae.c)、[POST /ota/online/install · 0x4807be92](../../decompiled/functions/4807be92_recovered_http_post_ota_online_install_4807be92.c)。

**关键控件／参数**：`onlineOtaCheck`、`onlineOtaInstall`。

```c
check() { require_connected_and_idle(); queue_online_release_check(); }
install() {
    require_available_checked_release();
    if (management_target_changed) return MANAGEMENT_TARGET_CHANGED;
    validate_release_identity_and_reject_already_current();
    queue_online_prepare_download_verify_commit();
}
poll_online_state_and_show_upgrade_prompt();
```

<a id="ota_boot_health"></a>
## 7. 启动后120秒健康验证与回滚

**证据层次**：C期限与健康门控确认。

0x4811aede对待验证镜像做运行健康检查，涉及CAN、任务心跳、P0结算和持久化状态；120000ms期限内不能达到健康则走失败/回滚，而非无条件标记有效。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[GET /health · 0x480c2bda](../../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)、[GET /ota/status · 0x4806bbf8](../../decompiled/functions/4806bbf8_recovered_http_get_ota_status_4806bbf8.c)。

```c
if (boot_pending_verify) {
    if (all_required_runtime_health_conditions_hold()) mark_new_app_valid();
    else if (boot_health_elapsed >= 120000_ms) request_rollback_or_safe_failure_path();
}
```

<a id="reboot"></a>
## 8. 重启请求、安全停止和实际重启确认

**证据层次**：C入口与前端确认。

OTA/已重启请求拒绝；停止CAN并flush持久化失败则恢复并返回错误。浏览器通过启动会话变化确认实际重启，收到HTTP ok本身不算重启已发生。

**前端入口**：[rebootBoard · JS L1055](../../recovered_web/dashboard.script0.js#L1055)、[rebootWaitForConfirmation · JS L1054](../../recovered_web/dashboard.script0.js#L1054)。

**C 接口入口**：[POST /reboot · 0x480ffb40](../../decompiled/functions/480ffb40_recovered_http_post_reboot_480ffb40.c)、[GET /health · 0x480c2bda](../../decompiled/functions/480c2bda_recovered_http_get_health_480c2bda.c)。

**关键控件／参数**：`rebootButton`。

```c
if (ota_busy || reboot_busy) return BUSY;
if (!quiesce_can()) return CAN_QUIESCE;
if (!flush_persistence()) { restore_can(); return PERSISTENCE_FLUSH; }
respond_rebooting_then_schedule_reset();
ui_wait_for_disconnect_and_changed_boot_session();
```

