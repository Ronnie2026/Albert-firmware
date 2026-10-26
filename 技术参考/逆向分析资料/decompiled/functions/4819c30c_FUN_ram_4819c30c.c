/* Firmware entry: 0x4819c30c */

uint FUN_ram_4819c30c(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x10) + -1;
    puVar10 = (uint *)(param_2 + 0x14);
    puVar12 = puVar10 + iVar2;
    puVar11 = (uint *)(param_1 + 0x14);
    puVar5 = puVar11 + iVar2;
    uVar3 = *puVar5 / (*puVar12 + 1);
    if (*puVar12 + 1 <= *puVar5) {
      uVar1 = 0;
      iVar13 = 0;
      puVar8 = puVar10;
      puVar9 = puVar11;
      do {
        uVar6 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar4 = (uVar6 & 0xffff) * uVar3 + uVar1;
        uVar6 = (uVar6 >> 0x10) * uVar3 + (uVar4 >> 0x10);
        uVar1 = uVar6 >> 0x10;
        uVar4 = ((*puVar9 & 0xffff) - (uVar4 & 0xffff)) + iVar13;
        iVar7 = ((*puVar9 >> 0x10) - (uVar6 & 0xffff)) + ((int)uVar4 >> 0x10);
        iVar13 = iVar7 >> 0x10;
        *puVar9 = iVar7 * 0x10000 | uVar4 & 0xffff;
        puVar9 = puVar9 + 1;
      } while (puVar8 <= puVar12);
      if (*puVar5 == 0) {
        while ((puVar5 = puVar5 + -1, puVar11 < puVar5 && (*puVar5 == 0))) {
          iVar2 = iVar2 + -1;
        }
        *(int *)(param_1 + 0x10) = iVar2;
      }
    }
    iVar13 = FUN_ram_4819e178(param_1);
    if (-1 < iVar13) {
      iVar13 = 0;
      puVar5 = puVar11;
      do {
        uVar1 = *puVar10;
        puVar10 = puVar10 + 1;
        uVar4 = ((*puVar5 & 0xffff) - (uVar1 & 0xffff)) + iVar13;
        iVar7 = ((*puVar5 >> 0x10) - (uVar1 >> 0x10)) + ((int)uVar4 >> 0x10);
        iVar13 = iVar7 >> 0x10;
        *puVar5 = iVar7 * 0x10000 | uVar4 & 0xffff;
        puVar5 = puVar5 + 1;
      } while (puVar10 <= puVar12);
      puVar5 = puVar11 + iVar2;
      if (*puVar5 == 0) {
        while ((puVar5 = puVar5 + -1, puVar11 < puVar5 && (*puVar5 == 0))) {
          iVar2 = iVar2 + -1;
        }
        *(int *)(param_1 + 0x10) = iVar2;
      }
      uVar3 = uVar3 + 1;
    }
  }
  return uVar3;
}


