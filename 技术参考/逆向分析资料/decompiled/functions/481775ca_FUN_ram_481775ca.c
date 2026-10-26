/* Firmware entry: 0x481775ca */

void FUN_ram_481775ca(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = FUN_ram_48174256(iVar1,iVar1 + 0x68,param_2,param_3);
  if (iVar2 != 0) {
    return;
  }
  FUN_ram_4817dc1e(iVar1,iVar1 + 0x68);
  return;
}


