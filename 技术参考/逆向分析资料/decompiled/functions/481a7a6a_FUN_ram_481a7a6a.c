/* Firmware entry: 0x481a7a6a */

undefined4
FUN_ram_481a7a6a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int *param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3f268(0x160);
  iVar2 = FUN_ram_4ff206d8(param_3,param_8);
  if (((iVar1 == 0) || (iVar2 == 0)) ||
     (iVar3 = FUN_ram_4ff3e516(param_1,param_2,param_3,param_4,param_5,iVar2,iVar1,param_7),
     iVar3 == 0)) {
    FUN_ram_4ff209c6(iVar2);
    thunk_FUN_ram_4ff209c6(iVar1);
    uVar4 = 0;
  }
  else {
    if (param_6 != (int *)0x0) {
      *param_6 = iVar3;
    }
    uVar4 = 1;
  }
  return uVar4;
}


