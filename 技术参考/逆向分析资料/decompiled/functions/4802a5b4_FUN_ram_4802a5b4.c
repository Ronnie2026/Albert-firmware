/* Firmware entry: 0x4802a5b4 */

void FUN_ram_4802a5b4(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((-1 < *(char *)((int)param_1 + 0xf)) && (*param_1 != 0)) {
    thunk_FUN_ram_4ff209c6();
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  return;
}


