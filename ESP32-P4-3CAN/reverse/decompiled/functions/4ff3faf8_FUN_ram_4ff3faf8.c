/* Firmware entry: 0x4ff3faf8 */

void FUN_ram_4ff3faf8(int *param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = param_1[1];
  *(int *)(param_2 + 4) = iVar1;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 8);
  *(int *)(*(int *)(iVar1 + 8) + 4) = param_2;
  *(int *)(iVar1 + 8) = param_2;
  *(int **)(param_2 + 0x10) = param_1;
  *param_1 = *param_1 + 1;
  return;
}


