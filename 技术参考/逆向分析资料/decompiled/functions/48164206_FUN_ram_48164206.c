/* Firmware entry: 0x48164206 */

undefined4 FUN_ram_48164206(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = DAT_ram_4ff4ba24;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar7 = 100000;
  *DAT_ram_4ff4ba24 = *DAT_ram_4ff4ba24 | 1;
  uVar2 = 0;
  *puVar1 = *puVar1 | 4;
  *puVar1 = *puVar1 | 2;
  uVar8 = FUN_ram_4ff21a0a();
  while( true ) {
    if ((((*DAT_ram_4ff4ba24 & 1) == 0) && ((*DAT_ram_4ff4ba24 >> 2 & 1) == 0)) &&
       ((*DAT_ram_4ff4ba24 >> 1 & 1) == 0)) {
      return 0;
    }
    uVar9 = FUN_ram_4ff21a0a();
    uVar4 = (uint)uVar9 - (int)uVar8;
    uVar5 = (int)((ulonglong)uVar9 >> 0x20) - (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)((uint)uVar9 < uVar4);
    uVar6 = uVar5 - uVar3;
    if ((0 < (int)uVar6) || ((uVar5 == uVar3 && (5000000 < uVar4)))) break;
    if (((int)uVar2 < (int)uVar6) || ((uVar6 == uVar2 && (uVar7 < uVar4)))) {
      uVar2 = uVar2 << 1 | uVar7 >> 0x1f;
      uVar7 = uVar7 << 1;
      FUN_ram_4ff3c2b6(1);
    }
  }
  return 0x107;
}


