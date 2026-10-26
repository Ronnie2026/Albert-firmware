/* Firmware entry: 0x4ff3277e */

undefined4 FUN_ram_4ff3277e(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff211de();
  if (uVar1 < param_1) {
    if (param_1 == 100) {
      uVar3 = 4;
      uVar2 = 1;
      uVar1 = 400;
    }
    else if (param_1 == 200) {
      uVar3 = 2;
      uVar2 = 1;
      uVar1 = 400;
    }
    else {
      if (param_1 != 400) {
        return 0;
      }
      uVar3 = 1;
      uVar2 = 1;
      uVar1 = 400;
    }
  }
  else {
    if ((param_1 == 0) || (uVar3 = uVar1 / param_1, param_1 != ((uVar3 >> 1) + uVar1) / uVar3)) {
      return 0;
    }
    uVar2 = 0;
  }
  param_2[5] = param_1;
  *param_2 = uVar2;
  param_2[1] = uVar1;
  param_2[2] = uVar3;
  param_2[3] = 0;
  param_2[4] = 0;
  return 1;
}


