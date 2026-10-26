/* Firmware entry: 0x4810e094 */

void FUN_ram_4810e094(uint *param_1,undefined1 *param_2)

{
  short sVar1;
  byte *pbVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined **ppuVar16;
  undefined2 uVar17;
  char *pcVar18;
  undefined **ppuVar19;
  ushort uVar20;
  undefined **ppuVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  undefined4 local_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808f25a(param_1,"torque");
  FUN_ram_4808f560(param_1,"enabled",*param_2);
  FUN_ram_4808f560(param_1,"maintenanceEnabled",param_2[1]);
  uVar5 = param_1[0xb];
  uVar6 = param_1[9];
  if ((uVar5 == 0) || (uVar6 != uVar5)) {
LAB_ram_4810e0f4:
    uVar20 = *(ushort *)(param_2 + 2);
    puVar15 = &DAT_ram_481f5510;
    uVar22 = 0;
    puVar3 = param_1;
    uVar14 = 0x6e;
    do {
      do {
        uVar10 = *puVar15;
        puVar24 = puVar15 + 1;
        uVar8 = *puVar3 ^ uVar14;
        uVar13 = puVar3[1] ^ uVar22;
        uVar23 = uVar14 + 0x25;
        puVar15 = puVar15 + 2;
        uVar22 = uVar22 + (uVar23 < uVar14);
        puVar12 = puVar3 + 2;
        puVar3[1] = uVar10 * uVar13 + *puVar24 * uVar8 +
                    (int)((ulonglong)uVar10 * (ulonglong)uVar8 >> 0x20);
        *puVar3 = uVar10 * uVar8;
        puVar3 = puVar12;
        uVar14 = uVar23;
      } while (uVar23 != 0x102);
    } while (uVar22 != 0);
    uVar14 = param_1[8];
    pbVar4 = (byte *)&local_34;
    local_34 = 0x1c;
    puVar3 = param_1 + 8;
    pbVar2 = pbVar4;
    do {
      uVar8 = 0;
      puVar15 = param_1;
      uVar22 = (uint)*pbVar2;
      puVar24 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar24;
        puVar12 = puVar24 + 1;
        uVar23 = *puVar15 ^ uVar22;
        uVar13 = puVar15[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar15 + 2;
        puVar24 = puVar24 + 2;
        puVar15[1] = uVar10 * uVar13 + *puVar12 * uVar23 +
                     (int)((ulonglong)uVar10 * (ulonglong)uVar23 >> 0x20);
        *puVar15 = uVar10 * uVar23;
        puVar15 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar3 != puVar11);
      pbVar2 = pbVar2 + 1;
    } while (pbVar2 != &stack0xffffffd0);
    pcVar18 = "preventiveNegativeMinCentiNm";
    do {
      uVar8 = 0;
      puVar15 = param_1;
      uVar22 = (uint)(byte)*pcVar18;
      puVar24 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar24;
        puVar12 = puVar24 + 1;
        uVar23 = *puVar15 ^ uVar22;
        uVar13 = puVar15[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar15 + 2;
        puVar24 = puVar24 + 2;
        puVar15[1] = uVar10 * uVar13 + *puVar12 * uVar23 +
                     (int)((ulonglong)uVar10 * (ulonglong)uVar23 >> 0x20);
        *puVar15 = uVar10 * uVar23;
        puVar15 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar3 != puVar11);
      pcVar18 = pcVar18 + 1;
    } while ((byte *)pcVar18 != (byte *)0x481cc1c8);
    local_34 = (uint)uVar20;
    do {
      uVar8 = 0;
      puVar15 = param_1;
      uVar22 = (uint)*pbVar4;
      puVar24 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar24;
        puVar12 = puVar24 + 1;
        uVar23 = *puVar15 ^ uVar22;
        uVar13 = puVar15[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar15 + 2;
        puVar24 = puVar24 + 2;
        puVar15[1] = uVar10 * uVar13 + *puVar12 * uVar23 +
                     (int)((ulonglong)uVar10 * (ulonglong)uVar23 >> 0x20);
        *puVar15 = uVar10 * uVar23;
        puVar15 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar3 != puVar11);
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != (byte *)((int)&local_34 + 2));
    param_1[8] = uVar14 + 0x23;
    uVar20 = *(ushort *)(param_2 + 4);
    if ((uVar5 != 0) && (uVar6 == uVar5)) goto LAB_ram_4810e92c;
LAB_ram_4810e298:
    puVar24 = param_1 + 8;
    pbVar2 = (byte *)&local_34;
    uVar22 = 0;
    puVar3 = &DAT_ram_481f5510;
    puVar15 = param_1;
    uVar14 = 0x6e;
    do {
      do {
        uVar8 = *puVar3;
        puVar12 = puVar3 + 1;
        uVar13 = *puVar15 ^ uVar14;
        uVar10 = puVar15[1] ^ uVar22;
        uVar23 = uVar14 + 0x25;
        puVar3 = puVar3 + 2;
        uVar22 = uVar22 + (uVar23 < uVar14);
        puVar11 = puVar15 + 2;
        puVar15[1] = uVar8 * uVar10 + *puVar12 * uVar13 +
                     (int)((ulonglong)uVar8 * (ulonglong)uVar13 >> 0x20);
        *puVar15 = uVar8 * uVar13;
        puVar15 = puVar11;
        uVar14 = uVar23;
      } while (uVar23 != 0x102);
    } while (uVar22 != 0);
    uVar14 = param_1[8];
    local_34 = 0x1c;
    pbVar4 = pbVar2;
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)*pbVar4;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pbVar4 = pbVar4 + 1;
    } while (pbVar4 != &stack0xffffffd0);
    pcVar18 = "preventiveNegativeMaxCentiNm";
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)(byte)*pcVar18;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pcVar18 = pcVar18 + 1;
    } while ((byte *)pcVar18 != (byte *)0x481cc1e8);
    local_34 = (uint)uVar20;
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)*pbVar2;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pbVar2 = pbVar2 + 1;
    } while ((byte *)((int)&local_34 + 2) != pbVar2);
    param_1[8] = uVar14 + 0x23;
    uVar20 = *(ushort *)(param_2 + 6);
    if ((uVar5 != 0) && (uVar6 == uVar5)) goto LAB_ram_4810e974;
LAB_ram_4810e422:
    puVar24 = param_1 + 8;
    pbVar2 = (byte *)&local_34;
    uVar22 = 0;
    puVar3 = &DAT_ram_481f5510;
    puVar15 = param_1;
    uVar14 = 0x6e;
    do {
      do {
        uVar8 = *puVar3;
        puVar12 = puVar3 + 1;
        uVar13 = *puVar15 ^ uVar14;
        uVar10 = puVar15[1] ^ uVar22;
        uVar23 = uVar14 + 0x25;
        puVar3 = puVar3 + 2;
        uVar22 = uVar22 + (uVar23 < uVar14);
        puVar11 = puVar15 + 2;
        puVar15[1] = uVar8 * uVar10 + *puVar12 * uVar13 +
                     (int)((ulonglong)uVar8 * (ulonglong)uVar13 >> 0x20);
        *puVar15 = uVar8 * uVar13;
        puVar15 = puVar11;
        uVar14 = uVar23;
      } while (uVar23 != 0x102);
    } while (uVar22 != 0);
    uVar14 = param_1[8];
    local_34 = 0x1c;
    pbVar4 = pbVar2;
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)*pbVar4;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pbVar4 = pbVar4 + 1;
    } while (&stack0xffffffd0 != pbVar4);
    pcVar18 = "preventivePositiveMinCentiNm";
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)(byte)*pcVar18;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pcVar18 = pcVar18 + 1;
    } while ((byte *)pcVar18 != (byte *)0x481cc208);
    local_34 = (uint)uVar20;
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)*pbVar2;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pbVar2 = pbVar2 + 1;
    } while ((byte *)((int)&local_34 + 2) != pbVar2);
    param_1[8] = uVar14 + 0x23;
    uVar20 = *(ushort *)(param_2 + 8);
    if ((uVar5 != 0) && (uVar6 == uVar5)) goto LAB_ram_4810e9a4;
LAB_ram_4810e5ac:
    puVar24 = param_1 + 8;
    pbVar2 = (byte *)&local_34;
    uVar22 = 0;
    puVar3 = &DAT_ram_481f5510;
    puVar15 = param_1;
    uVar14 = 0x6e;
    do {
      do {
        uVar8 = *puVar3;
        puVar12 = puVar3 + 1;
        uVar13 = *puVar15 ^ uVar14;
        uVar10 = puVar15[1] ^ uVar22;
        uVar23 = uVar14 + 0x25;
        puVar3 = puVar3 + 2;
        uVar22 = uVar22 + (uVar23 < uVar14);
        puVar11 = puVar15 + 2;
        puVar15[1] = uVar8 * uVar10 + *puVar12 * uVar13 +
                     (int)((ulonglong)uVar8 * (ulonglong)uVar13 >> 0x20);
        *puVar15 = uVar8 * uVar13;
        puVar15 = puVar11;
        uVar14 = uVar23;
      } while (uVar23 != 0x102);
    } while (uVar22 != 0);
    uVar14 = param_1[8];
    local_34 = 0x1c;
    pbVar4 = pbVar2;
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)*pbVar4;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pbVar4 = pbVar4 + 1;
    } while (&stack0xffffffd0 != pbVar4);
    pcVar18 = "preventivePositiveMaxCentiNm";
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)(byte)*pcVar18;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pcVar18 = pcVar18 + 1;
    } while ((byte *)pcVar18 != (byte *)0x481cc228);
    local_34 = (uint)uVar20;
    do {
      uVar8 = 0;
      puVar3 = param_1;
      uVar22 = (uint)*pbVar2;
      puVar15 = &DAT_ram_481f5510;
      do {
        uVar23 = *puVar15;
        puVar12 = puVar15 + 1;
        uVar10 = *puVar3 ^ uVar22;
        uVar13 = puVar3[1] ^ uVar8;
        uVar8 = uVar8 + (uVar22 + 0x25 < uVar22);
        puVar11 = puVar3 + 2;
        puVar15 = puVar15 + 2;
        puVar3[1] = uVar23 * uVar13 + *puVar12 * uVar10 +
                    (int)((ulonglong)uVar23 * (ulonglong)uVar10 >> 0x20);
        *puVar3 = uVar23 * uVar10;
        puVar3 = puVar11;
        uVar22 = uVar22 + 0x25;
      } while (puVar24 != puVar11);
      pbVar2 = pbVar2 + 1;
    } while ((byte *)((int)&local_34 + 2) != pbVar2);
    sVar1 = *(short *)(param_2 + 10);
    param_1[8] = uVar14 + 0x23;
    FUN_ram_4810de9a(param_1,"correctiveNegativeMinCentiNm",(int)sVar1);
    FUN_ram_4810de9a(param_1,"correctiveNegativeMaxCentiNm",(int)*(short *)(param_2 + 0xc));
    FUN_ram_4810de9a(param_1,"correctivePositiveMinCentiNm",(int)*(short *)(param_2 + 0xe));
    FUN_ram_4810de9a(param_1,"correctivePositiveMaxCentiNm",(int)*(short *)(param_2 + 0x10));
    uVar17 = *(undefined2 *)(param_2 + 0x12);
    if ((uVar5 == 0) || (uVar6 != uVar5)) {
      FUN_ram_4803428c(param_1,"correctivePositiveFrames",uVar17);
      FUN_ram_4803428c(param_1,"correctiveNegativeFrames",*(undefined2 *)(param_2 + 0x14));
      FUN_ram_480340d0(param_1,"activityMinMs",*(undefined4 *)(param_2 + 0x18));
      FUN_ram_480340d0(param_1,"activityMaxMs",*(undefined4 *)(param_2 + 0x1c));
      FUN_ram_480340d0(param_1,"restMinMs",*(undefined4 *)(param_2 + 0x20));
      FUN_ram_480340d0(param_1,"restMaxMs",*(undefined4 *)(param_2 + 0x24));
      FUN_ram_480340d0(param_1,"h2PersistenceMs",*(undefined4 *)(param_2 + 0x28));
      FUN_ram_480340d0(param_1,"preCorrectionPauseMs",*(undefined4 *)(param_2 + 0x2c));
      FUN_ram_480340d0(param_1,"correctiveSendMinMs",*(undefined4 *)(param_2 + 0x30));
      FUN_ram_480340d0(param_1,"correctiveSendMaxMs",*(undefined4 *)(param_2 + 0x34));
      FUN_ram_480340d0(param_1,"correctivePauseMinMs",*(undefined4 *)(param_2 + 0x38));
      FUN_ram_480340d0(param_1,"correctivePauseMaxMs",*(undefined4 *)(param_2 + 0x3c));
      FUN_ram_480340d0(param_1,"stabilityVerifyMs",*(undefined4 *)(param_2 + 0x40));
      uVar9 = *(undefined4 *)(param_2 + 0x44);
LAB_ram_4810e868:
      FUN_ram_480340d0(param_1,"dasFreshTimeoutMs",uVar9);
      goto LAB_ram_4810e872;
    }
  }
  else {
    ppuVar16 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar16 = ppuVar16 + 1;
      if (ppuVar16 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810e0f4;
      iVar7 = FUN_ram_4ff453ae("preventiveNegativeMinCentiNm",*ppuVar16);
    } while (iVar7 != 0);
    uVar20 = *(ushort *)(param_2 + 4);
LAB_ram_4810e92c:
    ppuVar16 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar16 = ppuVar16 + 1;
      if (ppuVar16 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810e298;
      iVar7 = FUN_ram_4ff453ae("preventiveNegativeMaxCentiNm",*ppuVar16);
    } while (iVar7 != 0);
    uVar20 = *(ushort *)(param_2 + 6);
LAB_ram_4810e974:
    ppuVar16 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar16 = ppuVar16 + 1;
      if (ppuVar16 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810e422;
      iVar7 = FUN_ram_4ff453ae("preventivePositiveMinCentiNm",*ppuVar16);
    } while (iVar7 != 0);
    uVar20 = *(ushort *)(param_2 + 8);
LAB_ram_4810e9a4:
    ppuVar16 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar16 = ppuVar16 + 1;
      if (ppuVar16 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810e5ac;
      iVar7 = FUN_ram_4ff453ae("preventivePositiveMaxCentiNm",*ppuVar16);
    } while (iVar7 != 0);
    FUN_ram_4810de9a(param_1,"correctiveNegativeMinCentiNm",(int)*(short *)(param_2 + 10));
    FUN_ram_4810de9a(param_1,"correctiveNegativeMaxCentiNm",(int)*(short *)(param_2 + 0xc));
    FUN_ram_4810de9a(param_1,"correctivePositiveMinCentiNm",(int)*(short *)(param_2 + 0xe));
    FUN_ram_4810de9a(param_1,"correctivePositiveMaxCentiNm",(int)*(short *)(param_2 + 0x10));
    uVar17 = *(undefined2 *)(param_2 + 0x12);
  }
  ppuVar16 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
  ppuVar21 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
  do {
    ppuVar21 = ppuVar21 + 1;
    ppuVar19 = ppuVar16;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_4803428c(param_1,"correctivePositiveFrames",uVar17);
      break;
    }
    iVar7 = FUN_ram_4ff453ae("correctivePositiveFrames",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar19 = ppuVar19 + 1;
    ppuVar21 = ppuVar16;
    if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_4803428c(param_1,"correctiveNegativeFrames",*(undefined2 *)(param_2 + 0x14));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("correctiveNegativeFrames",*ppuVar19);
  } while (iVar7 != 0);
  do {
    ppuVar21 = ppuVar21 + 1;
    ppuVar19 = ppuVar16;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"activityMinMs",*(undefined4 *)(param_2 + 0x18));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("activityMinMs",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar19 = ppuVar19 + 1;
    ppuVar21 = ppuVar16;
    if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"activityMaxMs",*(undefined4 *)(param_2 + 0x1c));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("activityMaxMs",*ppuVar19);
  } while (iVar7 != 0);
  do {
    ppuVar21 = ppuVar21 + 1;
    ppuVar19 = ppuVar16;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"restMinMs",*(undefined4 *)(param_2 + 0x20));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("restMinMs",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar19 = ppuVar19 + 1;
    ppuVar21 = ppuVar16;
    if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"restMaxMs",*(undefined4 *)(param_2 + 0x24));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("restMaxMs",*ppuVar19);
  } while (iVar7 != 0);
  do {
    ppuVar21 = ppuVar21 + 1;
    ppuVar19 = ppuVar16;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"h2PersistenceMs",*(undefined4 *)(param_2 + 0x28));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("h2PersistenceMs",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar19 = ppuVar19 + 1;
    ppuVar21 = ppuVar16;
    if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"preCorrectionPauseMs",*(undefined4 *)(param_2 + 0x2c));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("preCorrectionPauseMs",*ppuVar19);
  } while (iVar7 != 0);
  do {
    ppuVar21 = ppuVar21 + 1;
    ppuVar19 = ppuVar16;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"correctiveSendMinMs",*(undefined4 *)(param_2 + 0x30));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("correctiveSendMinMs",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar19 = ppuVar19 + 1;
    ppuVar21 = ppuVar16;
    if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"correctiveSendMaxMs",*(undefined4 *)(param_2 + 0x34));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("correctiveSendMaxMs",*ppuVar19);
  } while (iVar7 != 0);
  do {
    ppuVar21 = ppuVar21 + 1;
    ppuVar19 = ppuVar16;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"correctivePauseMinMs",*(undefined4 *)(param_2 + 0x38));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("correctivePauseMinMs",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar19 = ppuVar19 + 1;
    ppuVar21 = ppuVar16;
    if (ppuVar19 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"correctivePauseMaxMs",*(undefined4 *)(param_2 + 0x3c));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("correctivePauseMaxMs",*ppuVar19);
  } while (iVar7 != 0);
  do {
    ppuVar21 = ppuVar21 + 1;
    if (ppuVar21 == (undefined **)&DAT_ram_481f51dc) {
      FUN_ram_480340d0(param_1,"stabilityVerifyMs",*(undefined4 *)(param_2 + 0x40));
      break;
    }
    iVar7 = FUN_ram_4ff453ae("stabilityVerifyMs",*ppuVar21);
  } while (iVar7 != 0);
  do {
    ppuVar16 = ppuVar16 + 1;
    if (ppuVar16 == (undefined **)&DAT_ram_481f51dc) {
      uVar9 = *(undefined4 *)(param_2 + 0x44);
      goto LAB_ram_4810e868;
    }
    iVar7 = FUN_ram_4ff453ae("dasFreshTimeoutMs",*ppuVar16);
  } while (iVar7 != 0);
LAB_ram_4810e872:
  puVar15 = &DAT_ram_481f5510;
  uVar22 = 0;
  uVar14 = 0x7d;
  puVar3 = param_1;
  do {
    do {
      uVar10 = *puVar15;
      puVar24 = puVar15 + 1;
      uVar8 = *puVar3 ^ uVar14;
      uVar13 = puVar3[1] ^ uVar22;
      uVar23 = uVar14 + 0x25;
      puVar15 = puVar15 + 2;
      uVar22 = uVar22 + (uVar23 < uVar14);
      puVar12 = puVar3 + 2;
      puVar3[1] = uVar10 * uVar13 + *puVar24 * uVar8 +
                  (int)((ulonglong)uVar10 * (ulonglong)uVar8 >> 0x20);
      *puVar3 = uVar10 * uVar8;
      uVar14 = uVar23;
      puVar3 = puVar12;
    } while (uVar23 != 0x111);
  } while (uVar22 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar6 == uVar5) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar6 - 1;
  return;
}


