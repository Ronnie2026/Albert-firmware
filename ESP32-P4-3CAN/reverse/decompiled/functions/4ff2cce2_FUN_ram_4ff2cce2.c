/* Firmware entry: 0x4ff2cce2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2cce2(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (-1 < _DAT_ram_50120000 << 4) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_rom_regi2c_esp32p4.c",0x5a,"regi2c_enable_block",
                     "regi2c_ctrl_ll_master_is_clock_enabled()");
  }
  _DAT_ram_50124020 = _DAT_ram_50124020 & 0xff000000;
  _DAT_ram_5012401c = _DAT_ram_5012401c & 0xff000000;
  if (param_1 == 0x69) {
    _DAT_ram_50124020 = _DAT_ram_50124020 | 0x80;
    return;
  }
  if (0x69 < param_1) {
    if (param_1 == 0x6d) {
      _DAT_ram_50124020 = _DAT_ram_50124020 | 0x400;
      return;
    }
    if (param_1 != 0x6f) {
      if (param_1 == 0x6a) {
        _DAT_ram_50124020 = _DAT_ram_50124020 | 0x1000;
        return;
      }
      return;
    }
    _DAT_ram_50124020 = _DAT_ram_50124020 | 0x100;
    return;
  }
  if (param_1 == 0x66) {
    _DAT_ram_50124020 = _DAT_ram_50124020 | 0x20;
    return;
  }
  if (0x66 < param_1) {
    if (param_1 == 0x67) {
      _DAT_ram_50124020 = _DAT_ram_50124020 | 0x800;
      return;
    }
    return;
  }
  if (param_1 == 0x62) {
    _DAT_ram_50124020 = _DAT_ram_50124020 | 0x40;
    return;
  }
  if (param_1 == 99) {
    _DAT_ram_50124020 = _DAT_ram_50124020 | 0x200;
    return;
  }
  return;
}


