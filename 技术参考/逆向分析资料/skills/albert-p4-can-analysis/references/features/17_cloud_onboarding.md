# 云同步、备份恢复、冲突与首次引导

[返回功能目录](../feature-can-map.md#17_cloud_onboarding) · [Skill 入口](../../SKILL.md)

云端后台worker 0x48118d2c 包含settings_backup、records_backup、user_restore、conflict_resolution及outbox/ack/epoch等证据。请求queued/pending不是同步完成。旧agent GET仍返回capabilities，POST固定405，不能删除为不存在或宣称旧接口可写。

**运行／解析关联函数（模块共享）**：`0x480b3dca`、`0x480b3b14`、`0x480b6d24`、`0x480d103e`、`0x4808e6ee`、`0x4808e07e`、`0x48118d2c`

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="cloud_identity"></a>
## 1. 设备ID、云网页地址与复制

**证据层次**：前端与接口确认。

状态生成设备身份与用户网页入口；复制ID/URL为浏览器剪贴板操作，打开云网页是外部链接，均不新增固件动作。

**前端入口**：cloudLoadStatus · 原 JS L1650。

**C 接口入口**：GET /cloud/status · 0x480d0b14。

**关键控件／参数**：`cloudDeviceId`、`cloudWebUrl`、`cloudCopyButton`、`cloudCopyUrl`。

```c
status = GET("/cloud/status"); render_device_identity_and_web_url(status);
on_copy() browser_clipboard_write(selected_text);
```

<a id="cloud_config"></a>
## 2. 服务URL、产品根Token、清除凭据和15～300秒周期

**证据层次**：统一配置入口与字段确认。

配置受开发者流程约束，读接口只返回tokenConfigured而非明文凭据。写入URL、token/clearToken、intervalSec等，generation与持久化状态分开。

**前端入口**：cloudLoadConfig · 原 JS L1652、cloudSaveConfig · 原 JS L1653。

**C 接口入口**：GET /cloud/config · 0x480b4fa4、POST /cloud/config · 0x480b3e2c。

**关键控件／参数**：`cloudUrl`、`cloudToken`、`cloudInterval`、`cloudClearToken`、`cloudSaveButton`。

```c
authorize_required_developer_request(); validate_url_token_and_interval();
if (clear_token) remove_saved_token(); else if (new_token_present) replace_token();
increment_config_generation(); persist_unified_cloud_backend_configuration();
return_configured_flags_and_persistence();
```

<a id="cloud_test"></a>
## 3. 测试v2连接

**证据层次**：接口确认；全部网络调用细节未列出。

按已保存/草稿连接配置测试v2后端，并报告认证/网络结果；成功测试不等于备份已同步或恢复成功。下列伪代码保留连接测试的主要流程，完整网络错误映射未恢复。

**前端入口**：cloudTestConnection · 原 JS L1654。

**C 接口入口**：POST /cloud/test · 0x4811e15c。

**关键控件／参数**：`cloudTestButton`。

```c
validate_test_configuration_and_access();
request_v2_connectivity_test();
return_connectivity_authentication_result();
```

<a id="cloud_sync"></a>
## 4. 自动同步开关、立即同步及后台ack

**证据层次**：C排队分支与worker证据确认。

关闭保留本地数据和连接配置。立即上传需enabled、URL和token、无OTA，返回queued=true；worker构造状态/设置/记录差量，跟踪awaiting_ack与持久化基线。

**前端入口**：cloudSetEnabled · 原 JS L1658、cloudUploadNow · 原 JS L1659。

**C 接口入口**：POST /cloud/enabled · 0x480b3e6c、POST /cloud/upload · 0x4808cf68、GET /cloud/status · 0x480d0b14。

**关键控件／参数**：`cloudEnabled`、`cloudUploadButton`。

```c
set_enabled(on) { persist_configuration_with_new_generation(); }
upload_now() {
    require(enabled && url_configured && token_configured && !ota_busy);
    mark_upload_due(); return(queued=true);
}
worker_tick() { build_payload_and_outbox(); send_v2(); consume_ack_and_update_baseline(); }
```

<a id="cloud_restore"></a>
## 5. 设置驾驶员／FSD记录恢复、范围和request_id

**证据层次**：C参数/错误与worker字段确认。

confirmation=restore，scopes选settings/records，backup_revision可latest，请求带request_id。拒绝ID冲突、已有恢复或本地变更；回执queued、persistence pending、restore_id，之后按同一ID跟踪完成范围。

**前端入口**：cloudRestoreSettings · 原 JS L1644。

**C 接口入口**：POST /cloud/settings/restore · 0x480b6d24、GET /cloud/status · 0x480d0b14。

**关键控件／参数**：`cloudRestoreScopeSettings`、`cloudRestoreScopeRecords`、`cloudSettingsRestoreConfirm`、`cloudRestoreConfirmButton`。

```c
require(confirmation == "restore" && valid_scopes && valid_request_id);
reject_if_local_changed_or_restore_busy_or_id_collision();
queue_restore(request_id, scopes, selected_backup_revision);
return(queued=true, persistence="pending", restore_id=request_id);
worker_verify_backup_hash_and_apply_selected_domains();
ui_poll_matching_restore_id_completed_scopes_and_failures();
```

<a id="cloud_conflicts"></a>
## 6. 查看冲突、保留设备／应用云端

**证据层次**：C接口分支确认。

command_id配action=keep_device/apply_cloud；冲突不存在、device_unsaved、resolution_pending、restore_busy_or_local_changed独立拒绝。保存resolution记录后后台处理并ack。

**前端入口**：cloudLoadSettingsConflicts · 原 JS L1637、cloudResolveSettingsConflict · 原 JS L1638。

**C 接口入口**：GET /cloud/settings/conflicts · 0x480b31d8、POST /cloud/settings/conflict · 0x480d103e。

**关键控件／参数**：`cloudSettingsConflictsRefresh`。

```c
conflict = lookup_pending_conflict(command_id);
require_action_one_of("keep_device", "apply_cloud");
require_no_unsaved_local_change_and_no_pending_restore();
persist_resolution_intent(command_id, action);
return(queued=true); worker_resolve_and_ack();
```

<a id="cloud_generations"></a>
## 7. 设置revision/epoch、记录epoch与本地草稿保护

**证据层次**：字段与前端代数确认；完整远端协议未恢复。

前端以epoch/revision识别同步状态及本地待同步，旧状态不覆盖新草稿。worker有settings_revision/content_sha256、records_dataset_epoch/wipe_epoch/revision等用于备份和重置一致性。完整云协议事务保证不能只凭字符串确认。

**前端入口**：managementSyncCloudSettings · 原 JS L895、cloudLoadStatus · 原 JS L1650。

**C 接口入口**：GET /cloud/status · 0x480d0b14、GET /management/status · 0x480b2722。

```c
when_cloud_status_arrives() {
    key = settings_epoch + device_revision;
    if (local_dirty_or_save_busy) defer_remote_config_readback();
    else GET_config_with_edit_generation_and_management_generation_checks();
}
worker_bind_payload_and_ack_to_resource_epoch_revision_and_hash();
// cloudMarkSettingsSaved 仅见 typeof 保护的可选调用；本页未定义。
```

<a id="cloud_legacy"></a>
## 8. 旧agent能力查询与废弃写入口

**证据层次**：C完整短处理函数确认。

GET检查资源可用后调用0x4808e6ee返回capabilities/configured/origin，资源不足503 resource_wait。POST始终405 unified_backend_use_cloud_config。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：GET /cloud/agent/config · 0x4808eb2e、POST /cloud/agent/config · 0x4808cf44。

```c
GET_agent_config() { authorize(); if (!resources) return 503; return_capabilities(); }
POST_agent_config() { authorize(); return 405("unified_backend_use_cloud_config"); }
```

<a id="onboarding"></a>
## 9. 首次联网／新用户／稍后／恢复完成引导

**证据层次**：C持久化与前端流程确认。

状态持久化到p4_data/p4_onboard；choice=new/later/restored，restored需恢复完成；重复冲突choice_already_stored。Wi-Fi步骤复用网络接口，不是另外一套连接实现。

**前端入口**：onboardingStart · 原 JS L1606、onboardingConnectWifi · 原 JS L1609、onboardingCompleteChoice · 原 JS L1607、onboardingResumeAfterWifi · 原 JS L1610。

**C 接口入口**：GET /onboarding/status · 0x4808d6c6、POST /onboarding/complete · 0x4808e07e。

**关键控件／参数**：`onboardingConnectWifi`、`onboardingSkipWifi`、`onboardingNew`、`onboardingLater`、`onboardingRestore`、`onboardingCompleteRetry`、`wifiOnboardingContinue`。

```c
s = GET("/onboarding/status"); if (!s.completed) show_onboarding_steps();
if (network_step) reuse_wifi_connect_and_wait_status();
complete(choice) {
    require_valid_choice_and_storage();
    if (choice == RESTORED) require_selected_restore_completed();
    prevent_conflicting_existing_choice(); persist_onboarding_choice();
}
```
