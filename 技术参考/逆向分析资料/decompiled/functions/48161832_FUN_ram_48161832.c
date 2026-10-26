/* Firmware entry: 0x48161832 */

int FUN_ram_48161832(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint auStack_24 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_24[0] = 0;
  uVar11 = FUN_ram_4ff21a0a();
  uVar10 = 100000;
  uVar1 = 0;
  while( true ) {
    if ((auStack_24[0] & 0x100) != 0 || (*param_1 & 8) != 0) {
      return 0;
    }
    uVar12 = FUN_ram_4ff21a0a();
    uVar7 = (uint)uVar12 - (int)uVar11;
    uVar8 = (int)((ulonglong)uVar12 >> 0x20) - (int)((ulonglong)uVar11 >> 0x20);
    uVar2 = (uint)((uint)uVar12 < uVar7);
    uVar9 = uVar8 - uVar2;
    uVar3 = uVar2;
    if (0 < (int)uVar9) break;
    uVar6 = uVar10 >> 0x1f;
    uVar3 = 1;
    if ((uVar8 == uVar2) && (5000000 < uVar7)) break;
    if (((int)uVar1 < (int)uVar9) || ((uVar9 == uVar1 && (uVar10 < uVar7)))) {
      uVar10 = uVar10 << 1;
      uVar1 = uVar6 | uVar1 << 1;
      FUN_ram_4ff3c2b6();
    }
    iVar4 = FUN_ram_48163054(param_1,auStack_24);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  uVar5 = FUN_ram_4ff44d14(uVar3);
  FUN_ram_4ff44bf0(1,"sdmmc_sd","E (%lu) %s: init wait data ready - timeout\n",uVar5,"sdmmc_sd");
  return 0x107;
}


