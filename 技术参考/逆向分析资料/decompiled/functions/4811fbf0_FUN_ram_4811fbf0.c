/* Firmware entry: 0x4811fbf0 */

void FUN_ram_4811fbf0(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1 - 1U) {
    return;
  }
  fence();
  *(undefined4 *)(&DAT_ram_4ff50cf8 + (param_1 + 0x78) * 4) = param_2;
  return;
}


