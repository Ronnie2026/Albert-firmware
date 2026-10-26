/* Firmware entry: 0x4ff3fb48 */

int FUN_ram_4ff3fb48(int param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  if (piVar1[1] != param_1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *piVar1 = *piVar1 + -1;
    return *piVar1;
  }
  piVar1[1] = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *piVar1 = *piVar1 + -1;
  return *piVar1;
}


