/* Firmware entry: 0x4817697e */

undefined * FUN_ram_4817697e(uint param_1)

{
  undefined *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 9) {
    return &DAT_ram_48239970;
  }
  if (param_1 < 10) {
    if (param_1 == 5) {
      return &DAT_ram_48239980;
    }
    if (param_1 == 8) {
      return &DAT_ram_48239978;
    }
    puVar1 = (undefined *)0x0;
    if (param_1 == 3) {
      return &DAT_ram_48239988;
    }
  }
  else if (param_1 == 10) {
    puVar1 = &DAT_ram_48239968;
  }
  else {
    puVar1 = (undefined *)0x0;
    if (param_1 == 0xb) {
      return &DAT_ram_48239960;
    }
  }
  return puVar1;
}


