/* Firmware entry: 0x4ff31206 */

void FUN_ram_4ff31206(int param_1,char param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  (&DAT_ram_4ff58b30)[param_1] = param_2 + '\x01';
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dd0);
  return;
}


