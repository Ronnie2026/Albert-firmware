/* Firmware entry: 0x4800cc78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4800cc78(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  while ((_DAT_ram_500d2004 >> 1 & 1) == 0) {
    uVar4 = FUN_ram_4ff21a0a();
    uVar2 = (uint)uVar4 - DAT_ram_4ff48398;
    uVar3 = (int)((ulonglong)uVar4 >> 0x20) - DAT_ram_4ff4839c;
    uVar1 = (uint)((uint)uVar4 < uVar2);
    uVar4 = CONCAT44(DAT_ram_4ff4839c,DAT_ram_4ff48398);
    if ((0 < (int)(uVar3 - uVar1)) ||
       ((uVar3 == uVar1 && (uVar4 = CONCAT44(DAT_ram_4ff4839c,DAT_ram_4ff48398), 49999 < uVar2))))
    goto LAB_ram_4800cce2;
  }
  if ((_DAT_ram_500d2004 >> 1 & 1) != 0) {
    _DAT_ram_500d2000 = param_2 & 0xff;
  }
  if (param_2 == 10) {
    _DAT_ram_500d2004 = _DAT_ram_500d2004 | 1;
  }
  uVar4 = FUN_ram_4ff21a0a();
LAB_ram_4800cce2:
  DAT_ram_4ff4839c = (int)((ulonglong)uVar4 >> 0x20);
  DAT_ram_4ff48398 = (int)uVar4;
  return;
}


