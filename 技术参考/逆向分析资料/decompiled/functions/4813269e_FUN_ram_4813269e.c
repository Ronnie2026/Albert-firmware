/* Firmware entry: 0x4813269e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4813269e(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3122a();
  _DAT_ram_500e60a8 = _DAT_ram_500e60a8 & 0xffff7fff | (param_1 & 1) << 0xf;
  if (param_1 != 0) {
    _DAT_ram_500e60c8 = _DAT_ram_500e60c8 & 0xfffdbfff;
  }
  FUN_ram_4ff31240();
  return;
}


