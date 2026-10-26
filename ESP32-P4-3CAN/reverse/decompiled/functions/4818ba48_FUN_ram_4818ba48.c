/* Firmware entry: 0x4818ba48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4818ba48(uint param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 2) {
    if (param_2 != 1) {
      _DAT_ram_50089018 = _DAT_ram_50089018 & 0xfffffffb;
      return;
    }
    _DAT_ram_50089018 = _DAT_ram_50089018 | 4;
    return;
  }
  if (2 < param_1) {
    if (param_1 == 3) {
      if (param_2 != 1) {
        _DAT_ram_50089018 = _DAT_ram_50089018 & 0xfffffff7;
        return;
      }
      _DAT_ram_50089018 = _DAT_ram_50089018 | 8;
      return;
    }
    if (param_1 == 4) {
      if (param_2 != 1) {
        _DAT_ram_50089018 = _DAT_ram_50089018 & 0xffffffef;
        return;
      }
      _DAT_ram_50089018 = _DAT_ram_50089018 | 0x10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/key_mgr_ll.h",0xdf,
                     "key_mgr_ll_set_key_usage","false && \"Unsupported key type\"");
  }
  if (param_1 == 0) {
    if (param_2 != 1) {
      _DAT_ram_50089018 = _DAT_ram_50089018 & 0xfffffffe;
      return;
    }
    _DAT_ram_50089018 = _DAT_ram_50089018 | 1;
    return;
  }
  if (param_2 != 1) {
    _DAT_ram_50089018 = _DAT_ram_50089018 & 0xfffffffd;
    return;
  }
  _DAT_ram_50089018 = _DAT_ram_50089018 | 2;
  return;
}


