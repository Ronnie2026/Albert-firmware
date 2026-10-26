/* Firmware entry: 0x4802c7b6 */

bool FUN_ram_4802c7b6(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  if (DAT_ram_4ff6df34 != '\0') {
    fence();
    fence();
    if (DAT_ram_4ff6df30 == '\0') {
      fence();
      fence();
      return DAT_ram_4ff6df38 == '\0';
    }
  }
  return true;
}


