/* Firmware entry: 0x48001912 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48001912(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    _DAT_ram_5012d1b0 = _DAT_ram_5012d1b0 & 0xffffff0f | (param_2 & 0xf) << 4;
    _DAT_ram_5012d1f8 = _DAT_ram_5012d1f8 | 0x1000;
    FUN_ram_48001aaa();
    return;
  }
  if (param_1 != 2) {
    if (param_1 == 0) {
      _DAT_ram_5012d1b0 = _DAT_ram_5012d1b0 & 0xfffffff0 | param_2 & 0xf;
      _DAT_ram_5012d1f8 = _DAT_ram_5012d1f8 | 0x1000;
      FUN_ram_48001aaa();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/ecdsa_ll.h",0x1f1,
                     "ecdsa_ll_set_ecdsa_key_blk","false && \"Unsupported curve\"");
  }
  _DAT_ram_5012d1b0 =
       _DAT_ram_5012d1b0 & 0xffff00ff | ((int)param_2 >> 4 & 0xfU) << 0xc | (param_2 & 0xf) << 8;
  _DAT_ram_5012d1f8 = _DAT_ram_5012d1f8 | 0x1000;
  FUN_ram_48001aaa();
  return;
}


