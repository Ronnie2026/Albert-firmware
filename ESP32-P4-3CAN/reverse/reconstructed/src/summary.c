/* Newly written diagnostic presentation of recovered evidence. */
#include "albert_recovered.h"

void albert_print_summary(FILE *stream) {
    char digest[65];
    albert_format_original_elf_sha256(digest);
    fprintf(stream, "Original firmware: %s, hardware %s\n", albert_original_app_version,
            albert_hardware_revision);
    fprintf(stream, "Board: %s\nCommit: %s\nOriginal ELF SHA256: %s\n",
            albert_board_profile, albert_original_commit, digest);
    for (unsigned layout = 0; layout < ALBERT_LAYOUT_COUNT; ++layout) {
        fprintf(stream, "Layout %c:\n", 'A' + (int)layout);
        for (unsigned i = 0; i < ALBERT_CHANNEL_COUNT; ++i) {
            const albert_channel *channel = &albert_channels[i];
            const albert_can_pins *pins = &albert_pin_layouts[layout][i];
            fprintf(stream, "  CAN%u %s TX=%d RX=%d bitrate=%lu\n", channel->controller,
                    channel->name, pins->tx, pins->rx, (unsigned long)channel->bitrate);
        }
    }
    for (unsigned i = 0; i < 3; ++i) {
        const albert_task *task = &albert_tasks[i];
        fprintf(stream, "Task %s priority=%u core=%u stack=%lu bytes entry=0x%08lx\n",
                task->name, task->priority, task->core, (unsigned long)task->stack_bytes,
                (unsigned long)task->original_entry);
    }
    fprintf(stream, "Stored-layout default: Auto (%u)\nRoutes: %lu\n", (unsigned)ALBERT_LAYOUT_AUTO,
            (unsigned long)albert_http_route_count);
    for (size_t i = 0; i < albert_http_route_count; ++i) {
        const albert_http_route *route = &albert_http_routes[i];
        fprintf(stream, "  %-6s %-40s original-handler=0x%08lx\n", route->method,
                route->path, (unsigned long)route->original_handler);
    }
}
