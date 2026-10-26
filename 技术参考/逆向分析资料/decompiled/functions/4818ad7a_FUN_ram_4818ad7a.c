/* Firmware entry: 0x4818ad7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818ad7a(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 5) {
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0xa0;
    return;
  }
  if (param_1 < 6) {
    if (param_1 == 2) {
      _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x40;
      return;
    }
    if (param_1 < 3) {
      if (param_1 != 0) {
        _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x160;
        return;
      }
      _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f;
      return;
    }
    if (param_1 != 3) {
      _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x80;
      return;
    }
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x60;
    return;
  }
  if (param_1 == 8) {
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x100;
    return;
  }
  if (param_1 < 9) {
    if (param_1 != 6) {
      _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0xe0;
      return;
    }
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0xc0;
    return;
  }
  if (param_1 == 9) {
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x120;
    return;
  }
  if (param_1 == 10) {
    _DAT_ram_5009301c = _DAT_ram_5009301c & 0xfffffe1f | 0x140;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ecc_ll.h",0x88,"ecc_ll_set_mode",
                   "false && \"Unsupported mode\"");
}


