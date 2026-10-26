/* Firmware entry: 0x4810f80c */

bool FUN_ram_4810f80c(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  char *pcVar24;
  undefined4 *puVar25;
  ushort *puVar26;
  undefined **ppuVar27;
  uint *puVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  uint uVar31;
  uint uVar32;
  undefined4 local_44;
  byte abStack_40 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar10 = FUN_ram_48076846(param_2);
  if (iVar10 == 0) {
    return false;
  }
  puVar28 = &DAT_ram_481f5510;
  puVar11 = &DAT_ram_481f5510;
  uVar22 = 0;
  uVar20 = 0x4f;
  puVar9 = param_1;
  do {
    do {
      uVar14 = *puVar11;
      puVar17 = puVar11 + 1;
      uVar12 = *puVar9 ^ uVar20;
      uVar19 = puVar9[1] ^ uVar22;
      uVar8 = uVar20 + 0x25;
      puVar11 = puVar11 + 2;
      uVar22 = uVar22 + (uVar8 < uVar20);
      puVar18 = puVar9 + 2;
      puVar9[1] = uVar14 * uVar19 + *puVar17 * uVar12 +
                  (int)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
      *puVar9 = uVar14 * uVar12;
      uVar20 = uVar8;
      puVar9 = puVar18;
    } while (uVar8 != 0xe3);
  } while (uVar22 != 0);
  uVar20 = param_1[9];
  param_1[8] = param_1[8] + 1;
  param_1[9] = uVar20 + 1;
  if ((param_1[0xb] == 0) || (param_1[0xb] != uVar20 + 1)) {
    FUN_ram_480340d0(param_1,"schema_version",1);
    FUN_ram_480340d0(param_1,"active_driver_id",*param_2);
    FUN_ram_480340d0(param_1,"last_driver_id",param_2[1]);
    FUN_ram_480340d0(param_1,"next_driver_id",param_2[2]);
    uVar13 = param_2[3];
LAB_ram_4810f8f6:
    FUN_ram_480340d0(param_1,"next_driver_use_sequence",uVar13);
  }
  else {
    ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar29 = ppuVar29 + 1;
      ppuVar27 = ppuVar30;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_480340d0(param_1,"schema_version",1);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("schema_version",*ppuVar29);
    } while (iVar10 != 0);
    do {
      ppuVar27 = ppuVar27 + 1;
      ppuVar29 = ppuVar30;
      if (ppuVar27 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_480340d0(param_1,"active_driver_id",*param_2);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("active_driver_id",*ppuVar27);
    } while (iVar10 != 0);
    do {
      ppuVar29 = ppuVar29 + 1;
      ppuVar27 = ppuVar30;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_480340d0(param_1,"last_driver_id",param_2[1]);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("last_driver_id",*ppuVar29);
    } while (iVar10 != 0);
    do {
      ppuVar27 = ppuVar27 + 1;
      if (ppuVar27 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_480340d0(param_1,"next_driver_id",param_2[2]);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("next_driver_id",*ppuVar27);
    } while (iVar10 != 0);
    do {
      ppuVar30 = ppuVar30 + 1;
      if (ppuVar30 == (undefined **)&DAT_ram_481f51dc) {
        uVar13 = param_2[3];
        goto LAB_ram_4810f8f6;
      }
      iVar10 = FUN_ram_4ff453ae("next_driver_use_sequence",*ppuVar30);
    } while (iVar10 != 0);
  }
  FUN_ram_4808f560(param_1,"auto_recognition_enabled",*(undefined1 *)(param_2 + 4));
  FUN_ram_4808f25a(param_1,"globals");
  FUN_ram_4808f6e8(param_1,param_2 + 0xd1f);
  FUN_ram_4810e094(param_1,param_2 + 0xd48);
  uVar1 = *(undefined1 *)(param_2 + 0xd5a);
  uVar2 = *(undefined1 *)((int)param_2 + 0x3569);
  FUN_ram_4808f25a(param_1,"battery");
  FUN_ram_4808f560(param_1,"batteryPreheatEnabled",uVar1);
  uVar22 = param_1[0xb];
  uVar20 = param_1[9];
  if ((uVar22 == 0) || (uVar20 != uVar22)) {
LAB_ram_4810f97a:
    FUN_ram_4803444c(param_1,"batteryPreheatDurationMin",uVar2);
  }
  else {
    ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar29 = ppuVar29 + 1;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810f97a;
      iVar10 = FUN_ram_4ff453ae("batteryPreheatDurationMin",*ppuVar29);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  puVar9 = puVar28;
  uVar8 = 0x7d;
  puVar11 = param_1;
  do {
    do {
      uVar15 = *puVar9;
      puVar17 = puVar9 + 1;
      uVar19 = *puVar11 ^ uVar8;
      uVar21 = puVar11[1] ^ uVar12;
      uVar14 = uVar8 + 0x25;
      puVar9 = puVar9 + 2;
      uVar12 = uVar12 + (uVar14 < uVar8);
      puVar18 = puVar11 + 2;
      puVar11[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                   (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
      *puVar11 = uVar15 * uVar19;
      uVar8 = uVar14;
      puVar11 = puVar18;
    } while (uVar14 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar20 == uVar22) {
    param_1[0xb] = 0;
  }
  uVar1 = *(undefined1 *)((int)param_2 + 0x356a);
  param_1[9] = uVar20 - 1;
  uVar2 = *(undefined1 *)((int)param_2 + 0x356b);
  uVar3 = *(undefined1 *)(param_2 + 0xd5b);
  uVar4 = *(undefined1 *)((int)param_2 + 0x356d);
  uVar5 = *(undefined2 *)((int)param_2 + 0x356e);
  uVar6 = *(undefined2 *)(param_2 + 0xd5c);
  FUN_ram_4808f25a(param_1,"rearFog");
  FUN_ram_4808f560(param_1,"enabled",uVar1);
  FUN_ram_4808f560(param_1,"reverseWarningEnabled",uVar2);
  FUN_ram_4808f560(param_1,"rearFogPilotEnabled",uVar3);
  FUN_ram_4808f560(param_1,"reverseRearFogSteadyEnabled",uVar4);
  uVar22 = param_1[0xb];
  uVar20 = param_1[9];
  if ((uVar22 == 0) || (uVar20 != uVar22)) {
    FUN_ram_4803428c(param_1,"mildDecelCx100",uVar5);
LAB_ram_4810fa76:
    FUN_ram_4803428c(param_1,"hardDecelCx100",uVar6);
  }
  else {
    ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar29 = ppuVar29 + 1;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"mildDecelCx100",uVar5);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("mildDecelCx100",*ppuVar29);
    } while (iVar10 != 0);
    do {
      ppuVar30 = ppuVar30 + 1;
      if (ppuVar30 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810fa76;
      iVar10 = FUN_ram_4ff453ae("hardDecelCx100",*ppuVar30);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  puVar9 = puVar28;
  uVar8 = 0x7d;
  puVar11 = param_1;
  do {
    do {
      uVar15 = *puVar9;
      puVar17 = puVar9 + 1;
      uVar19 = *puVar11 ^ uVar8;
      uVar21 = puVar11[1] ^ uVar12;
      uVar14 = uVar8 + 0x25;
      puVar9 = puVar9 + 2;
      uVar12 = uVar12 + (uVar14 < uVar8);
      puVar18 = puVar11 + 2;
      puVar11[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                   (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
      *puVar11 = uVar15 * uVar19;
      uVar8 = uVar14;
      puVar11 = puVar18;
    } while (uVar14 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar20 == uVar22) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar20 - 1;
  uVar1 = *(undefined1 *)((int)param_2 + 0x3572);
  uVar5 = *(undefined2 *)((int)param_2 + 0x3576);
  uVar2 = *(undefined1 *)(param_2 + 0xd5e);
  uVar6 = *(undefined2 *)(param_2 + 0xd5d);
  uVar3 = *(undefined1 *)((int)param_2 + 0x3579);
  FUN_ram_4808f25a(param_1,"ussRadar");
  uVar22 = param_1[0xb];
  uVar20 = param_1[9];
  if ((uVar22 == 0) || (uVar20 != uVar22)) {
    FUN_ram_4803444c(param_1,"preset",uVar1);
    FUN_ram_4803428c(param_1,"sdiBlockMax",uVar6);
    FUN_ram_4803428c(param_1,"sdiCautionMax",uVar5);
    FUN_ram_4803444c(param_1,"minValidSdi",uVar2);
LAB_ram_4810fb64:
    FUN_ram_4803444c(param_1,"radarBlockMaxRaw",uVar3);
  }
  else {
    ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar29 = ppuVar29 + 1;
      ppuVar27 = ppuVar30;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"preset",uVar1);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("preset",*ppuVar29);
    } while (iVar10 != 0);
    do {
      ppuVar27 = ppuVar27 + 1;
      ppuVar29 = ppuVar30;
      if (ppuVar27 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"sdiBlockMax",uVar6);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("sdiBlockMax",*ppuVar27);
    } while (iVar10 != 0);
    do {
      ppuVar29 = ppuVar29 + 1;
      ppuVar27 = ppuVar30;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803428c(param_1,"sdiCautionMax",uVar5);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("sdiCautionMax",*ppuVar29);
    } while (iVar10 != 0);
    do {
      ppuVar27 = ppuVar27 + 1;
      if (ppuVar27 == (undefined **)&DAT_ram_481f51dc) {
        FUN_ram_4803444c(param_1,"minValidSdi",uVar2);
        break;
      }
      iVar10 = FUN_ram_4ff453ae("minValidSdi",*ppuVar27);
    } while (iVar10 != 0);
    do {
      ppuVar30 = ppuVar30 + 1;
      if (ppuVar30 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810fb64;
      iVar10 = FUN_ram_4ff453ae("radarBlockMaxRaw",*ppuVar30);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  puVar9 = puVar28;
  uVar8 = 0x7d;
  puVar11 = param_1;
  do {
    do {
      uVar15 = *puVar9;
      puVar17 = puVar9 + 1;
      uVar19 = *puVar11 ^ uVar8;
      uVar21 = puVar11[1] ^ uVar12;
      uVar14 = uVar8 + 0x25;
      puVar9 = puVar9 + 2;
      uVar12 = uVar12 + (uVar14 < uVar8);
      puVar18 = puVar11 + 2;
      puVar11[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                   (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
      *puVar11 = uVar15 * uVar19;
      uVar8 = uVar14;
      puVar11 = puVar18;
    } while (uVar14 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar20 == uVar22) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar20 - 1;
  FUN_ram_480d3d46(param_1,(int)param_2 + 0x357a,"ambientDefault");
  FUN_ram_480d4a0c(param_1,param_2 + 0xd6c,"speedTargetDefault");
  FUN_ram_4808f560(param_1,"apAutoOffEnabled",*(undefined1 *)((int)param_2 + 0x35ee));
  FUN_ram_4808f560(param_1,"cloudEnabled",*(undefined1 *)((int)param_2 + 0x35ef));
  uVar22 = param_1[0xb];
  uVar20 = param_1[9];
  if ((uVar22 == 0) || (uVar20 != uVar22)) {
LAB_ram_4810fc38:
    FUN_ram_4803428c(param_1,"cloudIntervalSec",*(undefined2 *)(param_2 + 0xd7c));
  }
  else {
    ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar29 = ppuVar29 + 1;
      if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810fc38;
      iVar10 = FUN_ram_4ff453ae("cloudIntervalSec",*ppuVar29);
    } while (iVar10 != 0);
  }
  uVar12 = 0;
  puVar9 = puVar28;
  uVar8 = 0x7d;
  puVar11 = param_1;
  do {
    do {
      uVar15 = *puVar9;
      puVar17 = puVar9 + 1;
      uVar19 = *puVar11 ^ uVar8;
      uVar21 = puVar11[1] ^ uVar12;
      uVar14 = uVar8 + 0x25;
      puVar9 = puVar9 + 2;
      uVar12 = uVar12 + (uVar14 < uVar8);
      puVar18 = puVar11 + 2;
      puVar11[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                   (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
      *puVar11 = uVar15 * uVar19;
      uVar8 = uVar14;
      puVar11 = puVar18;
    } while (uVar14 != 0x111);
  } while (uVar12 != 0);
  param_1[8] = param_1[8] + 1;
  if (uVar20 == uVar22) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar20 - 1;
  FUN_ram_4808f3d8(param_1,"drivers");
  puVar25 = param_2 + 5;
  uVar20 = 0;
  if (*(char *)(param_2 + 0xd05) != '\0') {
    do {
      FUN_ram_4810ecce(param_1,puVar25);
      uVar20 = uVar20 + 1;
      puVar25 = puVar25 + 0x68;
    } while (uVar20 < *(byte *)(param_2 + 0xd05));
  }
  uVar22 = 0;
  puVar9 = puVar28;
  uVar20 = 0x5d;
  puVar11 = param_1;
  do {
    do {
      uVar14 = *puVar9;
      puVar17 = puVar9 + 1;
      uVar12 = *puVar11 ^ uVar20;
      uVar19 = puVar11[1] ^ uVar22;
      uVar8 = uVar20 + 0x25;
      puVar9 = puVar9 + 2;
      uVar22 = uVar22 + (uVar8 < uVar20);
      puVar18 = puVar11 + 2;
      puVar11[1] = uVar14 * uVar19 + *puVar17 * uVar12 +
                   (int)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
      *puVar11 = uVar14 * uVar12;
      uVar20 = uVar8;
      puVar11 = puVar18;
    } while (uVar8 != 0xf1);
  } while (uVar22 != 0);
  param_1[8] = param_1[8] + 1;
  if (param_1[9] == param_1[10]) {
    param_1[10] = 0;
  }
  param_1[9] = param_1[9] - 1;
  FUN_ram_4808f3d8(param_1,"seat_slots");
  puVar26 = (ushort *)((int)param_2 + 0x3415);
  uVar20 = param_1[8];
  uVar22 = param_1[9];
  if (puVar26 != (ushort *)((int)param_2 + 0x3479)) {
    uVar8 = uVar22 + 1;
    do {
      uVar14 = 0;
      uVar12 = 0x65;
      puVar9 = param_1;
      puVar11 = puVar28;
      do {
        do {
          uVar15 = *puVar11;
          puVar17 = puVar11 + 1;
          uVar19 = *puVar9 ^ uVar12;
          uVar21 = puVar9[1] ^ uVar14;
          uVar31 = uVar12 + 0x25;
          puVar11 = puVar11 + 2;
          uVar14 = uVar14 + (uVar31 < uVar12);
          puVar18 = puVar9 + 2;
          puVar9[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                      (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
          *puVar9 = uVar15 * uVar19;
          uVar12 = uVar31;
          puVar9 = puVar18;
        } while (uVar31 != 0xf9);
      } while (uVar14 != 0);
      uVar12 = param_1[0xb];
      param_1[9] = uVar8;
      param_1[8] = uVar20 + 1;
      if ((uVar12 == 0) || (uVar12 != uVar8)) {
LAB_ram_4810fe30:
        uVar7 = *puVar26;
        uVar19 = 0;
        puVar9 = puVar28;
        puVar11 = param_1;
        uVar14 = 0x6e;
        do {
          do {
            uVar21 = *puVar9;
            puVar17 = puVar9 + 1;
            uVar15 = *puVar11 ^ uVar14;
            uVar31 = puVar11[1] ^ uVar19;
            uVar32 = uVar14 + 0x25;
            puVar9 = puVar9 + 2;
            uVar19 = uVar19 + (uVar32 < uVar14);
            puVar18 = puVar11 + 2;
            puVar11[1] = uVar21 * uVar31 + *puVar17 * uVar15 +
                         (int)((ulonglong)uVar21 * (ulonglong)uVar15 >> 0x20);
            *puVar11 = uVar21 * uVar15;
            puVar11 = puVar18;
            uVar14 = uVar32;
          } while (uVar32 != 0x102);
        } while (uVar19 != 0);
        local_44 = 5;
        pbVar23 = (byte *)&local_44;
        puVar9 = param_1 + 8;
        do {
          uVar19 = 0;
          uVar14 = (uint)*pbVar23;
          puVar11 = param_1;
          puVar17 = puVar28;
          do {
            uVar31 = *puVar17;
            puVar18 = puVar17 + 1;
            uVar15 = *puVar11 ^ uVar14;
            uVar21 = puVar11[1] ^ uVar19;
            uVar19 = uVar19 + (uVar14 + 0x25 < uVar14);
            puVar16 = puVar11 + 2;
            puVar17 = puVar17 + 2;
            puVar11[1] = uVar31 * uVar21 + *puVar18 * uVar15 +
                         (int)((ulonglong)uVar31 * (ulonglong)uVar15 >> 0x20);
            *puVar11 = uVar31 * uVar15;
            uVar14 = uVar14 + 0x25;
            puVar11 = puVar16;
          } while (puVar9 != puVar16);
          pbVar23 = pbVar23 + 1;
        } while (abStack_40 != pbVar23);
        pcVar24 = "track";
        do {
          uVar19 = 0;
          uVar14 = (uint)(byte)*pcVar24;
          puVar11 = param_1;
          puVar17 = puVar28;
          do {
            uVar31 = *puVar17;
            puVar18 = puVar17 + 1;
            uVar15 = *puVar11 ^ uVar14;
            uVar21 = puVar11[1] ^ uVar19;
            uVar19 = uVar19 + (uVar14 + 0x25 < uVar14);
            puVar16 = puVar11 + 2;
            puVar17 = puVar17 + 2;
            puVar11[1] = uVar31 * uVar21 + *puVar18 * uVar15 +
                         (int)((ulonglong)uVar31 * (ulonglong)uVar15 >> 0x20);
            *puVar11 = uVar31 * uVar15;
            uVar14 = uVar14 + 0x25;
            puVar11 = puVar16;
          } while (puVar9 != puVar16);
          pcVar24 = pcVar24 + 1;
        } while ((byte *)pcVar24 != (byte *)0x481c61d1);
        local_44 = (uint)uVar7;
        pbVar23 = (byte *)&local_44;
        do {
          uVar19 = 0;
          puVar11 = puVar28;
          uVar14 = (uint)*pbVar23;
          puVar17 = param_1;
          do {
            uVar15 = *puVar11;
            puVar18 = puVar11 + 1;
            uVar31 = *puVar17 ^ uVar14;
            uVar21 = puVar17[1] ^ uVar19;
            uVar19 = uVar19 + (uVar14 + 0x25 < uVar14);
            puVar16 = puVar17 + 2;
            puVar11 = puVar11 + 2;
            puVar17[1] = uVar15 * uVar21 + *puVar18 * uVar31 +
                         (int)((ulonglong)uVar15 * (ulonglong)uVar31 >> 0x20);
            *puVar17 = uVar15 * uVar31;
            uVar14 = uVar14 + 0x25;
            puVar17 = puVar16;
          } while (puVar9 != puVar16);
          pbVar23 = pbVar23 + 1;
        } while ((byte *)((int)&local_44 + 2) != pbVar23);
        param_1[8] = uVar20 + 0xd;
        uVar7 = puVar26[1];
        if ((uVar12 != 0) && (uVar12 == uVar8)) goto LAB_ram_4811018a;
        FUN_ram_4803428c(param_1,"backrest");
        FUN_ram_4803428c(param_1,&DAT_ram_481c61e0,puVar26[2]);
        FUN_ram_4803428c(param_1,&DAT_ram_481c61e8,puVar26[3]);
        FUN_ram_4803444c(param_1,"validMarker",(char)puVar26[4]);
        uVar1 = *(undefined1 *)((int)puVar26 + 9);
      }
      else {
        ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
        do {
          ppuVar29 = ppuVar29 + 1;
          if (ppuVar29 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_4810fe30;
          iVar10 = FUN_ram_4ff453ae("track",*ppuVar29);
        } while (iVar10 != 0);
        uVar7 = puVar26[1];
LAB_ram_4811018a:
        ppuVar29 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
        ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
        do {
          ppuVar30 = ppuVar30 + 1;
          if (ppuVar30 == (undefined **)&DAT_ram_481f51dc) {
            FUN_ram_4803428c(param_1,"backrest",uVar7);
            break;
          }
          iVar10 = FUN_ram_4ff453ae("backrest",*ppuVar30);
        } while (iVar10 != 0);
        ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
        do {
          ppuVar30 = ppuVar30 + 1;
          if (ppuVar30 == (undefined **)&DAT_ram_481f51dc) {
            FUN_ram_4803428c(param_1,&DAT_ram_481c61e0,puVar26[2]);
            break;
          }
          iVar10 = FUN_ram_4ff453ae(&DAT_ram_481c61e0,*ppuVar30);
        } while (iVar10 != 0);
        ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
        do {
          ppuVar30 = ppuVar30 + 1;
          if (ppuVar30 == (undefined **)&DAT_ram_481f51dc) {
            FUN_ram_4803428c(param_1,&DAT_ram_481c61e8,puVar26[3]);
            break;
          }
          iVar10 = FUN_ram_4ff453ae(&DAT_ram_481c61e8,*ppuVar30);
        } while (iVar10 != 0);
        ppuVar30 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
        while (ppuVar30 = ppuVar30 + 1, ppuVar30 != (undefined **)&DAT_ram_481f51dc) {
          iVar10 = FUN_ram_4ff453ae("validMarker",*ppuVar30);
          if (iVar10 == 0) goto LAB_ram_4811028c;
        }
        FUN_ram_4803444c(param_1,"validMarker",(char)puVar26[4]);
        ppuVar29 = &PTR_s_canCommsEnabled_ram_481cb974_ram_481f51c0;
        do {
          iVar10 = FUN_ram_4ff453ae("formatVersion",*ppuVar29);
          if (iVar10 == 0) goto LAB_ram_4811002c;
LAB_ram_4811028c:
          ppuVar29 = ppuVar29 + 1;
        } while (ppuVar29 != (undefined **)&DAT_ram_481f51dc);
        uVar1 = *(undefined1 *)((int)puVar26 + 9);
      }
      FUN_ram_4803444c(param_1,"formatVersion",uVar1);
LAB_ram_4811002c:
      uVar14 = 0;
      uVar20 = 0x7d;
      puVar9 = param_1;
      puVar11 = puVar28;
      do {
        do {
          uVar15 = *puVar11;
          puVar17 = puVar11 + 1;
          uVar19 = *puVar9 ^ uVar20;
          uVar21 = puVar9[1] ^ uVar14;
          uVar31 = uVar20 + 0x25;
          puVar11 = puVar11 + 2;
          uVar14 = uVar14 + (uVar31 < uVar20);
          puVar18 = puVar9 + 2;
          puVar9[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                      (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
          *puVar9 = uVar15 * uVar19;
          uVar20 = uVar31;
          puVar9 = puVar18;
        } while (uVar31 != 0x111);
      } while (uVar14 != 0);
      uVar20 = param_1[8] + 1;
      param_1[8] = uVar20;
      if (uVar12 == uVar8) {
        param_1[0xb] = 0;
      }
      puVar26 = puVar26 + 5;
      param_1[9] = uVar22;
    } while ((ushort *)((int)param_2 + 0x3479) != puVar26);
  }
  uVar12 = 0;
  puVar9 = puVar28;
  uVar8 = 0x5d;
  puVar11 = param_1;
  do {
    do {
      uVar15 = *puVar9;
      puVar17 = puVar9 + 1;
      uVar19 = *puVar11 ^ uVar8;
      uVar21 = puVar11[1] ^ uVar12;
      uVar14 = uVar8 + 0x25;
      puVar9 = puVar9 + 2;
      uVar12 = uVar12 + (uVar14 < uVar8);
      puVar18 = puVar11 + 2;
      puVar11[1] = uVar15 * uVar21 + *puVar17 * uVar19 +
                   (int)((ulonglong)uVar15 * (ulonglong)uVar19 >> 0x20);
      *puVar11 = uVar15 * uVar19;
      uVar8 = uVar14;
      puVar11 = puVar18;
    } while (uVar14 != 0xf1);
  } while (uVar12 != 0);
  if (param_1[10] == uVar22) {
    param_1[10] = 0;
  }
  param_1[9] = uVar22 - 1;
  uVar8 = 0;
  uVar22 = 0x21;
  puVar9 = param_1;
  do {
    do {
      uVar14 = *puVar28;
      puVar11 = puVar28 + 1;
      uVar12 = *puVar9 ^ uVar22;
      uVar19 = puVar9[1] ^ uVar8;
      uVar15 = uVar22 + 0x25;
      puVar28 = puVar28 + 2;
      uVar8 = uVar8 + (uVar15 < uVar22);
      puVar17 = puVar9 + 2;
      puVar9[1] = uVar14 * uVar19 + *puVar11 * uVar12 +
                  (int)((ulonglong)uVar14 * (ulonglong)uVar12 >> 0x20);
      *puVar9 = uVar14 * uVar12;
      uVar22 = uVar15;
      puVar9 = puVar17;
    } while (uVar15 != 0xb5);
  } while (uVar8 != 0);
  param_1[8] = uVar20 + 2;
  return uVar20 + 2 < 0x30001;
}


