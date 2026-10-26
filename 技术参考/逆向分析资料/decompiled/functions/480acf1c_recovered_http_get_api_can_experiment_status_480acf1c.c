/* Firmware entry: 0x480acf1c */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HTTP callback entry recovered from 0x480868b2. Name assigned by analyst. */

void recovered_http_get_api_can_experiment_status_480acf1c(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  ushort uVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  ushort *puVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 *puVar14;
  uint uVar15;
  ushort *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ushort *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined *puVar27;
  uint uVar28;
  undefined4 uVar29;
  char *pcVar30;
  int iVar31;
  byte bVar32;
  undefined4 uVar33;
  int iVar34;
  undefined4 uVar35;
  byte bVar36;
  int aiStack_960 [2];
  uint uStack_958;
  byte bStack_951;
  undefined1 auStack_950 [16];
  ushort auStack_940 [2];
  undefined4 uStack_93c;
  byte bStack_938;
  byte bStack_937;
  undefined1 uStack_936;
  undefined4 local_934 [11];
  undefined2 uStack_908;
  undefined1 uStack_8ff;
  undefined1 uStack_8fc;
  undefined2 uStack_8f6;
  undefined1 uStack_8e8;
  ushort auStack_850 [46];
  undefined4 uStack_7f4;
  byte local_7f0 [4];
  undefined4 uStack_7ec;
  undefined1 auStack_7e8 [4];
  undefined4 uStack_7e4;
  undefined4 auStack_7e0 [5];
  undefined1 uStack_7ca;
  undefined4 auStack_7c8 [3];
  undefined4 uStack_7bc;
  undefined4 auStack_7b8 [4];
  undefined1 uStack_7a6;
  undefined4 auStack_7a4 [2];
  undefined1 auStack_79c [4];
  int aiStack_798 [3];
  undefined1 auStack_78c [1877];
  undefined1 auStack_37 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(auStack_940,0,0x900);
  puVar11 = auStack_940;
  local_934[0]._0_1_ = 1;
  uStack_8ff = 1;
  uStack_908 = 100;
  uStack_8fc = 0xff;
  uStack_8e8 = 0xff;
  uStack_8f6 = 0xff1d;
  puVar16 = puVar11;
  do {
    *(undefined1 *)(puVar16 + 0x2e) = 1;
    puVar16[0x44] = 100;
    *(undefined1 *)((int)puVar16 + 0x91) = 1;
    *(undefined1 *)(puVar16 + 0x4a) = 0xff;
    puVar16[0x4d] = 0xff1d;
    *(undefined1 *)(puVar16 + 0x54) = 0xff;
    puVar16 = puVar16 + 0x28;
  } while (auStack_850 != puVar16);
  uStack_7ca = 1;
  uStack_7a6 = 1;
  aiStack_798[0] = -1;
  auStack_78c[0x28] = 0xff;
  auStack_7e8[1] = 5;
  auStack_7e0[0]._0_1_ = 8;
  uStack_7bc._0_1_ = 8;
  puVar20 = auStack_78c + 0x49;
  do {
    *puVar20 = 5;
    puVar20[7] = 8;
    puVar20[0x1d] = 1;
    puVar20[0x2b] = 8;
    puVar20[0x41] = 1;
    *(undefined4 *)(puVar20 + 0x4f) = 0xffffffff;
    puVar20[0x83] = 0xff;
    puVar20 = puVar20 + 0xa4;
  } while (auStack_37 != puVar20);
  FUN_ram_4ff3ec14(&DAT_ram_4ff48d94,0xffffffff);
  uVar29 = DAT_ram_4ff48ee4;
  uVar28 = _DAT_ram_4ff4a020 & 0xff;
  auStack_940[0] = _DAT_ram_4ff4a020;
  uVar6 = auStack_940[0];
  uStack_93c = DAT_ram_4ff48ee4;
  uVar10 = uVar28 - 3 & 0xff;
  bVar32 = DAT_ram_4ff48da0;
  if (uVar10 < 2) {
    bVar32 = DAT_ram_4ff48ee8;
  }
  bVar5 = uVar28 - 1 < 2;
  if (bVar32 != 0) {
    puVar18 = local_934;
    puVar14 = (undefined4 *)&DAT_ram_4ff48eec;
    bVar8 = 0;
    do {
      puVar21 = puVar14;
      if (1 < uVar10) {
        puVar21 = puVar14 + -0x52;
      }
      puVar7 = puVar18;
      puVar23 = puVar21;
      do {
        puVar22 = puVar23;
        puVar17 = puVar7;
        uVar35 = puVar22[1];
        uVar33 = puVar22[2];
        uVar9 = puVar22[3];
        uVar26 = puVar22[4];
        uVar25 = puVar22[5];
        *puVar17 = *puVar22;
        puVar17[1] = uVar35;
        puVar17[2] = uVar33;
        puVar17[3] = uVar9;
        puVar17[4] = uVar26;
        puVar17[5] = uVar25;
        puVar23 = puVar22 + 6;
        puVar7 = puVar17 + 6;
      } while (puVar23 != puVar21 + 0x12);
      bVar8 = bVar8 + 1;
      puVar17[6] = *puVar23;
      puVar14 = puVar14 + 0x14;
      puVar18 = puVar18 + 0x14;
      *(undefined1 *)(puVar17 + 7) = *(undefined1 *)(puVar22 + 7);
    } while (bVar8 < bVar32);
    auStack_940[0]._0_1_ = (byte)_DAT_ram_4ff4a020;
    uVar28 = (uint)(byte)auStack_940[0];
  }
  uVar4 = _DAT_ram_4ff4a020 >> 8;
  uVar10 = (uint)DAT_ram_4ff4a02c;
  uStack_7f4 = DAT_ram_4ff4a01c;
  if (uVar10 == 0) {
    uVar10 = (uint)bStack_937;
    if (DAT_ram_4ff48da0 != 0) {
      puVar27 = &DAT_ram_4ff48d94;
      bVar8 = 0;
      iVar34 = 0;
LAB_ram_480ad146:
      bVar1 = puVar27[0x18];
      puVar18 = (undefined4 *)(iVar34 + 0x4ff4902c);
      bVar36 = bVar1 & 1;
      iVar13 = 0;
      if ((bVar1 & 1) != 0) goto LAB_ram_480ad15c;
      puVar18 = (undefined4 *)(iVar34 + 0x4ff4908c);
      uVar15 = uVar10;
      do {
        iVar13 = 1;
        uVar10 = uVar15;
        if ((bVar1 & 2) != 0) {
          bVar36 = 2;
          iVar13 = 1;
LAB_ram_480ad15c:
          uVar15 = (uint)bStack_937;
          if (uVar15 < 0xc) goto LAB_ram_480ad168;
        }
        iVar13 = iVar13 + 1;
        uVar15 = uVar10;
        while (puVar18 = puVar18 + 0x18, iVar13 != 1) {
          uVar10 = uVar15;
          if (((bVar1 & 4) == 0) || (0xb < uVar15)) goto LAB_ram_480ae450;
          iVar13 = 2;
          bVar36 = 4;
LAB_ram_480ad168:
          iVar24 = uVar15 * 0xa4;
          uVar9 = *(undefined4 *)(puVar27 + 0x14);
          cVar3 = *(char *)((int)puVar18 + 0x5e);
          uVar10 = uVar15 + 1 & 0xff;
          bStack_937 = (byte)(uVar15 + 1);
          local_7f0[iVar24] = bVar8;
          local_7f0[iVar24 + 1] = bVar36;
          *(undefined4 *)(auStack_7e8 + iVar24 + -4) = uVar9;
          if (cVar3 == '\0') {
            uVar2 = puVar27[0x19];
            uVar25 = *puVar18;
            auStack_7e0[uVar15 * 0x29 + 1] = puVar18[2];
            uVar9 = puVar18[3];
            uVar33 = puVar18[1];
            auStack_7e8[iVar24] = uVar2;
            auStack_7e0[uVar15 * 0x29 + 2] = uVar9;
            uVar9 = puVar18[4];
            uVar26 = puVar18[8];
            (&uStack_7e4)[uVar15 * 0x29] = uVar25;
            auStack_7e0[uVar15 * 0x29 + 3] = uVar9;
            uVar9 = puVar18[5];
            uVar25 = puVar18[9];
            auStack_7e0[uVar15 * 0x29] = uVar33;
            auStack_7e0[uVar15 * 0x29 + 4] = uVar9;
            uVar9 = puVar18[6];
            uVar33 = puVar18[10];
            auStack_7c8[uVar15 * 0x29 + 1] = uVar26;
            *(undefined4 *)(&stack0xfffff834 + iVar24) = uVar9;
            uVar9 = puVar18[7];
            auStack_7c8[uVar15 * 0x29 + 2] = uVar25;
            auStack_7e8[iVar24 + 1] = 0;
            auStack_7c8[uVar15 * 0x29] = uVar9;
            uVar9 = puVar18[0xb];
            (&uStack_7bc)[uVar15 * 0x29] = uVar33;
            uVar26 = puVar18[0x10];
            auStack_7b8[uVar15 * 0x29] = uVar9;
            uVar25 = puVar18[0x11];
            auStack_7b8[uVar15 * 0x29 + 1] = puVar18[0xc];
            auStack_7b8[uVar15 * 0x29 + 2] = puVar18[0xd];
            uVar9 = puVar18[0xe];
            auStack_7a4[uVar15 * 0x29] = uVar26;
            *(undefined4 *)(auStack_79c + iVar24 + -4) = uVar25;
            auStack_7b8[uVar15 * 0x29 + 3] = uVar9;
            uVar9 = puVar18[0xf];
            auStack_79c[iVar24] = 0;
            *(undefined4 *)(&stack0xfffff858 + iVar24) = uVar9;
LAB_ram_480ae520:
            iVar24 = -1;
          }
          else {
            uVar26 = puVar18[1];
            uVar25 = *puVar18;
            auStack_7e0[uVar15 * 0x29 + 3] = puVar18[4];
            uVar9 = puVar18[5];
            auStack_7e0[uVar15 * 0x29] = uVar26;
            uVar26 = puVar18[2];
            auStack_7e0[uVar15 * 0x29 + 4] = uVar9;
            uVar9 = puVar18[6];
            uVar2 = *(undefined1 *)(puVar18 + 0x17);
            (&uStack_7e4)[uVar15 * 0x29] = uVar25;
            *(undefined4 *)(&stack0xfffff834 + iVar24) = uVar9;
            uVar9 = puVar18[7];
            uVar25 = puVar18[10];
            auStack_7e0[uVar15 * 0x29 + 1] = uVar26;
            auStack_7c8[uVar15 * 0x29] = uVar9;
            uVar9 = puVar18[8];
            uVar33 = puVar18[3];
            auStack_7e8[iVar24] = uVar2;
            auStack_7c8[uVar15 * 0x29 + 1] = uVar9;
            uVar9 = puVar18[0xb];
            uVar26 = puVar18[9];
            (&uStack_7bc)[uVar15 * 0x29] = uVar25;
            uVar25 = puVar18[0xc];
            auStack_7b8[uVar15 * 0x29] = uVar9;
            uVar9 = puVar18[0xd];
            auStack_7e0[uVar15 * 0x29 + 2] = uVar33;
            auStack_7c8[uVar15 * 0x29 + 2] = uVar26;
            auStack_7e8[iVar24 + 1] = 1;
            auStack_79c[iVar24] = 1;
            auStack_7b8[uVar15 * 0x29 + 1] = uVar25;
            cVar3 = *(char *)(puVar18 + 0x13);
            auStack_7b8[uVar15 * 0x29 + 2] = uVar9;
            auStack_7b8[uVar15 * 0x29 + 3] = puVar18[0xe];
            *(undefined4 *)(&stack0xfffff858 + iVar24) = puVar18[0xf];
            auStack_7a4[uVar15 * 0x29] = puVar18[0x10];
            *(undefined4 *)(auStack_79c + iVar24 + -4) = puVar18[0x11];
            if ((cVar3 == '\0') || (iVar24 = DAT_ram_4ff4a028 - puVar18[0x14], iVar24 < 0))
            goto LAB_ram_480ae520;
          }
          iVar31 = puVar18[0x15];
          uVar9 = puVar18[0x16];
          uVar2 = *(undefined1 *)((int)puVar18 + 0x5d);
          iVar13 = iVar13 + 1;
          aiStack_798[uVar15 * 0x29] = iVar24;
          aiStack_798[uVar15 * 0x29 + 1] = iVar31;
          *(undefined4 *)(auStack_78c + uVar15 * 0xa4 + -4) = uVar9;
          auStack_78c[uVar15 * 0xa4] = uVar2;
          uVar15 = uVar10;
          if (iVar13 == 3) {
LAB_ram_480ae450:
            bVar8 = bVar8 + 1;
            puVar27 = puVar27 + 0x50;
            iVar34 = iVar34 + 0x120;
            if (bVar8 == DAT_ram_4ff48da0) goto LAB_ram_480ad330;
            goto LAB_ram_480ad146;
          }
        }
      } while( true );
    }
  }
  else {
    bStack_937 = DAT_ram_4ff4a02c;
    puVar18 = &DAT_ram_4ff494ac;
    puVar16 = puVar11;
    do {
      puVar19 = puVar16 + 0xa8;
      puVar14 = puVar18;
      do {
        uVar26 = puVar14[1];
        uVar25 = puVar14[2];
        uVar9 = puVar14[3];
        *(undefined4 *)puVar19 = *puVar14;
        *(undefined4 *)(puVar19 + 2) = uVar26;
        *(undefined4 *)(puVar19 + 4) = uVar25;
        *(undefined4 *)(puVar19 + 6) = uVar9;
        puVar14 = puVar14 + 4;
        puVar19 = puVar19 + 8;
      } while (puVar14 != puVar18 + 0x28);
      iVar34 = -1;
      *(undefined4 *)puVar19 = *puVar14;
      cVar3 = *(char *)((int)puVar18 + 0xf1);
      uVar9 = puVar18[0x39];
      *(char *)(puVar16 + 0xd2) = cVar3;
      *(undefined4 *)(puVar16 + 0xd6) = uVar9;
      if (((cVar3 != '\0') && (*(char *)(puVar18 + 0x38) != '\0')) &&
         (iVar34 = DAT_ram_4ff4a028 - puVar18[0x36], iVar34 < 0)) {
        iVar34 = -1;
      }
      *(int *)(puVar16 + 0xd4) = iVar34;
      if (*(int *)(puVar16 + 0xec) == -1) {
        puVar16[0xec] = 0;
        puVar16[0xed] = 0;
      }
      puVar16 = puVar16 + 0x52;
      puVar18 = puVar18 + 0x3d;
    } while (puVar11 + uVar10 * 0x52 != puVar16);
  }
LAB_ram_480ad330:
  auStack_940[0] = uVar6;
  bStack_938 = bVar32;
  uStack_936 = bVar5;
  FUN_ram_4ff3ee10(&DAT_ram_4ff48d94);
  FUN_ram_4802a8a8(aiStack_960,&DAT_ram_481df390);
  FUN_ram_4802a79a(aiStack_960,0x2000);
  FUN_ram_4802ad46(aiStack_960,&DAT_ram_481c4164);
  FUN_ram_480881e0(aiStack_960,&DAT_ram_481c4274);
  FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c3dec);
  if (uVar28 == 3) {
    FUN_ram_480881e0(aiStack_960,"state");
    FUN_ram_4802af5a(aiStack_960,0x22);
    pcVar30 = "running";
    bVar8 = 0x72;
  }
  else if (uVar28 < 4) {
    if (uVar28 == 1) {
      FUN_ram_480881e0(aiStack_960,"state");
      FUN_ram_4802af5a(aiStack_960,0x22);
      pcVar30 = "listening";
      bVar8 = 0x6c;
    }
    else {
      if (uVar28 != 2) goto LAB_ram_480ae858;
      FUN_ram_480881e0(aiStack_960,"state");
      FUN_ram_4802af5a(aiStack_960,0x22);
      pcVar30 = "ready";
      bVar8 = 0x72;
    }
  }
  else if (uVar28 == 4) {
    FUN_ram_480881e0(aiStack_960,"state");
    FUN_ram_4802af5a(aiStack_960,0x22);
    pcVar30 = "stopping";
    bVar8 = 0x73;
  }
  else if (uVar28 == 5) {
    FUN_ram_480881e0(aiStack_960,"state");
    FUN_ram_4802af5a(aiStack_960,0x22);
    pcVar30 = "error_stopped";
    bVar8 = 0x65;
  }
  else {
LAB_ram_480ae858:
    FUN_ram_480881e0(aiStack_960,"state");
    FUN_ram_4802af5a(aiStack_960,0x22);
    pcVar30 = "stopped";
    bVar8 = 0x73;
  }
LAB_ram_480ad42a:
  do {
    if ((bVar8 == 0x22) || (bVar8 == 0x5c)) {
      FUN_ram_4802af5a(aiStack_960,0x5c);
    }
    else if (bVar8 < 0x20) {
      bVar8 = pcVar30[1];
      pcVar30 = pcVar30 + 1;
      if (bVar8 == 0) break;
      goto LAB_ram_480ad42a;
    }
    pcVar30 = pcVar30 + 1;
    FUN_ram_4802af5a(aiStack_960,bVar8);
    bVar8 = *pcVar30;
  } while (bVar8 != 0);
  FUN_ram_4802af5a(aiStack_960,0x22);
  FUN_ram_480ab726(aiStack_960,"stopReason",uVar4);
  if ((char)bStack_951 < '\0') {
    uVar28 = bStack_951 & 0x7f;
    if ((bStack_951 & 0x7f) != 0) {
LAB_ram_480ad488:
      pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar28 - 1);
      if ((*pbVar12 & 0xdf) == 0x5b) goto LAB_ram_480ad4aa;
    }
  }
  else if ((aiStack_960[0] != 0) && (uVar28 = uStack_958, uStack_958 != 0)) goto LAB_ram_480ad488;
  FUN_ram_4802af5a(aiStack_960,0x2c);
LAB_ram_480ad4aa:
  FUN_ram_4802af5a(aiStack_960,0x22);
  FUN_ram_4802af2c(aiStack_960,"generation");
  FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
  FUN_ram_4802aa44(auStack_950,uVar29,10);
  FUN_ram_4802ae48(aiStack_960,auStack_950);
  FUN_ram_4802a59e(auStack_950);
  FUN_ram_480ab726(aiStack_960,"ruleCount",bVar32);
  FUN_ram_480ab726(aiStack_960,"laneCount",uVar10);
  FUN_ram_480881e0(aiStack_960,"listening");
  if (bVar5) {
    pcVar30 = "true";
  }
  else {
    pcVar30 = "false";
  }
  FUN_ram_4802af2c(aiStack_960,pcVar30);
  FUN_ram_480881e0(aiStack_960,"dispatchPriority");
  FUN_ram_4802af5a(aiStack_960,0x22);
  pcVar30 = "inherit";
  bVar32 = 0x69;
  do {
    if ((bVar32 == 0x22) || (bVar32 == 0x5c)) {
      FUN_ram_4802af5a(aiStack_960,0x5c);
LAB_ram_480ad582:
      FUN_ram_4802af5a(aiStack_960,bVar32);
      bVar32 = pcVar30[1];
    }
    else {
      if (0x1f < bVar32) goto LAB_ram_480ad582;
      bVar32 = pcVar30[1];
    }
    pcVar30 = pcVar30 + 1;
    if (bVar32 == 0) {
      bVar32 = 0;
      FUN_ram_4802af5a(aiStack_960,0x22);
      cVar3 = DAT_ram_4ff4b8d0;
      fence();
      FUN_ram_480881e0(aiStack_960,"takeoverActive");
      if (cVar3 == '\0') {
        pcVar30 = "false";
      }
      else {
        pcVar30 = "true";
      }
      FUN_ram_4802af2c(aiStack_960,pcVar30);
      FUN_ram_480881e0(aiStack_960,"rules");
      FUN_ram_4802af5a(aiStack_960,0x5b);
      bVar8 = bStack_938;
      if (bStack_938 == 0) {
        FUN_ram_4802af5a(aiStack_960,0x5d);
        FUN_ram_480881e0(aiStack_960,"sourceConfirmed");
        FUN_ram_4802af5a(aiStack_960,0x5b);
      }
      else {
        puVar20 = (undefined1 *)local_934;
        bVar36 = 0;
        while( true ) {
          bVar36 = bVar36 + 1;
          FUN_ram_480abb04(aiStack_960,puVar20);
          puVar20 = puVar20 + 0x50;
          if (bVar36 == bVar8) break;
          FUN_ram_4802af5a(aiStack_960,0x2c);
        }
        FUN_ram_4802af5a(aiStack_960,0x5d);
        FUN_ram_480881e0(aiStack_960,"sourceConfirmed");
        FUN_ram_4802af5a(aiStack_960,0x5b);
        bVar36 = 0;
        while( true ) {
          pcVar30 = "false";
          if ((char)puVar11[0xa6] != '\0') {
            pcVar30 = "true";
          }
          bVar36 = bVar36 + 1;
          FUN_ram_4802af2c(aiStack_960,pcVar30);
          puVar11 = (ushort *)((int)puVar11 + 1);
          if (bVar36 == bVar8) break;
          FUN_ram_4802af5a(aiStack_960,0x2c);
        }
      }
      FUN_ram_4802af5a(aiStack_960,0x5d);
      FUN_ram_480881e0(aiStack_960,"lanes");
      FUN_ram_4802af5a(aiStack_960,0x5b);
      bVar8 = bStack_937;
      if (bStack_937 != 0) {
        FUN_ram_4802af5a(aiStack_960,0x7b);
        iVar34 = (int)&uStack_7bc + 1;
        if (-1 < (char)bStack_951) goto LAB_ram_480ad6d2;
LAB_ram_480ae43e:
        uVar10 = bStack_951 & 0x7f;
        bVar36 = local_7f0[0];
        if ((bStack_951 & 0x7f) == 0) goto LAB_ram_480ad6f6;
        do {
          pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
          iVar13 = iVar34;
          if ((*pbVar12 & 0xdf) == 0x5b) goto LAB_ram_480ad700;
LAB_ram_480ad6f6:
          do {
            FUN_ram_4802af5a(aiStack_960,0x2c);
            iVar13 = iVar34;
LAB_ram_480ad700:
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481cc4b8);
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802a928(auStack_950,bVar36,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar2 = *(undefined1 *)(iVar13 + -0x34);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) == 0) goto LAB_ram_480ad76e;
LAB_ram_480ad756:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ad76e;
            }
            else {
              if ((aiStack_960[0] != 0) && (uVar10 = uStack_958, uStack_958 != 0))
              goto LAB_ram_480ad756;
LAB_ram_480ad76e:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"bus");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802a928(auStack_950,uVar2,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + -0x31);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) == 0) goto LAB_ram_480ad7e6;
LAB_ram_480ad7ce:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ad7e6;
            }
            else {
              if ((aiStack_960[0] != 0) && (uVar10 = uStack_958, uStack_958 != 0))
              goto LAB_ram_480ad7ce;
LAB_ram_480ad7e6:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"id");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar2 = *(undefined1 *)(iVar13 + -0x2d);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) == 0) goto LAB_ram_480ad85e;
LAB_ram_480ad846:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ad85e;
            }
            else {
              if ((aiStack_960[0] != 0) && (uVar10 = uStack_958, uStack_958 != 0))
              goto LAB_ram_480ad846;
LAB_ram_480ad85e:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481caf98);
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802a928(auStack_950,uVar2,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            bVar36 = *(byte *)(iVar13 + -0x2c);
            if (bVar36 == 2) {
              pcVar30 = "waiting_bus";
LAB_ram_480ad8c6:
              if (-1 < (char)bStack_951) goto LAB_ram_480ad8d2;
LAB_ram_480ae5ca:
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ad8de;
LAB_ram_480ad8f6:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if (bVar36 < 3) {
                if (bVar36 == 0) {
                  pcVar30 = "waiting_template";
                }
                else {
                  pcVar30 = "running";
                }
                goto LAB_ram_480ad8c6;
              }
              if (bVar36 == 3) {
                pcVar30 = "waiting_builtin_owner";
                goto LAB_ram_480ad8c6;
              }
              if (bVar36 != 4) {
                pcVar30 = "stopped";
                goto LAB_ram_480ad8c6;
              }
              pcVar30 = "single_completed";
              if ((char)bStack_951 < '\0') goto LAB_ram_480ae5ca;
LAB_ram_480ad8d2:
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ad8f6;
LAB_ram_480ad8de:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ad8f6;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"state");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802af5a(aiStack_960,0x22);
            bVar36 = *pcVar30;
            while (bVar36 != 0) {
              while ((bVar36 != 0x22 && (bVar36 != 0x5c))) {
                if (0x1f < bVar36) goto LAB_ram_480ad958;
                bVar36 = pcVar30[1];
                pcVar30 = pcVar30 + 1;
                if (bVar36 == 0) goto LAB_ram_480ad96a;
              }
              FUN_ram_4802af5a(aiStack_960,0x5c);
LAB_ram_480ad958:
              pcVar30 = pcVar30 + 1;
              FUN_ram_4802af5a(aiStack_960,bVar36);
              bVar36 = *pcVar30;
            }
LAB_ram_480ad96a:
            FUN_ram_4802af5a(aiStack_960,0x22);
            cVar3 = *(char *)(iVar13 + 0x1f);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ad98c;
LAB_ram_480ad9a4:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ad9a4;
LAB_ram_480ad98c:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ad9a4;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"templateValid");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            if (cVar3 == '\0') {
              FUN_ram_4802af2c(aiStack_960,"false");
              uVar29 = *(undefined4 *)(iVar13 + 0x23);
              if (-1 < (char)bStack_951) goto LAB_ram_480ad9ee;
LAB_ram_480ae59e:
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) == 0) goto LAB_ram_480ada12;
LAB_ram_480ad9fa:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ada12;
            }
            else {
              FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c3dec);
              uVar29 = *(undefined4 *)(iVar13 + 0x23);
              if ((char)bStack_951 < '\0') goto LAB_ram_480ae59e;
LAB_ram_480ad9ee:
              if ((aiStack_960[0] != 0) && (uVar10 = uStack_958, uStack_958 != 0))
              goto LAB_ram_480ad9fa;
LAB_ram_480ada12:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"templateAgeMs");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x27);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ada6e;
LAB_ram_480ada86:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ada86;
LAB_ram_480ada6e:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ada86;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"observedPeriodMs");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            bVar36 = *(byte *)(iVar13 + -0x25);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adae6;
LAB_ram_480adafe:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adafe;
LAB_ram_480adae6:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adafe;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"source");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802af5a(aiStack_960,0x22);
            if (bVar36 != 0) {
              uVar10 = 0;
              do {
                if (uVar10 != 0) {
                  FUN_ram_4802af5a(aiStack_960,0x20);
                }
                bVar1 = *(byte *)(iVar13 + -0x24 + uVar10);
                uVar10 = uVar10 + 1;
                FUN_ram_4802af5a(aiStack_960,"0123456789ABCDEF"[bVar1 >> 4]);
                FUN_ram_4802af5a(aiStack_960,"0123456789ABCDEF"[bVar1 & 0xf]);
              } while (bVar36 != uVar10);
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            bVar36 = *(byte *)(iVar13 + -1);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adbaa;
LAB_ram_480adbc2:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adbc2;
LAB_ram_480adbaa:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adbc2;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"output");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802af5a(aiStack_960,0x22);
            if (bVar36 != 0) {
              uVar10 = 0;
              do {
                if (uVar10 != 0) {
                  FUN_ram_4802af5a(aiStack_960,0x20);
                }
                bVar1 = *(byte *)(iVar13 + uVar10);
                uVar10 = uVar10 + 1;
                FUN_ram_4802af5a(aiStack_960,"0123456789ABCDEF"[bVar1 >> 4]);
                FUN_ram_4802af5a(aiStack_960,"0123456789ABCDEF"[bVar1 & 0xf]);
              } while (uVar10 != bVar36);
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            uVar29 = *(undefined4 *)(iVar13 + 0x2b);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adc64;
LAB_ram_480adc7c:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adc7c;
LAB_ram_480adc64:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adc7c;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481b71bc);
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar2 = *(undefined1 *)(iVar13 + 0x2f);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adcd8;
LAB_ram_480adcf0:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adcf0;
LAB_ram_480adcd8:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adcf0;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"stableSourceFrames");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802a928(auStack_950,uVar2,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x33);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480add4c;
LAB_ram_480add64:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480add64;
LAB_ram_480add4c:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480add64;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"generated");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x37);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480addc0;
LAB_ram_480addd8:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480addd8;
LAB_ram_480addc0:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480addd8;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"accepted");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x3b);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ade34;
LAB_ram_480ade4c:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ade4c;
LAB_ram_480ade34:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ade4c;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"rejected");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x3f);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adea8;
LAB_ram_480adec0:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adec0;
LAB_ram_480adea8:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adec0;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"terminalOk");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x43);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adf1c;
LAB_ram_480adf34:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adf34;
LAB_ram_480adf1c:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adf34;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"terminalFail");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x47);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480adf90;
LAB_ram_480adfa8:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480adfa8;
LAB_ram_480adf90:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480adfa8;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"busySkip");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x4b);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae004;
LAB_ram_480ae01c:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae01c;
LAB_ram_480ae004:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae01c;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"staleSkip");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x4f);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae078;
LAB_ram_480ae090:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae090;
LAB_ram_480ae078:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae090;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"dlcMismatch");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x5b);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae0ec;
LAB_ram_480ae104:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae104;
LAB_ram_480ae0ec:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae104;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"delayedSupersededCount");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x5f);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae160;
LAB_ram_480ae178:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae178;
LAB_ram_480ae160:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae178;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"lastAcceptedLatencyUs");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 99);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae1d4;
LAB_ram_480ae1ec:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae1ec;
LAB_ram_480ae1d4:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae1ec;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"maxAcceptedLatencyUs");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x67);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae248;
LAB_ram_480ae260:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae260;
LAB_ram_480ae248:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae260;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"lastTerminalLatencyUs");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x6b);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae2bc;
LAB_ram_480ae2d4:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae2d4;
LAB_ram_480ae2bc:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae2d4;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"maxTerminalLatencyUs");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar29 = *(undefined4 *)(iVar13 + 0x53);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae330;
LAB_ram_480ae348:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae348;
LAB_ram_480ae330:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae348;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"pendingToken");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802aa44(auStack_950,uVar29,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            uVar2 = *(undefined1 *)(iVar13 + 0x57);
            if ((char)bStack_951 < '\0') {
              uVar10 = bStack_951 & 0x7f;
              if ((bStack_951 & 0x7f) != 0) goto LAB_ram_480ae3a4;
LAB_ram_480ae3bc:
              FUN_ram_4802af5a(aiStack_960,0x2c);
            }
            else {
              if ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0))
              goto LAB_ram_480ae3bc;
LAB_ram_480ae3a4:
              pbVar12 = (byte *)FUN_ram_4802b206(aiStack_960,uVar10 - 1);
              if ((*pbVar12 & 0xdf) != 0x5b) goto LAB_ram_480ae3bc;
            }
            FUN_ram_4802af5a(aiStack_960,0x22);
            FUN_ram_4802af2c(aiStack_960,"priority");
            FUN_ram_4802af2c(aiStack_960,&DAT_ram_481c67c4);
            FUN_ram_4802a928(auStack_950,uVar2,10);
            FUN_ram_4802ae48(aiStack_960,auStack_950);
            FUN_ram_4802a59e(auStack_950);
            FUN_ram_4802af5a(aiStack_960,0x7d);
            bVar32 = bVar32 + 1;
            iVar34 = iVar13 + 0xa4;
            if (bVar32 == bVar8) goto LAB_ram_480ae770;
            FUN_ram_4802af5a(aiStack_960,0x2c);
            FUN_ram_4802af5a(aiStack_960,0x7b);
            local_7f0[0] = *(byte *)(iVar13 + 0x6f);
            if ((char)bStack_951 < '\0') goto LAB_ram_480ae43e;
LAB_ram_480ad6d2:
            bVar36 = local_7f0[0];
          } while ((aiStack_960[0] == 0) || (uVar10 = uStack_958, uStack_958 == 0));
        } while( true );
      }
LAB_ram_480ae770:
      FUN_ram_4802af5a(aiStack_960,0x5d);
      FUN_ram_4802af5a(aiStack_960,0x7d);
      FUN_ram_4806acb0(DAT_ram_4ff6ded8,200,"application/json",aiStack_960);
      FUN_ram_4802a59e(aiStack_960);
      return;
    }
  } while( true );
}


