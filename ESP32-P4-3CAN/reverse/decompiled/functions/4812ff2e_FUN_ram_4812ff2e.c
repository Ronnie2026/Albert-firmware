/* Firmware entry: 0x4812ff2e */

undefined4 FUN_ram_4812ff2e(int param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1 * 4;
  piVar5 = (int *)(&DAT_ram_4ff6e104 + iVar1);
  iVar2 = FUN_ram_4ff3d9a8();
  if (*piVar5 == iVar2) {
    (*param_2)(param_3);
  }
  else {
    uVar3 = FUN_ram_4ff3c3f4();
    uVar4 = FUN_ram_4ff3c3f4(*piVar5);
    if (uVar4 < uVar3) {
      FUN_ram_4ff3c43c(*piVar5,uVar3);
    }
    FUN_ram_4ff3b5f0((&DAT_ram_4ff6e0fc)[param_1],0xffffffff);
    FUN_ram_4ff3c43c(*(undefined4 *)(&DAT_ram_4ff6e104 + iVar1),uVar3);
    *(undefined4 *)(&DAT_ram_4ff6e0e4 + iVar1) = param_3;
    *(undefined4 *)(&DAT_ram_4ff6e0dc + iVar1) = param_4;
    *(code **)(&DAT_ram_4ff6e0ec + iVar1) = param_2;
    FUN_ram_4ff3e004(*(undefined4 *)(&DAT_ram_4ff6e104 + iVar1),0,0,2,0);
    FUN_ram_4ff3b5f0((&DAT_ram_4ff6e0f4)[param_1],0xffffffff);
    FUN_ram_4ff3afa2((&DAT_ram_4ff6e0fc)[param_1],0,0,0);
  }
  return 0;
}


