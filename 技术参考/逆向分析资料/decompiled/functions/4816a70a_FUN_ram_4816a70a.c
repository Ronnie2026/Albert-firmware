/* Firmware entry: 0x4816a70a */

int FUN_ram_4816a70a(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4816a66c();
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = iVar1 - (uint)(*(int *)(*(int *)(param_1 + 0x48) + 0x50) == 0x304);
  }
  return iVar1;
}


