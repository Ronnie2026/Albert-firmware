/* Firmware entry: 0x4802c306 */

char * FUN_ram_4802c306(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0x10) {
    return "system_rwdt";
  }
  if (param_1 < 0x11) {
    if (param_1 == 9) {
      return "core_rwdt";
    }
    if (param_1 < 10) {
      if (param_1 == 5) {
        return "core_deep_sleep_or_pmu_power_down";
      }
      if (param_1 < 6) {
        if (param_1 == 1) {
          return "chip_power_on";
        }
        if (param_1 == 3) {
          return "core_software";
        }
      }
      else if (param_1 == 7) {
        return "core_mwdt";
      }
    }
    else {
      if (param_1 == 0xd) {
        return "cpu_rwdt";
      }
      if (param_1 < 0xe) {
        if (param_1 == 0xb) {
          return "cpu_mwdt";
        }
        if (param_1 == 0xc) {
          return "cpu_software";
        }
      }
      else if (param_1 == 0xf) {
        return "system_brownout";
      }
    }
  }
  else {
    if (param_1 == 0x17) {
      return "core_usb_uart";
    }
    if (param_1 < 0x18) {
      if (param_1 == 0x14) {
        return "core_efuse_crc";
      }
      if (param_1 < 0x15) {
        if (param_1 == 0x12) {
          return "system_super_wdt";
        }
        if (param_1 == 0x13) {
          return "core_power_glitch";
        }
      }
      else if (param_1 == 0x16) {
        return "core_usb_jtag";
      }
    }
    else {
      if (param_1 == 0x1a) {
        return "cpu_lockup";
      }
      if (param_1 == 0x1b) {
        return "system_power_supply_detect";
      }
      if (param_1 == 0x18) {
        return "cpu_jtag";
      }
    }
  }
  return "unknown";
}


