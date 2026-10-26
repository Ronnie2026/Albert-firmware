/* Firmware entry: 0x4ff2cb36 */

void FUN_ram_4ff2cb36(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e10c == '\0') {
    return;
  }
  FUN_ram_4fc00208(&DAT_ram_4ff6e110);
  FUN_ram_4ff36c30(&DAT_ram_4ff6e110,0,600,1);
  FUN_ram_4ff36c30(&DAT_ram_4ff6e110,1,0x4b0,3);
  FUN_ram_4fc0021c(&DAT_ram_4ff6e110);
  FUN_ram_4fc0020c(&DAT_ram_4ff6e110);
  DAT_ram_4ff6e10c = 0;
  return;
}


