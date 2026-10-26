/* Firmware entry: 0x4ff3aa88 */

undefined4 FUN_ram_4ff3aa88(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = param_1[0x10];
  uVar1 = param_1[0xe];
  if (uVar3 == 0) {
    uVar2 = 0;
    if (*param_1 == 0) {
      uVar2 = FUN_ram_4ff3db0a(param_1[2]);
      param_1[2] = 0;
    }
    param_1[0xe] = uVar1 + 1;
    return uVar2;
  }
  if (param_3 == 0) {
    uVar1 = uVar1 + 1;
    FUN_ram_4ff45158(param_1[1],param_2,uVar3);
    uVar3 = param_1[1];
    param_1[1] = uVar3 + param_1[0x10];
    if (param_1[2] <= uVar3 + param_1[0x10]) {
      param_1[1] = *param_1;
    }
  }
  else {
    FUN_ram_4ff45158(param_1[3],param_2,uVar3);
    uVar3 = param_1[3] - param_1[0x10];
    param_1[3] = uVar3;
    if (uVar3 < *param_1) {
      param_1[3] = param_1[2] - param_1[0x10];
    }
    if (param_3 != 2) {
      param_1[0xe] = uVar1 + 1;
      return 0;
    }
    if (uVar1 == 0) {
      uVar1 = 1;
    }
  }
  param_1[0xe] = uVar1;
  return 0;
}


