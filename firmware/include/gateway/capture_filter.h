#pragma once

#include <stdint.h>

namespace gateway
{
// 仅控制监视器记录，不参与 CAN 转发决策或 NVS 配置。
struct CaptureFilter
{
    uint8_t bus = 2;      // 0=TWAI, 1=MCP2515, 2=all, 3=simulation
    uint8_t result = 0;   // 0=all, 1=sent, 2=blocked, 3=error
    bool hasId = false;
    uint32_t id = 0;

    bool active() const { return bus != 2 || result != 0 || hasId; }
    bool valid() const { return bus <= 3 && result <= 3 && (!hasId || id <= 0x1FFFFFFF); }

    bool matches(uint8_t frameBus, uint32_t frameId, uint8_t outcome) const
    {
        if (bus != 2 && bus != frameBus) return false;
        if (hasId && id != frameId) return false;
        // 与 can_gateway.cpp 的 Outcome 枚举保持一致。
        if (result == 1) return outcome == 1;                     // Sent
        if (result == 2) return outcome >= 2 && outcome <= 4;    // Disabled/NotListed/Unsupported
        if (result == 3) return outcome >= 5 && outcome <= 8;    // Busy/Failed/Expired/Reconfigured
        return outcome != 0;                                       // exclude Pending
    }
};
} // namespace gateway
