/* Firmware entry: 0x4ff3c5a0 */

void FUN_ram_4ff3c5a0(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47df4,0xffffffff);
  (&DAT_ram_4ff6d9f8)[mhartid] = (&DAT_ram_4ff6d9f8)[mhartid] + 1;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47df4);
  return;
}


