/* Firmware entry: 0x4ff2ff60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff2ff60(uint param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    FUN_ram_4ff3122a();
    if (param_1 == 9) {
      _DAT_ram_500e602c = _DAT_ram_500e602c | 0x10;
    }
    else if (param_1 < 10) {
      if (param_1 == 7) {
        _DAT_ram_500e6028 = _DAT_ram_500e6028 | 0x10000000;
      }
      else if (param_1 == 8) {
        _DAT_ram_500e6028 = _DAT_ram_500e6028 | 0x8000000;
      }
      else if (param_1 == 6) {
        _DAT_ram_500e602c = _DAT_ram_500e602c | 0x100;
      }
    }
    else if (param_1 == 10) {
      _DAT_ram_500e602c = _DAT_ram_500e602c | 1;
    }
    else if (param_1 == 0xb) {
      _DAT_ram_500e6028 = _DAT_ram_500e6028 | 0x40000000;
    }
    FUN_ram_4ff31240();
    return 0;
  }
  return 0;
}


