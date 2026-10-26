/* Firmware entry: 0x4ff32502 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32502(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    _DAT_ram_50111030 = _DAT_ram_50111030 & 0x103fffff | 0x76c00000;
    _DAT_ram_501150ac = _DAT_ram_501150ac | 0x10000000;
    _DAT_ram_50111040 = _DAT_ram_50111040 | 0x10000;
    return;
  }
  _DAT_ram_50111040 = _DAT_ram_50111040 & 0xfffeffff;
  _DAT_ram_501150ac = _DAT_ram_501150ac & 0xefffffff;
  return;
}


