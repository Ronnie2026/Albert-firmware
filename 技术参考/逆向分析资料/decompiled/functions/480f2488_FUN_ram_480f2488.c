/* Firmware entry: 0x480f2488 */

void FUN_ram_480f2488(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6de6e == '\0') {
    FUN_ram_48031a56();
    return;
  }
  DAT_ram_4ff5ca64 = DAT_ram_4ff5ca64 + 1;
  DAT_ram_4ff6de94 = DAT_ram_4ff6de94 | 2;
  DAT_ram_4ff6de80 = DAT_ram_4ff6de80 + 1;
  FUN_ram_480ee046();
  return;
}


