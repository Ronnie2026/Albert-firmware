/* Firmware entry: 0x4815d31e */

int FUN_ram_4815d31e(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = (**(code **)(**(int **)(iVar1 + 8) + 8))();
    iVar3 = FUN_ram_4ff453ae(uVar2,param_2);
    if (iVar3 == 0) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}


