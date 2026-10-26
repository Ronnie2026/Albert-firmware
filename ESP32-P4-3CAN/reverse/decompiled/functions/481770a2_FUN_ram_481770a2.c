/* Firmware entry: 0x481770a2 */

undefined * FUN_ram_481770a2(uint param_1)

{
  undefined *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 3) {
    return &DAT_ram_482399f0;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      puVar1 = &DAT_ram_48239a50;
    }
    else {
      puVar1 = (undefined *)0x0;
      if (param_1 == 2) {
        return &DAT_ram_48239a20;
      }
    }
  }
  else {
    puVar1 = (undefined *)0x0;
    if (param_1 == 4) {
      return &DAT_ram_482399c0;
    }
  }
  return puVar1;
}


