#include "gateway/gateway_policy.h"
#include <assert.h>
#include <iostream>
#include <random>
#include <string>

using namespace gateway;

int main()
{
    Config c = defaults();
    assert(validConfig(c));
    assert(c.forwardEnabled && !c.reverseEnabled);
    assert(c.forwardIds.count() == 67 && c.reverseIds.count() == 0);
    const HardwareFilter filter = hardwareFilter(c);
    assert(filter.mask == 0 && filter.acceptanceMask() == 0xFFFFFFFF);
    for (uint32_t id = 0; id <= kMaxId; ++id)
    {
        bool expected = false;
        for (uint16_t allow : kDefaultIds) if (allow == id) expected = true;
        assert((decide(c, true, id, false, false, false, 8) == Decision::Allow) == expected);
        assert(decide(c, false, id, false, false, false, 8) == Decision::Disabled);
        assert(decide(c, true, id, true, false, false, 8) == Decision::Unsupported);
        assert(decide(c, true, id, false, true, false, 8) == Decision::Unsupported);
        assert(decide(c, true, id, false, false, true, 8) == Decision::Unsupported);
        assert(decide(c, true, id, false, false, false, 9) == Decision::Unsupported);
    }
    assert(decide(c, true, 0x800, false, false, false, 8) == Decision::Unsupported);
    c.reverseEnabled = 1;
    c.reverseIds.add(0x123);
    assert(decide(c, false, 0x123, false, false, false, 0) == Decision::Allow);
    assert(decide(c, false, 0x082, false, false, false, 8) == Decision::NotListed);
    c.forwardEnabled = 0;
    assert(decide(c, true, 0x082, false, false, false, 8) == Decision::Disabled);
    c.forwardEnabled = 1;
    c.forwardIds = {};
    assert(decide(c, true, 0x082, false, false, false, 8) == Decision::NotListed);

    IdSet parsed;
    const std::string valid = "0x000, 082;0Xa9\r\n7FF\t082";
    assert(parseIds(valid.data(), valid.size(), parsed));
    assert(parsed.count() == 4 && parsed.contains(0) && parsed.contains(0x7FF));
    assert(!parsed.contains(0xFFFFFFFF));
    const IdSet original = parsed;
    for (const std::string invalid : {"-1", "+1", "0x", "800", "9999999999999999999", "1xx",
                                      "0x123junk", "0x082 *", "082\v103", "082\f103", "82:103"})
    {
        assert(!parseIds(invalid.data(), invalid.size(), parsed));
        assert(memcmp(&parsed, &original, sizeof(parsed)) == 0);
    }
    const char embeddedNul[] = {'0', '8', '2', '\0', '1', '0', '3'};
    assert(!parseIds(embeddedNul, sizeof(embeddedNul), parsed));
    assert(!parseIds(nullptr, 1, parsed));
    assert(parseIds(nullptr, 0, parsed) && parsed.count() == 0);
    std::string huge(kMaxIdText + 1, ' ');
    assert(!parseIds(huge.data(), huge.size(), parsed));
    std::string all;
    for (uint16_t id = 0; id <= kMaxId; ++id)
    {
        char token[8]; snprintf(token, sizeof(token), "0x%03X ", id); all += token;
    }
    assert(all.size() == kMaxIdText);
    assert(parseIds(all.data(), all.size(), parsed) && parsed.count() == 2048);
    assert(parseIds("  ,;\n", 5, parsed) && parsed.count() == 0);

    std::mt19937 random(20260924);
    for (unsigned trial = 0; trial < 400; ++trial)
    {
        Config config;
        for (unsigned n = 0, count = trial % 20; n < count; ++n) config.forwardIds.add(random() & kMaxId);
        const auto f = hardwareFilter(config);
        assert(validConfig(config));
        for (uint16_t id = 0; id <= kMaxId; ++id)
        {
            // 模拟 TWAI 比较极性和标准 ID 布局；软件准入 ID 不能被硬件误杀。
            const bool hw = (((static_cast<uint32_t>(id) << 21) ^ f.acceptanceCode()) & ~f.acceptanceMask()) == 0;
            assert(hw == f.accepts(id));
            if (config.forwardIds.contains(id)) assert(hw);
        }
    }
    c = Config{};
    c.forwardIds.add(0x082);
    assert(hardwareFilter(c).mask == 0x7FF);
    c.hardwareMode = HardwareMode::Manual;
    c.hardwareCode = 0x082; c.hardwareMask = 0x7FF;
    assert(validConfig(c));
    c.forwardIds.add(0x103);
    assert(!validConfig(c));
    c.hardwareMode = HardwareMode::Off;
    assert(validConfig(c) && hardwareFilter(c).mask == 0);
    c.hardwareMode = static_cast<HardwareMode>(255);
    assert(!validConfig(c));
    c = defaults(); c.reverseEnabled = 2; assert(!validConfig(c));

    StoredConfig stored;
    stored.config = defaults(); stored.checksum = checksum(stored);
    assert(validStored(stored));
    for (size_t i = 0; i < sizeof(stored); ++i)
    {
        StoredConfig corrupted = stored;
        reinterpret_cast<uint8_t *>(&corrupted)[i] ^= 1;
        assert(!validStored(corrupted));
    }
    std::cout << "PASS: default IDs, both directions, frame types, parser, exhaustive masks, NVS corruption\n";
}
