/* Firmware entry: 0x4811ebe4 */

void FUN_ram_4811ebe4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ed4,0xffffffff);
  if (DAT_ram_4ff6bd8c != param_1) {
    FUN_ram_4ff4522c(&DAT_ram_4ff6bd98,&DAT_ram_4ff6bd9c,0xc);
    FUN_ram_4ff4522c(&DAT_ram_4ff6bda8,&DAT_ram_4ff6bdac,0xc);
    DAT_ram_4ff6bd90 = cycle;
    DAT_ram_4ff6bd94 = DAT_ram_4ff6bd94 + 1;
    DAT_ram_4ff6bdb4 = cycle;
    DAT_ram_4ff6bd8c = param_1;
    DAT_ram_4ff6bda4 = param_1;
    FUN_ram_4ff294b8();
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ed4);
  return;
}


