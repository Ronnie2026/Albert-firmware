#include "gateway/wifi_manager.h"
#include <cassert>
#include <cstdio>
using namespace gateway;

int main()
{
    assert(WifiSettings::valid(" home ", 6, "", 0));
    assert(WifiSettings::valid("网络", 6, "password", 8));
    assert(!WifiSettings::valid("", 0, "password", 8));
    assert(!WifiSettings::valid("home", 4, "short", 5));
    assert(!WifiSettings::valid("a\0b", 3, "password", 8));
    assert(!WifiSettings::valid("home", 4, "pass\0word", 9));
    assert(WifiSettings::valid(std::string(32, 'x').c_str(), 32, std::string(64, 'A').c_str(), 64));
    assert(!WifiSettings::valid(std::string(33, 'x').c_str(), 33, "", 0));
    assert(!WifiSettings::valid("home", 4, std::string(64, 'z').c_str(), 64));
    WifiSettings settings;
    std::strcpy(settings.ssid, "test-home"); std::strcpy(settings.password, "test-pass");
    GatewayWifi manager;
    assert(manager.begin("CAN-Gateway", "12345678"));
    assert(WiFi.modeValue == WIFI_AP_STA && !WiFi.persistentValue && !WiFi.autoReconnect);
    manager.service(); assert(WiFi.connectCalls == 0); // no saved network
    Preferences::failWrite = true;
    assert(manager.connect(settings) != nullptr && !manager.pending());
    Preferences::failWrite = false;
    assert(manager.connect(settings) == nullptr && manager.pending());
    manager.service(); assert(WiFi.connectCalls == 0); // HTTP reply before disconnect
    fakeMillis = 750; manager.service();
    fakeMillis = 1000; manager.service();
    assert(WiFi.connectCalls == 1 && WiFi.ssid == "test-home" && WiFi.ap);
    assert(manager.scan() != nullptr); // don't scan while associating
    fakeMillis = 15999; manager.service(); assert(WiFi.connectCalls == 1);
    fakeMillis = 16000; manager.service(); // timeout, keep AP
    assert(manager.scan() == nullptr && manager.isScanning());
    fakeMillis = 46001; manager.service(); assert(WiFi.connectCalls == 1); // wait for scan
    WiFi.scanResult = 0; manager.service();
    fakeMillis = 46251; manager.service(); assert(WiFi.connectCalls == 2);
    WiFi.statusValue = WL_CONNECTED; manager.service();
    WiFi.statusValue = WL_DISCONNECTED; manager.service(); // lost link
    fakeMillis += 30000; manager.service();
    fakeMillis += 250; manager.service(); assert(WiFi.connectCalls == 3 && WiFi.ap);
    assert(manager.disconnect(false) == nullptr);
    fakeMillis += 750; manager.service();
    fakeMillis += 60000; manager.service(); assert(WiFi.connectCalls == 3);
    assert(!Preferences::blob.empty() && WiFi.ap);
    GatewayWifi reboot;
    assert(reboot.begin("CAN-Gateway", "12345678") && reboot.pending());
    fakeMillis += 750; reboot.service(); fakeMillis += 250; reboot.service();
    assert(WiFi.connectCalls == 4 && WiFi.ssid == settings.ssid);
    assert(reboot.disconnect(true) == nullptr);
    fakeMillis += 750; reboot.service();
    assert(Preferences::blob.empty() && WiFi.ap);
    GatewayWifi forgotten;
    forgotten.begin("CAN-Gateway", "12345678");
    fakeMillis += 60000; forgotten.service(); assert(WiFi.connectCalls == 4);
    assert(forgotten.reconnect() != nullptr);
    // millis rollover must not start prematurely or prevent connection.
    fakeMillis = UINT32_MAX - 500;
    assert(forgotten.connect(settings) == nullptr);
    fakeMillis += 750; forgotten.service(); fakeMillis += 250; forgotten.service();
    assert(WiFi.connectCalls == 5 && WiFi.ap);
    std::puts("PASS: Wi-Fi credentials, saved boot, timeout/retry, scan, disconnect/forget, millis wrap, AP retention");
}
