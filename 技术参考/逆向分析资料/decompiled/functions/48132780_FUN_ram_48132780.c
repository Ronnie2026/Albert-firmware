/* Firmware entry: 0x48132780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48132780(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3122a();
  _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xf7ffffff | (param_1 & 1) << 0x1b;
  _DAT_ram_500e60a8 = _DAT_ram_500e60a8 & 0xffbfffff | (param_1 & 1) << 0x16;
  if (param_1 != 0) {
    _DAT_ram_500e60c8 = _DAT_ram_500e60c8 & 0xff7fbfff;
    do {
    } while ((_DAT_ram_50089028 & 3) != 0);
  }
  FUN_ram_4ff31240();
  return;
}


