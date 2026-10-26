/* Firmware entry: 0x4802b934 */

void FUN_ram_4802b934(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff5bb97 = DAT_ram_4ff5bb97 & 0x7f;
  DAT_ram_4ff5bb88 = 0;
  DAT_ram_4ff5bb8c = 0;
  DAT_ram_4ff5bb90 = 0;
  FUN_ram_4802a7f4(&DAT_ram_4ff5bb88,&DAT_ram_481df390,0);
  FUN_ram_481974a0(FUN_ram_4802a59e,&DAT_ram_4ff5bb88,&DAT_ram_4ff6daac);
  return;
}


