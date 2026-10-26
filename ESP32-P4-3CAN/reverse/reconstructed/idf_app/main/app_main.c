/* Diagnostic ESP-IDF app, newly written. Full original runtime is in decompiled/. */
#include "albert_recovered.h"
#include "esp_chip_info.h"
#include "esp_log.h"

void app_main(void) {
    esp_chip_info_t chip;
    esp_chip_info(&chip);
    ESP_LOGI("recovered", "Diagnostic reconstruction on chip=%d revision=%u cores=%u",
             (int)chip.model, (unsigned)chip.revision, (unsigned)chip.cores);
    albert_print_summary(stdout);
}
