/* Firmware entry: 0x4ff36e7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff36e7c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (undefined4 *)0x0) {
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    if (param_1 != 0) goto LAB_ram_4ff36ea0;
  }
  else {
    if (param_1 != 0) {
      *param_2 = _DAT_ram_3ff060b8;
      if (param_3 == (undefined4 *)0x0) {
        return;
      }
LAB_ram_4ff36ea0:
      puVar1 = (undefined4 *)&DAT_ram_3ff060bc;
      goto LAB_ram_4ff36e92;
    }
    *param_2 = _DAT_ram_3ff06038;
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
  }
  puVar1 = (undefined4 *)&DAT_ram_3ff0603c;
LAB_ram_4ff36e92:
  *param_3 = *puVar1;
  return;
}


