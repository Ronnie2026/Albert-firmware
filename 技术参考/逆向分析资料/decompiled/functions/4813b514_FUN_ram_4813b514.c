/* Firmware entry: 0x4813b514 */

undefined4 FUN_ram_4813b514(int *param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  do {
    uVar1 = (uint)*(ushort *)((int)param_1 + 10);
    if (param_4 < uVar1) {
      if ((int)(uint)*(ushort *)(param_1 + 2) < (int)(param_4 + param_3)) {
        uVar2 = 0xffffffff;
      }
      else {
        if ((int)(uVar1 - param_4) < param_3) {
          uVar3 = uVar1 - param_4 & 0xffff;
          FUN_ram_4ff45158(param_1[1] + param_4,param_2,uVar3);
          if (((param_4 + param_3) - uVar1 & 0xffff) != 0) {
            uVar2 = FUN_ram_4813b452(*param_1,param_2 + uVar3);
            return uVar2;
          }
        }
        else {
          FUN_ram_4ff45158(param_1[1] + param_4);
        }
        uVar2 = 0;
      }
      return uVar2;
    }
    param_1 = (int *)*param_1;
    param_4 = param_4 - uVar1 & 0xffff;
  } while (param_1 != (int *)0x0);
  return 0xffffffff;
}


