/* Firmware entry: 0x4818b974 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4818b974(uint param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
  } while (_DAT_ram_5009506c != 0);
  if (param_1 == 2) {
    _DAT_ram_50095044 = 6;
joined_r0x4818ba04:
    if (param_2 == 7) {
      return 1;
    }
  }
  else {
    if (2 < param_1) {
      if (param_1 == 3) {
        _DAT_ram_50095044 = 5;
      }
      goto joined_r0x4818ba04;
    }
    if (param_1 != 0) {
      _DAT_ram_50095044 = 7;
      goto joined_r0x4818ba04;
    }
    _DAT_ram_50095044 = 8;
    if (param_2 == 7) {
      FUN_ram_4818ba48(2,0);
      goto LAB_ram_4818b9c2;
    }
  }
  FUN_ram_4818ba48(2,1);
LAB_ram_4818b9c2:
  _DAT_ram_50095048 = param_2;
  _DAT_ram_5009504c = 1;
  do {
  } while (_DAT_ram_5009506c != 0);
  if (_DAT_ram_50095068 != 0) {
    _DAT_ram_5009505c = 2;
    _DAT_ram_5009504c = 1;
    return 1;
  }
  if (param_1 != 0) {
    return 0;
  }
  _DAT_ram_5009504c = 1;
  return 0;
}


