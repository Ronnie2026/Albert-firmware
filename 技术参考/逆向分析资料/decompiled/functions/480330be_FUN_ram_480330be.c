/* Firmware entry: 0x480330be */

bool FUN_ram_480330be(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dc94 != 0) && (*(char *)(DAT_ram_4ff6dc94 + 0x1e931) != '\0')) {
    if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) == '\x06') {
      return *(char *)(DAT_ram_4ff6dc94 + 0x11a42) == *(char *)(DAT_ram_4ff6dc94 + 0x11a41) &&
             *(char *)(DAT_ram_4ff6dc94 + 0x11a41) != '\0';
    }
    if (*(char *)(DAT_ram_4ff6dc94 + 0x11a40) == '\0') {
      iVar1 = FUN_ram_4ff453ae(DAT_ram_4ff6dc94 + 0x12688,"applied");
      return iVar1 == 0;
    }
  }
  return false;
}


