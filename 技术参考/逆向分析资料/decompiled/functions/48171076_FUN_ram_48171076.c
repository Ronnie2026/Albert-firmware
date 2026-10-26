/* Firmware entry: 0x48171076 */

void FUN_ram_48171076(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xa4) + 5;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa4) + 3;
  *(int *)(param_1 + 0xac) = iVar1;
  *(int *)(param_1 + 0xb0) = iVar1;
  if (param_2 != 0) {
    *(int *)(param_1 + 0xb0) = iVar1 + (*(int *)(param_2 + 4) - *(int *)(param_2 + 8));
  }
  return;
}


