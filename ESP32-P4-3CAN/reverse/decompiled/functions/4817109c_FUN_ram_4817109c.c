/* Firmware entry: 0x4817109c */

void FUN_ram_4817109c(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 100) = iVar1;
  *(int *)(param_1 + 0x68) = iVar1 + 8;
  *(int *)(param_1 + 0x6c) = iVar1 + 0xb;
  *(int *)(param_1 + 0x70) = iVar1 + 0xd;
  *(int *)(param_1 + 0x74) = iVar1 + 0xd;
  return;
}


