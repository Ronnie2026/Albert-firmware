/* Firmware entry: 0x481a7350 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481a7350(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 0) {
    _DAT_ram_3ff06080 = _DAT_ram_3ff06080 & 0xfffffcff;
    return;
  }
  _DAT_ram_3ff06000 = _DAT_ram_3ff06000 & 0xfffffcff;
  return;
}


