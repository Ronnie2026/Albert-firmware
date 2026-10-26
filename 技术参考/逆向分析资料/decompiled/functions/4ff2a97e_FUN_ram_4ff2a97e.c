/* Firmware entry: 0x4ff2a97e */

void FUN_ram_4ff2a97e(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  int aiStack_48 [10];
  int aiStack_20 [3];
  
  iVar1 = cycle;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (mhartid != 1) {
    DAT_ram_4ff5079c = DAT_ram_4ff5079c + 1;
    return;
  }
  uVar3 = FUN_ram_4ff3ebfe();
  iVar2 = cycle;
  FUN_ram_4ff29c0e();
  iVar6 = DAT_ram_4ff50f80;
  if (((uint)param_1 & 3) == 0) {
    piVar9 = aiStack_48;
    do {
      iVar8 = *param_1;
      piVar4 = piVar9 + 1;
      param_1 = param_1 + 1;
      *piVar9 = iVar8;
      piVar9 = piVar4;
    } while (piVar4 != aiStack_20);
  }
  else {
    piVar9 = aiStack_48;
    do {
      piVar4 = (int *)((int)piVar9 + 1);
      *(char *)piVar9 = (char)*param_1;
      param_1 = (int *)((int)param_1 + 1);
      piVar9 = piVar4;
    } while (piVar4 != aiStack_20);
  }
  aiStack_48[1] = iVar2;
  if (0xf < DAT_ram_4ff50f84) {
    if (DAT_ram_4ff50f88 != -1) {
      DAT_ram_4ff50f88 = DAT_ram_4ff50f88 + 1;
    }
    if (DAT_ram_4ff50f84 == 0xffffffff) goto LAB_ram_4ff2aa06;
  }
  DAT_ram_4ff50f84 = DAT_ram_4ff50f84 + 1;
LAB_ram_4ff2aa06:
  piVar10 = aiStack_48;
  piVar4 = (int *)(&DAT_ram_4ff511e8 + DAT_ram_4ff50f80 * 0x28);
  piVar9 = piVar4;
  do {
    iVar8 = *piVar10;
    piVar10 = piVar10 + 1;
    *piVar9 = iVar8;
    iVar8 = DAT_ram_4ff51468;
    piVar9 = piVar9 + 1;
  } while (piVar10 != aiStack_20);
  DAT_ram_4ff50f80 = DAT_ram_4ff50f80 + 1 & 0xf;
  *(uint *)(&DAT_ram_4ff511e8 + iVar6 * 0x28) = DAT_ram_4ff50f84;
  if (iVar8 == 0) {
    DAT_ram_4ff5146c = DAT_ram_4ff50f78;
    DAT_ram_4ff51468 = 1;
    piVar9 = piVar4;
    piVar10 = &DAT_ram_4ff51470;
    do {
      iVar6 = *piVar9;
      piVar11 = piVar10 + 1;
      piVar9 = piVar9 + 1;
      *piVar10 = iVar6;
      piVar10 = piVar11;
    } while (piVar11 != (int *)0x4ff51498);
    iVar6 = DAT_ram_4ff50f74 - DAT_ram_4ff50f78;
    if (DAT_ram_4ff50f78 != 0) {
      uVar14 = 0;
      puVar5 = (undefined4 *)0x4ff51498;
      do {
        iVar8 = (iVar6 + uVar14 & 0xf) * 0x24;
        puVar12 = (undefined4 *)(&DAT_ram_4ff50fa8 + iVar8);
        puVar15 = puVar5;
        do {
          uVar7 = *puVar12;
          puVar12 = puVar12 + 1;
          *puVar15 = uVar7;
          puVar15 = puVar15 + 1;
        } while (puVar12 != (undefined4 *)(&DAT_ram_4ff50fcc + iVar8));
        uVar14 = uVar14 + 1;
        puVar5 = puVar5 + 9;
      } while (uVar14 < DAT_ram_4ff50f78);
    }
  }
  puVar5 = &DAT_ram_4ff516e0;
  DAT_ram_4ff516d8 = 1;
  puVar15 = &DAT_ram_4ff51708;
  piVar9 = &DAT_ram_4ff516e0;
  DAT_ram_4ff516dc = DAT_ram_4ff50f78;
  do {
    iVar6 = *piVar4;
    piVar10 = piVar9 + 1;
    piVar4 = piVar4 + 1;
    *piVar9 = iVar6;
    piVar9 = piVar10;
  } while (piVar10 != &DAT_ram_4ff51708);
  uVar14 = 0;
  iVar6 = DAT_ram_4ff50f74 - DAT_ram_4ff50f78;
  if (DAT_ram_4ff50f78 != 0) {
    do {
      iVar8 = (iVar6 + uVar14 & 0xf) * 0x24;
      puVar13 = (undefined4 *)(&DAT_ram_4ff50fa8 + iVar8);
      puVar12 = puVar15;
      do {
        uVar7 = *puVar13;
        puVar13 = puVar13 + 1;
        *puVar12 = uVar7;
        puVar12 = puVar12 + 1;
      } while (puVar13 != (undefined4 *)(&DAT_ram_4ff50fcc + iVar8));
      uVar14 = uVar14 + 1;
      puVar15 = puVar15 + 9;
    } while (uVar14 < DAT_ram_4ff50f78);
  }
  puVar15 = &DAT_ram_4ff50f04;
  do {
    uVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    *puVar15 = uVar7;
    puVar15 = puVar15 + 1;
  } while (puVar5 != &DAT_ram_4ff51708);
  FUN_ram_4ff2a658(&DAT_ram_4ff50f04,1,iVar2);
  uVar14 = cycle - iVar2;
  if (DAT_ram_4ff50fa0 < uVar14) {
    DAT_ram_4ff50fa0 = uVar14;
  }
  if (DAT_ram_4ff50ec0 < uVar14) {
    DAT_ram_4ff50ec0 = uVar14;
  }
  if (DAT_ram_4ff50f90 < (uint)(cycle - iVar1)) {
    DAT_ram_4ff50f90 = cycle - iVar1;
  }
  FUN_ram_4ff3ec08(uVar3);
  return;
}


