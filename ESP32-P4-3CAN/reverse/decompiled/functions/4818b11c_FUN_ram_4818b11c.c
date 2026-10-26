/* Firmware entry: 0x4818b11c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818b11c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    _DAT_ram_5009301c = _DAT_ram_5009301c | 0x200;
    return;
  }
  _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffdff;
  return;
}


