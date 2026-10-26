/* Firmware entry: 0x480d3d46 */

void FUN_ram_480d3d46(uint *param_1,undefined1 *param_2,undefined4 param_3)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  undefined **ppuStack_64;
  byte local_44 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808f25a(param_1,param_3);
  FUN_ram_4808f560(param_1,"ambientEnabled",*param_2);
  FUN_ram_4808f560(param_1,"fsdCueEnabled",param_2[1]);
  FUN_ram_4808f560(param_1,"blindSpotEnabled",param_2[2]);
  uVar21 = param_1[0xb];
  uVar10 = param_2[3];
  uVar22 = param_1[9];
  if ((uVar21 == 0) || (uVar22 != uVar21)) {
    FUN_ram_4803444c(param_1,"blindSpotBrightness",uVar10);
    FUN_ram_4803444c(param_1,"blindSpotAreas",param_2[4]);
    uVar3 = *(undefined2 *)(param_2 + 6);
LAB_ram_480d3e72:
    FUN_ram_4803428c(param_1,"blindSpotRestoreDelayMs",uVar3);
    FUN_ram_4808f560(param_1,"turnFollowEnabled",param_2[8]);
    FUN_ram_4808f560(param_1,"turnFollowHazards",param_2[9]);
    uVar10 = param_2[10];
    if ((uVar21 == 0) || (uVar22 != uVar21)) {
      FUN_ram_4803444c(param_1,"turnFollowBrightness",uVar10);
      uVar10 = param_2[0xb];
LAB_ram_480d3ec2:
      FUN_ram_4803444c(param_1,"turnFollowAreas",uVar10);
      goto LAB_ram_480d3ecc;
    }
  }
  else {
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar18 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar19 = ppuVar20;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"blindSpotBrightness",uVar10);
        break;
      }
      iVar7 = FUN_ram_4ff453ae("blindSpotBrightness",*ppuVar18);
    } while (iVar7 != 0);
    do {
      ppuVar19 = ppuVar19 + 1;
      if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"blindSpotAreas",param_2[4]);
        break;
      }
      iVar7 = FUN_ram_4ff453ae("blindSpotAreas",*ppuVar19);
    } while (iVar7 != 0);
    do {
      ppuVar20 = ppuVar20 + 1;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
        uVar3 = *(undefined2 *)(param_2 + 6);
        goto LAB_ram_480d3e72;
      }
      iVar7 = FUN_ram_4ff453ae("blindSpotRestoreDelayMs",*ppuVar20);
    } while (iVar7 != 0);
    FUN_ram_4808f560(param_1,"turnFollowEnabled",param_2[8]);
    FUN_ram_4808f560(param_1,"turnFollowHazards",param_2[9]);
    uVar10 = param_2[10];
  }
  ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
  ppuVar18 = ppuVar20;
  do {
    ppuVar18 = ppuVar18 + 1;
    if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_4803444c(param_1,"turnFollowBrightness",uVar10);
      break;
    }
    iVar7 = FUN_ram_4ff453ae("turnFollowBrightness",*ppuVar18);
  } while (iVar7 != 0);
  do {
    ppuVar20 = ppuVar20 + 1;
    if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
      uVar10 = param_2[0xb];
      goto LAB_ram_480d3ec2;
    }
    iVar7 = FUN_ram_4ff453ae("turnFollowAreas",*ppuVar20);
  } while (iVar7 != 0);
LAB_ram_480d3ecc:
  FUN_ram_4808f3d8(param_1,"turnFollowColor");
  bVar1 = param_2[0xc];
  puVar24 = &DAT_ram_481f5510;
  puVar17 = &DAT_ram_481f5510;
  uVar25 = 0;
  uVar22 = 0x4e;
  puVar5 = param_1;
  do {
    do {
      uVar11 = *puVar17;
      puVar23 = puVar17 + 1;
      uVar8 = *puVar5 ^ uVar22;
      uVar14 = puVar5[1] ^ uVar25;
      uVar4 = uVar22 + 0x25;
      puVar17 = puVar17 + 2;
      uVar25 = uVar25 + (uVar4 < uVar22);
      puVar13 = puVar5 + 2;
      puVar5[1] = uVar11 * uVar14 + *puVar23 * uVar8 +
                  (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar5 = uVar11 * uVar8;
      uVar22 = uVar4;
      puVar5 = puVar13;
    } while (uVar4 != 0xe2);
  } while (uVar25 != 0);
  uVar4 = param_1[8];
  puVar23 = param_1 + 8;
  uVar22 = 0;
  uVar25 = (uint)bVar1;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    uVar11 = *puVar17;
    puVar13 = puVar17 + 1;
    uVar8 = *puVar5 ^ uVar25;
    uVar14 = puVar5[1] ^ uVar22;
    uVar22 = uVar22 + (uVar25 + 0x25 < uVar25);
    puVar12 = puVar5 + 2;
    puVar17 = puVar17 + 2;
    puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
    *puVar5 = uVar11 * uVar8;
    uVar25 = uVar25 + 0x25;
    puVar5 = puVar12;
  } while (puVar12 != puVar23);
  bVar1 = param_2[0xd];
  uVar25 = 0;
  puVar5 = puVar24;
  puVar17 = param_1;
  uVar22 = 0x4e;
  do {
    do {
      uVar11 = *puVar5;
      puVar13 = puVar5 + 1;
      uVar8 = *puVar17 ^ uVar22;
      uVar14 = puVar17[1] ^ uVar25;
      uVar26 = uVar22 + 0x25;
      puVar5 = puVar5 + 2;
      uVar25 = uVar25 + (uVar26 < uVar22);
      puVar12 = puVar17 + 2;
      puVar17[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                   (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar17 = uVar11 * uVar8;
      puVar17 = puVar12;
      uVar22 = uVar26;
    } while (uVar26 != 0xe2);
  } while (uVar25 != 0);
  uVar25 = 0;
  uVar22 = (uint)bVar1;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    uVar11 = *puVar17;
    puVar13 = puVar17 + 1;
    uVar8 = *puVar5 ^ uVar22;
    uVar14 = puVar5[1] ^ uVar25;
    uVar25 = uVar25 + (uVar22 + 0x25 < uVar22);
    puVar12 = puVar5 + 2;
    puVar17 = puVar17 + 2;
    puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
    *puVar5 = uVar11 * uVar8;
    uVar22 = uVar22 + 0x25;
    puVar5 = puVar12;
  } while (puVar12 != puVar23);
  bVar1 = param_2[0xe];
  uVar25 = 0;
  puVar5 = puVar24;
  puVar17 = param_1;
  uVar22 = 0x4e;
  do {
    do {
      uVar11 = *puVar5;
      puVar13 = puVar5 + 1;
      uVar8 = *puVar17 ^ uVar22;
      uVar14 = puVar17[1] ^ uVar25;
      uVar26 = uVar22 + 0x25;
      puVar5 = puVar5 + 2;
      uVar25 = uVar25 + (uVar26 < uVar22);
      puVar12 = puVar17 + 2;
      puVar17[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                   (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar17 = uVar11 * uVar8;
      puVar17 = puVar12;
      uVar22 = uVar26;
    } while (uVar26 != 0xe2);
  } while (uVar25 != 0);
  uVar25 = 0;
  uVar22 = (uint)bVar1;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    uVar11 = *puVar17;
    puVar13 = puVar17 + 1;
    uVar8 = *puVar5 ^ uVar22;
    uVar14 = puVar5[1] ^ uVar25;
    uVar25 = uVar25 + (uVar22 + 0x25 < uVar22);
    puVar12 = puVar5 + 2;
    puVar17 = puVar17 + 2;
    puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
    *puVar5 = uVar11 * uVar8;
    uVar22 = uVar22 + 0x25;
    puVar5 = puVar12;
  } while (puVar12 != puVar23);
  uVar25 = 0;
  uVar22 = 0x5d;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    do {
      uVar14 = *puVar17;
      puVar13 = puVar17 + 1;
      uVar11 = *puVar5 ^ uVar22;
      uVar26 = puVar5[1] ^ uVar25;
      uVar8 = uVar22 + 0x25;
      puVar17 = puVar17 + 2;
      uVar25 = uVar25 + (uVar8 < uVar22);
      puVar12 = puVar5 + 2;
      puVar5[1] = uVar14 * uVar26 + *puVar13 * uVar11 +
                  (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
      *puVar5 = uVar14 * uVar11;
      uVar22 = uVar8;
      puVar5 = puVar12;
    } while (uVar8 != 0xf1);
  } while (uVar25 != 0);
  param_1[8] = uVar4 + 7;
  if (param_1[9] == param_1[10]) {
    param_1[10] = 0;
  }
  uVar10 = param_2[0xf];
  uVar22 = param_1[9] - 1;
  param_1[9] = uVar22;
  FUN_ram_4808f560(param_1,"welcomeEnabled",uVar10);
  uVar10 = param_2[0x10];
  if ((uVar21 == 0) || (uVar22 != uVar21)) {
    FUN_ram_4803444c(param_1,"welcomeStyle",uVar10);
    FUN_ram_4803444c(param_1,"welcomeTriggerMode",param_2[0x11]);
    FUN_ram_4803444c(param_1,"welcomeBrightness",param_2[0x12]);
    FUN_ram_4803444c(param_1,"welcomeTempo",param_2[0x13]);
    uVar10 = param_2[0x14];
LAB_ram_480d419e:
    FUN_ram_4803444c(param_1,"welcomeZoneMask",uVar10);
  }
  else {
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar18 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar19 = ppuVar20;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"welcomeStyle",uVar10);
        break;
      }
      iVar7 = FUN_ram_4ff453ae("welcomeStyle",*ppuVar18);
    } while (iVar7 != 0);
    do {
      ppuVar19 = ppuVar19 + 1;
      ppuVar18 = ppuVar20;
      if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"welcomeTriggerMode",param_2[0x11]);
        break;
      }
      iVar7 = FUN_ram_4ff453ae("welcomeTriggerMode",*ppuVar19);
    } while (iVar7 != 0);
    do {
      ppuVar18 = ppuVar18 + 1;
      ppuVar19 = ppuVar20;
      if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"welcomeBrightness",param_2[0x12]);
        break;
      }
      iVar7 = FUN_ram_4ff453ae("welcomeBrightness",*ppuVar18);
    } while (iVar7 != 0);
    do {
      ppuVar19 = ppuVar19 + 1;
      if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"welcomeTempo",param_2[0x13]);
        break;
      }
      iVar7 = FUN_ram_4ff453ae("welcomeTempo",*ppuVar19);
    } while (iVar7 != 0);
    do {
      ppuVar20 = ppuVar20 + 1;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
        uVar10 = param_2[0x14];
        goto LAB_ram_480d419e;
      }
      iVar7 = FUN_ram_4ff453ae("welcomeZoneMask",*ppuVar20);
    } while (iVar7 != 0);
  }
  FUN_ram_4808f3d8(param_1,"welcomeColor");
  bVar1 = param_2[0x15];
  uVar25 = 0;
  uVar22 = 0x4e;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    do {
      uVar11 = *puVar17;
      puVar13 = puVar17 + 1;
      uVar8 = *puVar5 ^ uVar22;
      uVar14 = puVar5[1] ^ uVar25;
      uVar4 = uVar22 + 0x25;
      puVar17 = puVar17 + 2;
      uVar25 = uVar25 + (uVar4 < uVar22);
      puVar12 = puVar5 + 2;
      puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                  (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar5 = uVar11 * uVar8;
      uVar22 = uVar4;
      puVar5 = puVar12;
    } while (uVar4 != 0xe2);
  } while (uVar25 != 0);
  uVar4 = param_1[8];
  uVar22 = 0;
  uVar25 = (uint)bVar1;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    uVar11 = *puVar17;
    puVar13 = puVar17 + 1;
    uVar8 = *puVar5 ^ uVar25;
    uVar14 = puVar5[1] ^ uVar22;
    uVar22 = uVar22 + (uVar25 + 0x25 < uVar25);
    puVar12 = puVar5 + 2;
    puVar17 = puVar17 + 2;
    puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
    *puVar5 = uVar11 * uVar8;
    uVar25 = uVar25 + 0x25;
    puVar5 = puVar12;
  } while (puVar12 != puVar23);
  bVar1 = param_2[0x16];
  uVar25 = 0;
  puVar5 = puVar24;
  puVar17 = param_1;
  uVar22 = 0x4e;
  do {
    do {
      uVar11 = *puVar5;
      puVar13 = puVar5 + 1;
      uVar8 = *puVar17 ^ uVar22;
      uVar14 = puVar17[1] ^ uVar25;
      uVar26 = uVar22 + 0x25;
      puVar5 = puVar5 + 2;
      uVar25 = uVar25 + (uVar26 < uVar22);
      puVar12 = puVar17 + 2;
      puVar17[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                   (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar17 = uVar11 * uVar8;
      puVar17 = puVar12;
      uVar22 = uVar26;
    } while (uVar26 != 0xe2);
  } while (uVar25 != 0);
  uVar25 = 0;
  uVar22 = (uint)bVar1;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    uVar11 = *puVar17;
    puVar13 = puVar17 + 1;
    uVar8 = *puVar5 ^ uVar22;
    uVar14 = puVar5[1] ^ uVar25;
    uVar25 = uVar25 + (uVar22 + 0x25 < uVar22);
    puVar12 = puVar5 + 2;
    puVar17 = puVar17 + 2;
    puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
    *puVar5 = uVar11 * uVar8;
    uVar22 = uVar22 + 0x25;
    puVar5 = puVar12;
  } while (puVar12 != puVar23);
  bVar1 = param_2[0x17];
  uVar25 = 0;
  puVar5 = puVar24;
  puVar17 = param_1;
  uVar22 = 0x4e;
  do {
    do {
      uVar11 = *puVar5;
      puVar13 = puVar5 + 1;
      uVar8 = *puVar17 ^ uVar22;
      uVar14 = puVar17[1] ^ uVar25;
      uVar26 = uVar22 + 0x25;
      puVar5 = puVar5 + 2;
      uVar25 = uVar25 + (uVar26 < uVar22);
      puVar12 = puVar17 + 2;
      puVar17[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                   (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
      *puVar17 = uVar11 * uVar8;
      puVar17 = puVar12;
      uVar22 = uVar26;
    } while (uVar26 != 0xe2);
  } while (uVar25 != 0);
  uVar25 = 0;
  uVar22 = (uint)bVar1;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    uVar11 = *puVar17;
    puVar13 = puVar17 + 1;
    uVar8 = *puVar5 ^ uVar22;
    uVar14 = puVar5[1] ^ uVar25;
    uVar25 = uVar25 + (uVar22 + 0x25 < uVar22);
    puVar12 = puVar5 + 2;
    puVar17 = puVar17 + 2;
    puVar5[1] = uVar11 * uVar14 + *puVar13 * uVar8 +
                (int)((ulonglong)uVar11 * (ulonglong)uVar8 >> 0x20);
    *puVar5 = uVar11 * uVar8;
    uVar22 = uVar22 + 0x25;
    puVar5 = puVar12;
  } while (puVar12 != puVar23);
  uVar25 = 0;
  uVar22 = 0x5d;
  puVar5 = param_1;
  puVar17 = puVar24;
  do {
    do {
      uVar14 = *puVar17;
      puVar13 = puVar17 + 1;
      uVar11 = *puVar5 ^ uVar22;
      uVar26 = puVar5[1] ^ uVar25;
      uVar8 = uVar22 + 0x25;
      puVar17 = puVar17 + 2;
      uVar25 = uVar25 + (uVar8 < uVar22);
      puVar12 = puVar5 + 2;
      puVar5[1] = uVar14 * uVar26 + *puVar13 * uVar11 +
                  (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
      *puVar5 = uVar14 * uVar11;
      uVar22 = uVar8;
      puVar5 = puVar12;
    } while (uVar8 != 0xf1);
  } while (uVar25 != 0);
  param_1[8] = uVar4 + 7;
  if (param_1[9] == param_1[10]) {
    param_1[10] = 0;
  }
  param_1[9] = param_1[9] - 1;
  FUN_ram_4808f3d8(param_1,"zones");
  uVar4 = param_1[9];
  uVar25 = param_1[8];
  uVar22 = uVar4 + 1;
  pcVar6 = param_2 + 0x18;
  do {
    uVar11 = 0;
    uVar8 = 0x65;
    puVar5 = param_1;
    puVar17 = puVar24;
    do {
      do {
        uVar26 = *puVar17;
        puVar13 = puVar17 + 1;
        uVar14 = *puVar5 ^ uVar8;
        uVar15 = puVar5[1] ^ uVar11;
        uVar16 = uVar8 + 0x25;
        puVar17 = puVar17 + 2;
        uVar11 = uVar11 + (uVar16 < uVar8);
        puVar12 = puVar5 + 2;
        puVar5[1] = uVar26 * uVar15 + *puVar13 * uVar14 +
                    (int)((ulonglong)uVar26 * (ulonglong)uVar14 >> 0x20);
        *puVar5 = uVar26 * uVar14;
        uVar8 = uVar16;
        puVar5 = puVar12;
      } while (uVar16 != 0xf9);
    } while (uVar11 != 0);
    param_1[9] = uVar22;
    param_1[8] = uVar25 + 1;
    if ((uVar21 == 0) || (uVar22 != uVar21)) {
LAB_ram_480d44d8:
      uVar11 = 0;
      uVar8 = (-(uint)(*pcVar6 == '\0') & 0xfffffff2) + 0x74;
      puVar5 = param_1;
      puVar17 = puVar24;
      do {
        uVar26 = *puVar17;
        puVar13 = puVar17 + 1;
        uVar14 = *puVar5 ^ uVar8;
        uVar15 = puVar5[1] ^ uVar11;
        uVar11 = uVar11 + (uVar8 + 0x25 < uVar8);
        puVar12 = puVar5 + 2;
        puVar17 = puVar17 + 2;
        puVar5[1] = uVar26 * uVar15 + *puVar13 * uVar14 +
                    (int)((ulonglong)uVar26 * (ulonglong)uVar14 >> 0x20);
        *puVar5 = uVar26 * uVar14;
        uVar8 = uVar8 + 0x25;
        puVar5 = puVar12;
      } while (puVar12 != puVar23);
      local_44[0] = 7;
      local_44[1] = 0;
      local_44[2] = 0;
      local_44[3] = 0;
      pbVar9 = local_44;
      do {
        uVar11 = 0;
        uVar8 = (uint)*pbVar9;
        puVar5 = param_1;
        puVar17 = puVar24;
        do {
          uVar26 = *puVar17;
          puVar13 = puVar17 + 1;
          uVar14 = *puVar5 ^ uVar8;
          uVar15 = puVar5[1] ^ uVar11;
          uVar11 = uVar11 + (uVar8 + 0x25 < uVar8);
          puVar12 = puVar5 + 2;
          puVar17 = puVar17 + 2;
          puVar5[1] = uVar26 * uVar15 + *puVar13 * uVar14 +
                      (int)((ulonglong)uVar26 * (ulonglong)uVar14 >> 0x20);
          *puVar5 = uVar26 * uVar14;
          uVar8 = uVar8 + 0x25;
          puVar5 = puVar12;
        } while (puVar12 != puVar23);
        pbVar9 = pbVar9 + 1;
      } while (local_44 + 4 != pbVar9);
      pbVar9 = (byte *)0x481ccbe0;
      do {
        uVar11 = 0;
        uVar8 = (uint)*pbVar9;
        puVar5 = param_1;
        puVar17 = puVar24;
        do {
          uVar26 = *puVar17;
          puVar13 = puVar17 + 1;
          uVar14 = *puVar5 ^ uVar8;
          uVar15 = puVar5[1] ^ uVar11;
          uVar11 = uVar11 + (uVar8 + 0x25 < uVar8);
          puVar12 = puVar5 + 2;
          puVar17 = puVar17 + 2;
          puVar5[1] = uVar26 * uVar15 + *puVar13 * uVar14 +
                      (int)((ulonglong)uVar26 * (ulonglong)uVar14 >> 0x20);
          *puVar5 = uVar26 * uVar14;
          uVar8 = uVar8 + 0x25;
          puVar5 = puVar12;
        } while (puVar12 != puVar23);
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != (byte *)0x481ccbe7);
      param_1[8] = uVar25 + 0xd;
      cVar2 = pcVar6[1];
      if ((uVar21 != 0) && (uVar22 == uVar21)) goto LAB_ram_480d479e;
      FUN_ram_4803444c(param_1,"brightness");
      FUN_ram_4803444c(param_1,"red",pcVar6[2]);
      FUN_ram_4803444c(param_1,"green",pcVar6[3]);
      cVar2 = pcVar6[4];
    }
    else {
      ppuVar18 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
      do {
        ppuVar18 = ppuVar18 + 1;
        if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_480d44d8;
        iVar7 = FUN_ram_4ff453ae("enabled",*ppuVar18);
      } while (iVar7 != 0);
      cVar2 = pcVar6[1];
LAB_ram_480d479e:
      ppuStack_64 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
      ppuVar18 = ppuStack_64;
      do {
        ppuVar18 = ppuVar18 + 1;
        ppuVar20 = ppuStack_64;
        if (ppuVar18 == (undefined **)&DAT_ram_481f51dc) {
          FUN_ram_4803444c(param_1,"brightness",cVar2);
          break;
        }
        iVar7 = FUN_ram_4ff453ae("brightness",*ppuVar18);
      } while (iVar7 != 0);
      do {
        ppuVar20 = ppuVar20 + 1;
        ppuVar18 = ppuStack_64;
        if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
          FUN_ram_4803444c(param_1,"red",pcVar6[2]);
          break;
        }
        iVar7 = FUN_ram_4ff453ae("red",*ppuVar20);
      } while (iVar7 != 0);
      while (ppuVar18 = ppuVar18 + 1, ppuVar18 != (undefined **)&DAT_ram_481f51dc) {
        iVar7 = FUN_ram_4ff453ae("green",*ppuVar18);
        if (iVar7 == 0) goto LAB_ram_480d484c;
      }
      FUN_ram_4803444c(param_1,"green",pcVar6[3]);
      ppuStack_64 = &PTR_s_canCommsEnabled_ram_481cb974_ram_481f51c0;
      do {
        iVar7 = FUN_ram_4ff453ae(&DAT_ram_481c5364,*ppuStack_64);
        if (iVar7 == 0) goto LAB_ram_480d463c;
LAB_ram_480d484c:
        ppuStack_64 = ppuStack_64 + 1;
      } while (ppuStack_64 != (undefined **)&DAT_ram_481f51dc);
      cVar2 = pcVar6[4];
    }
    FUN_ram_4803444c(param_1,&DAT_ram_481c5364,cVar2);
LAB_ram_480d463c:
    uVar8 = 0;
    uVar25 = 0x7d;
    puVar5 = param_1;
    puVar17 = puVar24;
    do {
      do {
        uVar14 = *puVar17;
        puVar13 = puVar17 + 1;
        uVar11 = *puVar5 ^ uVar25;
        uVar26 = puVar5[1] ^ uVar8;
        uVar15 = uVar25 + 0x25;
        puVar17 = puVar17 + 2;
        uVar8 = uVar8 + (uVar15 < uVar25);
        puVar12 = puVar5 + 2;
        puVar5[1] = uVar14 * uVar26 + *puVar13 * uVar11 +
                    (int)((ulonglong)uVar14 * (ulonglong)uVar11 >> 0x20);
        *puVar5 = uVar14 * uVar11;
        uVar25 = uVar15;
        puVar5 = puVar12;
      } while (uVar15 != 0x111);
    } while (uVar8 != 0);
    uVar8 = param_1[8];
    uVar25 = uVar8 + 1;
    param_1[8] = uVar25;
    if (uVar22 == uVar21) {
      param_1[0xb] = 0;
      uVar21 = 0;
    }
    pcVar6 = pcVar6 + 5;
    param_1[9] = uVar4;
    if (param_2 + 0x36 == pcVar6) {
      uVar25 = 0;
      uVar22 = 0x5d;
      puVar5 = param_1;
      puVar17 = puVar24;
      do {
        do {
          uVar26 = *puVar17;
          puVar23 = puVar17 + 1;
          uVar14 = *puVar5 ^ uVar22;
          uVar15 = puVar5[1] ^ uVar25;
          uVar11 = uVar22 + 0x25;
          puVar17 = puVar17 + 2;
          uVar25 = uVar25 + (uVar11 < uVar22);
          puVar13 = puVar5 + 2;
          puVar5[1] = uVar26 * uVar15 + *puVar23 * uVar14 +
                      (int)((ulonglong)uVar26 * (ulonglong)uVar14 >> 0x20);
          *puVar5 = uVar26 * uVar14;
          uVar22 = uVar11;
          puVar5 = puVar13;
        } while (uVar11 != 0xf1);
      } while (uVar25 != 0);
      if (uVar4 == param_1[10]) {
        param_1[10] = 0;
      }
      uVar25 = 0;
      uVar22 = 0x7d;
      puVar5 = param_1;
      do {
        do {
          uVar26 = *puVar24;
          puVar17 = puVar24 + 1;
          uVar14 = *puVar5 ^ uVar22;
          uVar15 = puVar5[1] ^ uVar25;
          uVar11 = uVar22 + 0x25;
          puVar24 = puVar24 + 2;
          uVar25 = uVar25 + (uVar11 < uVar22);
          puVar23 = puVar5 + 2;
          puVar5[1] = uVar26 * uVar15 + *puVar17 * uVar14 +
                      (int)((ulonglong)uVar26 * (ulonglong)uVar14 >> 0x20);
          *puVar5 = uVar26 * uVar14;
          uVar22 = uVar11;
          puVar5 = puVar23;
        } while (uVar11 != 0x111);
      } while (uVar25 != 0);
      param_1[8] = uVar8 + 3;
      if (uVar4 - 1 == uVar21) {
        param_1[0xb] = 0;
      }
      param_1[9] = uVar4 - 2;
      return;
    }
  } while( true );
}


