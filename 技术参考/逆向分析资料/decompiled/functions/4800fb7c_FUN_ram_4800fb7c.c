/* Firmware entry: 0x4800fb7c */

undefined4 FUN_ram_4800fb7c(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (DAT_ram_4ff5b1b8 == 3) {
    *param_1 = DAT_ram_4ff5b1ec;
    param_1[1] = DAT_ram_4ff5b1f0;
    return 0;
  }
  if (DAT_ram_4ff5b1b8 < 4) {
    if (DAT_ram_4ff5b1b8 == 1) {
      *param_1 = DAT_ram_4ff5b1f4;
      param_1[1] = DAT_ram_4ff5b1f8;
      return 0;
    }
    if (DAT_ram_4ff5b1b8 == 2) {
      *param_1 = DAT_ram_4ff5b1f8;
      param_1[1] = DAT_ram_4ff5b1fc;
      return 0;
    }
  }
  else if (DAT_ram_4ff5b1b8 == 4) {
    *param_1 = DAT_ram_4ff5b1d0;
    param_1[1] = DAT_ram_4ff5b1d4;
    return 0;
  }
  *param_1 = 0;
  param_1[1] = 0x36;
  return 0;
}


