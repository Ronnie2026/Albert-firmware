/* Firmware entry: 0x480f245a */

void FUN_ram_480f245a(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff5ca7c = DAT_ram_4ff5ca7c + 1;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 0x80;
  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
  FUN_ram_480ee046();
  return;
}


