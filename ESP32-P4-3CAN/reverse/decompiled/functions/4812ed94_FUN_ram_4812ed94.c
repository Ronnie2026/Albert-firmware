/* Firmware entry: 0x4812ed94 */

void FUN_ram_4812ed94(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (DAT_ram_4ff6e0a8 != 0)) {
    FUN_ram_4812fb50();
    DAT_ram_4ff6e0a8 = 0;
    return;
  }
  DAT_ram_4ff6e0a8 = 0;
  return;
}


