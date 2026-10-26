/* Firmware entry: 0x4ff30cc2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff30cc2(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_5008c184 = _DAT_ram_5008c184 & 0xf8000000;
  _DAT_ram_5008c188 = _DAT_ram_5008c188 & 0xfffc0000;
  uVar1 = _DAT_ram_5008c180 & 0xffffffe1;
  _DAT_ram_5008c180 = uVar1 | 0x40;
  if (param_1 == 0) {
    return;
  }
  _DAT_ram_5008d180 = _DAT_ram_5008d180 & 0xffffffe1;
  _DAT_ram_5008c180 = uVar1 | 0x40;
  return;
}


