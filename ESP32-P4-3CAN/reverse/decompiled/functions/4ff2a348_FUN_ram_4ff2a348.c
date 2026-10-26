/* Firmware entry: 0x4ff2a348 */

void FUN_ram_4ff2a348(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  undefined1 uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  
  uVar5 = DAT_ram_4ff50e98;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar9 = &DAT_ram_4ff50cf8;
  DAT_ram_4ff50e8c = 0;
  uVar7 = 0;
  do {
    DAT_ram_4ff50e88 = *(int *)(puVar9 + 0x234) + uVar7;
    if (DAT_ram_4ff50e88 < uVar7) {
      DAT_ram_4ff50e88 = 0xffffffff;
    }
    puVar2 = (uint *)(puVar9 + 0x238);
    puVar9 = puVar9 + 0x18;
    if (DAT_ram_4ff50e8c < *puVar2) {
      DAT_ram_4ff50e8c = *puVar2;
    }
    uVar7 = DAT_ram_4ff50e88;
  } while (puVar9 != &DAT_ram_4ff50d40);
  puVar12 = param_1 + 7;
  param_1[2] = param_5;
  param_1[3] = uVar5;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[6] = 0;
  *param_1 = 2;
  param_1[1] = 0x304;
  if (((uint)puVar12 & 3) == 0) {
    puVar10 = (undefined4 *)&DAT_ram_4ff50ee4;
    do {
      uVar5 = *puVar10;
      puVar8 = puVar12 + 1;
      puVar10 = puVar10 + 1;
      *puVar12 = uVar5;
      puVar12 = puVar8;
    } while (puVar8 != param_1 + 0xf);
    if (param_2 == (undefined4 *)0x0) goto LAB_ram_4ff2a576;
LAB_ram_4ff2a3d2:
    puVar12 = param_1 + 0xf;
    if ((((uint)puVar12 | (uint)param_2) & 3) == 0) {
      puVar10 = param_2 + 10;
      do {
        uVar5 = *param_2;
        param_2 = param_2 + 1;
        *puVar12 = uVar5;
        puVar12 = puVar12 + 1;
      } while (param_2 != puVar10);
    }
    else {
      puVar10 = param_2 + 10;
      do {
        uVar1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        *(undefined1 *)puVar12 = uVar1;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (param_2 != puVar10);
    }
  }
  else {
    puVar10 = (undefined4 *)&DAT_ram_4ff50ee4;
    do {
      uVar1 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      *(undefined1 *)puVar12 = uVar1;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    } while (puVar10 != &DAT_ram_4ff50f04);
    if (param_2 != (undefined4 *)0x0) goto LAB_ram_4ff2a3d2;
LAB_ram_4ff2a576:
    puVar12 = param_1 + 0xf;
    if (((uint)puVar12 & 3) == 0) {
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (puVar12 != param_1 + 0x19);
    }
    else {
      do {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (puVar12 != param_1 + 0x19);
    }
  }
  uVar5 = DAT_ram_4ff50f7c;
  uVar6 = DAT_ram_4ff50f78;
  uVar7 = DAT_ram_4ff50e7c;
  uVar14 = DAT_ram_4ff50f78;
  if (0xc < DAT_ram_4ff50f78) {
    uVar14 = 0xc;
  }
  param_1[0x1b] = DAT_ram_4ff50f78 - uVar14;
  param_1[0x19] = uVar14;
  param_1[0x1a] = uVar5;
  iVar15 = DAT_ram_4ff50f74;
  uVar3 = DAT_ram_4ff50e8c;
  uVar13 = DAT_ram_4ff50e88;
  uVar5 = DAT_ram_4ff50e84;
  uVar4 = uVar7;
  if (8 < uVar7) {
    uVar4 = 8;
  }
  param_1[0x1d] = DAT_ram_4ff50e80;
  param_1[0x21] = uVar13;
  param_1[0x1c] = uVar4;
  param_1[0x1e] = uVar5;
  param_1[0x22] = uVar3;
  param_1[0x1f] = uVar7 - uVar4;
  param_1[0x20] = 1;
  puVar12 = param_1 + 0x23;
  uVar13 = 0;
  if (uVar6 == 0) {
    if (((uint)puVar12 & 3) == 0) {
      uVar6 = 0x1b0;
LAB_ram_4ff2a4c2:
      puVar10 = (undefined4 *)(uVar6 + (int)puVar12);
      do {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar10);
      goto LAB_ram_4ff2a4ce;
    }
    uVar6 = 0x1b0;
LAB_ram_4ff2a608:
    puVar10 = (undefined4 *)(uVar6 + (int)puVar12);
    do {
      *(undefined1 *)puVar12 = 0;
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    } while (puVar10 != puVar12);
    puVar12 = param_1 + 0x8f;
    uVar6 = 0;
    iVar15 = DAT_ram_4ff50e78 - uVar4;
    if (uVar7 != 0) goto LAB_ram_4ff2a4e0;
LAB_ram_4ff2a626:
    puVar12 = param_1 + 0x8f;
    uVar7 = 0xc0;
    if (((uint)puVar12 & 3) != 0) {
LAB_ram_4ff2a5ee:
      puVar10 = (undefined4 *)(uVar7 + (int)puVar12);
      do {
        *(undefined1 *)puVar12 = 0;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (puVar12 != puVar10);
      param_1[0xbf] = 0;
      param_1[0xc0] = 0;
      return;
    }
  }
  else {
    do {
      while( true ) {
        iVar11 = ((iVar15 - uVar14) + uVar13 & 0xf) * 0x24;
        puVar10 = (undefined4 *)(&DAT_ram_4ff50fa8 + iVar11);
        if (((uint)puVar12 & 3) != 0) break;
        puVar8 = puVar12;
        do {
          uVar5 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar5;
          puVar8 = puVar8 + 1;
        } while (puVar10 != (undefined4 *)(&DAT_ram_4ff50fcc + iVar11));
        uVar13 = uVar13 + 1;
        puVar12 = puVar12 + 9;
        if (uVar14 <= uVar13) goto LAB_ram_4ff2a4a0;
      }
      puVar8 = puVar12;
      do {
        uVar1 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (puVar10 != (undefined4 *)(&DAT_ram_4ff50fcc + iVar11));
      uVar13 = uVar13 + 1;
      puVar12 = puVar12 + 9;
    } while (uVar13 < uVar14);
LAB_ram_4ff2a4a0:
    puVar12 = param_1 + uVar14 * 9 + 0x23;
    uVar6 = uVar14 * -0x24 + 0x1b0;
    if (((uint)param_1 & 3) == 0) {
      if (3 < uVar6) goto LAB_ram_4ff2a4c2;
    }
    else if (uVar6 != 0) goto LAB_ram_4ff2a608;
LAB_ram_4ff2a4ce:
    puVar12 = param_1 + 0x8f;
    uVar6 = 0;
    iVar15 = DAT_ram_4ff50e78 - uVar4;
    if (uVar7 == 0) goto LAB_ram_4ff2a626;
LAB_ram_4ff2a4e0:
    do {
      while( true ) {
        iVar11 = (iVar15 + uVar6 & 0xf) * 0x18;
        puVar10 = (undefined4 *)(&DAT_ram_4ff50cf8 + iVar11);
        if (((uint)puVar12 & 3) != 0) break;
        puVar8 = puVar12;
        do {
          uVar5 = *puVar10;
          puVar10 = puVar10 + 1;
          *puVar8 = uVar5;
          puVar8 = puVar8 + 1;
        } while ((undefined4 *)(iVar11 + 0x4ff50d10) != puVar10);
        uVar6 = uVar6 + 1;
        puVar12 = puVar12 + 6;
        if (uVar4 <= uVar6) goto LAB_ram_4ff2a514;
      }
      puVar8 = puVar12;
      do {
        uVar1 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        *(undefined1 *)puVar8 = uVar1;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      } while (puVar10 != (undefined4 *)(iVar11 + 0x4ff50d10));
      uVar6 = uVar6 + 1;
      puVar12 = puVar12 + 6;
    } while (uVar6 < uVar4);
LAB_ram_4ff2a514:
    puVar12 = param_1 + uVar4 * 6 + 0x8f;
    uVar7 = uVar4 * -0x18 + 0xc0;
    if (((uint)param_1 & 3) != 0) {
      if (uVar7 == 0) goto LAB_ram_4ff2a540;
      goto LAB_ram_4ff2a5ee;
    }
    if (uVar7 < 4) goto LAB_ram_4ff2a540;
  }
  puVar10 = (undefined4 *)(uVar7 + (int)puVar12);
  do {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  } while (puVar12 != puVar10);
LAB_ram_4ff2a540:
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  return;
}


