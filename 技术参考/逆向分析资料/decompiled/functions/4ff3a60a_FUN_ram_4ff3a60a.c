/* Firmware entry: 0x4ff3a60a */

int FUN_ram_4ff3a60a(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return DAT_ram_4ff6da4c + (mhartid + 1) * 0x830;
}


