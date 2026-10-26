/* Firmware entry: 0x4818ca38 */

void FUN_ram_4818ca38(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 1) {
    *(undefined4 *)(param_1 + 0x4c) = 3;
    return;
  }
  thunk_FUN_ram_4ff209c6();
  return;
}


