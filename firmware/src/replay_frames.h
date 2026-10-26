#pragma once
#include <stdint.h>
#include <Arduino.h>

struct ReplayFrame {
  uint32_t id;
  uint8_t dlc;
  uint8_t bus;
  uint8_t data[8];
};

extern const uint32_t REPLAY_FRAME_COUNT;
extern const ReplayFrame REPLAY_FRAMES[] PROGMEM;
