/* Firmware entry: 0x480f24c2 */

void FUN_ram_480f24c2(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de6e == '\0') {
    FUN_ram_480316a0();
    return;
  }
  DAT_ram_4ff5ca68 = DAT_ram_4ff5ca68 + 1;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 4;
  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
  FUN_ram_480ee046();
  return;
}


