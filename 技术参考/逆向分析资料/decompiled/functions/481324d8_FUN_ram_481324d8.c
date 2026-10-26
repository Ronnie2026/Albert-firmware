/* Firmware entry: 0x481324d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481324d8(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3122a();
  _DAT_ram_500e60a8 = _DAT_ram_500e60a8 & 0xfffeffff | (param_1 & 1) << 0x10;
  if (param_1 == 0) {
    _DAT_ram_500e51d4 = _DAT_ram_500e51d4 & 0xfffffffd | 4;
    FUN_ram_4ff31240();
    return;
  }
  _DAT_ram_500e51d4 = _DAT_ram_500e51d4 & 0xfffffffa;
  if ((~_DAT_ram_500e51d4 & 1) == 0) {
    software_reset();
    return;
  }
  if ((~_DAT_ram_500e51d4 & 1) == 0) {
    software_reset();
    return;
  }
  if ((~_DAT_ram_500e51d4 & 1) != 0) {
    _DAT_ram_500e60c8 = _DAT_ram_500e60c8 & 0xffafbfff;
    FUN_ram_4ff31240();
    return;
  }
  software_reset();
  return;
}


