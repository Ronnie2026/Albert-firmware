/* Firmware entry: 0x4819d8c0 */

undefined4 FUN_ram_4819d8c0(int *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar13 = *param_2 & 0x1f;
  puVar11 = param_3 + ((int)*param_2 >> 5);
  if (uVar13 != 0) {
    puVar11 = puVar11 + 1;
  }
  iVar8 = *param_1;
  puVar12 = puVar11 + -1;
  puVar11[-1] = 0;
  iVar5 = 0;
  iVar15 = 0;
  puVar2 = puVar12;
  iVar14 = 0;
  puVar7 = puVar12;
LAB_ram_4819d914:
  while( true ) {
    bVar1 = *(byte *)(iVar8 + 1);
    iVar6 = iVar8 + 1;
    if (bVar1 == 0) break;
    uVar3 = FUN_ram_4819d364(bVar1);
    if (uVar3 != 0) {
      iVar5 = iVar5 + 1;
      iVar15 = iVar15 + 1;
      if (8 < iVar5) goto code_r0x4819d9fa;
      goto LAB_ram_4819da06;
    }
    if (0x20 < bVar1) {
      if (bVar1 != 0x29) goto LAB_ram_4819da34;
      *param_1 = iVar8 + 2;
      break;
    }
    iVar8 = iVar6;
    if (iVar14 < iVar15) {
      if ((puVar2 < puVar7) && (iVar5 < 8)) {
        FUN_ram_4819d866(puVar2,puVar7);
      }
      iVar5 = 8;
      if (param_3 < puVar2) {
        puVar7 = puVar2 + -1;
        puVar2[-1] = 0;
        iVar5 = 0;
        puVar2 = puVar7;
        iVar14 = iVar15;
      }
    }
  }
  if (iVar15 == 0) {
LAB_ram_4819da34:
    uVar4 = 4;
  }
  else {
    if ((puVar2 < puVar7) && (iVar5 < 8)) {
      FUN_ram_4819d866(puVar2,puVar7);
    }
    puVar7 = param_3;
    puVar9 = puVar2;
    if (param_3 < puVar2) {
      do {
        puVar10 = puVar9 + 1;
        *puVar7 = *puVar9;
        puVar7 = puVar7 + 1;
        puVar9 = puVar10;
      } while (puVar10 <= puVar12);
      uVar13 = 0;
      if ((int)puVar2 + 1U <= (int)puVar11 - 3U) {
        uVar13 = (int)puVar12 - (int)puVar2 & 0xfffffffc;
      }
      puVar11 = (uint *)((int)param_3 + uVar13 + 4);
      do {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      } while (puVar11 <= puVar12);
    }
    else if (uVar13 != 0) {
      puVar11[-1] = puVar11[-1] & 0xffffffffU >> (0x20 - uVar13 & 0x1f);
    }
    for (; *puVar12 == 0; puVar12 = puVar12 + -1) {
      if (puVar12 == param_3) {
        *puVar12 = 1;
        break;
      }
    }
    uVar4 = 5;
  }
  return uVar4;
code_r0x4819d9fa:
  iVar8 = iVar6;
  if (param_3 < puVar2) {
    puVar2[-1] = 0;
    iVar5 = 1;
    puVar2 = puVar2 + -1;
LAB_ram_4819da06:
    *puVar2 = *puVar2 << 4 | uVar3 & 0xf;
    iVar8 = iVar6;
  }
  goto LAB_ram_4819d914;
}


