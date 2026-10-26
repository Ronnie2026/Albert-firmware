/* Firmware entry: 0x4ff2e41a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2e41a(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3122a();
  if (param_1 == 1) {
    _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfdffffff | (param_2 & 1) << 0x19;
    _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xf7ffffff;
    FUN_ram_4ff31240();
    FUN_ram_4ff3122a();
    _DAT_ram_500e607c = _DAT_ram_500e607c & 0xf7ffffff | (param_2 & 1) << 0x1b;
    FUN_ram_4ff31240();
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 0) {
      _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfeffffff | (param_2 & 1) << 0x18;
      _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xfbffffff;
      FUN_ram_4ff31240();
      FUN_ram_4ff3122a();
      _DAT_ram_500e607c = _DAT_ram_500e607c & 0xfdffffff | (param_2 & 1) << 0x19;
      FUN_ram_4ff31240();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff57924,0xa3,
                     s_twai_ll_enable_bus_clock_ram_4ff53600,s_false_ram_4ff546f4);
  }
  _DAT_ram_500e601c = _DAT_ram_500e601c & 0xfbffffff | (param_2 & 1) << 0x1a;
  _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xefffffff;
  FUN_ram_4ff31240();
  FUN_ram_4ff3122a();
  _DAT_ram_500e607c = _DAT_ram_500e607c & 0xdfffffff | (param_2 & 1) << 0x1d;
  FUN_ram_4ff31240();
  return;
}


