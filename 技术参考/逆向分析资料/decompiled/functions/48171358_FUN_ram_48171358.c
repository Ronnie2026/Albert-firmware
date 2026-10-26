/* Firmware entry: 0x48171358 */

uint FUN_ram_48171358(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffff8f00;
  }
  if (*param_1 == 0) {
    uVar1 = 0xffff8f00;
  }
  else {
    uVar1 = FUN_ram_4816f8a8();
    if ((uVar1 == 0) &&
       (((param_1[1] == 0x1b || (uVar1 = FUN_ram_4816a7ec(param_1), uVar1 == 0)) &&
        (uVar1 = FUN_ram_4816a70a(param_1), -1 < (int)uVar1)))) {
      if (param_3 < uVar1) {
        iVar3 = param_1[0x2f];
        uVar1 = param_3;
      }
      else {
        iVar3 = param_1[0x2f];
      }
      if (iVar3 == 0) {
        param_1[0x2e] = uVar1;
        param_1[0x2d] = 0x17;
        if (uVar1 != 0) {
          FUN_ram_4ff45158(param_1[0x2c],param_2,uVar1);
        }
        uVar2 = FUN_ram_48170748(param_1,1);
      }
      else {
        uVar2 = FUN_ram_4817069a(param_1);
      }
      if (uVar2 != 0) {
        return uVar2;
      }
      return uVar1;
    }
  }
  return uVar1;
}


