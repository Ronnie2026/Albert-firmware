/* Firmware entry: 0x4813b38c */

uint FUN_ram_4813b38c(int *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    while ((uVar2 = (uint)*(ushort *)((int)param_1 + 10), param_4 != 0 && (uVar2 <= param_4))) {
      param_1 = (int *)*param_1;
      param_4 = param_4 - uVar2 & 0xffff;
      if (param_1 == (int *)0x0) {
        return 0;
      }
    }
    uVar3 = 0;
    while( true ) {
      uVar1 = uVar2 - param_4;
      if (param_3 < (uVar2 - param_4 & 0xffff)) {
        uVar1 = param_3;
      }
      uVar1 = uVar1 & 0xffff;
      param_3 = param_3 - uVar1 & 0xffff;
      FUN_ram_4ff45158(param_2 + uVar3,param_1[1] + param_4,uVar1);
      uVar3 = uVar3 + uVar1 & 0xffff;
      param_1 = (int *)*param_1;
      if ((param_3 == 0) || (param_4 = 0, param_1 == (int *)0x0)) break;
      uVar2 = (uint)*(ushort *)((int)param_1 + 10);
    }
  }
  return uVar3;
}


