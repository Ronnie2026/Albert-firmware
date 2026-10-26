#include "gateway/capture_filter.h"
#include <cassert>

int main()
{
    gateway::CaptureFilter filter;
    assert(filter.valid() && !filter.active());
    assert(filter.matches(0, 0x82, 1));
    assert(!filter.matches(0, 0x82, 0));
    filter.bus = 1;
    filter.hasId = true;
    filter.id = 0x82;
    assert(filter.active() && filter.matches(1, 0x82, 2));
    assert(!filter.matches(0, 0x82, 2));
    assert(!filter.matches(1, 0x83, 2));
    filter.result = 1;
    assert(filter.matches(1, 0x82, 1));
    assert(!filter.matches(1, 0x82, 2));
    filter.result = 2;
    for (uint8_t outcome = 2; outcome <= 4; ++outcome) assert(filter.matches(1, 0x82, outcome));
    assert(!filter.matches(1, 0x82, 5));
    filter.result = 3;
    for (uint8_t outcome = 5; outcome <= 8; ++outcome) assert(filter.matches(1, 0x82, outcome));
    assert(!filter.matches(1, 0x82, 4));
    filter.id = 0x20000000;
    assert(!filter.valid());
    filter = {};
    assert(filter.matches(3, 0x82, 1));
    filter.bus = 3;
    assert(filter.valid() && filter.active() && filter.matches(3, 0x82, 1));
    assert(!filter.matches(0, 0x82, 1) && !filter.matches(1, 0x82, 1));
    filter.bus = 0;
    assert(!filter.matches(3, 0x82, 1));
}
