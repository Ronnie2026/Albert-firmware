/* Firmware entry: 0x4ff325da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff325da(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    _DAT_ram_501150ac = _DAT_ram_501150ac & 0xbfffffff;
    return;
  }
  _DAT_ram_501150ac = _DAT_ram_501150ac | 0x40000000;
  ets_delay_us(0x32);
  return;
}


