/* Firmware entry: 0x4819d2ba */

void FUN_ram_4819d2ba(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = *(int *)(param_1 + 0x10);
  puVar2 = (uint *)(param_1 + 0x14);
  iVar9 = (int)param_2 >> 5;
  puVar6 = puVar2;
  if (iVar9 < iVar7) {
    param_2 = param_2 & 0x1f;
    puVar8 = puVar2 + iVar7;
    puVar4 = puVar2 + iVar9;
    puVar3 = puVar4;
    if (param_2 == 0) {
      for (; puVar3 < puVar8; puVar3 = puVar3 + 1) {
        *puVar6 = *puVar3;
        puVar6 = puVar6 + 1;
      }
      iVar5 = 0;
      if ((uint *)((int)puVar4 + -3) <= puVar8) {
        iVar5 = (iVar7 - iVar9) * 4;
      }
      puVar6 = (uint *)(iVar5 + (int)puVar2);
    }
    else {
      uVar1 = *puVar4;
      puVar3 = puVar2;
      puVar6 = puVar4;
      while( true ) {
        uVar1 = uVar1 >> param_2;
        puVar6 = puVar6 + 1;
        if (puVar8 <= puVar6) break;
        *puVar3 = *puVar6 << (0x20 - param_2 & 0x1f) | uVar1;
        uVar1 = *puVar6;
        puVar3 = puVar3 + 1;
      }
      iVar5 = 0;
      if ((uint *)((int)puVar4 + 1) <= puVar8) {
        iVar5 = (iVar7 - iVar9) * 4 + -4;
      }
      puVar6 = (uint *)(iVar5 + (int)puVar2);
      *puVar6 = uVar1;
      if (uVar1 != 0) {
        puVar6 = puVar6 + 1;
      }
    }
  }
  *(int *)(param_1 + 0x10) = (int)puVar6 - (int)puVar2 >> 2;
  if (puVar6 == puVar2) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


