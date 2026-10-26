/* Firmware entry: 0x4819e912 */

uint FUN_ram_4819e912(undefined4 param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar5 = param_4 * param_3;
  uVar2 = 0;
  uVar1 = uVar5;
  if (uVar5 != 0) {
    do {
      uVar4 = uVar1;
      uVar2 = param_5[1];
      if (uVar4 <= uVar2) {
        FUN_ram_4ff45158(param_2,*param_5,uVar4);
        param_5[1] = param_5[1] - uVar4;
        *param_5 = *param_5 + uVar4;
        return param_4;
      }
      FUN_ram_4ff45158(param_2,*param_5,uVar2);
      param_5[1] = 0;
      *param_5 = *param_5 + uVar2;
      param_2 = param_2 + uVar2;
      iVar3 = FUN_ram_4819e8c6(param_1,param_5);
      uVar1 = uVar4 - uVar2;
    } while (iVar3 == 0);
    uVar2 = ((uVar2 + uVar5) - uVar4) / param_3;
  }
  return uVar2;
}


