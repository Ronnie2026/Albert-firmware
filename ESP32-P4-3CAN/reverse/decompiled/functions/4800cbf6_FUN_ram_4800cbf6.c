/* Firmware entry: 0x4800cbf6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4800cbf6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_500d2004 = _DAT_ram_500d2004 | 1;
  while( true ) {
    uVar4 = FUN_ram_4ff21a0a();
    uVar3 = (uint)uVar4 - DAT_ram_4ff48398;
    uVar2 = (int)((ulonglong)uVar4 >> 0x20) - DAT_ram_4ff4839c;
    uVar1 = (uint)((uint)uVar4 < uVar3);
    if ((0 < (int)(uVar2 - uVar1)) || ((uVar2 == uVar1 && (49999 < uVar3)))) break;
    if ((_DAT_ram_500d2004 >> 1 & 1) != 0) {
      uVar4 = FUN_ram_4ff21a0a();
      DAT_ram_4ff48398 = (int)uVar4;
      DAT_ram_4ff4839c = (int)((ulonglong)uVar4 >> 0x20);
      _DAT_ram_500d2004 = _DAT_ram_500d2004 | 1;
      return 0;
    }
  }
  return 5;
}


