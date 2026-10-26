/* Firmware entry: 0x4ff3f038 */

void FUN_ram_4ff3f038(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  (&DAT_ram_4ff6da7c)[mhartid] = 1;
  *(undefined4 *)(&DAT_ram_4ff6da5c + mhartid * 4) = 1;
  return;
}


