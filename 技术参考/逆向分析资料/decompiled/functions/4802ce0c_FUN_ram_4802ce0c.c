/* Firmware entry: 0x4802ce0c */

void FUN_ram_4802ce0c(undefined1 param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47ebc,0xffffffff);
  fence();
  fence();
  if (DAT_ram_4ff6df04 != '\0') {
    fence();
    DAT_ram_4ff6df04 = '\0';
    fence();
    DAT_ram_4ff6df06 = param_1;
    DAT_ram_4ff6df08 = FUN_ram_48025ba6();
  }
  DAT_ram_4ff6defa = DAT_ram_4ff6df18 != 0;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47ebc);
  return;
}


