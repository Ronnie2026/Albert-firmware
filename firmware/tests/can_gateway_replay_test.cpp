#include "gateway/replay_control.h"
#include "replay_frames.h"
#include <cassert>
#include <cstdio>
#include <initializer_list>
using namespace gateway;

int main()
{
    ReplayCursor cursor;
    ReplayOptions options;
    uint32_t index = 99;
    assert(!cursor.take(0, 3, index)); // boot never transmits
    assert(options.valid() && options.accepts(0) && !options.accepts(1));
    assert(options.intervalUs == 357);
    options.intervalUs = 1000;
    options.loop = false;
    cursor.start(options, 100);
    assert(cursor.take(100, 3, index) && index == 0);
    assert(!cursor.take(1099, 3, index));
    assert(cursor.take(1100, 3, index) && index == 1);
    assert(cursor.take(900000, 3, index) && index == 2);
    assert(!cursor.running && cursor.cycles == 1 && cursor.position == 3);
    assert(!cursor.take(999999, 3, index));
    options.loop = true;
    cursor.start(options, 0);
    assert(cursor.take(0, 1, index) && cursor.cycles == 1 && cursor.position == 0);
    assert(cursor.take(100000, 1, index) && cursor.cycles == 2);
    assert(!cursor.take(100000, 1, index)); // delayed loop never bursts old slots
    cursor.stop();
    assert(!cursor.take(200000, 1, index));
    cursor.start(options, 0);
    assert(!cursor.take(0, 0, index) && !cursor.running);
    for (uint32_t interval : {0U, 356U, 1000001U})
    {
        options.intervalUs = interval;
        cursor.start(options, 0);
        assert(!options.valid() && !cursor.running);
    }
    for (uint32_t interval : {357U, 500U, 1000U, 1000000U})
    { options.intervalUs = interval; assert(options.valid()); }
    options.source = 3;
    assert(!options.valid());
    options.source = 2;
    assert(options.accepts(0) && options.accepts(1) && !options.accepts(3));

    // Small wake-up jitter must not accumulate into a lower replay frequency.
    options = {};
    cursor.start(options, 0);
    uint32_t paced = 0;
    for (uint64_t now = 0; now < 1000000; now += 25)
        if (cursor.take(now, 1, index)) ++paced;
    assert(paced >= 2800 && paced <= 2802);

    // Interleaved sources are skipped without consuming another send interval.
    options.loop = false;
    cursor.start(options, 0);
    const auto oddIndex = [](uint32_t candidate) { return candidate % 2 == 1; };
    assert(cursor.take(0, 5, index, oddIndex) && index == 1);
    assert(!cursor.take(356, 5, index, oddIndex));
    assert(cursor.take(357, 5, index, oddIndex) && index == 3);
    assert(!cursor.take(714, 5, index, oddIndex) && !cursor.running);
    assert(cursor.cycles == 1 && cursor.position == 5);

    // Scanning a source with no matches stays bounded, even for looping replay.
    options.loop = true;
    cursor.start(options, 0);
    uint32_t inspected = 0;
    assert(!cursor.take(0, 100, index, [&](uint32_t) { ++inspected; return false; }));
    assert(inspected == kReplayScanBudget && cursor.position == inspected && cursor.running);

    Config config = defaults();
    config.forwardEnabled = config.reverseEnabled = false;
    assert(replayDecision(config, 0x82, 8) == Decision::Allow);
    assert(replayDecision(config, 0x800, 8) == Decision::Unsupported);
    assert(replayDecision(config, 0x82, 9) == Decision::Unsupported);
    config.forwardIds = {};
    assert(replayDecision(config, 0x82, 8) == Decision::NotListed);

    // Walk the actual compiled replay data once, checking all source selections.
    assert(REPLAY_FRAME_COUNT > 0);
    uint32_t sourceCounts[2] = {};
    for (uint32_t i = 0; i < REPLAY_FRAME_COUNT; ++i)
    {
        const auto &frame = REPLAY_FRAMES[i];
        assert(frame.bus <= 1 && frame.id <= 0x7FF && frame.dlc <= 8);
        ++sourceCounts[frame.bus];
        config.forwardIds = {}; config.forwardIds.add(frame.id);
        assert(replayDecision(config, frame.id, frame.dlc) == Decision::Allow);
        for (uint8_t source = 0; source <= 2; ++source)
        {
            options.source = source;
            assert(options.accepts(frame.bus) == (source == 2 || source == frame.bus));
        }
    }
    assert(sourceCounts[0] && sourceCounts[1]);
    for (uint8_t source = 0; source <= 2; ++source)
    {
        options.source = source;
        options.loop = false;
        cursor.start(options, 0);
        uint32_t selected = 0;
        while (cursor.running)
        {
            if (cursor.take(cursor.due, REPLAY_FRAME_COUNT, index, [&](uint32_t candidate) {
                return options.accepts(REPLAY_FRAMES[candidate].bus);
            })) ++selected;
        }
        const uint32_t expected = source == 2 ? REPLAY_FRAME_COUNT : sourceCounts[source];
        assert(selected == expected && cursor.cycles == 1);
        assert(cursor.due == static_cast<uint64_t>(selected) * options.intervalUs);
    }
    std::printf("PASS: ~2800 fps pacing, source skipping, one-shot/loop, stop/restart, whitelist, %u A + %u B frames\n",
                sourceCounts[0], sourceCounts[1]);
}
