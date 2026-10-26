/* Firmware entry: 0x4802c25c */

char * FUN_ram_4802c25c(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 6) {
    return "task_watchdog";
  }
  if (param_1 < 7) {
    if (param_1 == 3) {
      return "software";
    }
    if (3 < param_1) {
      if (param_1 != 4) {
        return "interrupt_watchdog";
      }
      return "panic";
    }
    if (param_1 == 1) {
      return "power_on";
    }
    if (param_1 == 2) {
      return "external";
    }
  }
  else {
    if (param_1 == 9) {
      return "brownout";
    }
    if (param_1 < 10) {
      if (param_1 != 7) {
        return "deep_sleep";
      }
      return "watchdog";
    }
    if (param_1 == 10) {
      return "sdio";
    }
  }
  return "unknown";
}


