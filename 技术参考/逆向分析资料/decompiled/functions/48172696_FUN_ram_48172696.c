/* Firmware entry: 0x48172696 */

int FUN_ram_48172696(undefined1 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                    undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iStack_38;
  int aiStack_34 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *param_1;
    if (*(int *)(param_1 + 0x48) == 0) {
      iVar2 = -0x4f80;
    }
    else {
      puVar3 = param_1 + 0xc;
      iVar2 = FUN_ram_4817516c(puVar3,param_1 + 0x6c,param_5,param_6);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_48174600(puVar3,param_1 + 0x74,param_1 + 0x6c,param_1 + 0x28,param_5,param_6
                                 ,0);
        if (((iVar2 == 0) &&
            (iVar2 = FUN_ram_481745aa(puVar3,&iStack_38,param_3,param_4), iVar2 == 0)) &&
           (iVar2 = FUN_ram_48174506(puVar3,param_1 + 0x74,uVar1,aiStack_34,iStack_38 + param_3,
                                     param_4 - iStack_38), iVar2 == 0)) {
          *param_2 = iStack_38 + aiStack_34[0];
        }
        return iVar2;
      }
    }
  }
  else {
    iVar2 = -0x4f80;
  }
  return iVar2;
}


