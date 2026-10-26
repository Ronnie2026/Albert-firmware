/* Firmware entry: 0x4ff36c7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff36c7a(undefined4 *param_1)

{
  char *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (undefined4 *)0x0) {
    pcVar1 = (char *)0x0;
    if ((_DAT_ram_3ff102f8 & 0x40) != 0 || (_DAT_ram_3ff10178 & 0x1f) != 0) {
      pcVar1 = s_Cache_access_error_ram_4ff53e84;
    }
    *param_1 = pcVar1;
  }
  return;
}


