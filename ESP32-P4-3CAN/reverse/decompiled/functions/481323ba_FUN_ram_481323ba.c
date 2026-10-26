/* Firmware entry: 0x481323ba */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481323ba(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3122a();
  _DAT_ram_500e60a8 = _DAT_ram_500e60a8 & 0xffefffff | (param_1 & 1) << 0x14;
  if (param_1 != 0) {
    _DAT_ram_500e60c8 = _DAT_ram_500e60c8 & 0xffe1bfff;
  }
  FUN_ram_4ff31240();
  return;
}


