# AP热点、外部Wi-Fi和网络状态

[返回总览](../README.md)

ESP32-P4通过ESP-Hosted/esp_wifi_remote及SDIO无线协处理器联网。网页请求驱动异步网络状态，不能将HTTP成功等同于已经连上网络。

**运行／解析关联函数（模块共享）**：[`0x480f38e4`](../../decompiled/functions/480f38e4_recovered_http_post_wifi_connect_480f38e4.c)、[`0x480f3d2c`](../../decompiled/functions/480f3d2c_recovered_http_post_wifi_ap_config_480f3d2c.c)、[`0x480334d2`](../../decompiled/functions/480334d2_FUN_ram_480334d2.c)、[`0x48030bc0`](../../decompiled/functions/48030bc0_FUN_ram_48030bc0.c)

下列伪代码中的语义函数名由分析者命名，表示已经确认或注明推测的步骤，不是恢复出的原始符号。关联函数可能通过间接调用接入；未证明每个功能都直接调用本节列出的全部函数。

<a id="wifi_status"></a>
## 1. AP/STA状态与异步扫描结果

**证据层次**：状态接口与前端确认。

状态包含enabled、connected/connecting、SSID/IP、AP clients、retryDeferredForAp、scanState/networks、connectAttempts、lastDisconnectReason和configurationGeneration。

**前端入口**：[loadWifiStatus · JS L1083](../../recovered_web/dashboard.script0.js#L1083)。

**C 接口入口**：[GET /wifi/status · 0x48066f4c](../../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c)。

```c
snapshot = read_wifi_state_and_scan_cache();
return_snapshot_without_starting_new_scan();
ui_apply_only_latest_request_sequence(snapshot);
```

<a id="wifi_scan"></a>
## 2. 扫描附近网络与列表选择

**证据层次**：接口与前端确认。

POST开始扫描，结果通过status轮询；OTA期间拒绝。列表选择填充SSID，不自动发出连接请求。

**前端入口**：[scanWifi · JS L1086](../../recovered_web/dashboard.script0.js#L1086)。

**C 接口入口**：[POST /wifi/scan · 0x4806b7e4](../../decompiled/functions/4806b7e4_recovered_http_post_wifi_scan_4806b7e4.c)、[GET /wifi/status · 0x48066f4c](../../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c)。

**关键控件／参数**：`wifiScan`、`wifiNetworkList`。

```c
if (ota_busy) return OTA_BUSY;
request_async_scan();
on_scan_complete() publish_network_cache_and_scan_state();
on_ui_select_network() copy_ssid_to_draft();
```

<a id="wifi_connect"></a>
## 3. 启用STA、保存SSID密码与连接

**证据层次**：接口确认；运行语义重建。

SSID必填；配置保存失败返回flash_write，连接结果异步报告。状态提供连接重试、AP客户端导致延迟等；避免把完整重试策略简化为阻塞connect()。

**前端入口**：[connectWifi · JS L1087](../../recovered_web/dashboard.script0.js#L1087)。

**C 接口入口**：[POST /wifi/connect · 0x480f38e4](../../decompiled/functions/480f38e4_recovered_http_post_wifi_connect_480f38e4.c)。

**关键控件／参数**：`wifiExternalEnabled`、`wifiSsid`、`wifiPassword`、`wifiConnect`。

```c
require_ssid(); parse_network_credentials();
if (!persist_external_wifi_settings()) return FLASH_WRITE;
request_sta_enabled_and_connect_transition();
return_OK_for_accepted_request();
network_service_tick_updates_connect_retry_and_ap_deferral();
```

<a id="wifi_disconnect_forget"></a>
## 4. 断开与忘记网络

**证据层次**：C接口与前端确认。

断开和忘记各有持久化流程；前者停止连接，后者移除保存的网络凭据。页面隐藏／启用和后端状态仍须回读核对。

**前端入口**：[disconnectWifi · JS L1088](../../recovered_web/dashboard.script0.js#L1088)、[forgetWifi · JS L1089](../../recovered_web/dashboard.script0.js#L1089)。

**C 接口入口**：[POST /wifi/disconnect · 0x480f2624](../../decompiled/functions/480f2624_recovered_http_post_wifi_disconnect_480f2624.c)、[POST /wifi/forget · 0x480f2918](../../decompiled/functions/480f2918_recovered_http_post_wifi_forget_480f2918.c)。

**关键控件／参数**：`wifiDisconnect`、`wifiForget`。

```c
disconnect() { persist_disabled_or_disconnected_preference(); request_sta_disconnect(); }
forget() { clear_saved_ssid_and_password(); persist(); request_disconnect(); }
```

<a id="wifi_ap_password"></a>
## 5. 热点密码保存及异步重启

**证据层次**：C接口确认。

AP SSID为Albert-P4-FSD；非空新密码限定8～63字符，空输入保留原密码。检查ap_restart_pending、OTA；持久化成功返回HTTP202、apRestarting=true，约250ms后触发热点重启。密码改变同时清空网页登录会话；持久化失败恢复原密码。

**前端入口**：[saveWifiAp · JS L1084](../../recovered_web/dashboard.script0.js#L1084)。

**C 接口入口**：[POST /wifi/ap-config · 0x480f3d2c](../../decompiled/functions/480f3d2c_recovered_http_post_wifi_ap_config_480f3d2c.c)。

**关键控件／参数**：`wifiApPassword`、`wifiApSave`。

```c
validate_ap_password_by_backend_policy();
if (restart_pending || ota_busy) return BUSY;
if (!persist_ap_password()) return PREFERENCES_WRITE;
queue_ap_restart_after_response(); return(apRestarting=true);
```

<a id="wifi_ap_autooff"></a>
## 6. 联网5分钟后关闭AP及客户端保留

**证据层次**：前端说明与状态确认；全部AP恢复边沿部分重建。

页面规定外部Wi-Fi连接成功5分钟后关AP，手机仍连接时保持；状态提供apDisableInSec与apClients，运行重新评估连接/客户端条件。

**前端入口**：[setWifiApAutoOff · JS L1085](../../recovered_web/dashboard.script0.js#L1085)。

**C 接口入口**：[POST /wifi/ap-auto-off · 0x480f2c14](../../decompiled/functions/480f2c14_recovered_http_post_wifi_ap_auto_off_480f2c14.c)、[GET /wifi/status · 0x48066f4c](../../decompiled/functions/48066f4c_recovered_http_get_wifi_status_48066f4c.c)。

**关键控件／参数**：`wifiApAutoOff`。

```c
if (auto_off && sta_connected && ap_clients == 0 && connected_for >= 5_minutes)
    request_ap_stop();
else keep_ap_according_to_connectivity_and_client_policy();
publish_remaining_ap_disable_seconds();
```

<a id="captive_portal"></a>
## 7. 手机联网探测入口与热点首页

**证据层次**：C路由与目标确认。

三个兼容路由共享0x48067692，返回Location=http://100.100.1.1/以引导手机打开管理页。

**前端入口**：DOM／CSS或设备运行逻辑，未列独立调用函数。

**C 接口入口**：[ANY /generate_204 · 0x48067692](../../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c)、[ANY /gen_204 · 0x48067692](../../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c)、[ANY /hotspot-detect.html · 0x48067692](../../decompiled/functions/48067692_recovered_http_any_generate_204_48067692.c)。

```c
on_captive_probe() { redirect("http://100.100.1.1/"); }
```

