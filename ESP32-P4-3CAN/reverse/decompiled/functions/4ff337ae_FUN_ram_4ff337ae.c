/* Firmware entry: 0x4ff337ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff337ae(void)

{
  undefined8 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
  DAT_ram_4ff6e2bc = DAT_ram_4ff6e2bc + 1;
  if (DAT_ram_4ff6e2bc != 1) {
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    return;
  }
  DAT_ram_4ff6e2b8 = 1;
  FUN_ram_4ff3210e();
  FUN_ram_4ff3122a();
  _DAT_ram_50120000 = _DAT_ram_50120000 | 0x20000;
  _DAT_ram_50120008 = _DAT_ram_50120008 & 0xfffbffff;
  FUN_ram_4ff31240();
  _DAT_ram_5012f000 = _DAT_ram_5012f000 | 0x400000;
  FUN_ram_4ff31fb8(0x69,0,6,3,0,*(undefined1 *)(&DAT_ram_4ff58700 + (uint)DAT_ram_4ff47f94 * 5));
  uVar1 = FUN_ram_4ff21a0a();
  DAT_ram_4ff6e2b4 = (undefined4)((ulonglong)uVar1 >> 0x20);
  DAT_ram_4ff6e2b0 = (undefined4)uVar1;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
  return;
}


