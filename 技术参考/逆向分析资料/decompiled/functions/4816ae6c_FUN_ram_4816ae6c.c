/* Firmware entry: 0x4816ae6c */

undefined4 FUN_ram_4816ae6c(uint param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 4) {
    uVar1 = 9;
  }
  else if (param_1 < 5) {
    uVar1 = 5;
    if (((param_1 != 2) && (uVar1 = 8, param_1 != 3)) && (uVar1 = 0, param_1 == 1)) {
      return 3;
    }
  }
  else {
    uVar1 = 10;
    if ((param_1 != 5) && (uVar1 = 0, param_1 == 6)) {
      return 0xb;
    }
  }
  return uVar1;
}


