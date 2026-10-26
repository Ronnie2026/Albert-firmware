/* Firmware entry: 0x4819e36a */

undefined8 FUN_ram_4819e36a(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar8 = param_1 + 0x14;
  iVar6 = *(int *)(param_1 + 0x10) * 4 + uVar8;
  uVar5 = *(uint *)(iVar6 + -4);
  iVar1 = FUN_ram_4819dd18(uVar5);
  *param_2 = 0x20 - iVar1;
  uVar7 = iVar6 - 4;
  if (iVar1 < 0xb) {
    uVar3 = uVar5 >> (0xbU - iVar1 & 0x1f) | 0x3ff00000;
    uVar4 = 0;
    if (uVar8 < uVar7) {
      uVar4 = *(uint *)(iVar6 + -8);
    }
    uVar4 = uVar5 << (iVar1 + 0x15U & 0x1f) | uVar4 >> (0xbU - iVar1 & 0x1f);
  }
  else {
    uVar4 = 0;
    if (uVar8 < uVar7) {
      uVar4 = *(uint *)(iVar6 + -8);
      uVar7 = iVar6 - 8;
    }
    uVar2 = iVar1 - 0xb;
    if (uVar2 == 0) {
      uVar3 = uVar5 | 0x3ff00000;
    }
    else {
      uVar3 = uVar5 << (uVar2 & 0x1f) | uVar4 >> (0x20 - uVar2 & 0x1f) | 0x3ff00000;
      uVar5 = 0;
      if (uVar8 < uVar7) {
        uVar5 = *(uint *)(uVar7 - 4);
      }
      uVar4 = uVar4 << (uVar2 & 0x1f) | uVar5 >> (0x20 - uVar2 & 0x1f);
    }
  }
  return CONCAT44(uVar3,uVar4);
}


