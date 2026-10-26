#include "albert_recovered.h"

/* Exact constants from virtual address 0x48222610. */
const albert_can_pins albert_pin_layouts[ALBERT_LAYOUT_COUNT][ALBERT_CHANNEL_COUNT] = {
    { { 2, 3 }, { 4, 5 }, { 26, 27 } },
    { { 3, 2 }, { 50, 49 }, { 31, 30 } },
};

/* Exact channel metadata from 0x48222640. */
const albert_channel albert_channels[ALBERT_CHANNEL_COUNT] = {
    { 0, "CH", 1u, 500000u },
    { 1, "VEH", 2u, 500000u },
    { 2, "PARTY", 4u, 500000u },
};

/* Call arguments verified in setup (0x48117336) and start_supervisor (0x48120c38). */
const albert_task albert_tasks[3] = {
    { "fsd_p0", 0x4ff2520au, 24u, 1u, 4096u },
    { "can_rt", 0x4810d080u, 20u, 1u, 8192u },
    { "p4_supervisor", 0x48121206u, 3u, 0u, 4096u },
};

const char albert_board_profile[] = "waveshare-p4-wifi6-sn65hvd230-x3";
const char albert_hardware_revision[] = "V3.2";
const char albert_original_app_version[] = "P1.6.4";
const char albert_original_commit[] = "4d97f369e1a32f126b7121a66a70a53fca628dfa";
const uint8_t albert_original_elf_sha256[32] = {
    0xee, 0xe2, 0xcc, 0xf0, 0xd7, 0xe4, 0x8b, 0x73, 0x51, 0x03, 0xac, 0x0c, 0x88, 0xf6, 0x90, 0x96, 0x7d, 0xbb, 0xb3, 0x7e, 0x97, 0x3e, 0xe6, 0xed, 0xbb, 0x89, 0xba, 0x0f, 0x44, 0xd8, 0xa6, 0xb1
};

void albert_format_original_elf_sha256(char output[65]) {
    static const char digits[] = "0123456789abcdef";
    for (size_t i = 0; i < 32; ++i) {
        output[2 * i] = digits[albert_original_elf_sha256[i] >> 4];
        output[2 * i + 1] = digits[albert_original_elf_sha256[i] & 15];
    }
    output[64] = '\0';
}
