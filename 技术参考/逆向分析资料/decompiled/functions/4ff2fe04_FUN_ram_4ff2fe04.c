/* Firmware entry: 0x4ff2fe04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_4ff2fe04(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47dc0,0xffffffff);
  uVar4 = _DAT_ram_50110030;
  if (_DAT_ram_50110030 != 0) {
    if (DAT_ram_4ff47dbd == '\0') goto LAB_ram_4ff2fe4a;
    puVar6 = (uint *)&DAT_ram_50108000;
    uVar5 = 0;
    do {
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 * 0x1f ^ uVar2;
    } while (puVar6 != (uint *)&DAT_ram_50108014);
    if (_DAT_ram_50108014 == uVar5) goto LAB_ram_4ff2fe4a;
  }
  _DAT_ram_50108000 = 0;
  _DAT_ram_50108004 = 0;
  _DAT_ram_50108008 = 0;
  _DAT_ram_5010800c = 0;
  _DAT_ram_50108010 = 0;
  _DAT_ram_50108014 = 0;
LAB_ram_4ff2fe4a:
  puVar6 = (uint *)&DAT_ram_50108000;
  DAT_ram_4ff47dbd = 0;
  uVar10 = thunk_FUN_ram_4ff2cfd2();
  uVar5 = (uint)uVar10 - _DAT_ram_50108008;
  uVar7 = (uint)((ulonglong)uVar4 * (ulonglong)uVar5 >> 0x20);
  uVar2 = ((int)((ulonglong)uVar10 >> 0x20) - _DAT_ram_5010800c) - (uint)((uint)uVar10 < uVar5);
  _DAT_ram_50108014 = 0;
  uVar8 = uVar2 * uVar4;
  uVar3 = uVar8 * 0x2000;
  uVar5 = (uVar4 * uVar5 >> 0x13 | uVar7 << 0xd) + uVar3;
  uVar9 = _DAT_ram_50108000 + uVar5;
  iVar1 = (uint)(uVar9 < uVar5) +
          (uint)(uVar5 < uVar3) +
          (uVar8 >> 0x13 | (int)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20) << 0xd) +
          (uVar7 >> 0x13) + _DAT_ram_50108004;
  do {
    uVar4 = *puVar6;
    puVar6 = puVar6 + 1;
    _DAT_ram_50108014 = _DAT_ram_50108014 * 0x1f ^ uVar4;
  } while (puVar6 != (uint *)&DAT_ram_50108014);
  _DAT_ram_50108000 = uVar9;
  _DAT_ram_50108004 = iVar1;
  _DAT_ram_50108008 = uVar10;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47dc0);
  return CONCAT44(iVar1,uVar9);
}


