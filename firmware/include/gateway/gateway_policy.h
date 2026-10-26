#pragma once

// 与 Arduino 无关的过滤策略；可在主机上穷举验证 11-bit ID 边界。
#include <stddef.h>
#include <stdint.h>
#include <string.h>

namespace gateway
{
constexpr uint16_t kMaxId = 0x7FF;
constexpr size_t kIdBytes = 256;
constexpr size_t kMaxIdText = 12288;
constexpr uint16_t kDefaultIds[] = {
    0x082, 0x0A9, 0x102, 0x103, 0x118, 0x129, 0x132, 0x145,
    0x189, 0x1F9, 0x20C, 0x21C, 0x229, 0x238, 0x243, 0x249,
    0x257, 0x25A, 0x25D, 0x266, 0x273, 0x292, 0x293, 0x2B4,
    0x2B6, 0x2E1, 0x2E5, 0x2F3, 0x31F, 0x321, 0x331, 0x332, 0x333,
    0x334, 0x339, 0x33A, 0x352, 0x370, 0x37A, 0x399, 0x39B,
    0x39D, 0x3A1, 0x3B3, 0x3B6, 0x3C2, 0x3C3, 0x3D2, 0x3D8,
    0x3DF, 0x3E2, 0x3E3, 0x3E9, 0x3EA, 0x3F5, 0x3FD, 0x3FE,
    0x401, 0x405, 0x498, 0x4E2, 0x4E3, 0x4F3, 0x678, 0x679,
    0x68C, 0x7FF};
static_assert(sizeof(kDefaultIds) / sizeof(kDefaultIds[0]) == 67, "default ID count");

struct IdSet
{
    uint8_t bits[kIdBytes] = {};
    bool contains(uint32_t id) const
    {
        return id <= kMaxId && (bits[id / 8] & (1U << (id % 8)));
    }
    void add(uint16_t id)
    {
        if (id <= kMaxId) bits[id / 8] |= 1U << (id % 8);
    }
    uint16_t count() const
    {
        uint16_t n = 0;
        for (uint16_t id = 0; id <= kMaxId; ++id) n += contains(id);
        return n;
    }
};

inline bool separator(char c)
{
    return c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == ',' || c == ';';
}

// 全部按十六进制解析；拒绝负数、尾随垃圾、溢出、通配符和嵌入 NUL。
inline bool parseHexId(const char *text, size_t length, uint16_t &out)
{
    if (!text || !length) return false;
    size_t i = 0;
    if (length >= 2 && text[0] == '0' && (text[1] == 'x' || text[1] == 'X')) i = 2;
    if (i == length) return false;
    uint32_t n = 0;
    for (; i < length; ++i)
    {
        const char c = text[i];
        const int digit = c >= '0' && c <= '9' ? c - '0' :
                          c >= 'a' && c <= 'f' ? c - 'a' + 10 :
                          c >= 'A' && c <= 'F' ? c - 'A' + 10 : -1;
        if (digit < 0 || n > (kMaxId - static_cast<uint32_t>(digit)) / 16) return false;
        n = n * 16 + digit;
    }
    out = static_cast<uint16_t>(n);
    return true;
}

inline bool parseIds(const char *text, size_t length, IdSet &out)
{
    if ((!text && length) || length > kMaxIdText) return false;
    IdSet candidate;
    size_t i = 0;
    while (i < length)
    {
        if (separator(text[i])) { ++i; continue; }
        const size_t start = i;
        while (i < length && !separator(text[i])) ++i;
        uint16_t id;
        if (!parseHexId(text + start, i - start, id)) return false;
        candidate.add(id);
    }
    out = candidate; // 原子提交；任何非法 token 均不改变原白名单。
    return true;
}

enum class HardwareMode : uint8_t { Auto, Off, Manual };
struct Config
{
    uint8_t forwardEnabled = 1;
    uint8_t reverseEnabled = 0;
    HardwareMode hardwareMode = HardwareMode::Auto;
    uint8_t reserved = 0;
    uint16_t hardwareCode = 0;
    uint16_t hardwareMask = 0; // 1=比较该位；与 ESP-IDF acceptance_mask 极性相反。
    IdSet forwardIds;
    IdSet reverseIds;
};
static_assert(sizeof(Config) == 520, "NVS config layout must remain stable");

inline Config defaults()
{
    Config c;
    for (uint16_t id : kDefaultIds) c.forwardIds.add(id);
    return c;
}

struct HardwareFilter
{
    uint16_t code = 0;
    uint16_t mask = 0;
    bool accepts(uint16_t id) const { return (id & mask) == (code & mask); }
    uint32_t acceptanceCode() const { return static_cast<uint32_t>(code & mask) << 21; }
    uint32_t acceptanceMask() const
    {
        return (static_cast<uint32_t>(kMaxId & ~mask) << 21) | 0x001FFFFFUL;
    }
};

inline HardwareFilter hardwareFilter(const Config &c)
{
    HardwareFilter f;
    if (c.hardwareMode == HardwareMode::Manual)
    {
        f.code = c.hardwareCode;
        f.mask = c.hardwareMask;
    }
    else if (c.hardwareMode == HardwareMode::Auto)
    {
        bool first = true;
        for (uint16_t id = 0; id <= kMaxId; ++id)
        {
            if (!c.forwardIds.contains(id)) continue;
            if (first) { f.code = id; f.mask = kMaxId; first = false; }
            else f.mask &= static_cast<uint16_t>(~(f.code ^ id));
        }
        f.code &= f.mask;
    }
    return f;
}

inline bool validConfig(const Config &c)
{
    if (c.forwardEnabled > 1 || c.reverseEnabled > 1 || c.reserved != 0 ||
        static_cast<uint8_t>(c.hardwareMode) > static_cast<uint8_t>(HardwareMode::Manual) ||
        c.hardwareCode > kMaxId || c.hardwareMask > kMaxId) return false;
    // 手动预过滤不能误杀正向白名单；反向白名单不受 TWAI RX 过滤器约束。
    const HardwareFilter f = hardwareFilter(c);
    for (uint16_t id = 0; id <= kMaxId; ++id)
        if (c.forwardIds.contains(id) && !f.accepts(id)) return false;
    return true;
}

enum class Decision : uint8_t { Allow, Disabled, NotListed, Unsupported };
inline Decision decide(const Config &c, bool fromTwai, uint32_t id,
                       bool extended, bool rtr, bool error, uint8_t dlc)
{
    // 必须在查白名单前检查帧类型，禁止低数值扩展帧冒充标准帧。
    if (extended || rtr || error || dlc > 8 || id > kMaxId) return Decision::Unsupported;
    if (!(fromTwai ? c.forwardEnabled : c.reverseEnabled)) return Decision::Disabled;
    return (fromTwai ? c.forwardIds : c.reverseIds).contains(id)
               ? Decision::Allow : Decision::NotListed;
}

struct StoredConfig
{
    uint32_t magic = 0x47575431; // GWT1；与其他固件 NVS namespace 隔离。
    uint32_t version = 1;
    Config config;
    uint32_t checksum = 0;
};
inline uint32_t checksum(const StoredConfig &stored)
{
    const auto *p = reinterpret_cast<const uint8_t *>(&stored);
    uint32_t hash = 2166136261UL;
    for (size_t i = 0; i < offsetof(StoredConfig, checksum); ++i) hash = (hash ^ p[i]) * 16777619UL;
    return hash;
}
inline bool validStored(const StoredConfig &s)
{
    return s.magic == 0x47575431 && s.version == 1 && s.checksum == checksum(s) && validConfig(s.config);
}
} // namespace gateway
