/* Firmware entry: 0x4802a59e */

void FUN_ram_4802a59e(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((-1 < *(char *)((int)param_1 + 0xf)) && (*param_1 != 0)) {
    thunk_FUN_ram_4ff209c6();
    return;
  }
  return;
}


