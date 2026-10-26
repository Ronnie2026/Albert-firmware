/* Firmware entry: 0x481710b6 */

void FUN_ram_481710b6(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x9c);
  *(int *)(param_1 + 0xa0) = iVar1;
  *(int *)(param_1 + 0xa4) = iVar1 + 8;
  *(int *)(param_1 + 0xa8) = iVar1 + 0xb;
  *(int *)(param_1 + 0xac) = iVar1 + 0xd;
  *(int *)(param_1 + 0xb0) = iVar1 + 0xd;
  return;
}


