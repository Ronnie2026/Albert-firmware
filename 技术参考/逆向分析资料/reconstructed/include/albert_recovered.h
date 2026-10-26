/* Analyst reconstruction of verified firmware constants, not original headers. */
#ifndef ALBERT_RECOVERED_H
#define ALBERT_RECOVERED_H
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#ifdef __cplusplus
extern "C" {
#endif
enum { ALBERT_CHANNEL_COUNT = 3, ALBERT_LAYOUT_COUNT = 2, ALBERT_LAYOUT_AUTO = 2 };
typedef struct { int tx; int rx; } albert_can_pins;
typedef struct { unsigned controller; const char *name; uint32_t mask; uint32_t bitrate; } albert_channel;
typedef struct { const char *name; uint32_t original_entry; unsigned priority; unsigned core; size_t stack_bytes; } albert_task;
typedef struct { const char *path; const char *method; unsigned method_code; uint32_t original_handler; } albert_http_route;
extern const albert_can_pins albert_pin_layouts[ALBERT_LAYOUT_COUNT][ALBERT_CHANNEL_COUNT];
extern const albert_channel albert_channels[ALBERT_CHANNEL_COUNT];
extern const albert_task albert_tasks[3];
extern const albert_http_route albert_http_routes[];
extern const size_t albert_http_route_count;
extern const char albert_board_profile[];
extern const char albert_hardware_revision[];
extern const char albert_original_app_version[];
extern const char albert_original_commit[];
extern const uint8_t albert_original_elf_sha256[32];
/* Equivalent to 0x48000020, using an explicit output buffer. */
void albert_format_original_elf_sha256(char output[65]);
/* Diagnostic presentation, newly written; does not operate hardware. */
void albert_print_summary(FILE *stream);
#ifdef __cplusplus
}
#endif
#endif
