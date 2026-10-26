/* Firmware entry: 0x4ff31d2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff31d2e(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff20644();
  if ((1 < uVar1) && (uVar1 != 100)) {
    if (param_1 != 0) {
      _DAT_ram_500e602c = _DAT_ram_500e602c | 1;
      _DAT_ram_500e6018 = _DAT_ram_500e6018 | 0x2000000;
      _DAT_ram_500e60a4 = _DAT_ram_500e60a4 | 0x1000000;
      _DAT_ram_500e60a8 = _DAT_ram_500e60a8 | 0xf00;
      _DAT_ram_50115028 = _DAT_ram_50115028 | 0x8000;
      _DAT_ram_5009e030 = _DAT_ram_5009e030 | 0x100;
      _DAT_ram_5009e108 = _DAT_ram_5009e108 | 1;
      ets_delay_us(10);
      _DAT_ram_50115028 = _DAT_ram_50115028 & 0xffff3fff;
      _DAT_ram_5009e064 = _DAT_ram_5009e064 | 0x80000000;
      return;
    }
    _DAT_ram_50115018 = (_DAT_ram_50115028 & 0x3e00) << 9 | _DAT_ram_50115018 & 0xff83ffff;
    _DAT_ram_5011509c = (_DAT_ram_50115028 >> 4) << 0x1b | _DAT_ram_5011509c & 0x7ffffff;
    _DAT_ram_50115028 = _DAT_ram_50115028 | 0x4000;
    _DAT_ram_500e60a4 = _DAT_ram_500e60a4 & 0xfeffffff;
  }
  return;
}


