/* Firmware entry: 0x48172906 */

int FUN_ram_48172906(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  
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
        if (iVar2 == 0) {
          iVar2 = FUN_ram_48174506(puVar3,param_1 + 0x74,uVar1,param_2,param_3,param_4);
          return iVar2;
        }
      }
    }
  }
  else {
    iVar2 = -0x4f80;
  }
  return iVar2;
}


