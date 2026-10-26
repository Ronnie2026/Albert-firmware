/* Firmware entry: 0x4805abf4 */

void FUN_ram_4805abf4(int param_1,undefined1 *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  char *pcVar7;
  char cVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  char cVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  byte bVar25;
  byte bVar26;
  int iVar27;
  undefined4 *puVar28;
  undefined2 *puVar29;
  undefined2 *puVar30;
  int iVar31;
  char *pcVar32;
  int iVar33;
  char cVar34;
  undefined4 uVar35;
  char cVar36;
  undefined4 uVar37;
  undefined4 *puVar38;
  int iVar39;
  char *pcVar40;
  undefined4 uVar41;
  char cVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  char *pcVar45;
  char cVar46;
  int iStack_aec;
  int iStack_ae4;
  int iStack_ae0;
  uint uStack_ad8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined4 local_ab0 [60];
  undefined4 local_9c0 [30];
  undefined4 auStack_948 [2];
  undefined4 local_940 [25];
  undefined4 auStack_8dc [4];
  char local_8cc [4];
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  int iStack_8b8;
  int iStack_8b4;
  int iStack_8b0;
  undefined1 uStack_880;
  char cStack_87f;
  undefined1 uStack_87e;
  undefined1 uStack_87d;
  undefined1 uStack_87c;
  undefined1 uStack_87b;
  undefined1 uStack_87a;
  undefined1 uStack_879;
  undefined1 uStack_878;
  undefined1 uStack_877;
  char local_874 [61];
  char cStack_837;
  undefined4 uStack_6b0;
  char cStack_6ac;
  undefined1 uStack_6ab;
  char cStack_6aa;
  char local_6a0;
  char cStack_69f;
  undefined4 auStack_69c [6];
  char cStack_683;
  undefined1 uStack_682;
  char acStack_650 [312];
  undefined4 uStack_518;
  char cStack_514;
  undefined1 uStack_513;
  char cStack_512;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_380;
  undefined4 local_1e8;
  undefined4 local_50;
  char acStack_40 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(char *)(param_1 + 0x1e00) != '\0') && (param_3 - *(int *)(param_1 + 0x1e04) < 100)) {
    return;
  }
  iVar39 = param_1 + 0xb20;
  *(undefined1 *)(param_1 + 0x1e00) = 1;
  *(uint *)(param_1 + 0x1e04) = param_3;
  FUN_ram_4ff3ec14(iVar39,0xffffffff);
  iVar27 = *(int *)(param_1 + 0x1448);
  FUN_ram_4ff3ee10(iVar39);
  cVar1 = *(char *)(param_1 + 0x8f34);
  cVar2 = *(char *)(param_1 + 0x8f40);
  iVar19 = param_1 + 0x8f34;
  cVar42 = cVar1;
  if (cVar1 == '\0') {
    if (cVar2 == '\0') {
      iStack_aec = -0x80000000;
      uStack_ad8 = 0xffffffff;
      uVar20 = uStack_ad8;
      cVar1 = '\0';
      goto LAB_ram_4805acc2;
    }
    iVar33 = *(int *)(param_1 + 0x8f48);
    if (iVar33 == 0) {
      iStack_aec = -0x80000000;
      if (iVar19 != param_1 + 0x8f4c) {
LAB_ram_4805bffe:
        if (*(int *)(param_1 + 0x8f48) != 0) {
          uVar20 = param_3 - *(int *)(param_1 + 0x8f48);
          cVar1 = '\0';
          goto LAB_ram_4805acc2;
        }
      }
    }
    else {
LAB_ram_4805c0a0:
      if (param_3 - iVar33 < 0x12d) {
        cVar42 = *(char *)(param_1 + 0x8f41);
        if (cVar42 == '\0') {
          iStack_aec = -0x80000000;
        }
        else {
          iStack_aec = *(int *)(param_1 + 0x8f44);
        }
      }
      else {
        iStack_aec = -0x80000000;
        cVar42 = '\0';
      }
      if (iVar19 != param_1 + 0x8f4c) {
        if (cVar1 == '\0') goto LAB_ram_4805bffe;
        if (*(int *)(param_1 + 0x8f3c) == 0) {
          cVar1 = '\0';
          goto LAB_ram_4805c08a;
        }
        uStack_ad8 = param_3 - *(int *)(param_1 + 0x8f3c);
        cVar1 = '\0';
LAB_ram_4805bcdc:
        uVar20 = uStack_ad8;
        if (((*(int *)(param_1 + 0x8f48) != 0) &&
            (uVar20 = param_3 - *(int *)(param_1 + 0x8f48), uStack_ad8 != 0xffffffff)) &&
           (uStack_ad8 <= uVar20)) {
          uVar20 = uStack_ad8;
        }
        goto LAB_ram_4805acc2;
      }
    }
LAB_ram_4805bc98:
    uStack_ad8 = 0xffffffff;
    uVar20 = uStack_ad8;
    cVar1 = '\0';
  }
  else {
    iVar33 = *(int *)(param_1 + 0x8f3c);
    if ((iVar33 == 0) || (300 < param_3 - iVar33)) {
      if (cVar2 == '\0') {
        if ((iVar19 != param_1 + 0x8f4c) && (iVar33 = *(int *)(param_1 + 0x8f3c), iVar33 != 0)) {
          cVar42 = '\0';
          cVar1 = '\0';
          iStack_aec = -0x80000000;
          goto LAB_ram_4805bcc8;
        }
        cVar1 = '\0';
LAB_ram_4805c11e:
        cVar42 = '\0';
        iStack_aec = -0x80000000;
      }
      else {
        iVar33 = *(int *)(param_1 + 0x8f48);
        if (iVar33 != 0) goto LAB_ram_4805c0a0;
        iStack_aec = -0x80000000;
        cVar42 = '\0';
joined_r0x4805c06e:
        if (iVar19 == param_1 + 0x8f4c) goto LAB_ram_4805bc98;
        iVar33 = *(int *)(param_1 + 0x8f3c);
        cVar1 = '\0';
        if (iVar33 != 0) goto LAB_ram_4805bcc8;
        if (cVar2 != '\0') {
LAB_ram_4805c08a:
          uStack_ad8 = 0xffffffff;
          uVar20 = uStack_ad8;
          if (*(int *)(param_1 + 0x8f48) != 0) {
            uVar20 = param_3 - *(int *)(param_1 + 0x8f48);
          }
          goto LAB_ram_4805acc2;
        }
      }
      uStack_ad8 = 0xffffffff;
      uVar20 = uStack_ad8;
    }
    else {
      cVar1 = *(char *)(param_1 + 0x8f35);
      if (cVar2 == '\0') {
        if (cVar1 != '\0') {
LAB_ram_4805bc82:
          iStack_aec = *(int *)(param_1 + 0x8f38);
          goto joined_r0x4805c06e;
        }
LAB_ram_4805c1c6:
        if (iVar19 == param_1 + 0x8f4c) goto LAB_ram_4805c11e;
        iStack_aec = -0x80000000;
        cVar42 = '\0';
LAB_ram_4805bcc8:
        uStack_ad8 = param_3 - iVar33;
        uVar20 = uStack_ad8;
        if (cVar2 != '\0') goto LAB_ram_4805bcdc;
      }
      else {
        iVar31 = *(int *)(param_1 + 0x8f48);
        if ((iVar31 == 0) || (300 < param_3 - iVar31)) {
          if (cVar1 == '\0') {
            if (iVar19 != param_1 + 0x8f4c) {
              iVar33 = *(int *)(param_1 + 0x8f3c);
joined_r0x4805c1b0:
              cVar42 = '\0';
              iStack_aec = -0x80000000;
              if (iVar33 != 0) goto LAB_ram_4805bcc8;
              iStack_aec = -0x80000000;
              cVar42 = '\0';
              goto LAB_ram_4805c08a;
            }
            goto LAB_ram_4805c11e;
          }
          goto LAB_ram_4805bc82;
        }
        if ((cVar1 == '\0') || (cVar1 = *(char *)(param_1 + 0x8f41), cVar1 == '\0'))
        goto LAB_ram_4805c1c6;
        iVar13 = *(int *)(param_1 + 0x8f38);
        iStack_aec = *(int *)(param_1 + 0x8f44);
        uVar20 = iVar13 - iStack_aec >> 0x1f;
        if ((int)((iVar13 - iStack_aec ^ uVar20) - uVar20) < 0x65) {
          cVar42 = cVar1;
          if (iVar33 - iVar31 < 0) {
            if (iVar19 != param_1 + 0x8f4c) {
              iVar33 = *(int *)(param_1 + 0x8f3c);
              if (iVar33 != 0) {
                cVar1 = '\0';
                goto LAB_ram_4805bcc8;
              }
              cVar1 = '\0';
              goto LAB_ram_4805c08a;
            }
            uStack_ad8 = 0xffffffff;
            uVar20 = uStack_ad8;
            cVar1 = '\0';
          }
          else {
            iStack_aec = iVar13;
            if (iVar19 != param_1 + 0x8f4c) {
              iVar33 = *(int *)(param_1 + 0x8f3c);
              if (iVar33 == 0) {
                cVar1 = '\0';
                goto LAB_ram_4805c08a;
              }
              cVar1 = '\0';
              goto LAB_ram_4805bcc8;
            }
            uStack_ad8 = 0xffffffff;
            uVar20 = uStack_ad8;
            cVar1 = '\0';
          }
        }
        else {
          if (iVar19 != param_1 + 0x8f4c) {
            iVar33 = *(int *)(param_1 + 0x8f3c);
            goto joined_r0x4805c1b0;
          }
          iStack_aec = -0x80000000;
          cVar42 = '\0';
          uStack_ad8 = 0xffffffff;
          uVar20 = uStack_ad8;
        }
      }
    }
  }
LAB_ram_4805acc2:
  uStack_ad8 = uVar20;
  FUN_ram_4ff3ec14(param_1 + 0x910c,0xffffffff);
  cVar2 = *(char *)(param_1 + 0x9108);
  bVar16 = false;
  if (((cVar2 == '\0') && (bVar16 = false, *(char *)(param_1 + 0x90d8) != '\0')) &&
     ((bVar16 = false, *(char *)(param_1 + 0x90d9) != '\0' &&
      (bVar16 = false, param_3 - *(int *)(param_1 + 0x90d0) < 0x12d)))) {
    if (*(char *)(param_1 + 0x90e8) == '\0') {
      bVar16 = false;
    }
    else if (*(char *)(param_1 + 0x90e9) == '\0') {
      bVar16 = false;
    }
    else {
      bVar16 = param_3 - *(int *)(param_1 + 0x90e0) < 0x12d;
    }
  }
  cVar3 = *(char *)(param_1 + 0x90b9);
  cVar4 = *(char *)(param_1 + 0x90c9);
  bVar25 = 0;
  if (cVar3 != '\0') {
    bVar25 = *(byte *)(param_1 + 0x90af) & 3;
  }
  bVar26 = 0;
  if (cVar4 != '\0') {
    bVar26 = *(byte *)(param_1 + 0x90bd) >> 4 & 7;
  }
  iStack_ae4 = -1;
  if (*(char *)(param_1 + 0x90b8) != '\0') {
    iStack_ae4 = param_3 - *(int *)(param_1 + 0x90b0);
  }
  iStack_ae0 = -1;
  if (*(char *)(param_1 + 0x90c8) != '\0') {
    iStack_ae0 = param_3 - *(int *)(param_1 + 0x90c0);
  }
  uStack_880 = *(undefined1 *)(param_1 + 0x90ec);
  cStack_87f = *(char *)(param_1 + 0x90ed);
  uStack_87e = *(undefined1 *)(param_1 + 0x90ee);
  uStack_87d = *(undefined1 *)(param_1 + 0x90ef);
  uStack_87c = *(undefined1 *)(param_1 + 0x90f0);
  uStack_87b = *(undefined1 *)(param_1 + 0x90f1);
  uStack_87a = *(undefined1 *)(param_1 + 0x90f2);
  uStack_879 = *(undefined1 *)(param_1 + 0x90f3);
  uStack_878 = *(undefined1 *)(param_1 + 0x90f4);
  uStack_877 = *(undefined1 *)(param_1 + 0x90f5);
  uVar22 = *(undefined4 *)(param_1 + 0x90fc);
  if (!bVar16) {
    cStack_87f = '\0';
    uStack_87e = 0;
  }
  FUN_ram_4ff3ee10(param_1 + 0x910c);
  uStack_8c8 = *(undefined4 *)(param_1 + 0x7c9c);
  uStack_8c0 = *(undefined4 *)(param_1 + 0x7ca4);
  uStack_8bc = CONCAT22((short)((uint)DAT_ram_48223098 >> 0x10),*(undefined2 *)(param_1 + 0x7ca8));
  uStack_8c4 = *(undefined4 *)(param_1 + 0x7ca0);
  iStack_8b8 = -1;
  if ((*(ushort *)(param_1 + 0x7c9c) & 1) != 0) {
    iStack_8b8 = param_3 - *(int *)(param_1 + 0x7cac);
  }
  iStack_8b4 = -1;
  if ((*(ushort *)(param_1 + 0x7c9c) >> 8 & 1) != 0) {
    iStack_8b4 = param_3 - *(int *)(param_1 + 0x7cb0);
  }
  iStack_8b0 = -1;
  if (*(char *)(param_1 + 0x7c9e) != '\0') {
    iStack_8b0 = param_3 - *(int *)(param_1 + 0x7cb4);
  }
  pcVar7 = local_8cc;
  local_874[0x34] = '\0';
  local_874[0x35] = '\0';
  local_874[0x36] = '\0';
  local_874[0x37] = '\0';
  local_874[0x38] = '\0';
  local_874[0x39] = '\0';
  local_874[0x3a] = '\0';
  local_874[0x3b] = '\0';
  local_874[0] = '\0';
  local_874[1] = '\0';
  local_874[2] = '\0';
  local_874[3] = '\0';
  local_874[4] = '\0';
  local_874[5] = '\0';
  local_874[6] = '\0';
  local_874[7] = '\0';
  local_874[8] = '\0';
  local_874[9] = '\0';
  local_874[10] = '\0';
  local_874[0xb] = '\0';
  local_874[0xc] = '\0';
  local_874[0xd] = '\0';
  local_874[0xe] = '\0';
  local_874[0xf] = '\0';
  local_874[0x10] = '\0';
  local_874[0x11] = '\0';
  local_874[0x12] = '\0';
  local_874[0x13] = '\0';
  local_874[0x14] = '\0';
  local_874[0x15] = '\0';
  local_874[0x16] = '\0';
  local_874[0x17] = '\0';
  local_874[0x18] = '\0';
  local_874[0x19] = '\0';
  local_874[0x1a] = '\0';
  local_874[0x1b] = '\0';
  local_874[0x1c] = '\0';
  local_874[0x1d] = '\0';
  local_874[0x1e] = '\0';
  local_874[0x1f] = '\0';
  local_874[0x20] = '\0';
  local_874[0x21] = '\0';
  local_874[0x22] = '\0';
  local_874[0x23] = '\0';
  local_874[0x24] = '\0';
  local_874[0x25] = '\0';
  local_874[0x26] = '\0';
  local_874[0x27] = '\0';
  local_874[0x28] = '\0';
  local_874[0x29] = '\0';
  local_874[0x2a] = '\0';
  local_874[0x2b] = '\0';
  local_874[0x2c] = '\0';
  local_874[0x2d] = '\0';
  local_874[0x2e] = '\0';
  local_874[0x2f] = '\0';
  local_874[0x30] = '\0';
  local_874[0x31] = '\0';
  local_874[0x32] = '\0';
  local_874[0x33] = '\0';
  local_8cc[0] = '\x01';
  local_8cc[1] = '\x02';
  local_8cc[2] = 10;
  pcVar45 = local_874;
  pcVar40 = local_874 + 0x3c;
  do {
    cVar21 = *pcVar7;
    if (cVar21 == '\x02') {
      iVar19 = 1;
LAB_ram_4805bd00:
      FUN_ram_4ff3ec14(param_1 + 0x2864,0xffffffff);
      iVar19 = iVar19 * 0x14 + param_1;
      uStack_504 = *(undefined4 *)(iVar19 + 0x2824);
      uStack_500 = *(undefined4 *)(iVar19 + 0x2828);
      uStack_4fc = *(undefined4 *)(iVar19 + 0x282c);
      local_508 = *(undefined4 *)(iVar19 + 0x2820);
      uStack_4f8 = *(undefined4 *)(iVar19 + 0x2830);
      FUN_ram_4ff3ee10(param_1 + 0x2864);
      uVar41 = local_508;
      uVar37 = uStack_504;
      uVar43 = uStack_500;
      uVar44 = uStack_4fc;
      uVar10 = uStack_4f8;
    }
    else {
      if (cVar21 == '\n') {
        iVar19 = 2;
        goto LAB_ram_4805bd00;
      }
      iVar19 = 0;
      if (cVar21 == '\x01') goto LAB_ram_4805bd00;
      uVar41 = 0;
      uVar37 = 0;
      uVar43 = 0;
      uVar44 = 0;
      uVar10 = 0;
    }
    *(undefined4 *)pcVar45 = uVar41;
    *(undefined4 *)(pcVar45 + 4) = uVar37;
    *(undefined4 *)(pcVar45 + 8) = uVar43;
    *(undefined4 *)(pcVar45 + 0xc) = uVar44;
    *(undefined4 *)(pcVar45 + 0x10) = uVar10;
    pcVar45 = pcVar45 + 0x14;
    pcVar7 = pcVar7 + 1;
  } while (pcVar40 != pcVar45);
  if ((*(int *)(param_1 + 0x93ec) == 0) || (0xf9 < param_3 - *(int *)(param_1 + 0x93ec))) {
    memset(&local_508,0,0x4c8);
    uStack_380 = 1;
    local_1e8 = 1;
    local_50 = 1;
    pcVar45 = "\x01\x02\x04";
    pcVar7 = (char *)&local_508;
    do {
      cVar21 = *pcVar45;
      if (cVar21 == '\x02') {
        iVar33 = 0x1228;
        iVar19 = 1;
LAB_ram_4805be7a:
        iVar31 = iVar19 * 0x1228 + param_1;
        puVar24 = (undefined4 *)(iVar31 + 0x4ac0);
        pcVar12 = pcVar40;
        do {
          uVar10 = puVar24[1];
          uVar44 = puVar24[2];
          uVar41 = puVar24[3];
          uVar43 = puVar24[4];
          uVar37 = puVar24[5];
          *(undefined4 *)pcVar12 = *puVar24;
          *(undefined4 *)(pcVar12 + 4) = uVar10;
          *(undefined4 *)(pcVar12 + 8) = uVar44;
          *(undefined4 *)(pcVar12 + 0xc) = uVar41;
          *(undefined4 *)(pcVar12 + 0x10) = uVar43;
          *(undefined4 *)(pcVar12 + 0x14) = uVar37;
          puVar24 = puVar24 + 6;
          pcVar12 = pcVar12 + 0x18;
        } while (puVar24 != (undefined4 *)(iVar31 + 0x4c58));
        iVar33 = iVar33 + 0x3a40 + param_1;
        iVar19 = param_1 + iVar19 * 0x1228;
        cVar34 = *(char *)(iVar19 + 0x4ac0);
        cVar36 = *(char *)(iVar19 + 0x4c4e);
        uVar41 = *(undefined4 *)(iVar19 + 0x4c58);
        uVar9 = *(undefined1 *)(iVar19 + 0x4c61);
        pcVar32 = (char *)(iVar33 + 0x38);
        pcVar12 = (char *)(iVar33 + 0xeb8);
        cVar8 = *(char *)(iVar19 + 0x4ac1);
        cVar18 = *(char *)(iVar19 + 0x4c4c);
        do {
          while( true ) {
            cVar17 = cVar18 + '\x01';
            cVar6 = cVar34;
            if (pcVar32[0xae] != '\0') break;
LAB_ram_4805bf16:
            cVar17 = cVar18;
            cVar34 = cVar6;
            pcVar32 = pcVar32 + 0xe8;
            cVar18 = cVar17;
            if (pcVar12 == pcVar32) goto LAB_ram_4805bf4a;
          }
          cVar46 = cVar8 + '\x01';
          cVar18 = cVar17;
          if ((pcVar32[0xae] != '\x01') || (cVar6 = cVar34 + '\x01', *pcVar32 == '\0'))
          goto LAB_ram_4805bf16;
          pcVar32 = pcVar32 + 0xe8;
          cVar8 = cVar46;
        } while (pcVar12 != pcVar32);
LAB_ram_4805bf4a:
        for (pcVar12 = (char *)(param_1 + 0x70b8); pcVar12 != (char *)(param_1 + 0x79b8);
            pcVar12 = pcVar12 + 0x120) {
          while ((*pcVar12 != cVar21 || (pcVar12[0x11e] != '\x01'))) {
            pcVar12 = pcVar12 + 0x120;
            if ((char *)(param_1 + 0x79b8) == pcVar12) goto LAB_ram_4805bf84;
          }
          cVar36 = cVar36 + '\x01';
        }
LAB_ram_4805bf84:
        local_874[0x3c] = cVar34;
        cStack_837 = cVar8;
        uStack_6b0 = uVar41;
        cStack_6ac = cVar17;
        uStack_6ab = uVar9;
        cStack_6aa = cVar36;
        pcVar12 = &local_6a0;
        pcVar32 = pcVar40;
        do {
          uVar11 = *(undefined4 *)(pcVar32 + 8);
          uVar10 = *(undefined4 *)(pcVar32 + 0xc);
          uVar37 = *(undefined4 *)(pcVar32 + 0x10);
          uVar43 = *(undefined4 *)(pcVar32 + 0x14);
          uVar44 = *(undefined4 *)pcVar32;
          *(undefined4 *)(pcVar12 + 4) = *(undefined4 *)(pcVar32 + 4);
          *(undefined4 *)(pcVar12 + 8) = uVar11;
          *(undefined4 *)pcVar12 = uVar44;
          *(undefined4 *)(pcVar12 + 0xc) = uVar10;
          *(undefined4 *)(pcVar12 + 0x10) = uVar37;
          *(undefined4 *)(pcVar12 + 0x14) = uVar43;
          pcVar32 = pcVar32 + 0x18;
          pcVar12 = pcVar12 + 0x18;
        } while (&local_6a0 != pcVar32);
      }
      else {
        if (cVar21 == '\x04') {
          iVar33 = 0x2450;
          iVar19 = 2;
          goto LAB_ram_4805be7a;
        }
        if (cVar21 == '\x01') {
          iVar33 = 0;
          iVar19 = 0;
          goto LAB_ram_4805be7a;
        }
        memset(&local_6a0,0,0x198);
        uVar41 = 1;
        cVar36 = '\0';
        uVar9 = 0;
        cVar17 = '\0';
        cVar8 = '\0';
        cVar34 = '\0';
      }
      local_6a0 = cVar34;
      cStack_69f = cVar8;
      uStack_518 = uVar41;
      cStack_514 = cVar17;
      uStack_513 = uVar9;
      cStack_512 = cVar36;
      pcVar12 = pcVar7;
      pcVar32 = &local_6a0;
      do {
        uVar10 = *(undefined4 *)(pcVar32 + 4);
        uVar41 = *(undefined4 *)(pcVar32 + 8);
        uVar37 = *(undefined4 *)(pcVar32 + 0xc);
        uVar43 = *(undefined4 *)(pcVar32 + 0x10);
        uVar44 = *(undefined4 *)(pcVar32 + 0x14);
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar32;
        *(undefined4 *)(pcVar12 + 4) = uVar10;
        *(undefined4 *)(pcVar12 + 8) = uVar41;
        *(undefined4 *)(pcVar12 + 0xc) = uVar37;
        *(undefined4 *)(pcVar12 + 0x10) = uVar43;
        *(undefined4 *)(pcVar12 + 0x14) = uVar44;
        pcVar32 = pcVar32 + 0x18;
        pcVar12 = pcVar12 + 0x18;
      } while (pcVar32 != (char *)&local_508);
      pcVar7 = pcVar7 + 0x198;
      pcVar45 = pcVar45 + 1;
    } while (pcVar7 != acStack_40);
    uStack_abc = *(undefined4 *)(param_1 + 0x81ec);
    uVar37 = *(undefined4 *)(param_1 + 0x81dc);
    uVar43 = *(undefined4 *)(param_1 + 0x81e0);
    uVar44 = *(undefined4 *)(param_1 + 0x81f0);
    uStack_ac0 = *(undefined4 *)(param_1 + 0x81f4);
    uVar41 = *(undefined4 *)(param_1 + 0x81f8);
    *(uint *)(param_1 + 0x93ec) = param_3;
    bVar5 = true;
  }
  else {
    memset(&local_508,0,0x4c8);
    uStack_380 = 1;
    local_1e8 = 1;
    local_50 = 1;
    bVar5 = false;
    uVar41 = 0;
    uStack_ac0 = 0;
    uVar44 = 0;
    uStack_abc = 0;
    uVar43 = 0;
    uVar37 = 0;
  }
  uVar10 = *(undefined4 *)(param_1 + 0x7d58);
  uVar11 = *(undefined4 *)(param_1 + 0x7d5c);
  uVar14 = *(undefined4 *)(param_1 + 0x7d60);
  *(uint *)(param_1 + 0x19e0) = param_3 / 1000;
  *(undefined4 *)(param_1 + 0x19e4) = *(undefined4 *)(param_1 + 0x7d1c);
  *(undefined4 *)(param_1 + 0x19ec) = *(undefined4 *)(param_1 + 0x7d24);
  *(undefined4 *)(param_1 + 0x19f0) = *(undefined4 *)(param_1 + 0x7d28);
  *(undefined4 *)(param_1 + 0x19e8) = *(undefined4 *)(param_1 + 0x7d20);
  *(undefined4 *)(param_1 + 0x19f4) = *(undefined4 *)(param_1 + 0x7d2c);
  *(undefined1 *)(param_1 + 0x19f8) = *(undefined1 *)(param_1 + 0x7d34);
  *(undefined1 *)(param_1 + 0x19fa) = *(undefined1 *)(param_1 + 0x7d3b);
  *(undefined1 *)(param_1 + 0x19fb) = *(undefined1 *)(param_1 + 0x7d4c);
  *(undefined1 *)(param_1 + 0x19f9) = *(undefined1 *)(param_1 + 0x7d35);
  *(char *)(param_1 + 0x19fc) = (char)uVar10;
  *(char *)(param_1 + 0x1a00) = (char)uVar11;
  *(char *)(param_1 + 0x1a02) = (char)((uint)uVar11 >> 0x10);
  *(char *)(param_1 + 0x1a03) = (char)((uint)uVar11 >> 0x18);
  *(char *)(param_1 + 0x19fd) = (char)((uint)uVar10 >> 8);
  *(char *)(param_1 + 0x19fe) = (char)((uint)uVar10 >> 0x10);
  *(char *)(param_1 + 0x19ff) = (char)((uint)uVar10 >> 0x18);
  *(char *)(param_1 + 0x1a01) = (char)((uint)uVar11 >> 8);
  *(char *)(param_1 + 0x1a04) = (char)uVar14;
  *(char *)(param_1 + 0x1a07) = (char)((uint)uVar14 >> 0x18);
  *(undefined1 *)(param_1 + 0x1a08) = *(undefined1 *)(param_1 + 0x7d6e);
  *(undefined1 *)(param_1 + 0x1a09) = *(undefined1 *)(param_1 + 0x7d6f);
  *(char *)(param_1 + 0x1a05) = (char)((uint)uVar14 >> 8);
  *(char *)(param_1 + 0x1a06) = (char)((uint)uVar14 >> 0x10);
  uVar20 = 0;
  if (*(char *)(param_1 + 0x7ee6) != '\0') {
    uVar20 = *(int *)(param_1 + 0x7ef0) - param_3 &
             (int)(param_3 - *(int *)(param_1 + 0x7ef0)) >> 0x1f;
  }
  if (*(char *)(param_1 + 0x7ee5) == '\0') {
    cVar21 = '\0';
    cVar34 = '\0';
  }
  else {
    cVar21 = (*(char *)(param_1 + 0x7eea) == '\x01') + '\x01';
    cVar34 = *(char *)(param_1 + 0x7eeb) + '\x01';
  }
  iVar19 = -1;
  if (*(int *)(param_1 + 0x7f04) != 0) {
    iVar19 = param_3 - *(int *)(param_1 + 0x7f08);
  }
  *(undefined4 *)(param_1 + 0x1a20) = *(undefined4 *)(param_1 + 0x7f0c);
  *(char *)(param_1 + 0x1a0c) = *(char *)(param_1 + 0x7ee5);
  *(char *)(param_1 + 0x1a0d) = cVar21;
  *(uint *)(param_1 + 0x1a14) = uVar20;
  *(undefined4 *)(param_1 + 0x1a24) = *(undefined4 *)(param_1 + 0x7f10);
  *(undefined4 *)(param_1 + 0x1a28) = *(undefined4 *)(param_1 + 0x7f14);
  *(undefined1 *)(param_1 + 0x1a2c) = *(undefined1 *)(param_1 + 0x7f18);
  *(char *)(param_1 + 0x1a0e) = cVar34;
  *(undefined2 *)(param_1 + 0x1a10) = *(undefined2 *)(param_1 + 0x7f00);
  *(int *)(param_1 + 0x1a18) = *(int *)(param_1 + 0x7f04);
  *(int *)(param_1 + 0x1a1c) = iVar19;
  FUN_ram_4804a1e6(local_940,param_1 + 0x7f88,param_3);
  puVar24 = (undefined4 *)(param_1 + 0x1a30);
  puVar38 = local_940;
  do {
    puVar28 = puVar38;
    puVar23 = puVar24;
    uVar35 = puVar28[1];
    uVar10 = puVar28[2];
    uVar11 = puVar28[3];
    uVar14 = puVar28[4];
    *puVar23 = *puVar28;
    puVar23[1] = uVar35;
    puVar23[2] = uVar10;
    puVar23[3] = uVar11;
    puVar23[4] = uVar14;
    puVar38 = puVar28 + 5;
    puVar24 = puVar23 + 5;
  } while (puVar38 != auStack_8dc);
  uVar10 = puVar28[6];
  uVar9 = *(undefined1 *)(param_1 + 0x81ce);
  puVar23[5] = *puVar38;
  puVar23[6] = uVar10;
  *(undefined1 *)(param_1 + 0x1a9c) = uVar9;
  *(bool *)(param_1 + 0x1a9d) = *(int *)(param_1 + 0x81e8) != 0;
  if (bVar5) {
    puVar29 = (undefined2 *)(param_1 + 0x1aa0);
    pcVar7 = (char *)&local_508;
    do {
      puVar30 = puVar29 + 0xe;
      *puVar29 = *(undefined2 *)pcVar7;
      *(undefined4 *)(puVar29 + 2) = *(undefined4 *)(pcVar7 + 4);
      *(undefined4 *)(puVar29 + 4) = *(undefined4 *)(pcVar7 + 8);
      *(undefined4 *)(puVar29 + 6) = *(undefined4 *)(pcVar7 + 0xc);
      *(undefined4 *)(puVar29 + 8) = *(undefined4 *)(pcVar7 + 0x10);
      *(undefined4 *)(puVar29 + 10) = *(undefined4 *)(pcVar7 + 0x17c);
      *(undefined4 *)(puVar29 + 0xc) = *(undefined4 *)(pcVar7 + 0x188);
      puVar29 = puVar30;
      pcVar7 = pcVar7 + 0x198;
    } while ((undefined2 *)(param_1 + 0x1af4) != puVar30);
    *(undefined4 *)(param_1 + 0x1b00) = uStack_ac0;
    *(undefined4 *)(param_1 + 0x1af4) = uVar37;
    *(undefined4 *)(param_1 + 0x1af8) = uVar43;
    *(undefined4 *)(param_1 + 0x1afc) = uVar44;
    *(undefined4 *)(param_1 + 0x1b04) = uStack_abc;
    *(undefined4 *)(param_1 + 0x1b08) = uVar41;
  }
  *(undefined4 *)(param_1 + 0x1b0c) = *(undefined4 *)(param_1 + 0x8494);
  *(undefined4 *)(param_1 + 0x1b10) = *(undefined4 *)(param_1 + 0x8498);
  FUN_ram_48052b10(local_9c0,param_1 + 0x8820,param_3);
  puVar38 = local_9c0;
  puVar24 = (undefined4 *)(param_1 + 0x1b14);
  do {
    uVar44 = puVar38[1];
    uVar41 = puVar38[2];
    uVar37 = puVar38[3];
    uVar43 = puVar38[4];
    *puVar24 = *puVar38;
    puVar24[1] = uVar44;
    puVar24[2] = uVar41;
    puVar24[3] = uVar37;
    puVar24[4] = uVar43;
    puVar38 = puVar38 + 5;
    puVar24 = puVar24 + 5;
  } while (puVar38 != auStack_948);
  FUN_ram_48053f2a(local_ab0,param_1 + 0x8a1c,param_3);
  puVar38 = (undefined4 *)(param_1 + 0x1b8c);
  puVar24 = local_ab0;
  do {
    uVar41 = puVar24[1];
    uVar37 = puVar24[2];
    uVar43 = puVar24[3];
    *puVar38 = *puVar24;
    puVar38[1] = uVar41;
    puVar38[2] = uVar37;
    puVar38[3] = uVar43;
    puVar24 = puVar24 + 4;
    puVar38 = puVar38 + 4;
  } while (puVar24 != local_ab0 + 0x38);
  *puVar38 = *puVar24;
  puVar24 = (undefined4 *)(param_1 + 0x8de0);
  pcVar7 = &local_6a0;
  do {
    uVar41 = puVar24[1];
    uVar37 = puVar24[2];
    uVar43 = puVar24[3];
    *(undefined4 *)pcVar7 = *puVar24;
    *(undefined4 *)(pcVar7 + 4) = uVar41;
    *(undefined4 *)(pcVar7 + 8) = uVar37;
    *(undefined4 *)(pcVar7 + 0xc) = uVar43;
    puVar24 = puVar24 + 4;
    pcVar7 = pcVar7 + 0x10;
  } while (puVar24 != (undefined4 *)(param_1 + 0x8e30));
  puVar24 = (undefined4 *)(param_1 + 0x1c70);
  pcVar7 = &local_6a0;
  do {
    uVar41 = *(undefined4 *)(pcVar7 + 4);
    uVar37 = *(undefined4 *)(pcVar7 + 8);
    uVar43 = *(undefined4 *)(pcVar7 + 0xc);
    *puVar24 = *(undefined4 *)pcVar7;
    puVar24[1] = uVar41;
    puVar24[2] = uVar37;
    puVar24[3] = uVar43;
    pcVar7 = pcVar7 + 0x10;
    puVar24 = puVar24 + 4;
  } while (pcVar7 != acStack_650);
  FUN_ram_4ff45158(param_1 + 0x1cc0,local_874,0x3c);
  iVar19 = -1;
  if (*(char *)(param_1 + 0x9140) != '\0') {
    iVar19 = param_3 - *(int *)(param_1 + 0x9144);
  }
  *(int *)(param_1 + 0x1cfc) = iVar19;
  iVar19 = -1;
  if (*(char *)(param_1 + 0x9141) != '\0') {
    iVar19 = param_3 - *(int *)(param_1 + 0x9148);
  }
  *(int *)(param_1 + 0x1d00) = iVar19;
  *(bool *)(param_1 + 0x1d05) = *(int *)(param_1 + 0x9204) != 0;
  *(undefined1 *)(param_1 + 0x1d04) = *(undefined1 *)(param_1 + 0x91b0);
  *(undefined2 *)(param_1 + 0x1d06) = *(undefined2 *)(param_1 + 0x9284);
  iVar19 = -1;
  if (*(int *)(param_1 + 0x7c64) != 0) {
    iVar19 = param_3 - *(int *)(param_1 + 0x7c64);
  }
  *(int *)(param_1 + 0x1d08) = iVar19;
  if (param_2[1] == '\f') {
    cVar21 = *(char *)(param_1 + 0x7e14);
    iVar19 = *(int *)(param_1 + 0x7e18);
  }
  else {
    cVar21 = *(char *)(param_1 + 0x7e44);
    iVar19 = *(int *)(param_1 + 0x7e48);
  }
  iVar33 = -1;
  if ((cVar21 != '\0') && (iVar19 != 0)) {
    iVar33 = param_3 - iVar19;
  }
  *(undefined1 *)(param_1 + 0x1d10) = *(undefined1 *)(param_1 + 0x7dec);
  *(int *)(param_1 + 0x1d0c) = iVar33;
  FUN_ram_4ff3ec14(param_1 + 0x79f4,0xffffffff);
  uVar20 = *(uint *)(param_1 + 0x79fc);
  FUN_ram_4ff3ee10(param_1 + 0x79f4);
  uVar9 = 0;
  if ((param_2[10] != '\0') && (uVar9 = 0, param_2[0xb] != '\0')) {
    uVar9 = *param_2;
  }
  *(undefined1 *)(param_1 + 0x1d13) = *(undefined1 *)(param_1 + 0x7c90);
  *(undefined1 *)(param_1 + 0x1d14) = 0;
  *(undefined1 *)(param_1 + 0x1d11) = uVar9;
  *(byte *)(param_1 + 0x1d12) = (byte)(uVar20 >> 7) & 1;
  uVar9 = 0;
  if (*(char *)(param_1 + 0x7c93) != '\0') {
    uVar9 = *(undefined1 *)(param_1 + 0x7c91);
  }
  *(undefined1 *)(param_1 + 0x1d15) = uVar9;
  *(undefined4 *)(param_1 + 0x1d18) = 0;
  iVar19 = -1;
  *(undefined1 *)(param_1 + 0x1d16) = *(undefined1 *)(param_1 + 0x7c92);
  if (iVar27 != 0) {
    iVar19 = param_3 - iVar27;
  }
  *(int *)(param_1 + 0x1d1c) = iVar19;
  *(undefined2 *)(param_1 + 0x1d20) = *(undefined2 *)(param_1 + 0x7dbc);
  fence();
  *(bool *)(param_1 + 0x1d22) = *(char *)(param_1 + 0x7a14) != '\0';
  fence();
  *(undefined4 *)(param_1 + 0x1d24) = *(undefined4 *)(param_1 + 0x7a44);
  *(undefined4 *)(param_1 + 0x1d28) = *(undefined4 *)(param_1 + 0x7dc8);
  *(undefined4 *)(param_1 + 0x1d2c) = *(undefined4 *)(param_1 + 0x7dd4);
  *(undefined4 *)(param_1 + 0x1d30) = *(undefined4 *)(param_1 + 0x7dd8);
  *(undefined4 *)(param_1 + 0x1d38) = uStack_8c8;
  *(undefined4 *)(param_1 + 0x1d34) = *(undefined4 *)(param_1 + 0x7ddc);
  *(int *)(param_1 + 0x1d4c) = iStack_8b4;
  *(undefined4 *)(param_1 + 0x1d3c) = uStack_8c4;
  *(undefined4 *)(param_1 + 0x1d40) = uStack_8c0;
  *(undefined4 *)(param_1 + 0x1d44) = uStack_8bc;
  *(int *)(param_1 + 0x1d48) = iStack_8b8;
  *(int *)(param_1 + 0x1d50) = iStack_8b0;
  *(undefined1 *)(param_1 + 0x1d54) = *(undefined1 *)(param_1 + 0x8f9c);
  *(undefined1 *)(param_1 + 0x1d55) = *(undefined1 *)(param_1 + 0x903c);
  *(undefined1 *)(param_1 + 0x1d56) = *(undefined1 *)(param_1 + 0x903d);
  *(undefined4 *)(param_1 + 0x1d58) = *(undefined4 *)(param_1 + 0x9040);
  *(undefined4 *)(param_1 + 0x1d60) = *(undefined4 *)(param_1 + 0x9048);
  *(undefined4 *)(param_1 + 0x1d5c) = *(undefined4 *)(param_1 + 0x9044);
  *(undefined1 *)(param_1 + 0x1d64) = *(undefined1 *)(param_1 + 0x8fde);
  *(undefined1 *)(param_1 + 0x1d65) = *(undefined1 *)(param_1 + 0x904c);
  *(undefined2 *)(param_1 + 0x1d66) = *(undefined2 *)(param_1 + 0x8fa6);
  *(undefined1 *)(param_1 + 0x1d68) = *(undefined1 *)(param_1 + 0x900d);
  *(undefined1 *)(param_1 + 0x1d69) = *(undefined1 *)(param_1 + 0x9034);
  *(undefined4 *)(param_1 + 0x1d6c) = *(undefined4 *)(param_1 + 0x9038);
  cVar21 = param_2[1];
  if (cVar21 == '\f') {
    iVar19 = *(int *)(param_1 + 0x7e18);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x8fd8);
  }
  iVar27 = -1;
  if (iVar19 != 0) {
    iVar27 = param_3 - iVar19;
  }
  *(int *)(param_1 + 0x1d70) = iVar27;
  *(undefined4 *)(param_1 + 0x1d74) = *(undefined4 *)(param_1 + 0x9054);
  bVar15 = false;
  if (*(char *)(param_1 + 0x9057) != '\0') {
    bVar15 = false;
    if ((*(int *)(param_1 + 0x9058) != 0) && (param_3 - *(int *)(param_1 + 0x9058) < 0x12d)) {
      bVar15 = 1 < *(byte *)(param_1 + 0x9056) && *(ushort *)(param_1 + 0x9054) >> 8 == 1;
    }
  }
  *(bool *)(param_1 + 0x1d78) = bVar15;
  iVar19 = -1;
  if (*(int *)(param_1 + 0x9058) != 0) {
    iVar19 = param_3 - *(int *)(param_1 + 0x9058);
  }
  *(int *)(param_1 + 0x1d7c) = iVar19;
  *(undefined1 *)(param_1 + 0x1d80) = *(undefined1 *)(param_1 + 0x905c);
  *(undefined1 *)(param_1 + 0x1d81) = *(undefined1 *)(param_1 + 0x905f);
  cVar34 = param_2[0x89];
  uVar37 = *(undefined4 *)(param_1 + 0x909c);
  *(bool *)(param_1 + 0x1d82) = *(int *)(param_1 + 0x9060) != 0;
  uVar41 = *(undefined4 *)(param_1 + 0x90a0);
  iVar19 = *(int *)(param_1 + 0x90a4);
  if ((cVar34 == '\0') || (*(char *)(param_1 + 0x9094) == '\0')) {
    *(undefined1 *)(param_1 + 0x1d83) = 0;
    *(undefined4 *)(param_1 + 0x1d84) = uVar37;
    *(undefined4 *)(param_1 + 0x1d88) = uVar41;
    uVar20 = param_3 - iVar19;
    if (iVar19 == 0) {
      uVar20 = 0xffffffff;
    }
  }
  else if (iVar19 == 0) {
    *(undefined1 *)(param_1 + 0x1d83) = 0;
    *(undefined4 *)(param_1 + 0x1d84) = uVar37;
    *(undefined4 *)(param_1 + 0x1d88) = uVar41;
    uVar20 = 0xffffffff;
  }
  else {
    uVar20 = param_3 - iVar19;
    bVar15 = false;
    if (((uVar20 < 0x12d) && (*(int *)(param_1 + 0x9098) != 0)) &&
       (param_3 - *(int *)(param_1 + 0x9098) < 0x12d)) {
      bVar15 = 1 < *(byte *)(param_1 + 0x9095);
    }
    *(bool *)(param_1 + 0x1d83) = bVar15;
    *(undefined4 *)(param_1 + 0x1d84) = uVar37;
    *(undefined4 *)(param_1 + 0x1d88) = uVar41;
  }
  *(uint *)(param_1 + 0x1d8c) = uVar20;
  bVar15 = false;
  if ((*(char *)(param_1 + 0x8db9) != '\0') && (bVar15 = false, *(char *)(param_1 + 0x8db7) != '\0')
     ) {
    bVar15 = param_3 - *(int *)(param_1 + 0x8db0) < 0x12d;
  }
  *(bool *)(param_1 + 0x1d90) = bVar15;
  *(undefined1 *)(param_1 + 0x1d91) = *(undefined1 *)(param_1 + 0x8db4);
  *(undefined1 *)(param_1 + 0x1d92) = *(undefined1 *)(param_1 + 0x8db5);
  iVar19 = *(int *)(param_1 + 0x8dac);
  *(int *)(param_1 + 0x1d94) = iVar19;
  bVar15 = false;
  if ((*(char *)(param_1 + 0x8dd9) != '\0') && (bVar15 = false, iVar19 != 0)) {
    bVar15 = *(int *)(param_1 + 0x8dd4) == iVar19;
  }
  *(bool *)(param_1 + 0x1d98) = bVar15;
  *(undefined1 *)(param_1 + 0x1d99) = *(undefined1 *)(param_1 + 0x8dd8);
  *(undefined1 *)(param_1 + 0x1d9a) = *(undefined1 *)(param_1 + 0x8dcd);
  if (cVar42 == '\0') {
    iStack_aec = -0x80000000;
  }
  *(int *)(param_1 + 0x1d9c) = iStack_aec;
  *(uint *)(param_1 + 0x1da0) = uStack_ad8;
  *(undefined1 *)(param_1 + 0x1dac) = *(undefined1 *)(param_1 + 0x8f5c);
  *(undefined4 *)(param_1 + 0x1da8) = *(undefined4 *)(param_1 + 0x8f58);
  *(undefined1 *)(param_1 + 0x1dad) = *(undefined1 *)(param_1 + 0x8f4f);
  *(char *)(param_1 + 0x1daf) = cVar1;
  *(undefined4 *)(param_1 + 0x1da4) = *(undefined4 *)(param_1 + 0x8f54);
  *(undefined1 *)(param_1 + 0x1dae) = *(undefined1 *)(param_1 + 0x8f4c);
  uVar20 = 0;
  *(char *)(param_1 + 0x1db0) = *(char *)(param_1 + 0x8f94);
  if (*(char *)(param_1 + 0x8f94) != '\0') {
    uVar20 = *(int *)(param_1 + 0x8f98) - param_3 &
             (int)(param_3 - *(int *)(param_1 + 0x8f98)) >> 0x1f;
  }
  *(uint *)(param_1 + 0x1db4) = uVar20;
  *(undefined2 *)(param_1 + 0x1db8) = *(undefined2 *)(param_1 + 0x87dc);
  *(undefined1 *)(param_1 + 0x1dba) = *(undefined1 *)(param_1 + 0x87df);
  *(undefined4 *)(param_1 + 0x1dbc) = *(undefined4 *)(param_1 + 0x87e0);
  *(undefined4 *)(param_1 + 0x1dc0) = *(undefined4 *)(param_1 + 0x8814);
  *(undefined4 *)(param_1 + 0x1dc4) = *(undefined4 *)(param_1 + 0x8818);
  *(undefined4 *)(param_1 + 0x1dc8) = *(undefined4 *)(param_1 + 0x881c);
  *(undefined4 *)(param_1 + 0x1dcc) = *(undefined4 *)(param_1 + 0x911c);
  *(undefined4 *)(param_1 + 0x1dd0) = *(undefined4 *)(param_1 + 0x9118);
  *(undefined4 *)(param_1 + 0x1dd4) = uVar22;
  *(int *)(param_1 + 0x1ddc) = iStack_ae0;
  *(int *)(param_1 + 0x1dd8) = iStack_ae4;
  if (bVar16) {
    uVar9 = 0;
    if (cStack_87f != '\0') {
      uVar9 = uStack_87e;
    }
    *(undefined1 *)(param_1 + 0x1de0) = uVar9;
    *(byte *)(param_1 + 0x1de1) = bVar25;
    *(byte *)(param_1 + 0x1de2) = bVar26;
    *(char *)(param_1 + 0x1de3) = cVar2;
    uVar9 = FUN_ram_48045922(param_1 + 0x1e08,4,0);
    cVar21 = param_2[1];
  }
  else {
    *(undefined1 *)(param_1 + 0x1de0) = 0;
    *(byte *)(param_1 + 0x1de1) = bVar25;
    *(byte *)(param_1 + 0x1de2) = bVar26;
    *(char *)(param_1 + 0x1de3) = cVar2;
    uVar9 = 0;
  }
  *(char *)(param_1 + 0x1de5) = cVar3;
  *(undefined1 *)(param_1 + 0x1de4) = uVar9;
  *(char *)(param_1 + 0x1de6) = cVar4;
  if (cVar21 != '\f') goto LAB_ram_4805b726;
  FUN_ram_48056082(&local_6a0,param_1 + 0x8e78,param_3);
  *(undefined4 *)(param_1 + 0x1dd0) = *(undefined4 *)(param_1 + 0x9128);
  *(undefined4 *)(param_1 + 0x1dd4) = auStack_69c[5];
  if (cStack_69f == '\0') {
    *(undefined1 *)(param_1 + 0x1de0) = 0;
    *(char *)(param_1 + 0x1de3) = local_6a0;
LAB_ram_4805c270:
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (cStack_683 != '\0') {
      uVar9 = uStack_682;
    }
    *(char *)(param_1 + 0x1de3) = local_6a0;
    *(undefined1 *)(param_1 + 0x1de0) = uVar9;
    iVar19 = FUN_ram_48045922(param_1 + 0x1e08,1,0);
    if (iVar19 == 0) goto LAB_ram_4805c270;
    uVar9 = FUN_ram_48045922(param_1 + 0x1e08,2,0);
  }
  *(undefined1 *)(param_1 + 0x1de4) = uVar9;
LAB_ram_4805b726:
  bVar16 = false;
  if (*(char *)(param_1 + 0x9140) != '\0') {
    bVar16 = false;
    if (*(int *)(param_1 + 0x9144) != 0) {
      bVar16 = param_3 - *(int *)(param_1 + 0x9144) < 0x5dd;
    }
  }
  *(bool *)(param_1 + 0x1de7) = bVar16;
  bVar16 = false;
  if (*(char *)(param_1 + 0x9141) != '\0') {
    bVar16 = false;
    if (*(int *)(param_1 + 0x9148) != 0) {
      bVar16 = param_3 - *(int *)(param_1 + 0x9148) < 0x5dd;
    }
  }
  *(bool *)(param_1 + 0x1de8) = bVar16;
  *(undefined1 *)(param_1 + 0x1de9) = *(undefined1 *)(param_1 + 0x9200);
  *(undefined1 *)(param_1 + 0x1dea) = *(undefined1 *)(param_1 + 0x91dc);
  *(undefined4 *)(param_1 + 0x1dec) = *(undefined4 *)(param_1 + 0x9274);
  *(undefined2 *)(param_1 + 0x1df0) = *(undefined2 *)(param_1 + 0x9278);
  *(undefined4 *)(param_1 + 0x1df8) = *(undefined4 *)(param_1 + 0x9280);
  *(undefined4 *)(param_1 + 0x1df4) = *(undefined4 *)(param_1 + 0x927c);
  FUN_ram_4ff3ec14(iVar39,0xffffffff);
  *(undefined4 *)(param_1 + 0x136c) = *(undefined4 *)(param_1 + 0x19e0);
  *(undefined4 *)(param_1 + 0x166c) = *(undefined4 *)(param_1 + 0x19e4);
  *(undefined4 *)(param_1 + 0x1670) = *(undefined4 *)(param_1 + 0x19e8);
  *(undefined4 *)(param_1 + 0x1674) = *(undefined4 *)(param_1 + 0x19ec);
  *(undefined4 *)(param_1 + 0x1678) = *(undefined4 *)(param_1 + 0x19f0);
  *(undefined4 *)(param_1 + 0x167c) = *(undefined4 *)(param_1 + 0x19f4);
  FUN_ram_4ff45158(param_1 + 0x1680,param_1 + 0x19f8,0x12);
  *(undefined4 *)(param_1 + 0x16c0) = *(undefined4 *)(param_1 + 0x1a2c);
  *(undefined4 *)(param_1 + 0x16a0) = *(undefined4 *)(param_1 + 0x1a0c);
  *(undefined4 *)(param_1 + 0x16a4) = *(undefined4 *)(param_1 + 0x1a10);
  *(undefined4 *)(param_1 + 0x16a8) = *(undefined4 *)(param_1 + 0x1a14);
  *(undefined4 *)(param_1 + 0x16ac) = *(undefined4 *)(param_1 + 0x1a18);
  *(undefined4 *)(param_1 + 0x16b0) = *(undefined4 *)(param_1 + 0x1a1c);
  *(undefined4 *)(param_1 + 0x16b4) = *(undefined4 *)(param_1 + 0x1a20);
  *(undefined4 *)(param_1 + 0x16b8) = *(undefined4 *)(param_1 + 0x1a24);
  *(undefined4 *)(param_1 + 0x16bc) = *(undefined4 *)(param_1 + 0x1a28);
  puVar24 = (undefined4 *)(param_1 + 0x1a30);
  puVar38 = (undefined4 *)(param_1 + 0x16c4);
  do {
    puVar28 = puVar38;
    puVar23 = puVar24;
    uVar22 = puVar23[1];
    uVar41 = puVar23[2];
    uVar37 = puVar23[3];
    uVar43 = puVar23[4];
    *puVar28 = *puVar23;
    puVar28[1] = uVar22;
    puVar28[2] = uVar41;
    puVar28[3] = uVar37;
    puVar28[4] = uVar43;
    puVar24 = puVar23 + 5;
    puVar38 = puVar28 + 5;
  } while (puVar24 != (undefined4 *)(param_1 + 0x1a94));
  uVar22 = puVar23[6];
  puVar28[5] = *puVar24;
  puVar28[6] = uVar22;
  *(undefined2 *)(param_1 + 0x1634) = *(undefined2 *)(param_1 + 0x1a9c);
  puVar24 = (undefined4 *)(param_1 + 0x1730);
  *(undefined4 *)(param_1 + 0x1654) = *(undefined4 *)(param_1 + 0x1b10);
  *(undefined4 *)(param_1 + 0x1650) = *(undefined4 *)(param_1 + 0x1b0c);
  puVar38 = (undefined4 *)(param_1 + 0x1b14);
  do {
    uVar43 = puVar38[1];
    uVar22 = puVar38[2];
    uVar41 = puVar38[3];
    uVar37 = puVar38[4];
    *puVar24 = *puVar38;
    puVar24[1] = uVar43;
    puVar24[2] = uVar22;
    puVar24[3] = uVar41;
    puVar24[4] = uVar37;
    puVar38 = puVar38 + 5;
    puVar24 = puVar24 + 5;
  } while (puVar38 != (undefined4 *)(param_1 + 0x1b8c));
  puVar24 = (undefined4 *)(param_1 + 0x1b8c);
  puVar38 = (undefined4 *)(param_1 + 0x17a8);
  do {
    uVar22 = puVar24[1];
    uVar41 = puVar24[2];
    uVar37 = puVar24[3];
    *puVar38 = *puVar24;
    puVar38[1] = uVar22;
    puVar38[2] = uVar41;
    puVar38[3] = uVar37;
    puVar24 = puVar24 + 4;
    puVar38 = puVar38 + 4;
  } while (puVar24 != (undefined4 *)(param_1 + 0x1c6c));
  *puVar38 = *puVar24;
  puVar38 = (undefined4 *)(param_1 + 0x1c70);
  puVar24 = (undefined4 *)(param_1 + 0x1890);
  do {
    uVar22 = puVar38[1];
    uVar41 = puVar38[2];
    uVar37 = puVar38[3];
    *puVar24 = *puVar38;
    puVar24[1] = uVar22;
    puVar24[2] = uVar41;
    puVar24[3] = uVar37;
    puVar38 = puVar38 + 4;
    puVar24 = puVar24 + 4;
  } while (puVar38 != (undefined4 *)(param_1 + 0x1cc0));
  FUN_ram_4ff45158(param_1 + 0x15a4,param_1 + 0x1cc0,0x3c);
  *(undefined4 *)(param_1 + 0x19c0) = *(undefined4 *)(param_1 + 0x1cfc);
  *(undefined4 *)(param_1 + 0x19c4) = *(undefined4 *)(param_1 + 0x1d00);
  *(undefined2 *)(param_1 + 0x19c8) = *(undefined2 *)(param_1 + 0x1d04);
  *(undefined2 *)(param_1 + 0x19dc) = *(undefined2 *)(param_1 + 0x1d06);
  *(undefined4 *)(param_1 + 0x1698) = *(undefined4 *)(param_1 + 0x1d0c);
  *(undefined4 *)(param_1 + 0x1694) = *(undefined4 *)(param_1 + 0x1d08);
  *(undefined1 *)(param_1 + 0x169c) = *(undefined1 *)(param_1 + 0x1d10);
  *(undefined1 *)(param_1 + 0x143c) = *(undefined1 *)(param_1 + 0x1d11);
  *(undefined1 *)(param_1 + 0x143d) = *(undefined1 *)(param_1 + 0x1d12);
  *(undefined1 *)(param_1 + 0x143e) = *(undefined1 *)(param_1 + 0x1d13);
  *(undefined1 *)(param_1 + 0x143f) = *(undefined1 *)(param_1 + 0x1d14);
  *(undefined1 *)(param_1 + 0x1440) = *(undefined1 *)(param_1 + 0x1d15);
  *(undefined1 *)(param_1 + 0x1441) = *(undefined1 *)(param_1 + 0x1d16);
  *(undefined4 *)(param_1 + 0x1444) = *(undefined4 *)(param_1 + 0x1d18);
  *(undefined2 *)(param_1 + 0x145c) = *(undefined2 *)(param_1 + 0x1d20);
  *(undefined1 *)(param_1 + 0x145e) = *(undefined1 *)(param_1 + 0x1d22);
  *(undefined4 *)(param_1 + 0x1464) = *(undefined4 *)(param_1 + 0x1d28);
  *(undefined4 *)(param_1 + 0x1468) = *(undefined4 *)(param_1 + 0x1d2c);
  *(undefined4 *)(param_1 + 0x1460) = *(undefined4 *)(param_1 + 0x1d24);
  *(undefined4 *)(param_1 + 0x146c) = *(undefined4 *)(param_1 + 0x1d30);
  *(undefined4 *)(param_1 + 0x1470) = *(undefined4 *)(param_1 + 0x1d34);
  *(undefined4 *)(param_1 + 0x144c) = *(undefined4 *)(param_1 + 0x1d1c);
  *(undefined4 *)(param_1 + 0x1474) = *(undefined4 *)(param_1 + 0x1d38);
  *(undefined4 *)(param_1 + 0x147c) = *(undefined4 *)(param_1 + 0x1d40);
  *(undefined4 *)(param_1 + 0x1480) = *(undefined4 *)(param_1 + 0x1d44);
  *(undefined4 *)(param_1 + 0x1478) = *(undefined4 *)(param_1 + 0x1d3c);
  *(undefined4 *)(param_1 + 0x1484) = *(undefined4 *)(param_1 + 0x1d48);
  *(undefined4 *)(param_1 + 0x1488) = *(undefined4 *)(param_1 + 0x1d4c);
  *(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_1 + 0x1d50);
  *(undefined1 *)(param_1 + 0x1957) = *(undefined1 *)(param_1 + 0x1d54);
  *(undefined1 *)(param_1 + 0x1958) = *(undefined1 *)(param_1 + 0x1d55);
  *(undefined1 *)(param_1 + 0x1959) = *(undefined1 *)(param_1 + 0x1d56);
  *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_1 + 0x1d5c);
  *(undefined4 *)(param_1 + 0x195c) = *(undefined4 *)(param_1 + 0x1d58);
  *(undefined4 *)(param_1 + 0x1964) = *(undefined4 *)(param_1 + 0x1d60);
  *(undefined4 *)(param_1 + 0x1968) = *(undefined4 *)(param_1 + 0x1d64);
  *(undefined2 *)(param_1 + 0x196c) = *(undefined2 *)(param_1 + 0x1d68);
  *(undefined4 *)(param_1 + 0x1970) = *(undefined4 *)(param_1 + 0x1d6c);
  *(undefined4 *)(param_1 + 0x1978) = *(undefined4 *)(param_1 + 0x1d74);
  *(undefined1 *)(param_1 + 0x197c) = *(undefined1 *)(param_1 + 0x1d78);
  *(undefined4 *)(param_1 + 0x1980) = *(undefined4 *)(param_1 + 0x1d7c);
  *(undefined4 *)(param_1 + 0x1984) = *(undefined4 *)(param_1 + 0x1d80);
  *(undefined4 *)(param_1 + 0x1988) = *(undefined4 *)(param_1 + 0x1d84);
  *(undefined4 *)(param_1 + 0x198c) = *(undefined4 *)(param_1 + 0x1d88);
  *(undefined4 *)(param_1 + 0x1990) = *(undefined4 *)(param_1 + 0x1d8c);
  *(undefined2 *)(param_1 + 0x1994) = *(undefined2 *)(param_1 + 0x1d90);
  *(undefined1 *)(param_1 + 0x1996) = *(undefined1 *)(param_1 + 0x1d92);
  *(undefined4 *)(param_1 + 0x1974) = *(undefined4 *)(param_1 + 0x1d70);
  *(undefined4 *)(param_1 + 0x1998) = *(undefined4 *)(param_1 + 0x1d94);
  *(undefined1 *)(param_1 + 0x199e) = *(undefined1 *)(param_1 + 0x1d9a);
  *(undefined2 *)(param_1 + 0x199c) = *(undefined2 *)(param_1 + 0x1d98);
  *(undefined4 *)(param_1 + 0x19a0) = *(undefined4 *)(param_1 + 0x1d9c);
  *(undefined4 *)(param_1 + 0x19a4) = *(undefined4 *)(param_1 + 0x1da0);
  *(undefined4 *)(param_1 + 0x19ac) = *(undefined4 *)(param_1 + 0x1da8);
  *(undefined4 *)(param_1 + 0x19b0) = *(undefined4 *)(param_1 + 0x1dac);
  *(undefined1 *)(param_1 + 0x19b4) = *(undefined1 *)(param_1 + 0x1db0);
  *(undefined4 *)(param_1 + 0x19b8) = *(undefined4 *)(param_1 + 0x1db4);
  *(undefined4 *)(param_1 + 0x19a8) = *(undefined4 *)(param_1 + 0x1da4);
  *(undefined2 *)(param_1 + 0x1658) = *(undefined2 *)(param_1 + 0x1db8);
  *(undefined1 *)(param_1 + 0x165a) = *(undefined1 *)(param_1 + 0x1dba);
  *(undefined4 *)(param_1 + 0x165c) = *(undefined4 *)(param_1 + 0x1dbc);
  *(undefined4 *)(param_1 + 0x1664) = *(undefined4 *)(param_1 + 0x1dc4);
  *(undefined4 *)(param_1 + 0x1668) = *(undefined4 *)(param_1 + 0x1dc8);
  *(undefined4 *)(param_1 + 0x1660) = *(undefined4 *)(param_1 + 0x1dc0);
  *(undefined4 *)(param_1 + 0x1940) = *(undefined4 *)(param_1 + 0x1dd0);
  *(undefined4 *)(param_1 + 0x193c) = *(undefined4 *)(param_1 + 0x1dcc);
  *(undefined4 *)(param_1 + 0x1944) = *(undefined4 *)(param_1 + 0x1dd4);
  *(undefined4 *)(param_1 + 0x1948) = *(undefined4 *)(param_1 + 0x1dd8);
  *(undefined4 *)(param_1 + 0x194c) = *(undefined4 *)(param_1 + 0x1ddc);
  *(undefined4 *)(param_1 + 0x1950) = *(undefined4 *)(param_1 + 0x1de0);
  *(undefined2 *)(param_1 + 0x1954) = *(undefined2 *)(param_1 + 0x1de4);
  *(undefined1 *)(param_1 + 0x1956) = *(undefined1 *)(param_1 + 0x1de6);
  *(undefined1 *)(param_1 + 0x19be) = *(undefined1 *)(param_1 + 0x1de7);
  *(undefined1 *)(param_1 + 0x19bf) = *(undefined1 *)(param_1 + 0x1de8);
  *(undefined1 *)(param_1 + 0x19ca) = *(undefined1 *)(param_1 + 0x1de9);
  *(undefined1 *)(param_1 + 0x19cb) = *(undefined1 *)(param_1 + 0x1dea);
  *(undefined4 *)(param_1 + 0x19cc) = *(undefined4 *)(param_1 + 0x1dec);
  *(undefined2 *)(param_1 + 0x19d0) = *(undefined2 *)(param_1 + 0x1df0);
  *(undefined4 *)(param_1 + 0x19d4) = *(undefined4 *)(param_1 + 0x1df4);
  *(undefined4 *)(param_1 + 0x19d8) = *(undefined4 *)(param_1 + 0x1df8);
  if (bVar5) {
    FUN_ram_4ff45158(param_1 + 0x15e0,param_1 + 0x1aa0,0x54);
    *(undefined4 *)(param_1 + 0x163c) = *(undefined4 *)(param_1 + 0x1af8);
    *(undefined4 *)(param_1 + 0x1640) = *(undefined4 *)(param_1 + 0x1afc);
    *(undefined4 *)(param_1 + 0x1638) = *(undefined4 *)(param_1 + 0x1af4);
    *(undefined4 *)(param_1 + 0x1644) = *(undefined4 *)(param_1 + 0x1b00);
    *(undefined4 *)(param_1 + 0x1648) = *(undefined4 *)(param_1 + 0x1b04);
    *(undefined4 *)(param_1 + 0x164c) = *(undefined4 *)(param_1 + 0x1b08);
  }
  FUN_ram_4ff3ee10(iVar39);
  return;
}


