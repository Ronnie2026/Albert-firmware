#pragma once
#include <Arduino.h>
#include <ArduinoJson.h>
#include <Preferences.h>
#include <WiFi.h>
#include <esp_wifi.h>
#include "wifi_settings.h"

namespace gateway
{
// 仅由 setup/Web loop 调用；WiFi 驱动在自己的任务中异步连接和扫描。
class GatewayWifi
{
public:
    enum class Action { None, Connect, Disconnect, Forget };

    bool begin(const char *apSsid, const char *apPassword)
    {
        apName = apSsid;
        WiFi.persistent(false); // 凭据只由本模块的单个 NVS blob 管理。
        WiFi.setAutoReconnect(false);
        WiFi.mode(WIFI_AP_STA);
        WiFi.setHostname("can-gateway");
        WiFi.disconnect(false, true);
        apReady = WiFi.softAP(apSsid, apPassword);
        Preferences prefs;
        if (prefs.begin("gateway-wifi", true))
        {
            hasSaved = prefs.getBytesLength("credentials") == sizeof(saved) &&
                       prefs.getBytes("credentials", &saved, sizeof(saved)) == sizeof(saved) && saved.valid();
            prefs.end();
        }
        if (!hasSaved) saved = {};
        else queue(Action::Connect);
        return apReady;
    }

    bool pending() const { return action != Action::None; }
    bool isScanning() const { return scanning; }

    const char *connect(const WifiSettings &settings)
    {
        if (pending() || scanning) return "网络操作进行中，请稍后重试";
        if (!settings.valid()) return "Wi-Fi 名称或密码格式无效";
        Preferences prefs;
        if (!prefs.begin("gateway-wifi", false)) return "无法打开 Wi-Fi 配置存储";
        const bool ok = prefs.putBytes("credentials", &settings, sizeof(settings)) == sizeof(settings);
        prefs.end();
        if (!ok) return "Wi-Fi 配置保存失败，未切换网络";
        saved = settings; hasSaved = true;
        queue(Action::Connect);
        return nullptr;
    }
    const char *reconnect()
    {
        if (pending() || scanning) return "网络操作进行中，请稍后重试";
        if (!hasSaved) return "尚未保存 Wi-Fi 网络";
        queue(Action::Connect);
        return nullptr;
    }
    const char *disconnect(bool forget)
    {
        if (pending() || scanning) return "网络操作进行中，请稍后重试";
        if (forget)
        {
            Preferences prefs;
            if (!prefs.begin("gateway-wifi", false)) return "无法打开 Wi-Fi 配置存储";
            const bool ok = !prefs.isKey("credentials") || prefs.remove("credentials");
            prefs.end();
            if (!ok) return "删除 Wi-Fi 配置失败，未断开网络";
            saved = {}; hasSaved = false;
        }
        queue(forget ? Action::Forget : Action::Disconnect);
        return nullptr;
    }
    const char *scan()
    {
        if (scanning) return nullptr;
        if (pending() || phase == Phase::Starting || phase == Phase::Connecting)
            return "正在连接 Wi-Fi，请等待完成或先断开";
        WiFi.scanDelete(); scanError = false;
        const int result = WiFi.scanNetworks(true, false, false, 150);
        scanning = result == WIFI_SCAN_RUNNING;
        if (result == WIFI_SCAN_FAILED) { scanError = true; return "无法启动 Wi-Fi 扫描"; }
        return nullptr;
    }
    void service()
    {
        const uint32_t now = millis();
        if (scanning)
        {
            const int result = WiFi.scanComplete();
            if (result != WIFI_SCAN_RUNNING)
            {
                scanning = false; scanError = result < 0;
                if (scanError) { esp_wifi_scan_stop(); WiFi.scanDelete(); }
            }
        }
        if (pending())
        {
            if (static_cast<uint32_t>(now - changedAt) < 750) return; // 先回传 HTTP 响应。
            const Action requested = action; action = Action::None;
            WiFi.disconnect(false, true); // 仅断开 STA，热点保持开启。
            enabled = requested == Action::Connect;
            phase = enabled ? Phase::Starting : Phase::Off;
            changedAt = now;
            message = enabled ? "正在连接 Wi-Fi…" : requested == Action::Forget ?
                "已忘记网络；设备热点继续开启" : "已断开 Wi-Fi；重启后仍会连接已保存网络";
            return;
        }
        if (!enabled) return;
        if (phase == Phase::Starting)
        {
            if (static_cast<uint32_t>(now - changedAt) < 250 || scanning) return;
            WiFi.setMinSecurity(saved.password[0] ? WIFI_AUTH_WPA2_PSK : WIFI_AUTH_OPEN);
            phase = Phase::Connecting; changedAt = now;
            WiFi.begin(saved.ssid, saved.password);
            return;
        }
        if (WiFi.status() == WL_CONNECTED && WiFi.SSID() == saved.ssid)
        {
            phase = Phase::Connected; message = "Wi-Fi 已连接";
            return;
        }
        if (phase == Phase::Connected ||
            (phase == Phase::Connecting && static_cast<uint32_t>(now - changedAt) >= 15000))
        {
            const bool lost = phase == Phase::Connected;
            const wl_status_t result = WiFi.status();
            WiFi.disconnect(false, false);
            phase = Phase::Retry; changedAt = now;
            message = lost ? "Wi-Fi 已断线，30 秒后重试" : result == WL_NO_SSID_AVAIL ?
                "未找到 Wi-Fi，30 秒后重试" : "连接未成功，请检查密码和信号；30 秒后重试";
        }
        if (phase == Phase::Retry && static_cast<uint32_t>(now - changedAt) >= 30000 && !scanning)
        {
            phase = Phase::Starting; changedAt = now;
            message = "正在重新连接 Wi-Fi…";
        }
    }
    void addStatus(JsonObject out) const
    {
        const bool connected = WiFi.status() == WL_CONNECTED;
        out["ap_ssid"] = apName; out["ap_ready"] = apReady;
        out["ap_ip"] = WiFi.softAPIP().toString();
        out["saved"] = hasSaved; out["saved_ssid"] = hasSaved ? saved.ssid : "";
        out["enabled"] = enabled; out["pending"] = pending(); out["scanning"] = scanning;
        out["connected"] = connected; out["ssid"] = connected ? WiFi.SSID() : String();
        out["ip"] = connected ? WiFi.localIP().toString() : String();
        out["rssi"] = connected ? WiFi.RSSI() : 0;
        out["state"] = pending() ? "queued" : phase == Phase::Connected ? "connected" :
            phase == Phase::Connecting || phase == Phase::Starting ? "connecting" : phase == Phase::Retry ? "retry" : "off";
        out["message"] = message; // 不向网页或日志回传密码。
    }
    void addScan(JsonDocument &doc) const
    {
        doc["scanning"] = scanning;
        doc["error"] = scanError ? "扫描失败，请重试" : "";
        JsonArray array = doc["networks"].to<JsonArray>();
        if (scanning || scanError) return;
        const int count = WiFi.scanComplete();
        for (int i = 0; i < count && i < 30; ++i)
        {
            const String ssid = WiFi.SSID(i);
            if (!ssid.length()) continue;
            JsonObject network = array.add<JsonObject>();
            network["ssid"] = ssid; network["rssi"] = WiFi.RSSI(i);
            network["open"] = WiFi.encryptionType(i) == WIFI_AUTH_OPEN;
        }
    }
private:
    enum class Phase { Off, Starting, Connecting, Connected, Retry };
    WifiSettings saved;
    const char *apName = "", *message = "未配置 Wi-Fi；设备热点已开启";
    bool hasSaved = false, enabled = false, apReady = false, scanning = false, scanError = false;
    Action action = Action::None;
    Phase phase = Phase::Off;
    uint32_t changedAt = 0;
    void queue(Action value)
    {
        action = value; changedAt = millis();
        message = value == Action::Connect ? "Wi-Fi 配置已保存，准备连接…" : "网络操作已排队…";
    }
};
} // namespace gateway
