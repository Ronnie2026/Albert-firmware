#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using String = std::string;
inline uint32_t fakeMillis = 0;
inline uint32_t millis() { return fakeMillis; }
struct JsonObject;
struct JsonValue {
    template<class T> void operator=(const T &) {}
    template<class T> T to() { return {}; }
};
struct JsonObject { JsonValue operator[](const char *) { return {}; } };
struct JsonArray { template<class T> T add() { return {}; } };
struct JsonDocument { JsonValue operator[](const char *) { return {}; } };
struct Preferences {
    inline static std::vector<uint8_t> blob;
    inline static bool failWrite = false;
    bool begin(const char *, bool readOnly) { return !readOnly || !blob.empty(); }
    void end() {}
    bool isKey(const char *) { return !blob.empty(); }
    size_t getBytesLength(const char *) { return blob.size(); }
    size_t getBytes(const char *, void *out, size_t size) {
        size = std::min(size, blob.size()); std::memcpy(out, blob.data(), size); return size;
    }
    size_t putBytes(const char *, const void *data, size_t size) {
        if (failWrite) return 0;
        const auto *bytes = static_cast<const uint8_t *>(data); blob.assign(bytes, bytes + size); return size;
    }
    bool remove(const char *) { if (failWrite) return false; blob.clear(); return true; }
};
constexpr int WIFI_AP_STA = 3, WIFI_SCAN_RUNNING = -1, WIFI_SCAN_FAILED = -2;
constexpr int WIFI_AUTH_OPEN = 0, WIFI_AUTH_WPA2_PSK = 3;
enum wl_status_t { WL_DISCONNECTED, WL_CONNECTED, WL_NO_SSID_AVAIL };
struct FakeIP { String value; String toString() { return value; } };
struct FakeWifi {
    bool ap = false, persistentValue = true, autoReconnect = true;
    int modeValue = 0, connectCalls = 0, scanResult = WIFI_SCAN_FAILED;
    wl_status_t statusValue = WL_DISCONNECTED;
    String ssid, password;
    void persistent(bool value) { persistentValue = value; }
    void setAutoReconnect(bool value) { autoReconnect = value; }
    void mode(int value) { modeValue = value; }
    void setHostname(const char *) {}
    void setMinSecurity(int) {}
    bool softAP(const char *, const char *) { ap = true; return true; }
    bool disconnect(bool radioOff, bool) { if (radioOff) ap = false; statusValue = WL_DISCONNECTED; return true; }
    wl_status_t begin(const char *name, const char *pass) {
        ++connectCalls; ssid = name; password = pass; statusValue = WL_DISCONNECTED; return statusValue;
    }
    wl_status_t status() { return statusValue; }
    String SSID(int = -1) { return ssid; }
    int RSSI(int = -1) { return -50; }
    int encryptionType(int) { return WIFI_AUTH_WPA2_PSK; }
    FakeIP softAPIP() { return {"192.168.4.1"}; }
    FakeIP localIP() { return {"192.168.1.40"}; }
    int scanNetworks(bool, bool, bool, int) { return scanResult = WIFI_SCAN_RUNNING; }
    int scanComplete() { return scanResult; }
    void scanDelete() { scanResult = WIFI_SCAN_FAILED; }
};
inline FakeWifi WiFi;
inline int esp_wifi_scan_stop() { return 0; }
