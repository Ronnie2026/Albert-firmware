import json
import re
import os

target_ids = [0x3E9,0x405,
    0x082, 0x0A9, 0x102, 0x103, 0x118, 0x129, 0x132, 0x145,
    0x189, 0x1F9, 0x20C, 0x21C, 0x229, 0x238, 0x243, 0x249,
    0x257, 0x25A, 0x25D, 0x266, 0x273, 0x292, 0x293, 0x2B4,
    0x2B6, 0x2E1, 0x2E5, 0x2F3, 0x31F, 0x321, 0x332, 0x333,
    0x334, 0x339, 0x33A, 0x352, 0x370, 0x37A,  0x39B,
  0x3A1,  0x3B6, 0x3C3, 0x3D2, 0x3D8,
    0x3DF, 0x3E2, 0x3E3,  0x3EA, 0x3F5, 0x3FD, 0x3FE,
    0x401,  0x498, 0x4E2, 0x4E3, 0x4F3, 0x678, 0x679,
    0x68C,
    0x399,
     0x7FF,
     #  0x39D, 
     #0x3B3,
    0x3C2
]

# Read ndjson and extract matching frames
frames = []
with open('data/can_batches.ndjson', 'r') as f:
    for line in f:
        if not line.strip(): continue
        data = json.loads(line)
        for frame in data.get('payload', {}).get('FRAMES', []):
            if frame['ID'] in target_ids:
                # convert "DATA": "XX XX" to {0xXX, 0xXX}
                bus_str = frame.get('BUS', 'CAN_B')
                bus = 0 if bus_str == 'CAN_A' else 1
                dlc = frame['DLC']
                data_hex = frame['DATA']
                bytes_list = data_hex.split()
                if len(bytes_list) > 8:
                    bytes_list = bytes_list[:8]
                bytes_str = ", ".join(f"0x{b}" for b in bytes_list)
                if len(bytes_list) < 8:
                    bytes_str += ", " + ", ".join(["0x00"] * (8 - len(bytes_list)))
                bytes_str = bytes_str.strip(', ')
                if frame['ID'] == 0x132:
                    frames.append(f"    {{0x{frame['ID']:03X}, {dlc}, 0, {{{bytes_str}}}}}")
                    frames.append(f"    {{0x{frame['ID']:03X}, {dlc}, 1, {{{bytes_str}}}}}")
                elif frame['ID'] == 0x399:
                    frames.append("    {0x399, 8, 0, {0x00, 0x08, 0xDF, 0xE0, 0xB0, 0xC8, 0x97, 0x72}}")
                    frames.append("    {0x39B, 8, 0, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9E}}")
                else:
                    frames.append(f"    {{0x{frame['ID']:03X}, {dlc}, {bus}, {{{bytes_str}}}}}")


replacements_7ff = [
    "{0x7FF, 8, {0x01, 0xA5, 0x4E, 0x43, 0x54, 0x34, 0x7C, 0x01}}",
    "{0x7FF, 8, {0x02, 0x47, 0x26, 0x28, 0xAE, 0x51, 0xC6, 0xE2}}",
    "{0x7FF, 8, {0x03, 0x13, 0x08, 0x48, 0xE1, 0x22, 0x1B, 0x00}}",
    "{0x7FF, 8, {0x04, 0x9B, 0x60, 0x56, 0x63, 0x20, 0xA4, 0x30}}",
    "{0x7FF, 8, {0x05, 0x11, 0x20, 0x61, 0x40, 0x04, 0x01, 0x01}}",
    "{0x7FF, 8, {0x06, 0x84, 0x34, 0x00, 0x03, 0x20, 0x08, 0xC0}}",
    "{0x7FF, 8, {0x07, 0x20, 0x00, 0x85, 0x28, 0x00, 0x02, 0x20}}",
    "{0x7FF, 8, {0x08, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00}}",
    "{0x7FF, 8, {0x09, 0xEF, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00}}"
]

def calculate_tesla_checksum(msg_id, data_bytes):
    checksum = (msg_id & 0xFF) + ((msg_id >> 8) & 0xFF)
    for b in data_bytes:
        checksum = (checksum + b) & 0xFF
    return checksum

counter_7ff_0 = 0
counter_7ff_1 = 0
counter_3e9 = 0
for i in range(len(frames)):
    # Extract the bus from the current frame string. Format is "    {0xID, DLC, BUS, {0x...}}"
    bus = 1
    match = re.search(r'\{\s*0x[0-9A-Fa-f]+,\s*\d+,\s*(\d+),\s*\{', frames[i])
    if match:
        bus = int(match.group(1))

    if "0x7FF" in frames[i] or "0x07FF" in frames[i]:
        if bus == 0:
            orig = replacements_7ff[counter_7ff_0 % len(replacements_7ff)]
            counter_7ff_0 += 1
        else:
            orig = replacements_7ff[counter_7ff_1 % len(replacements_7ff)]
            counter_7ff_1 += 1
            
        new_str = orig.replace("8, {", f"8, {bus}, {{")
        frames[i] = "    " + new_str

    if "0x3E9" in frames[i]:
        byte6 = (counter_3e9 % 16) << 4
        data_bytes = [0x01, 0x88, 0x02, 0x21, 0x00, 0x00, byte6]
        csum = calculate_tesla_checksum(0x3E9, data_bytes)
        frames[i] = f"    {{0x3E9, 8, {bus}, {{0x01, 0x88, 0x02, 0x21, 0x00, 0x00, 0x{byte6:02X}, 0x{csum:02X}}}}}"
        counter_3e9 += 1

    # These string matches need to account for the bus field.
    # We will just do a regex replace to catch any bus field, or since it's just Python strings, we can adapt it.
    if "{0x3C2, 8, 0, {0x29, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40}}" in frames[i]:
        frames[i] = "{0x3C2, 8, 0, {0x29, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}}" 
    if "{0x3C2, 8, 1, {0x29, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40}}" in frames[i]:
        frames[i] = "{0x3C2, 8, 1, {0x29, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80}}" 

    if "{0x3C2, 8, 0, {0x00, 0x55, 0x55, 0x55, 0x00, 0x00, 0x55, 0x45}}" in frames[i]:
        frames[i] = "{0x3C2, 8, 0, {0x00, 0x55, 0x55, 0x55, 0x00, 0x00, 0x5A, 0x45}}" 
    if "{0x3C2, 8, 1, {0x00, 0x55, 0x55, 0x55, 0x00, 0x00, 0x55, 0x45}}" in frames[i]:
        frames[i] = "{0x3C2, 8, 1, {0x00, 0x55, 0x55, 0x55, 0x00, 0x00, 0x5A, 0x45}}" 

# Generate replay_frames.h
h_content = f"""#pragma once
#include <stdint.h>
#include <Arduino.h>

struct ReplayFrame {{
  uint32_t id;
  uint8_t dlc;
  uint8_t bus;
  uint8_t data[8];
}};

extern const uint32_t REPLAY_FRAME_COUNT;
extern const ReplayFrame REPLAY_FRAMES[] PROGMEM;
"""
with open('src/replay_frames.h', 'w') as f:
    f.write(h_content)

# Generate replay_frames.cpp
cpp_content = f"""#include "replay_frames.h"

extern const uint32_t REPLAY_FRAME_COUNT = {len(frames)};

extern const ReplayFrame REPLAY_FRAMES[] PROGMEM = {{
""" + ',\n'.join(frames) + """
};
"""
with open('src/replay_frames.cpp', 'w') as f:
    f.write(cpp_content)

print(f"Generated replay_frames.cpp and replay_frames.h with {len(frames)} frames.")

