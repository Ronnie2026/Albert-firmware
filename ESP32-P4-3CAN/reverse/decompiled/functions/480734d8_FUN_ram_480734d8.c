/* Firmware entry: 0x480734d8 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_480734d8(undefined4 param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  byte *pbVar7;
  uint *puVar8;
  char *pcVar9;
  byte bVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iStack_ab8;
  int iStack_ab4;
  undefined4 uStack_ab0;
  char *pcStack_aac;
  uint local_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  undefined4 uStack_a90;
  undefined4 uStack_a8c;
  uint local_a88;
  char *pcStack_a84;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 uStack_a74;
  undefined4 uStack_a70;
  undefined4 uStack_a6c;
  undefined4 uStack_a68;
  uint uStack_a64;
  uint local_a60 [96];
  undefined1 auStack_8df [259];
  int iStack_7dc;
  short sStack_7d8;
  undefined1 uStack_7d6;
  uint local_7d4 [163];
  uint local_548;
  uint uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 local_530;
  undefined4 uStack_52c;
  undefined4 uStack_528;
  uint auStack_524 [152];
  int iStack_2c4;
  short local_2c0;
  undefined1 local_2be;
  uint local_2bc;
  char local_2b8 [381];
  undefined1 auStack_13b [263];
  uint uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6dcb9 == '\0') {
    if ((DAT_ram_4ff6de6c == '\0') && (DAT_ram_4ff6de6d == '\0')) {
      return 0;
    }
    DAT_ram_4ff6dcba = DAT_ram_4ff6de6c;
    DAT_ram_4ff6dcb9 = '\x01';
  }
  puVar17 = &DAT_ram_482230e4;
  puVar11 = local_a60;
  puVar8 = puVar17;
  do {
    uVar16 = puVar8[1];
    uVar14 = puVar8[2];
    uVar2 = puVar8[3];
    uVar4 = puVar8[4];
    uVar5 = puVar8[5];
    *puVar11 = *puVar8;
    puVar11[1] = uVar16;
    puVar11[2] = uVar14;
    puVar11[3] = uVar2;
    puVar11[4] = uVar4;
    puVar11[5] = uVar5;
    puVar8 = puVar8 + 6;
    puVar11 = puVar11 + 6;
  } while (puVar8 != (uint *)&DAT_ram_4822336c);
  puVar12 = local_7d4;
  *puVar11 = _DAT_ram_4822336c;
  puVar8 = puVar17;
  do {
    uVar16 = puVar8[1];
    uVar14 = puVar8[2];
    uVar2 = puVar8[3];
    uVar4 = puVar8[4];
    uVar5 = puVar8[5];
    *puVar12 = *puVar8;
    puVar12[1] = uVar16;
    puVar12[2] = uVar14;
    puVar12[3] = uVar2;
    puVar12[4] = uVar4;
    puVar12[5] = uVar5;
    puVar8 = puVar8 + 6;
    puVar12 = puVar12 + 6;
  } while (puVar8 != (uint *)&DAT_ram_4822336c);
  *puVar12 = _DAT_ram_4822336c;
  iVar3 = FUN_ram_48073110(local_a60);
  if (iVar3 == 0) {
    return 0;
  }
  puVar8 = &local_aa8;
  local_aa8 = 0;
  uStack_aa4 = 0;
  uStack_aa0 = 0;
  uStack_a9c = 0;
  uStack_a98 = 0;
  uStack_a94 = 0;
  uStack_a90 = 0;
  uStack_a8c = 0;
  iVar3 = FUN_ram_480001f0();
  if (iVar3 == 0) {
    return 0;
  }
  pbVar7 = (byte *)(iVar3 + 0x90);
  puVar11 = puVar8;
  do {
    bVar10 = *pbVar7;
    puVar12 = (uint *)((int)puVar11 + 1);
    pbVar7 = pbVar7 + 1;
    *(byte *)puVar11 = bVar10;
    puVar11 = puVar12;
  } while (puVar12 != &local_a88);
  bVar10 = 0;
  do {
    uVar2 = *puVar8;
    puVar8 = (uint *)((int)puVar8 + 1);
    bVar10 = bVar10 | (byte)uVar2;
  } while (puVar8 != &local_a88);
  if (bVar10 == 0) {
    return 0;
  }
  uVar2 = (uint)DAT_ram_4ff47e64;
  if (uVar2 == 0) {
    if (iStack_7dc == 0) {
      return 0;
    }
    if ((ushort)(sStack_7d8 - 0xfU) < 0x11e) {
      pcStack_a84 = "https://tesla-cn.srlt.cc:888/api/p4/report";
      local_a88 = 0x2a;
      uVar2 = FUN_ram_4807271e(0x2a,"https://tesla-cn.srlt.cc:888/api/p4/report",0x180);
      if (uVar2 == 0) {
        return 0;
      }
      pcVar9 = "p4_4a40d69cad0226cb872e9f220a6981caa9b284fbe8cd44c1";
      do {
        cVar6 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        if (0x5d < (byte)(cVar6 - 0x21U)) {
          return 0;
        }
      } while (pcVar9 != "");
      puVar8 = &local_2bc;
      do {
        uVar15 = puVar17[1];
        uVar4 = puVar17[2];
        uVar5 = puVar17[3];
        uVar14 = puVar17[4];
        uVar16 = puVar17[5];
        *puVar8 = *puVar17;
        puVar8[1] = uVar15;
        puVar8[2] = uVar4;
        puVar8[3] = uVar5;
        puVar8[4] = uVar14;
        puVar8[5] = uVar16;
        puVar17 = puVar17 + 6;
        puVar8 = puVar8 + 6;
      } while (puVar17 != (uint *)&DAT_ram_4822336c);
      *puVar8 = _DAT_ram_4822336c;
      local_2bc._0_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0];
      local_2bc._1_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[1];
      local_2bc._2_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[2];
      local_2bc._3_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[3];
      local_2b8[8] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xc];
      local_2b8[9] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xd];
      local_2b8[10] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xe];
      local_2b8[0xb] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xf];
      local_2b8[4] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[8];
      local_2b8[5] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[9];
      local_2b8[6] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[10];
      local_2b8[7] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xb];
      local_2b8[0x20] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x24];
      local_2b8[0x21] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x25];
      local_2b8[0x22] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x26];
      local_2b8[0x23] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x27];
      local_2b8[0x24] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x28];
      local_2b8[0x25] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x29];
      local_2b8[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[4];
      local_2b8[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[5];
      local_2b8[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[6];
      local_2b8[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[7];
      local_2b8[0xc] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x10];
      local_2b8[0xd] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x11];
      local_2b8[0xe] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x12];
      local_2b8[0xf] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x13];
      local_2b8[0x10] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x14];
      local_2b8[0x11] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x15];
      local_2b8[0x12] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x16];
      local_2b8[0x13] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x17];
      local_2b8[0x14] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x18];
      local_2b8[0x15] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x19];
      local_2b8[0x16] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1a];
      local_2b8[0x17] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1b];
      local_2b8[0x18] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1c];
      local_2b8[0x19] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1d];
      local_2b8[0x1a] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1e];
      local_2b8[0x1b] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1f];
      local_2b8[0x1c] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x20];
      local_2b8[0x1d] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x21];
      local_2b8[0x1e] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x22];
      local_2b8[0x1f] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x23];
      FUN_ram_4ff45158(auStack_13b,&DAT_ram_48222b5c,0x33);
      puVar8 = &local_548;
      puVar11 = &local_2bc;
      do {
        puVar12 = puVar11;
        puVar17 = puVar8;
        uVar15 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        uVar14 = puVar12[4];
        uVar16 = puVar12[5];
        *puVar17 = *puVar12;
        puVar17[1] = uVar15;
        puVar17[2] = uVar4;
        puVar17[3] = uVar5;
        puVar17[4] = uVar14;
        puVar17[5] = uVar16;
        puVar11 = puVar12 + 6;
        puVar8 = puVar17 + 6;
      } while (puVar11 != &uStack_34);
      iStack_7dc = iStack_7dc + 1;
      *(short *)(puVar17 + 6) = (short)*puVar11;
      *(undefined1 *)((int)puVar17 + 0x1a) = *(undefined1 *)((int)puVar12 + 0x1a);
      if (iStack_7dc == 0) {
        iStack_7dc = 1;
      }
      local_2c0 = sStack_7d8;
      local_2be = uStack_7d6;
      iStack_2c4 = iStack_7dc;
      FUN_ram_4ff45158(param_1,&local_548,0x28b);
      return uVar2;
    }
    return 0;
  }
  puVar8 = &local_a88;
  local_a88 = 0;
  pcStack_a84 = (char *)0x0;
  uStack_a80 = 0;
  uStack_a7c = 0;
  uStack_a78 = 0;
  uStack_a74 = 0;
  uStack_a70 = 0;
  uStack_a6c = 0;
  uStack_a68 = 0;
  uStack_a64 = 0;
  iStack_ab8 = 0;
  iVar3 = FUN_ram_48030cb4(1,"p4_cloud","preset1",puVar8,0x28,&iStack_ab8);
  if (iVar3 == 2) {
    return 0;
  }
  if (iVar3 == 1) {
    if (iStack_ab8 != 0x28) {
      return 0;
    }
    if (local_a88 != 0x31535043) {
      return 0;
    }
    uVar4 = 0xffffffff;
    do {
      cVar6 = '\b';
      uVar4 = uVar4 ^ (byte)*puVar8;
      do {
        cVar6 = cVar6 + -1;
        uVar4 = uVar4 >> 1 ^ -(uVar4 & 1) & 0xedb88320;
      } while (cVar6 != '\0');
      puVar8 = (uint *)((int)puVar8 + 1);
    } while (puVar8 != &uStack_a64);
    if (uStack_a64 != ~uVar4) {
      return 0;
    }
    if ((DAT_ram_4ff6dcba == '\0') &&
       (iVar3 = FUN_ram_4ff4511a(&pcStack_a84,&local_aa8,0x20), iVar3 == 0)) {
      puVar8 = local_7d4;
      puVar11 = local_a60;
      do {
        puVar12 = puVar11;
        puVar17 = puVar8;
        uVar15 = puVar12[1];
        uVar16 = puVar12[2];
        uVar4 = puVar12[3];
        uVar5 = puVar12[4];
        uVar14 = puVar12[5];
        *puVar17 = *puVar12;
        puVar17[1] = uVar15;
        puVar17[2] = uVar16;
        puVar17[3] = uVar4;
        puVar17[4] = uVar5;
        puVar17[5] = uVar14;
        puVar11 = puVar12 + 6;
        puVar8 = puVar17 + 6;
      } while (puVar11 != (uint *)&sStack_7d8);
      *(short *)(puVar17 + 6) = (short)*puVar11;
      *(undefined1 *)((int)puVar17 + 0x1a) = *(undefined1 *)((int)puVar12 + 0x1a);
      goto LAB_ram_480739d0;
    }
  }
  puVar8 = local_7d4;
  puVar11 = local_a60;
  do {
    puVar13 = puVar11;
    puVar12 = puVar8;
    uVar15 = puVar13[1];
    uVar16 = puVar13[2];
    uVar4 = puVar13[3];
    uVar5 = puVar13[4];
    uVar14 = puVar13[5];
    *puVar12 = *puVar13;
    puVar12[1] = uVar15;
    puVar12[2] = uVar16;
    puVar12[3] = uVar4;
    puVar12[4] = uVar5;
    puVar12[5] = uVar14;
    puVar11 = puVar13 + 6;
    puVar8 = puVar12 + 6;
  } while (puVar11 != (uint *)&sStack_7d8);
  *(short *)(puVar12 + 6) = (short)*puVar11;
  *(undefined1 *)((int)puVar12 + 0x1a) = *(undefined1 *)((int)puVar13 + 0x1a);
  iVar3 = FUN_ram_4ff453ae(local_a60,"https://tesla-cn.srlt.cc:888/api/p4/report");
  if ((iVar3 != 0) || (iVar3 = FUN_ram_4ff453ae(auStack_8df,&DAT_ram_48222b5c), iVar3 != 0)) {
    if (iStack_7dc == 0) {
      return 0;
    }
    if (0x11d < (ushort)(sStack_7d8 - 0xfU)) {
      return 0;
    }
    uStack_ab0 = 0x2a;
    pcStack_aac = "https://tesla-cn.srlt.cc:888/api/p4/report";
    iVar3 = FUN_ram_4807271e(0x2a,"https://tesla-cn.srlt.cc:888/api/p4/report",0x180);
    if (iVar3 == 0) {
      return 0;
    }
    pcVar9 = "p4_4a40d69cad0226cb872e9f220a6981caa9b284fbe8cd44c1";
    do {
      cVar6 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      if (0x5d < (byte)(cVar6 - 0x21U)) {
        return 0;
      }
    } while (pcVar9 != "");
    puVar8 = &local_2bc;
    do {
      uVar4 = puVar17[1];
      uVar14 = puVar17[2];
      *puVar8 = *puVar17;
      puVar8[1] = uVar4;
      uVar4 = puVar17[3];
      uVar5 = puVar17[4];
      puVar8[2] = uVar14;
      uVar14 = puVar17[5];
      puVar8[3] = uVar4;
      puVar8[4] = uVar5;
      puVar8[5] = uVar14;
      puVar17 = puVar17 + 6;
      puVar8 = puVar8 + 6;
    } while (puVar17 != (uint *)&DAT_ram_4822336c);
    *puVar8 = _DAT_ram_4822336c;
    local_2bc._0_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0];
    local_2bc._1_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[1];
    local_2bc._2_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[2];
    local_2bc._3_1_ = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[3];
    local_2b8[0] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[4];
    local_2b8[1] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[5];
    local_2b8[2] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[6];
    local_2b8[3] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[7];
    local_2b8[4] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[8];
    local_2b8[5] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[9];
    local_2b8[6] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[10];
    local_2b8[7] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xb];
    local_2b8[8] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xc];
    local_2b8[9] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xd];
    local_2b8[10] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xe];
    local_2b8[0xb] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0xf];
    local_2b8[0x14] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x18];
    local_2b8[0x15] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x19];
    local_2b8[0x16] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1a];
    local_2b8[0x17] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1b];
    local_2b8[0x10] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x14];
    local_2b8[0x11] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x15];
    local_2b8[0x12] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x16];
    local_2b8[0x13] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x17];
    local_2b8[0x20] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x24];
    local_2b8[0x21] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x25];
    local_2b8[0x22] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x26];
    local_2b8[0x23] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x27];
    local_2b8[0x24] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x28];
    local_2b8[0x25] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x29];
    local_2b8[0xc] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x10];
    local_2b8[0xd] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x11];
    local_2b8[0xe] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x12];
    local_2b8[0xf] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x13];
    local_2b8[0x18] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1c];
    local_2b8[0x19] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1d];
    local_2b8[0x1a] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1e];
    local_2b8[0x1b] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x1f];
    local_2b8[0x1c] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x20];
    local_2b8[0x1d] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x21];
    local_2b8[0x1e] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x22];
    local_2b8[0x1f] = s_https___tesla_cn_srlt_cc_888_api_ram_48222b90[0x23];
    FUN_ram_4ff45158(auStack_13b,&DAT_ram_48222b5c,0x33);
    puVar8 = &local_548;
    puVar11 = &local_2bc;
    do {
      puVar12 = puVar11;
      puVar17 = puVar8;
      uVar15 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar14 = puVar12[4];
      uVar16 = puVar12[5];
      *puVar17 = *puVar12;
      puVar17[1] = uVar15;
      puVar17[2] = uVar4;
      puVar17[3] = uVar5;
      puVar17[4] = uVar14;
      puVar17[5] = uVar16;
      puVar11 = puVar12 + 6;
      puVar8 = puVar17 + 6;
    } while (puVar11 != &uStack_34);
    iStack_7dc = iStack_7dc + 1;
    *(short *)(puVar17 + 6) = (short)*puVar11;
    *(undefined1 *)((int)puVar17 + 0x1a) = *(undefined1 *)((int)puVar12 + 0x1a);
    if (iStack_7dc == 0) {
      iStack_7dc = 1;
    }
    iStack_2c4 = iStack_7dc;
    local_2c0 = sStack_7d8;
    local_2be = uStack_7d6;
    puVar8 = local_7d4;
    puVar11 = &local_548;
    do {
      puVar12 = puVar11;
      puVar17 = puVar8;
      uVar15 = puVar12[1];
      uVar16 = puVar12[2];
      uVar4 = puVar12[3];
      uVar5 = puVar12[4];
      uVar14 = puVar12[5];
      *puVar17 = *puVar12;
      puVar17[1] = uVar15;
      puVar17[2] = uVar16;
      puVar17[3] = uVar4;
      puVar17[4] = uVar5;
      puVar17[5] = uVar14;
      puVar11 = puVar12 + 6;
      puVar8 = puVar17 + 6;
    } while (puVar11 != (uint *)&local_2c0);
    *(short *)(puVar17 + 6) = (short)*puVar11;
    *(undefined1 *)((int)puVar17 + 0x1a) = *(undefined1 *)((int)puVar12 + 0x1a);
    iVar3 = FUN_ram_48072e0a(local_7d4);
    if (iVar3 == 0) {
      return 0;
    }
  }
  local_2bc = 0;
  local_2b8[0] = '\0';
  local_2b8[1] = '\0';
  local_2b8[2] = '\0';
  local_2b8[3] = '\0';
  local_2b8[4] = '\0';
  local_2b8[5] = '\0';
  local_2b8[6] = '\0';
  local_2b8[7] = '\0';
  local_2b8[8] = '\0';
  local_2b8[9] = '\0';
  local_2b8[10] = '\0';
  local_2b8[0xb] = '\0';
  local_2b8[0xc] = '\0';
  local_2b8[0xd] = '\0';
  local_2b8[0xe] = '\0';
  local_2b8[0xf] = '\0';
  local_2b8[0x10] = '\0';
  local_2b8[0x11] = '\0';
  local_2b8[0x12] = '\0';
  local_2b8[0x13] = '\0';
  local_2b8[0x14] = '\0';
  local_2b8[0x15] = '\0';
  local_2b8[0x16] = '\0';
  local_2b8[0x17] = '\0';
  local_2b8[0x18] = '\0';
  local_2b8[0x19] = '\0';
  local_2b8[0x1a] = '\0';
  local_2b8[0x1b] = '\0';
  local_2b8[0x1c] = '\0';
  local_2b8[0x1d] = '\0';
  local_2b8[0x1e] = '\0';
  local_2b8[0x1f] = '\0';
  uStack_544 = local_aa8;
  uStack_534 = uStack_a98;
  local_530 = uStack_a94;
  uStack_528 = uStack_a8c;
  auStack_524[0] = 0;
  local_2b8[0x20] = '\0';
  local_2b8[0x21] = '\0';
  local_2b8[0x22] = '\0';
  local_2b8[0x23] = '\0';
  uStack_540 = uStack_aa4;
  uStack_53c = uStack_aa0;
  uStack_538 = uStack_a9c;
  uStack_52c = uStack_a90;
  local_548 = 0x31535043;
  auStack_524[0] = 0xffffffff;
  puVar8 = &local_548;
  do {
    cVar6 = '\b';
    auStack_524[0] = auStack_524[0] ^ (byte)*puVar8;
    do {
      cVar6 = cVar6 + -1;
      auStack_524[0] = auStack_524[0] >> 1 ^ -(auStack_524[0] & 1) & 0xedb88320;
    } while (cVar6 != '\0');
    puVar8 = (uint *)((int)puVar8 + 1);
  } while (auStack_524 != puVar8);
  auStack_524[0] = ~auStack_524[0];
  iStack_ab4 = 0;
  iVar3 = FUN_ram_48025b94();
  fence();
  fence();
  if (((DAT_ram_4ff6def0 == 0) || (1000000 < (uint)(iVar3 - DAT_ram_4ff6deec))) ||
     (2000000 < (uint)(iVar3 - DAT_ram_4ff6def0))) {
    fence();
    DAT_ram_4ff6def0 = iVar3;
  }
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + 1;
  DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",1,&uStack_ab0);
  bVar1 = false;
  if (DAT_ram_4ff6dd64 == 0) {
    DAT_ram_4ff6dd64 = FUN_ram_4815a218(uStack_ab0,"preset1",&local_548,0x28);
    if (DAT_ram_4ff6dd64 == 0) {
      DAT_ram_4ff6dd64 = FUN_ram_4815a1c4(uStack_ab0);
    }
    FUN_ram_4815a050(uStack_ab0);
    bVar1 = DAT_ram_4ff6dd64 == 0;
  }
  DAT_ram_4ff6deec = FUN_ram_48025b94();
  fence();
  DAT_ram_4ff6dee8 = DAT_ram_4ff6dee8 + -1;
  DAT_ram_4ff6dee4 = DAT_ram_4ff6dee4 + 1;
  if (DAT_ram_4ff6dee0 < (uint)(DAT_ram_4ff6deec - iVar3)) {
    DAT_ram_4ff6dee0 = DAT_ram_4ff6deec - iVar3;
  }
  if (bVar1) {
    DAT_ram_4ff6dd64 = FUN_ram_48159fd2("p4_data","p4_cloud",0,&uStack_ab0);
    if (DAT_ram_4ff6dd64 == 0x1102) {
      DAT_ram_4ff6dd64 = 0;
      return 0;
    }
    if (DAT_ram_4ff6dd64 == 0) {
      iStack_ab4 = 0x28;
      DAT_ram_4ff6dd64 = FUN_ram_4815a556(uStack_ab0,"preset1",&local_2bc,&iStack_ab4);
      FUN_ram_4815a050(uStack_ab0);
      if (DAT_ram_4ff6dd64 == 0x1102) {
        DAT_ram_4ff6dd64 = 0;
        return 0;
      }
      if (((DAT_ram_4ff6dd64 == 0) && (iStack_ab4 == 0x28)) &&
         (iVar3 = FUN_ram_4ff4511a(&local_548,&local_2bc), iVar3 == 0)) {
        DAT_ram_4ff6dcba = '\0';
LAB_ram_480739d0:
        FUN_ram_4ff45158(param_1,local_7d4,0x28b);
        return uVar2;
      }
    }
  }
  return 0;
}


