/* Firmware entry: 0x4ff2b96c */

void FUN_ram_4ff2b96c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (8 < param_1 - 1U) {
    return;
  }
  (&DAT_ram_4ff6be24)[param_1 + 0x2c] = (&DAT_ram_4ff6be24)[param_1 + 0x2c] + 1;
  return;
}


