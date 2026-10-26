/* Firmware entry: 0x480295f8 */

char * FUN_ram_480295f8(void)

{
  char *pcVar1;
  uint auStack_1c [6];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_480038a2(auStack_1c);
  if (auStack_1c[0] == 0x10) {
    return "ESP32-H2";
  }
  if (auStack_1c[0] < 0x11) {
    if (auStack_1c[0] == 0xc) {
      pcVar1 = "ESP32-C2";
    }
    else if (auStack_1c[0] < 0xd) {
      if (auStack_1c[0] == 5) {
        pcVar1 = "ESP32-C3";
      }
      else {
        if (auStack_1c[0] != 9) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return "UNKNOWN";
        }
        pcVar1 = "ESP32-S3";
      }
    }
    else {
      if (auStack_1c[0] != 0xd) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return "UNKNOWN";
      }
      pcVar1 = "ESP32-C6";
    }
  }
  else {
    if (auStack_1c[0] == 0x17) {
      return "ESP32-C5";
    }
    if (auStack_1c[0] < 0x18) {
      if (auStack_1c[0] == 0x12) {
        pcVar1 = "ESP32-P4";
      }
      else {
        if (auStack_1c[0] != 0x14) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return "UNKNOWN";
        }
        pcVar1 = "ESP32-C61";
      }
    }
    else {
      if (auStack_1c[0] != 0x19) {
        return "UNKNOWN";
      }
      pcVar1 = "ESP32-H21";
    }
  }
  return pcVar1;
}


