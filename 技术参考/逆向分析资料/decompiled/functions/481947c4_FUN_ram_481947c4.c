/* Firmware entry: 0x481947c4 */

void FUN_ram_481947c4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e2c4 < param_1) {
    DAT_ram_4ff6e2c4 = param_1 + 1000;
  }
  return;
}


