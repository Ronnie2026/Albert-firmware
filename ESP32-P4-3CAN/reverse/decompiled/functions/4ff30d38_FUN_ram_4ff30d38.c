/* Firmware entry: 0x4ff30d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff30d38(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff30c28(DAT_ram_4ff6d9cc,DAT_ram_4ff6d9cd);
  if (DAT_ram_4ff6d9ce == 0) {
    _DAT_ram_5008c180 = _DAT_ram_5008c180 & 0xffffffe1 | 0x40;
    if (param_1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    _DAT_ram_5008d180 = _DAT_ram_5008d180 & 0xffffffe1;
  }
  else {
    uVar1 = (DAT_ram_4ff6d9ce & 7) << 2;
    _DAT_ram_5008c180 = _DAT_ram_5008c180 & 0xffffffe3 | 2 | uVar1 | 0x40;
    if (param_1 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    _DAT_ram_5008d180 = uVar1 | _DAT_ram_5008d180 & 0xffffffe3 | 2;
  }
  _DAT_ram_5008c180 = _DAT_ram_5008c180 | 0x40;
  return;
}


