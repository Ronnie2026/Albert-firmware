/* Firmware entry: 0x4802a8ec */

void FUN_ram_4802a8ec(undefined4 *param_1,undefined4 *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  if (param_1 == param_2) {
    return;
  }
  if (-1 < *(char *)((int)param_2 + 0xf)) {
    FUN_ram_4802a7f4(param_1,*param_2,param_2[2]);
    return;
  }
  FUN_ram_4802a7f4(param_1,param_2,*(byte *)((int)param_2 + 0xf) & 0x7f);
  return;
}


