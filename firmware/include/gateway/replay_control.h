#pragma once
#include <stdint.h>
#include "gateway_policy.h"

namespace gateway
{
constexpr uint32_t kReplayMinIntervalUs = 357; // 约 2800 帧/s。
constexpr uint32_t kReplayMaxIntervalUs = 1000000;
constexpr uint32_t kReplayScanBudget = 32;

inline Decision replayDecision(const Config &config, uint32_t id, uint8_t dlc)
{
    if (id > kMaxId || dlc > 8) return Decision::Unsupported;
    return config.forwardIds.contains(id) ? Decision::Allow : Decision::NotListed;
}

struct ReplayOptions
{
    uint32_t intervalUs = kReplayMinIntervalUs;
    uint8_t source = 0; // 原录制 bus: 0=CAN_A, 1=CAN_B, 2=全部；目标固定 MCP2515。
    bool loop = true;
    bool valid() const { return source <= 2 && intervalUs >= kReplayMinIntervalUs && intervalUs <= kReplayMaxIntervalUs; }
    bool accepts(uint8_t bus) const { return bus <= 1 && (source == 2 || source == bus); }
};

// 单次调度最多发送一帧；跳过的来源不占发送间隔，扫描预算保证收包和命令有机会处理。
struct ReplayCursor
{
    ReplayOptions options;
    bool running = false;
    uint32_t position = 0, cycles = 0;
    uint64_t due = 0;
    void start(const ReplayOptions &value, uint64_t now)
    {
        options = value; position = cycles = 0; due = now; running = value.valid();
    }
    void stop() { running = false; }
    bool take(uint64_t now, uint32_t count, uint32_t &index)
    {
        return take(now, count, index, [](uint32_t) { return true; });
    }
    template <typename AcceptIndex>
    bool take(uint64_t now, uint32_t count, uint32_t &index, AcceptIndex accepts)
    {
        if (!running || now < due) return false;
        if (!count) { stop(); return false; }
        for (uint32_t scanned = 0; running && scanned < kReplayScanBudget && scanned < count; ++scanned)
        {
            index = position++;
            if (position == count)
            {
                ++cycles;
                if (options.loop) position = 0;
                else stop();
            }
            if (!accepts(index)) continue;
            // 保留小幅调度抖动前的节奏；错过完整间隔则重置，不突发追赶。
            const uint64_t nextDue = due + options.intervalUs;
            due = nextDue > now ? nextDue : now + options.intervalUs;
            return true;
        }
        return false;
    }
};
} // namespace gateway
