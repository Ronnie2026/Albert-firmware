/* Firmware entry: 0x4810ecce */

void FUN_ram_4810ecce(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  char *pcVar18;
  uint uVar19;
  undefined **ppuVar20;
  uint uVar21;
  uint *puVar22;
  undefined2 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  byte *pbVar28;
  byte *pbVar29;
  undefined4 local_44;
  byte abStack_40 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar8 = &DAT_ram_481f5510;
  puVar9 = &DAT_ram_481f5510;
  uVar24 = 0;
  uVar25 = 0x65;
  puVar11 = param_1;
  do {
    do {
      uVar14 = *puVar9;
      puVar22 = puVar9 + 1;
      uVar12 = *puVar11 ^ uVar25;
      uVar19 = puVar11[1] ^ uVar24;
      uVar7 = uVar25 + 0x25;
      puVar9 = puVar9 + 2;
      uVar24 = uVar24 + (uVar7 < uVar25);
      puVar17 = puVar11 + 2;
      puVar11[1] = uVar14 * uVar19 + *puVar22 * uVar12 +
                   (int)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
      *puVar11 = uVar14 * uVar12;
      uVar25 = uVar7;
      puVar11 = puVar17;
    } while (uVar7 != 0xf9);
  } while (uVar24 != 0);
  uVar24 = param_1[0xb];
  uVar7 = param_1[8] + 1;
  uVar25 = param_1[9] + 1;
  param_1[8] = uVar7;
  param_1[9] = uVar25;
  if ((uVar24 != 0) && (uVar24 == uVar25)) {
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    while (ppuVar20 = ppuVar20 + 1, ppuVar20 != (undefined **)&DAT_ram_481f51dc) {
      while ((pcVar18 = *ppuVar20, *pcVar18 == 'i' && (pcVar18[1] == 'd'))) {
        if (pcVar18[2] == '\0') goto LAB_ram_4810edb8;
        ppuVar20 = ppuVar20 + 1;
        if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810eda2;
      }
    }
  }
LAB_ram_4810eda2:
  FUN_ram_480340d0(param_1,"id",*param_2);
  uVar7 = param_1[8];
LAB_ram_4810edb8:
  uVar14 = 0;
  puVar11 = puVar8;
  uVar12 = 0x73;
  puVar9 = param_1;
  do {
    do {
      uVar15 = *puVar11;
      puVar22 = puVar11 + 1;
      uVar13 = *puVar9 ^ uVar12;
      uVar21 = puVar9[1] ^ uVar14;
      uVar19 = uVar12 + 0x25;
      puVar11 = puVar11 + 2;
      uVar14 = uVar14 + (uVar19 < uVar12);
      puVar17 = puVar9 + 2;
      puVar9[1] = uVar15 * uVar21 + *puVar22 * uVar13 +
                  (int)((ulonglong)uVar15 * (ulonglong)uVar13 >> 0x20);
      *puVar9 = uVar15 * uVar13;
      uVar12 = uVar19;
      puVar9 = puVar17;
    } while (uVar19 != 0x107);
  } while (uVar14 != 0);
  local_44 = 4;
  pbVar28 = (byte *)&local_44;
  puVar11 = param_1 + 8;
  do {
    uVar14 = 0;
    uVar12 = (uint)*pbVar28;
    puVar9 = param_1;
    puVar22 = puVar8;
    do {
      uVar13 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar19 = *puVar9 ^ uVar12;
      uVar15 = puVar9[1] ^ uVar14;
      uVar14 = uVar14 + (uVar12 + 0x25 < uVar12);
      puVar16 = puVar9 + 2;
      puVar22 = puVar22 + 2;
      puVar9[1] = uVar13 * uVar15 + *puVar17 * uVar19 +
                  (int)((ulonglong)uVar13 * (ulonglong)uVar19 >> 0x20);
      *puVar9 = uVar13 * uVar19;
      uVar12 = uVar12 + 0x25;
      puVar9 = puVar16;
    } while (puVar11 != puVar16);
    pbVar28 = pbVar28 + 1;
  } while (pbVar28 != abStack_40);
  pbVar28 = (byte *)0x481bc328;
  do {
    uVar14 = 0;
    uVar12 = (uint)*pbVar28;
    puVar9 = param_1;
    puVar22 = puVar8;
    do {
      uVar13 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar19 = *puVar9 ^ uVar12;
      uVar15 = puVar9[1] ^ uVar14;
      uVar14 = uVar14 + (uVar12 + 0x25 < uVar12);
      puVar16 = puVar9 + 2;
      puVar22 = puVar22 + 2;
      puVar9[1] = uVar13 * uVar15 + *puVar17 * uVar19 +
                  (int)((ulonglong)uVar13 * (ulonglong)uVar19 >> 0x20);
      *puVar9 = uVar13 * uVar19;
      uVar12 = uVar12 + 0x25;
      puVar9 = puVar16;
    } while (puVar11 != puVar16);
    pbVar28 = pbVar28 + 1;
  } while (pbVar28 != (byte *)0x481bc32c);
  pbVar28 = (byte *)(param_2 + 1);
  param_1[8] = uVar7 + 9;
  local_44 = strlen((char *)pbVar28);
  pbVar29 = (byte *)&local_44;
  do {
    uVar14 = 0;
    uVar12 = (uint)*pbVar29;
    puVar9 = param_1;
    puVar22 = puVar8;
    do {
      uVar13 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar19 = *puVar9 ^ uVar12;
      uVar15 = puVar9[1] ^ uVar14;
      uVar14 = uVar14 + (uVar12 + 0x25 < uVar12);
      puVar16 = puVar9 + 2;
      puVar22 = puVar22 + 2;
      puVar9[1] = uVar13 * uVar15 + *puVar17 * uVar19 +
                  (int)((ulonglong)uVar13 * (ulonglong)uVar19 >> 0x20);
      *puVar9 = uVar13 * uVar19;
      uVar12 = uVar12 + 0x25;
      puVar9 = puVar16;
    } while (puVar11 != puVar16);
    pbVar29 = pbVar29 + 1;
  } while (abStack_40 != pbVar29);
  param_1[8] = uVar7 + 0xd;
  if (local_44 != 0) {
    pbVar29 = pbVar28 + local_44;
    do {
      iVar10 = 0;
      puVar9 = param_1;
      puVar22 = puVar8;
      do {
        uVar14 = *puVar22;
        puVar17 = puVar22 + 1;
        uVar12 = *puVar9 ^ (uint)*pbVar28 + iVar10;
        iVar10 = iVar10 + 0x25;
        puVar22 = puVar22 + 2;
        puVar9[1] = uVar14 * puVar9[1] + *puVar17 * uVar12 +
                    (int)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
        *puVar9 = uVar14 * uVar12;
        puVar9 = puVar9 + 2;
      } while (iVar10 != 0x94);
      pbVar28 = pbVar28 + 1;
    } while (pbVar29 != pbVar28);
  }
  param_1[8] = local_44 + uVar7 + 0xd;
  if ((uVar24 == 0) || (uVar24 != uVar25)) {
LAB_ram_4810efcc:
    FUN_ram_480340d0(param_1,"lastUseSequence",param_2[0xc]);
  }
  else {
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar20 = ppuVar20 + 1;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810efcc;
      iVar10 = FUN_ram_4ff453ae("lastUseSequence",*ppuVar20);
    } while (iVar10 != 0);
  }
  FUN_ram_4808f560(param_1,"manual",*(undefined1 *)((int)param_2 + 0x2e));
  FUN_ram_4808f25a(param_1,&DAT_ram_481c6214);
  uVar24 = param_1[0xb];
  uVar25 = param_1[9];
  if ((uVar24 == 0) || (uVar25 != uVar24)) {
    FUN_ram_4803428c(param_1,"track");
    FUN_ram_4803428c(param_1,"backrest",*(undefined2 *)(param_2 + 8));
    FUN_ram_4803428c(param_1,&DAT_ram_481c61e0,*(undefined2 *)((int)param_2 + 0x22));
    uVar5 = *(undefined2 *)(param_2 + 9);
LAB_ram_4810f12c:
    FUN_ram_4803428c(param_1,&DAT_ram_481c61e8,uVar5);
  }
  else {
    ppuVar27 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar20 = ppuVar20 + 1;
      ppuVar26 = ppuVar27;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"track");
        break;
      }
      iVar10 = FUN_ram_4ff453ae("track",*ppuVar20);
    } while (iVar10 != 0);
    do {
      ppuVar26 = ppuVar26 + 1;
      ppuVar20 = ppuVar27;
      if (ppuVar26 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"backrest",*(undefined2 *)(param_2 + 8));
        break;
      }
      iVar10 = FUN_ram_4ff453ae("backrest",*ppuVar26);
    } while (iVar10 != 0);
    do {
      ppuVar20 = ppuVar20 + 1;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,&DAT_ram_481c61e0,*(undefined2 *)((int)param_2 + 0x22));
        break;
      }
      iVar10 = FUN_ram_4ff453ae(&DAT_ram_481c61e0,*ppuVar20);
    } while (iVar10 != 0);
    do {
      ppuVar27 = ppuVar27 + 1;
      if (ppuVar27 == (undefined **)&DAT_ram_481f51dc) {
        uVar5 = *(undefined2 *)(param_2 + 9);
        goto LAB_ram_4810f12c;
      }
      iVar10 = FUN_ram_4ff453ae(&DAT_ram_481c61e8,*ppuVar27);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  uVar7 = 0x7d;
  puVar9 = param_1;
  puVar22 = puVar8;
  do {
    do {
      uVar19 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar14 = *puVar9 ^ uVar7;
      uVar13 = puVar9[1] ^ uVar12;
      uVar15 = uVar7 + 0x25;
      puVar22 = puVar22 + 2;
      uVar12 = uVar12 + (uVar15 < uVar7);
      puVar16 = puVar9 + 2;
      puVar9[1] = uVar19 * uVar13 + *puVar17 * uVar14 +
                  (int)((ulonglong)uVar19 * (ulonglong)uVar14 >> 0x20);
      *puVar9 = uVar19 * uVar14;
      uVar7 = uVar15;
      puVar9 = puVar16;
    } while (uVar15 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar25 == uVar24) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar25 - 1;
  FUN_ram_4808f25a(param_1,"tolerances");
  uVar24 = param_1[0xb];
  uVar25 = param_1[9];
  if ((uVar24 == 0) || (uVar25 != uVar24)) {
    FUN_ram_4803428c(param_1,"track");
    FUN_ram_4803428c(param_1,"backrest",*(undefined2 *)(param_2 + 10));
    FUN_ram_4803428c(param_1,&DAT_ram_481c61e0,*(undefined2 *)((int)param_2 + 0x2a));
    uVar5 = *(undefined2 *)(param_2 + 0xb);
  }
  else {
    ppuVar27 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar20 = ppuVar20 + 1;
      ppuVar26 = ppuVar27;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"track");
        break;
      }
      iVar10 = FUN_ram_4ff453ae("track",*ppuVar20);
    } while (iVar10 != 0);
    do {
      ppuVar26 = ppuVar26 + 1;
      ppuVar20 = ppuVar27;
      if (ppuVar26 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"backrest",*(undefined2 *)(param_2 + 10));
        break;
      }
      iVar10 = FUN_ram_4ff453ae("backrest",*ppuVar26);
    } while (iVar10 != 0);
    while (ppuVar20 = ppuVar20 + 1, ppuVar20 != (undefined **)&DAT_ram_481f51dc) {
      iVar10 = FUN_ram_4ff453ae(&DAT_ram_481c61e0,*ppuVar20);
      if (iVar10 == 0) goto LAB_ram_4810f282;
    }
    FUN_ram_4803428c(param_1,&DAT_ram_481c61e0,*(undefined2 *)((int)param_2 + 0x2a));
    ppuVar27 = &PTR_s_canCommsEnabled_ram_481cb974_ram_481f51c0;
    do {
      iVar10 = FUN_ram_4ff453ae(&DAT_ram_481c61e8,*ppuVar27);
      if (iVar10 == 0) goto LAB_ram_4810f2d0;
LAB_ram_4810f282:
      ppuVar27 = ppuVar27 + 1;
    } while (ppuVar27 != (undefined **)&DAT_ram_481f51dc);
    uVar5 = *(undefined2 *)(param_2 + 0xb);
  }
  FUN_ram_4803428c(param_1,&DAT_ram_481c61e8,uVar5);
LAB_ram_4810f2d0:
  uVar12 = 0;
  uVar7 = 0x7d;
  puVar9 = param_1;
  puVar22 = puVar8;
  do {
    do {
      uVar19 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar14 = *puVar9 ^ uVar7;
      uVar13 = puVar9[1] ^ uVar12;
      uVar15 = uVar7 + 0x25;
      puVar22 = puVar22 + 2;
      uVar12 = uVar12 + (uVar15 < uVar7);
      puVar16 = puVar9 + 2;
      puVar9[1] = uVar19 * uVar13 + *puVar17 * uVar14 +
                  (int)((ulonglong)uVar19 * (ulonglong)uVar14 >> 0x20);
      *puVar9 = uVar19 * uVar14;
      uVar7 = uVar15;
      puVar9 = puVar16;
    } while (uVar15 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar25 == uVar24) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar25 - 1;
  FUN_ram_4808f6e8(param_1,param_2 + 0xd);
  FUN_ram_4810e094(param_1,param_2 + 0x36);
  uVar1 = *(undefined1 *)(param_2 + 0x48);
  uVar2 = *(undefined1 *)((int)param_2 + 0x121);
  FUN_ram_4808f25a(param_1,"battery");
  FUN_ram_4808f560(param_1,"batteryPreheatEnabled",uVar1);
  uVar24 = param_1[0xb];
  uVar25 = param_1[9];
  if ((uVar24 == 0) || (uVar25 != uVar24)) {
LAB_ram_4810f3a8:
    FUN_ram_4803444c(param_1,"batteryPreheatDurationMin",uVar2);
  }
  else {
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar20 = ppuVar20 + 1;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810f3a8;
      iVar10 = FUN_ram_4ff453ae("batteryPreheatDurationMin",*ppuVar20);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  uVar7 = 0x7d;
  puVar9 = param_1;
  puVar22 = puVar8;
  do {
    do {
      uVar19 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar14 = *puVar9 ^ uVar7;
      uVar13 = puVar9[1] ^ uVar12;
      uVar15 = uVar7 + 0x25;
      puVar22 = puVar22 + 2;
      uVar12 = uVar12 + (uVar15 < uVar7);
      puVar16 = puVar9 + 2;
      puVar9[1] = uVar19 * uVar13 + *puVar17 * uVar14 +
                  (int)((ulonglong)uVar19 * (ulonglong)uVar14 >> 0x20);
      *puVar9 = uVar19 * uVar14;
      uVar7 = uVar15;
      puVar9 = puVar16;
    } while (uVar15 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar25 == uVar24) {
    param_1[0xb] = 0;
  }
  uVar5 = *(undefined2 *)(param_2 + 0x4a);
  uVar1 = *(undefined1 *)((int)param_2 + 0x122);
  param_1[9] = uVar25 - 1;
  uVar2 = *(undefined1 *)(param_2 + 0x49);
  uVar3 = *(undefined1 *)((int)param_2 + 0x125);
  uVar4 = *(undefined1 *)((int)param_2 + 0x123);
  uVar6 = *(undefined2 *)((int)param_2 + 0x126);
  FUN_ram_4808f25a(param_1,"rearFog");
  FUN_ram_4808f560(param_1,"enabled",uVar1);
  FUN_ram_4808f560(param_1,"reverseWarningEnabled",uVar4);
  FUN_ram_4808f560(param_1,"rearFogPilotEnabled",uVar2);
  FUN_ram_4808f560(param_1,"reverseRearFogSteadyEnabled",uVar3);
  uVar24 = param_1[0xb];
  uVar25 = param_1[9];
  if ((uVar24 == 0) || (uVar25 != uVar24)) {
    FUN_ram_4803428c(param_1,"mildDecelCx100",uVar6);
LAB_ram_4810f50a:
    FUN_ram_4803428c(param_1,"hardDecelCx100",uVar5);
  }
  else {
    ppuVar27 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar20 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar20 = ppuVar20 + 1;
      if (ppuVar20 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"mildDecelCx100",uVar6);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("mildDecelCx100",*ppuVar20);
    } while (iVar10 != 0);
    do {
      ppuVar27 = ppuVar27 + 1;
      if (ppuVar27 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810f50a;
      iVar10 = FUN_ram_4ff453ae("hardDecelCx100",*ppuVar27);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  uVar7 = 0x7d;
  puVar9 = param_1;
  puVar22 = puVar8;
  do {
    do {
      uVar19 = *puVar22;
      puVar17 = puVar22 + 1;
      uVar14 = *puVar9 ^ uVar7;
      uVar13 = puVar9[1] ^ uVar12;
      uVar15 = uVar7 + 0x25;
      puVar22 = puVar22 + 2;
      uVar12 = uVar12 + (uVar15 < uVar7);
      puVar16 = puVar9 + 2;
      puVar9[1] = uVar19 * uVar13 + *puVar17 * uVar14 +
                  (int)((ulonglong)uVar19 * (ulonglong)uVar14 >> 0x20);
      *puVar9 = uVar19 * uVar14;
      uVar7 = uVar15;
      puVar9 = puVar16;
    } while (uVar15 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar25 == uVar24) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar25 - 1;
  FUN_ram_480d3d46(param_1,(int)param_2 + 0x12a,"ambient");
  FUN_ram_4808f25a(param_1,"speedTarget");
  FUN_ram_4808f560(param_1,"customSpeedEnabled",*(undefined1 *)(param_2 + 0x58));
  FUN_ram_4808f560(param_1,"modeExplicit",*(undefined1 *)((int)param_2 + 0x161));
  FUN_ram_4808f3d8(param_1,"targets");
  puVar23 = (undefined2 *)((int)param_2 + 0x162);
  uVar25 = param_1[8];
  if (puVar23 != (undefined2 *)((int)param_2 + 0x19e)) {
    do {
      uVar5 = *puVar23;
      uVar7 = 0;
      uVar24 = 0x4e;
      puVar9 = param_1;
      puVar22 = puVar8;
      do {
        do {
          uVar14 = *puVar22;
          puVar17 = puVar22 + 1;
          uVar13 = *puVar9 ^ uVar24;
          uVar19 = puVar9[1] ^ uVar7;
          uVar12 = uVar24 + 0x25;
          puVar22 = puVar22 + 2;
          uVar7 = uVar7 + (uVar12 < uVar24);
          puVar16 = puVar9 + 2;
          puVar9[1] = uVar14 * uVar19 + *puVar17 * uVar13 +
                      (int)((ulonglong)uVar14 * (ulonglong)uVar13 >> 0x20);
          *puVar9 = uVar14 * uVar13;
          uVar24 = uVar12;
          puVar9 = puVar16;
        } while (uVar12 != 0xe2);
      } while (uVar7 != 0);
      local_44 = CONCAT22(local_44._2_2_,uVar5);
      pbVar28 = (byte *)&local_44;
      do {
        uVar7 = 0;
        uVar24 = (uint)*pbVar28;
        puVar9 = param_1;
        puVar22 = puVar8;
        do {
          uVar12 = *puVar22;
          puVar17 = puVar22 + 1;
          uVar19 = *puVar9 ^ uVar24;
          uVar14 = puVar9[1] ^ uVar7;
          uVar7 = uVar7 + (uVar24 + 0x25 < uVar24);
          puVar16 = puVar9 + 2;
          puVar22 = puVar22 + 2;
          puVar9[1] = uVar12 * uVar14 + *puVar17 * uVar19 +
                      (int)((ulonglong)uVar12 * (ulonglong)uVar19 >> 0x20);
          *puVar9 = uVar12 * uVar19;
          uVar24 = uVar24 + 0x25;
          puVar9 = puVar16;
        } while (puVar11 != puVar16);
        pbVar28 = pbVar28 + 1;
      } while ((byte *)((int)&local_44 + 2) != pbVar28);
      puVar23 = puVar23 + 1;
    } while ((undefined2 *)((int)param_2 + 0x19e) != puVar23);
    uVar25 = uVar25 + 0x5a;
  }
  uVar7 = 0;
  puVar11 = puVar8;
  uVar24 = 0x5d;
  puVar9 = param_1;
  do {
    do {
      uVar19 = *puVar11;
      puVar22 = puVar11 + 1;
      uVar14 = *puVar9 ^ uVar24;
      uVar13 = puVar9[1] ^ uVar7;
      uVar12 = uVar24 + 0x25;
      puVar11 = puVar11 + 2;
      uVar7 = uVar7 + (uVar12 < uVar24);
      puVar17 = puVar9 + 2;
      puVar9[1] = uVar19 * uVar13 + *puVar22 * uVar14 +
                  (int)((ulonglong)uVar19 * (ulonglong)uVar14 >> 0x20);
      *puVar9 = uVar19 * uVar14;
      uVar24 = uVar12;
      puVar9 = puVar17;
    } while (uVar12 != 0xf1);
  } while (uVar7 != 0);
  uVar24 = param_1[9];
  if (uVar24 == param_1[10]) {
    param_1[10] = 0;
  }
  uVar12 = 0;
  puVar11 = puVar8;
  uVar7 = 0x7d;
  puVar9 = param_1;
  do {
    do {
      uVar19 = *puVar11;
      puVar22 = puVar11 + 1;
      uVar14 = *puVar9 ^ uVar7;
      uVar13 = puVar9[1] ^ uVar12;
      uVar15 = uVar7 + 0x25;
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 + (uVar15 < uVar7);
      puVar17 = puVar9 + 2;
      puVar9[1] = uVar19 * uVar13 + *puVar22 * uVar14 +
                  (int)((ulonglong)uVar19 * (ulonglong)uVar14 >> 0x20);
      *puVar9 = uVar19 * uVar14;
      uVar7 = uVar15;
      puVar9 = puVar17;
    } while (uVar15 != 0x111);
  } while (uVar12 != 0);
  uVar7 = param_1[0xb];
  if (uVar7 == uVar24 - 1) {
    param_1[0xb] = 0;
    uVar7 = 0;
  }
  uVar14 = 0;
  uVar12 = 0x7d;
  puVar11 = param_1;
  do {
    do {
      uVar13 = *puVar8;
      puVar9 = puVar8 + 1;
      uVar19 = *puVar11 ^ uVar12;
      uVar15 = puVar11[1] ^ uVar14;
      uVar21 = uVar12 + 0x25;
      puVar8 = puVar8 + 2;
      uVar14 = uVar14 + (uVar21 < uVar12);
      puVar22 = puVar11 + 2;
      puVar11[1] = uVar13 * uVar15 + *puVar9 * uVar19 +
                   (int)((ulonglong)uVar13 * (ulonglong)uVar19 >> 0x20);
      *puVar11 = uVar13 * uVar19;
      uVar12 = uVar21;
      puVar11 = puVar22;
    } while (uVar21 != 0x111);
  } while (uVar14 != 0);
  param_1[8] = uVar25 + 3;
  if (uVar24 - 2 == uVar7) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar24 - 3;
  return;
}


