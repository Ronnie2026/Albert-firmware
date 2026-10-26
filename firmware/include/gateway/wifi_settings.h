#pragma once
#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace gateway
{
struct WifiSettings
{
    uint32_t version = 1;
    char ssid[33] = {};
    char password[65] = {};

    static bool valid(const char *ssid, size_t ssidLength, const char *password, size_t passwordLength)
    {
        if (!ssid || !password || !ssidLength || ssidLength > 32 || passwordLength > 64 ||
            memchr(ssid, 0, ssidLength) || memchr(password, 0, passwordLength)) return false;
        if (!passwordLength) return true; // 开放网络
        if (passwordLength < 8) return false;
        if (passwordLength == 64)
            for (size_t i = 0; i < passwordLength; ++i)
            {
                const char c = password[i];
                if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F'))) return false;
            }
        return true;
    }
    bool valid() const
    {
        const size_t ssidLength = strnlen(ssid, sizeof(ssid));
        const size_t passwordLength = strnlen(password, sizeof(password));
        return version == 1 && valid(ssid, ssidLength, password, passwordLength);
    }
};
} // namespace gateway
