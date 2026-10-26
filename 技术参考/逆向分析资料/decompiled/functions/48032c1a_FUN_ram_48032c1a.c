/* Firmware entry: 0x48032c1a */

undefined1 FUN_ram_48032c1a(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dc70 == 0) &&
     ((DAT_ram_4ff6dc78 == 0 || (fence(), *(char *)(DAT_ram_4ff6dc78 + 0x3ffa) == '\0')))) {
    fence();
    fence();
    if ((DAT_ram_4ff6df30 == '\0') && (DAT_ram_4ff5c5c0 == '\0')) {
      return DAT_ram_4ff5c5ca;
    }
  }
  return 1;
}


