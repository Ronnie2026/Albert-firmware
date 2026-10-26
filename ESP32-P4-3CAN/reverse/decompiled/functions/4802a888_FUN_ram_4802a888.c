/* Firmware entry: 0x4802a888 */

void FUN_ram_4802a888(undefined4 *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0x7f;
  if (param_2 != 0) {
    FUN_ram_4802a7f4();
    return;
  }
  return;
}


