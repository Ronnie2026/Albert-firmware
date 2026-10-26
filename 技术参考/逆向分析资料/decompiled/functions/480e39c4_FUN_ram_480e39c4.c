/* Firmware entry: 0x480e39c4 */

/* WARNING: Removing unreachable block (ram,0x480e3d62) */

undefined4 FUN_ram_480e39c4(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  int *piVar15;
  int iVar16;
  uint *puVar17;
  byte bVar18;
  undefined *puVar19;
  undefined2 uVar20;
  uint *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  uint *puVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  char cVar28;
  char cVar29;
  uint *puVar30;
  char *pcStack_2a4;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 auStack_238 [4];
  uint auStack_234 [25];
  uint local_1d0 [25];
  undefined4 local_16c;
  uint uStack_168;
  char cStack_162;
  uint uStack_164;
  char cStack_161;
  undefined4 uStack_160;
  uint local_15c [4];
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  uint uStack_140;
  uint uStack_13c;
  char acStack_10c [4];
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  char cStack_e4;
  char cStack_e3;
  char cStack_e2;
  char cStack_dd;
  uint uStack_dc;
  uint uStack_d8;
  char cStack_d4;
  uint local_a4 [28];
  ushort *puVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  if (DAT_ram_4ff6df90 != '\0') {
    *(undefined1 *)((int)param_2 + 10) = 0;
  }
  cVar11 = *(char *)((int)param_2 + 1);
  if (cVar11 == '\f') {
    FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
    cVar28 = *(char *)(param_1 + 0xb39);
    FUN_ram_4ff3ee10(param_1 + 0xb18);
    if (cVar28 == '\f') {
      FUN_ram_48047848(param_1 + 0x2878);
      FUN_ram_480dcc76(param_1 + 0x2870);
      *(undefined1 *)((int)param_2 + 0x8b) = 0;
      uVar6 = (ushort)param_2[0x24];
      if (10000 < (ushort)param_2[0x24]) {
        uVar6 = 10000;
      }
      puVar19 = *(undefined **)((int)param_2 + 0x92);
      if (puVar19 < &pmpaddr56) {
        puVar19 = &pmpaddr56;
      }
      if (60000 < puVar19) {
        puVar19 = (undefined *)0xea60;
      }
      cVar11 = '\f';
    }
    else {
      FUN_ram_48051e92(&uStack_298,0xc);
      FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
      puVar24 = (uint *)(param_1 + 0x9520);
      puVar21 = &local_16c;
      do {
        uVar26 = puVar24[1];
        uVar14 = puVar24[2];
        uVar22 = puVar24[3];
        uVar10 = puVar24[4];
        *puVar21 = *puVar24;
        puVar21[1] = uVar26;
        puVar21[2] = uVar14;
        puVar21[3] = uVar22;
        puVar21[4] = uVar10;
        puVar24 = puVar24 + 5;
        puVar21 = puVar21 + 5;
      } while (puVar24 != (uint *)(param_1 + 0x964c));
      FUN_ram_4ff3ee10(param_1 + 0xb30);
      pcStack_2a4 = &DAT_ram_4ff47e48;
      do {
        cVar28 = *pcStack_2a4;
        puVar21 = &local_16c;
        if (cVar28 == '\x01') {
LAB_ram_480e4c28:
          if ((byte)puVar21[0x18] != 0) {
            puVar24 = puVar21 + (byte)puVar21[0x18];
            do {
              puVar30 = &uStack_298;
              if ((cVar28 != '\x01') && (puVar30 = (uint *)(auStack_238 + 0x68), cVar28 == '\x02'))
              {
                puVar30 = (uint *)(auStack_238 + 4);
              }
              bVar12 = (byte)puVar30[0x18];
              uVar14 = (uint)bVar12;
              uVar22 = *puVar21 & 0x7ff;
              if (uVar14 == 0) {
                cVar29 = '\x01';
                uVar10 = 0;
              }
              else {
                uVar10 = 0;
                puVar17 = puVar30;
                do {
                  uVar26 = *puVar17;
                  puVar17 = puVar17 + 1;
                  if (uVar22 <= uVar26) {
                    if (uVar10 < uVar14) {
                      if (uVar22 == puVar30[uVar10]) goto LAB_ram_480e4cce;
                      if (0x17 < uVar14) {
                        return 0;
                      }
                      uVar26 = uVar14 - uVar10 & 0xff;
                      iVar25 = -(uVar26 - 1 & 0xff);
                      cVar29 = bVar12 + 1;
                      FUN_ram_4ff4522c(puVar30 + iVar25 + uVar14,puVar30 + (uVar14 - 1) + iVar25,
                                       uVar26 << 2);
                      goto LAB_ram_480e4cc0;
                    }
                    break;
                  }
                  uVar10 = uVar10 + 1 & 0xff;
                } while (uVar10 != uVar14);
                if (0x17 < uVar14) {
                  return 0;
                }
                cVar29 = bVar12 + 1;
              }
LAB_ram_480e4cc0:
              puVar30[uVar10] = uVar22;
              *(char *)(puVar30 + 0x18) = cVar29;
LAB_ram_480e4cce:
              puVar21 = puVar21 + 1;
            } while (puVar24 != puVar21);
          }
        }
        else {
          if (cVar28 == '\x02') {
            puVar21 = (uint *)(acStack_10c + 4);
            goto LAB_ram_480e4c28;
          }
          if (cVar28 == '\x04') {
            puVar21 = local_a4;
            goto LAB_ram_480e4c28;
          }
        }
        pcStack_2a4 = pcStack_2a4 + 1;
      } while (pcStack_2a4 != &DAT_ram_4ff47e4b);
      FUN_ram_48047848(param_1 + 0x2878);
      FUN_ram_480dcc76(param_1 + 0x2870);
      *(undefined1 *)((int)param_2 + 0x8b) = 0;
      uVar6 = (ushort)param_2[0x24];
      if (10000 < (ushort)param_2[0x24]) {
        uVar6 = 10000;
      }
      puVar19 = *(undefined **)((int)param_2 + 0x92);
      if (puVar19 < &pmpaddr56) {
        puVar19 = &pmpaddr56;
      }
      if (60000 < puVar19) {
        puVar19 = (undefined *)0xea60;
      }
    }
  }
  else {
    FUN_ram_48047848(param_1 + 0x2878);
    FUN_ram_480dcc76(param_1 + 0x2870);
    uVar13 = (ushort)param_2[0x24];
    *(undefined1 *)((int)param_2 + 0x8b) = 0;
    uVar6 = 10000;
    if (uVar13 < 0x2711) {
      puVar19 = *(undefined **)((int)param_2 + 0x92);
      uVar6 = uVar13;
      if (puVar19 < &pmpaddr56) goto LAB_ram_480e3d52;
LAB_ram_480e3a54:
      if (60000 < puVar19) {
        puVar19 = (undefined *)0xea60;
      }
    }
    else {
      puVar19 = *(undefined **)((int)param_2 + 0x92);
      if (&pmpaddr55 < puVar19) goto LAB_ram_480e3a54;
LAB_ram_480e3d52:
      puVar19 = &pmpaddr56;
    }
    if (cVar11 != '\x0e') {
      cVar11 = '\r';
    }
  }
  bVar12 = *(byte *)((int)param_2 + 0x2d);
  *(undefined **)((int)param_2 + 0x92) = puVar19;
  *(undefined1 *)((int)param_2 + 0x8a) = 1;
  *(ushort *)(param_2 + 0x24) = uVar6;
  *(char *)((int)param_2 + 1) = cVar11;
  if (10 < bVar12) {
    bVar12 = 10;
  }
  if (bVar12 < 3) {
    bVar12 = 3;
  }
  uVar6 = *(ushort *)((int)param_2 + 6);
  *(byte *)((int)param_2 + 0x2d) = bVar12;
  if (uVar6 == 0) {
    uVar6 = 1;
  }
  if (0x78 < uVar6) {
    uVar6 = 0x78;
  }
  bVar12 = *(byte *)((int)param_2 + 9);
  *(ushort *)((int)param_2 + 6) = uVar6;
  if (10 < bVar12) {
    bVar12 = 10;
  }
  if (bVar12 == 0) {
    bVar12 = 1;
  }
  *(byte *)((int)param_2 + 9) = bVar12;
  bVar12 = *(byte *)((int)param_2 + 0x95) & 3;
  if ((*(byte *)((int)param_2 + 0x95) & 3) == 0) {
    bVar12 = 1;
  }
  bVar18 = *(byte *)((int)param_2 + 0x13);
  *(byte *)((int)param_2 + 0x95) = bVar12;
  if (bVar18 == 3) {
    bVar18 = 2;
  }
  else if (2 < bVar18) {
    bVar18 = 1;
  }
  bVar12 = *(byte *)((int)param_2 + 0x26);
  *(byte *)((int)param_2 + 0x13) = bVar18;
  if (4 < bVar12) {
    bVar12 = 2;
  }
  local_15c[2] = param_2[0x13];
  local_15c[3] = param_2[0x14];
  uStack_14c = param_2[0x15];
  *(byte *)((int)param_2 + 0x26) = bVar12;
  local_16c = param_2[0xd];
  uStack_168 = param_2[0xe];
  uStack_164 = param_2[0xf];
  uStack_160 = param_2[0x10];
  local_15c[0] = param_2[0x11];
  local_15c[1] = param_2[0x12];
  uStack_148 = param_2[0x16];
  uStack_144 = CONCAT22(uStack_144._2_2_,(short)param_2[0x17]);
  puVar7 = (ushort *)&local_16c;
  do {
    puVar8 = puVar7 + 7;
    do {
      uVar6 = *puVar7;
      if (0xff < uVar6) {
        uVar6 = 0xff;
      }
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    puVar7 = puVar8;
  } while (puVar8 != (ushort *)((int)&uStack_144 + 2));
  param_2[0x13] = local_15c[2];
  param_2[0x14] = local_15c[3];
  *(undefined2 *)(param_2 + 0x17) = (undefined2)uStack_144;
  param_2[0xd] = local_16c;
  param_2[0xe] = uStack_168;
  param_2[0xf] = uStack_164;
  param_2[0x10] = uStack_160;
  param_2[0x11] = local_15c[0];
  param_2[0x12] = local_15c[1];
  param_2[0x15] = uStack_14c;
  param_2[0x16] = uStack_148;
  puVar21 = param_2;
  do {
    uVar6 = (ushort)puVar21[5];
    if (0xff < uVar6) {
      uVar6 = 0xff;
    }
    *(ushort *)(puVar21 + 5) = uVar6;
    puVar21 = (uint *)((int)puVar21 + 2);
  } while ((uint *)((int)param_2 + 0xe) != puVar21);
  uVar6 = *(ushort *)((int)param_2 + 0x5e);
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  uVar13 = (ushort)param_2[0x18];
  *(ushort *)((int)param_2 + 0x5e) = uVar6;
  if (0xff < uVar13) {
    uVar13 = 0xff;
  }
  uVar6 = *(ushort *)((int)param_2 + 0x62);
  *(ushort *)(param_2 + 0x18) = uVar13;
  if (0xff < uVar6) {
    uVar6 = 0xff;
  }
  uVar13 = *(ushort *)((int)param_2 + 0x22);
  *(ushort *)((int)param_2 + 0x62) = uVar6;
  if (0xff < uVar13) {
    uVar13 = 0xff;
  }
  bVar12 = *(byte *)((int)param_2 + 0x11);
  *(ushort *)((int)param_2 + 0x22) = uVar13;
  if (0xf0 < bVar12) {
    bVar12 = 0xf0;
  }
  bVar18 = (byte)param_2[0x27];
  *(byte *)((int)param_2 + 0x11) = bVar12;
  if (0x3c < bVar18) {
    bVar18 = 0x3c;
  }
  bVar12 = *(byte *)((int)param_2 + 0x9d);
  *(byte *)(param_2 + 0x27) = bVar18;
  if (0x3c < bVar12) {
    bVar12 = 0x3c;
  }
  bVar18 = *(byte *)((int)param_2 + 0xf);
  *(byte *)((int)param_2 + 0x9d) = bVar12;
  if (0x14 < bVar18) {
    bVar18 = 0x14;
  }
  *(byte *)((int)param_2 + 0xf) = bVar18;
  if (9 < (byte)((char)param_2[4] - 1U)) {
    *(undefined1 *)(param_2 + 4) = 1;
  }
  bVar12 = (byte)param_2[9];
  *(undefined2 *)((int)param_2 + 0xa2) = 500;
  if (0xf0 < bVar12) {
    bVar12 = 0xf0;
  }
  *(byte *)(param_2 + 9) = bVar12 & 0xfc;
  *(bool *)((int)param_2 + 0x2e) = *(char *)((int)param_2 + 0x2e) == '\x01';
  puVar19 = *(undefined **)(param_2 + 0xc);
  if (10000 < *(undefined **)(param_2 + 0xc)) {
    puVar19 = (undefined *)0x2710;
  }
  if (puVar19 < &pmpaddr56) {
    puVar19 = &pmpaddr56;
  }
  uVar14 = (uint)*(ushort *)((int)param_2 + 0x32);
  uVar22 = (ZEXT24((undefined *)((short)puVar19 + 0x32)) / 100) * 0x640000;
  uVar20 = (undefined2)(uVar22 >> 0x10);
  *(undefined2 *)(param_2 + 0xc) = uVar20;
  if (uVar14 < 1000) {
    uVar14 = 1000;
LAB_ram_480e3d82:
    *(short *)((int)param_2 + 0x32) = (short)uVar14;
    if (uVar14 < uVar22 >> 0x10) {
      *(short *)(param_2 + 0xc) = (short)uVar14;
      *(undefined2 *)((int)param_2 + 0x32) = uVar20;
    }
  }
  else {
    if (uVar14 < 0x2711) {
      uVar14 = ((uVar14 + 0x32) / 100) * 0x640000 >> 0x10;
      goto LAB_ram_480e3d82;
    }
    *(undefined2 *)((int)param_2 + 0x32) = 10000;
  }
  uVar6 = *(ushort *)((int)param_2 + 0x6a);
  uVar13 = 100;
  if ((uVar6 < 0x65) && (uVar13 = uVar6, uVar6 == 0)) {
    uVar13 = 1;
  }
  uVar6 = (ushort)param_2[0x1b];
  if (0x14 < uVar6) {
    uVar6 = 0x14;
  }
  cVar28 = *(char *)((int)param_2 + 0x65);
  bVar12 = *(byte *)((int)param_2 + 0x77);
  *(ushort *)((int)param_2 + 0x6a) = uVar13;
  *(ushort *)(param_2 + 0x1b) = uVar6;
  local_16c._0_2_ = CONCAT11(*(undefined1 *)((int)param_2 + 0x69),cVar28);
  *(undefined1 *)((int)param_2 + 0x69) = *(undefined1 *)((int)param_2 + 0x69);
  *(undefined2 *)((int)param_2 + 0x66) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(char *)((int)param_2 + 0x65) = cVar28;
  if (8 < bVar12) {
    bVar12 = 8;
  }
  bVar18 = *(byte *)((int)param_2 + 0x7b);
  *(byte *)((int)param_2 + 0x77) = bVar12;
  if (4 < bVar18) {
    bVar18 = 0;
  }
  bVar12 = (byte)param_2[0x1f];
  *(byte *)((int)param_2 + 0x7b) = bVar18;
  if (4 < bVar12) {
    bVar12 = 0;
  }
  bVar18 = *(byte *)((int)param_2 + 0x7d);
  *(byte *)(param_2 + 0x1f) = bVar12;
  if (4 < bVar18) {
    bVar18 = 0;
  }
  bVar12 = *(byte *)((int)param_2 + 0x7e);
  *(byte *)((int)param_2 + 0x7d) = bVar18;
  if (4 < bVar12) {
    bVar12 = 0;
  }
  uVar13 = (ushort)param_2[0x20];
  *(byte *)((int)param_2 + 0x7e) = bVar12;
  if (uVar13 < 100) {
    uVar13 = 100;
  }
  if (5000 < uVar13) {
    uVar13 = 5000;
  }
  *(ushort *)(param_2 + 0x20) = uVar13;
  uVar13 = *(ushort *)((int)param_2 + 0x82);
  if (0xe10 < *(ushort *)((int)param_2 + 0x82)) {
    uVar13 = 0xe10;
  }
  if (uVar13 < 10) {
    uVar13 = 10;
  }
  *(ushort *)((int)param_2 + 0x82) = uVar13;
  uVar13 = (ushort)param_2[0x21];
  if (0xe10 < (ushort)param_2[0x21]) {
    uVar13 = 0xe10;
  }
  if (uVar13 < 10) {
    uVar13 = 10;
  }
  *(ushort *)(param_2 + 0x21) = uVar13;
  uVar13 = *(ushort *)((int)param_2 + 0x86);
  if (0xe10 < *(ushort *)((int)param_2 + 0x86)) {
    uVar13 = 0xe10;
  }
  if (uVar13 < 10) {
    uVar13 = 10;
  }
  *(ushort *)((int)param_2 + 0x86) = uVar13;
  *(undefined1 *)((int)param_2 + 0x6f) = 2;
  if (*(char *)((int)param_2 + 0x76) == '\0') {
    *(undefined1 *)(param_2 + 0x1e) = 0;
  }
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar23 = (undefined4 *)(param_1 + 0xb38);
  puVar7 = (ushort *)&local_16c;
  do {
    uVar4 = puVar23[1];
    uVar5 = puVar23[2];
    uVar9 = puVar23[3];
    *(undefined4 *)puVar7 = *puVar23;
    *(undefined4 *)(puVar7 + 2) = uVar4;
    *(undefined4 *)(puVar7 + 4) = uVar5;
    *(undefined4 *)(puVar7 + 6) = uVar9;
    puVar23 = puVar23 + 4;
    puVar7 = puVar7 + 8;
  } while (puVar23 != (undefined4 *)(param_1 + 0xbd8));
  *(undefined4 *)puVar7 = *puVar23;
  puVar24 = (uint *)(param_1 + 0xb38);
  puVar21 = param_2;
  do {
    uVar14 = puVar21[1];
    uVar22 = puVar21[2];
    uVar10 = puVar21[3];
    *puVar24 = *puVar21;
    puVar24[1] = uVar14;
    puVar24[2] = uVar22;
    puVar24[3] = uVar10;
    puVar21 = puVar21 + 4;
    puVar24 = puVar24 + 4;
  } while (puVar21 != param_2 + 0x28);
  *puVar24 = *puVar21;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  cVar29 = *(char *)((int)param_2 + 0x27);
  if ((((local_16c._1_1_ != cVar11) || (uStack_148._3_1_ != cVar29)) || (cStack_e2 == '\0')) ||
     ((cStack_d4 != (char)param_2[0x26] || (((uStack_144 ^ param_2[10]) & 0xffffff) != 0)))) {
    piVar15 = (int *)(param_1 + 0x5c4);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x7d4) != piVar15);
  }
  uVar14 = (local_16c ^ *param_2) & 0xffff;
  if (((uVar14 != 0) || (cStack_dd != *(char *)((int)param_2 + 0x8f))) ||
     (uStack_dc != param_2[0x24])) {
    piVar15 = (int *)(param_1 + 0x63c);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x84c) != piVar15);
  }
  if (((((local_16c._1_1_ != cVar11) || (0xff < (uStack_fc ^ param_2[0x1c]))) ||
       (uStack_f8 != param_2[0x1d])) ||
      ((uStack_f4 != param_2[0x1e] || (((uStack_f0 ^ param_2[0x1f]) & 0xffff) != 0)))) ||
     ((((uStack_f0._2_1_ != bVar12 || ((uStack_ec != param_2[0x20] || (uStack_e8 != param_2[0x21])))
        ) || (cStack_e4 != (char)param_2[0x22])) || ((uStack_164 & 0xff) != (uint)(byte)param_2[2]))
     )) {
    piVar15 = (int *)(param_1 + 0x5f4);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while (piVar15 != (int *)(param_1 + 0x804));
  }
  if (0xffff < (uStack_100 ^ param_2[0x1b])) {
    piVar15 = (int *)(param_1 + 0x60c);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x81c) != piVar15);
  }
  if (cStack_e3 != *(char *)((int)param_2 + 0x89)) {
    piVar15 = (int *)(param_1 + 0x5e4);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x7f4) != piVar15);
  }
  if (uStack_148._3_1_ != cVar29) {
    piVar15 = (int *)(param_1 + 0x5dc);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x7ec) != piVar15);
  }
  cVar2 = *(char *)((int)param_2 + 2);
  if ((((local_16c._2_1_ != cVar2) || (cStack_d4 != (char)param_2[0x26])) ||
      (local_16c._3_1_ != *(char *)((int)param_2 + 3))) ||
     (((((uStack_168 ^ param_2[1]) & 0xffff00ff) != 0 || uVar14 != 0) || uStack_d8 != param_2[0x25])
      || ((uStack_164 ^ param_2[2]) & 0xffff) != 0)) {
    piVar15 = (int *)(param_1 + 0x5fc);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while (piVar15 != (int *)(param_1 + 0x80c));
  }
  if (((local_16c._1_1_ != cVar11) || (uStack_108._1_1_ != cVar28)) ||
     ((0xff < (uStack_104 ^ param_2[0x1a]) || ((ushort)uStack_100 != uVar6)))) {
    piVar15 = (int *)(param_1 + 0x604);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x814) != piVar15);
  }
  if ((((local_16c._2_1_ != cVar2) || (cStack_d4 != (char)param_2[0x26])) ||
      ((local_16c._3_1_ != *(char *)((int)param_2 + 3) ||
       (((((((((uStack_168 ^ param_2[1]) & 0xffff00ff) != 0 || uVar14 != 0) ||
            uStack_d8 != param_2[0x25]) || ((uStack_164 ^ param_2[2]) & 0xffff) != 0 ||
           (uStack_108._1_1_ != cVar28)) || (0xff < (uStack_104 ^ param_2[0x1a]))) ||
         (((ushort)uStack_100 != uVar6 || (uStack_148._3_1_ != cVar29)))) ||
        ((uStack_fc & 0xff) != (uint)(byte)param_2[0x1c])))))) ||
     ((0xffff < (uStack_140 ^ param_2[0xb]) || (uStack_13c != param_2[0xc])))) {
    piVar15 = (int *)(param_1 + 0x5d4);
    do {
      iVar25 = *piVar15 + 1;
      if (iVar25 == 0) {
        iVar25 = 1;
      }
      *piVar15 = iVar25;
      piVar15 = piVar15 + 0x2c;
    } while ((int *)(param_1 + 0x7e4) != piVar15);
  }
  cVar29 = cStack_162;
  cVar11 = *(char *)((int)param_2 + 10);
  cVar28 = *(char *)((int)param_2 + 0xb);
  if ((cStack_162 == '\0') || (cVar11 != '\0')) {
    if ((cStack_161 != '\0') && (cVar28 == '\0')) {
      FUN_ram_480e2e1e(param_1,1);
    }
    if (((char)uStack_160 != '\0') && ((char)param_2[3] == '\0')) {
      FUN_ram_480e2e1e(param_1,2);
    }
    if ((uStack_160._1_1_ != '\0') && (*(char *)((int)param_2 + 0xd) == '\0'))
    goto LAB_ram_480e40ea;
  }
  else {
    FUN_ram_480e2e1e(param_1,1);
    FUN_ram_480e2e1e(param_1,2);
LAB_ram_480e40ea:
    FUN_ram_480e2e1e(param_1,4);
  }
  iVar25 = param_1 + 0x2864;
  FUN_ram_4ff3ec14(iVar25,0xffffffff);
  *(char *)(param_1 + 0x1e13) = cVar11;
  FUN_ram_4ff3ee10(iVar25);
  FUN_ram_4ff3ec14(iVar25,0xffffffff);
  iVar27 = *(int *)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar25);
  if (iVar27 != 0) {
    uVar14 = (uint)*(byte *)(iVar27 + 0x10);
    iVar16 = (iVar27 + 0x10U & 3) << 3;
    puVar21 = (uint *)(iVar27 + 0x10U & 0xfffffffc);
    if (cVar28 == '\0') {
      do {
        uVar10 = 0xff << iVar16;
        uVar22 = *puVar21;
        if ((uVar22 & uVar10) == (uVar14 << iVar16 & uVar10)) {
          *puVar21 = uVar22 & ~uVar10 | (uVar14 & 0xfffffffe) << iVar16 & uVar10;
        }
        cVar11 = (char)uVar14;
        uVar14 = (int)uVar22 >> iVar16 & 0xff;
      } while ((char)((int)uVar22 >> iVar16) != cVar11);
    }
    else {
      do {
        uVar10 = 0xff << iVar16;
        uVar22 = *puVar21;
        if ((uVar22 & uVar10) == (uVar14 << iVar16 & uVar10)) {
          *puVar21 = uVar22 & ~uVar10 | (uVar14 | 1) << iVar16 & uVar10;
        }
        cVar11 = (char)uVar14;
        uVar14 = (int)uVar22 >> iVar16 & 0xff;
      } while ((char)((int)uVar22 >> iVar16) != cVar11);
    }
  }
  uVar14 = param_2[3];
  FUN_ram_4ff3ec14(iVar25,0xffffffff);
  iVar27 = *(int *)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar25);
  if (iVar27 != 0) {
    uVar22 = (uint)*(byte *)(iVar27 + 0x10);
    iVar16 = (iVar27 + 0x10U & 3) << 3;
    puVar21 = (uint *)(iVar27 + 0x10U & 0xfffffffc);
    if ((char)uVar14 == '\0') {
      do {
        uVar10 = 0xff << iVar16;
        uVar14 = *puVar21;
        if ((uVar14 & uVar10) == (uVar22 << iVar16 & uVar10)) {
          *puVar21 = uVar14 & ~uVar10 | (uVar22 & 0xfffffffd) << iVar16 & uVar10;
        }
        cVar11 = (char)uVar22;
        uVar22 = (int)uVar14 >> iVar16 & 0xff;
      } while ((char)((int)uVar14 >> iVar16) != cVar11);
    }
    else {
      do {
        uVar10 = 0xff << iVar16;
        uVar14 = *puVar21;
        if ((uVar14 & uVar10) == (uVar22 << iVar16 & uVar10)) {
          *puVar21 = uVar14 & ~uVar10 | (uVar22 | 2) << iVar16 & uVar10;
        }
        cVar11 = (char)uVar22;
        uVar22 = (int)uVar14 >> iVar16 & 0xff;
      } while ((char)((int)uVar14 >> iVar16) != cVar11);
    }
  }
  cVar11 = *(char *)((int)param_2 + 0xd);
  FUN_ram_4ff3ec14(iVar25,0xffffffff);
  iVar27 = *(int *)(param_1 + 0x1e08);
  FUN_ram_4ff3ee10(iVar25);
  if (iVar27 != 0) {
    uVar14 = (uint)*(byte *)(iVar27 + 0x10);
    iVar16 = (iVar27 + 0x10U & 3) << 3;
    puVar21 = (uint *)(iVar27 + 0x10U & 0xfffffffc);
    if (cVar11 == '\0') {
      do {
        uVar10 = 0xff << iVar16;
        uVar22 = *puVar21;
        if ((uVar22 & uVar10) == (uVar14 << iVar16 & uVar10)) {
          *puVar21 = uVar22 & ~uVar10 | (uVar14 & 0xfffffffb) << iVar16 & uVar10;
        }
        cVar11 = (char)uVar14;
        uVar14 = (int)uVar22 >> iVar16 & 0xff;
      } while ((char)((int)uVar22 >> iVar16) != cVar11);
    }
    else {
      do {
        uVar10 = 0xff << iVar16;
        uVar22 = *puVar21;
        if ((uVar22 & uVar10) == (uVar14 << iVar16 & uVar10)) {
          *puVar21 = uVar22 & ~uVar10 | (uVar14 | 4) << iVar16 & uVar10;
        }
        cVar11 = (char)uVar14;
        uVar14 = (int)uVar22 >> iVar16 & 0xff;
      } while ((char)((int)uVar22 >> iVar16) != cVar11);
    }
  }
  cVar11 = local_16c._1_1_;
  if (*(char *)((int)param_2 + 1) != local_16c._1_1_) {
    *(undefined1 *)(param_1 + 0x7c70) = 0;
    *(undefined4 *)(param_1 + 0x7c74) = 0;
    *(undefined4 *)(param_1 + 0x7c78) = 0;
    *(undefined4 *)(param_1 + 0x7c7c) = 0;
    *(undefined4 *)(param_1 + 0x7c80) = 0;
    *(undefined1 *)(param_1 + 0x8fdc) = 0;
  }
  iVar27 = param_1 + 0x79cc;
  FUN_ram_480c9972(iVar27,&local_16c,param_2);
  uVar4 = FUN_ram_48025ba6();
  FUN_ram_4809e702(param_1 + 0x9288,param_2,uVar4);
  FUN_ram_480dda04(param_1 + 0x7cd0,&local_16c,param_2);
  if (cStack_e3 != *(char *)((int)param_2 + 0x89)) {
    if (*(int *)(param_1 + 0x9064) != 0) {
      FUN_ram_480dce8c(param_1);
    }
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    *(undefined4 *)(param_1 + 0x9060) = 0;
    *(undefined4 *)(param_1 + 0x9064) = 0;
    *(undefined4 *)(param_1 + 0x9068) = 0;
    *(undefined4 *)(param_1 + 0x9070) = 0;
    *(undefined4 *)(param_1 + 0x9074) = 0;
    *(undefined4 *)(param_1 + 0x9078) = 0;
    *(undefined4 *)(param_1 + 0x907c) = 0;
    *(undefined4 *)(param_1 + 0x9084) = 0;
    *(undefined4 *)(param_1 + 37000) = 0;
    *(undefined1 *)(param_1 + 0x905d) = 0;
    *(undefined4 *)(param_1 + 0x9090) = 0;
    *(undefined2 *)(param_1 + 0x9094) = 0;
    *(undefined4 *)(param_1 + 0x9098) = 0;
    *(undefined1 *)(param_1 + 0x908c) = 0xff;
    *(undefined4 *)(param_1 + 0x906c) = 8;
    uStack_294 = 8;
    *(undefined4 *)(param_1 + 0x9080) = 0x10000;
    uStack_280 = 0x10000;
  }
  cVar28 = *(char *)((int)param_2 + 10);
  if (((cVar28 == '\0') || (*(char *)((int)param_2 + 0xe) == '\0')) ||
     (*(char *)((int)param_2 + 0xb) == '\0')) {
    FUN_ram_4809ebc2(iVar27);
  }
  if (*(char *)(param_1 + 0x7dbe) == '\0') {
    if (*(char *)(param_1 + 0x900a) == '\x05') {
      if ((*(char *)(param_1 + 0x8fde) != '\0') || (*(char *)((int)param_2 + 0x71) != '\0'))
      goto LAB_ram_480e4630;
      cVar2 = *(char *)(param_1 + 0x8f94);
    }
    else {
      cVar2 = *(char *)((int)param_2 + 0x71);
    }
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x8fe0) != 0) {
        FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x8500));
      }
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_27c = 0;
      uStack_278 = 0;
      *(undefined4 *)(param_1 + 0x8fe0) = 0;
      *(undefined4 *)(param_1 + 0x8fe4) = 0;
      *(undefined4 *)(param_1 + 0x8fec) = 0;
      *(undefined4 *)(param_1 + 0x8ff0) = 0;
      *(undefined4 *)(param_1 + 0x8ff4) = 0;
      *(undefined4 *)(param_1 + 0x8ff8) = 0;
      *(undefined4 *)(param_1 + 0x9000) = 0;
      *(undefined4 *)(param_1 + 0x9004) = 0;
      *(undefined2 *)(param_1 + 0x9008) = 0;
      *(undefined1 *)(param_1 + 0x8fde) = 0;
      *(undefined2 *)(param_1 + 0x8f94) = 0;
      *(undefined1 *)(param_1 + 0x8f96) = 0;
      *(undefined4 *)(param_1 + 0x8f98) = 0;
      *(undefined4 *)(param_1 + 0x8db0) = 0;
      *(undefined4 *)(param_1 + 0x8db4) = 0;
      *(undefined2 *)(param_1 + 0x8db8) = 0;
      *(undefined2 *)(param_1 + 0x8dbc) = 0;
      *(undefined4 *)(param_1 + 0x8dc0) = 0;
      *(undefined2 *)(param_1 + 0x8dc4) = 0;
      iVar16 = *(int *)(param_1 + 0x8dc8) + 1;
      *(undefined4 *)(param_1 + 0x8fe8) = 8;
      uStack_294 = 8;
      *(undefined4 *)(param_1 + 0x8ffc) = 0x10000;
      uStack_280 = 0x10000;
      if (iVar16 == 0) {
        iVar16 = 1;
      }
      *(int *)(param_1 + 0x8dc8) = iVar16;
      *(undefined4 *)(param_1 + 0x8f54) = 0x80000000;
      *(undefined4 *)(param_1 + 0x912c) = *(undefined4 *)(param_1 + 0x9128);
      *(undefined4 *)(param_1 + 0x8f58) = 0x80000000;
      *(undefined4 *)(param_1 + 0x8f6c) = 0x80000000;
      *(undefined4 *)(param_1 + 0x8f80) = 0x80000000;
      *(undefined4 *)(param_1 + 0x8f84) = 0x80000000;
      *(undefined2 *)(param_1 + 0x8dcc) = 0;
      *(undefined4 *)(param_1 + 0x8dd4) = 0;
      *(undefined2 *)(param_1 + 0x8dd8) = 0;
      *(undefined1 *)(param_1 + 0x8ddc) = 0;
      *(undefined1 *)(param_1 + 0x8ddd) = 0;
      *(undefined4 *)(param_1 + 0x8f4c) = 0;
      *(undefined1 *)(param_1 + 0x8f50) = 0;
      *(undefined1 *)(param_1 + 0x8f5c) = 0;
      *(undefined4 *)(param_1 + 0x8f60) = 0;
      *(undefined4 *)(param_1 + 0x8f64) = 0;
      *(undefined2 *)(param_1 + 0x8f68) = 0;
      *(undefined1 *)(param_1 + 0x902c) = 0;
      *(undefined4 *)(param_1 + 0x8f70) = 0;
      *(undefined4 *)(param_1 + 0x8f74) = 0;
      *(undefined4 *)(param_1 + 0x8f78) = 0;
      *(undefined1 *)(param_1 + 0x8f7c) = 0;
      *(undefined1 *)(param_1 + 0x8f88) = 0;
      *(undefined4 *)(param_1 + 0x8f8c) = 0;
      *(undefined1 *)(param_1 + 0x8f91) = 0;
      *(undefined1 *)(param_1 + 0x900c) = 0;
      *(undefined4 *)(param_1 + 0x9024) = 0;
      *(undefined4 *)(param_1 + 0x9028) = 0;
      *(undefined2 *)(param_1 + 0x9124) = 0;
      *(undefined1 *)(param_1 + 0x9126) = 0;
      memset(&uStack_298,0,0x98);
      uStack_284 = CONCAT22(300,(undefined2)uStack_284);
      uStack_298._0_2_ = CONCAT11(1,(undefined1)uStack_298);
      FUN_ram_4ff45158(param_1 + 0x8de0,&uStack_298,0x92);
      uVar3 = *(undefined1 *)(param_1 + 0x8f9c);
      FUN_ram_4ff3ec14(param_1 + 0x8f24,0xffffffff);
      *(undefined1 *)(param_1 + 0x8f00) = uVar3;
      if (*(char *)(param_1 + 0x8f01) == '\0') {
        *(undefined1 *)(param_1 + 0x8f01) = 1;
        memset((void *)(param_1 + 0x8ea0),0,0x12);
        memset((void *)(param_1 + 0x8eb4),0,0x12);
        *(undefined1 *)(param_1 + 0x8ed8) = 0;
        *(undefined1 *)(param_1 + 0x8ed9) = 0;
        *(undefined1 *)(param_1 + 0x8eda) = 0;
        *(undefined1 *)(param_1 + 0x8edb) = 0;
        *(undefined1 *)(param_1 + 0x8edc) = 0;
        *(undefined1 *)(param_1 + 0x8edd) = 0;
        *(undefined1 *)(param_1 + 0x8ee0) = 0;
        *(undefined1 *)(param_1 + 0x8ee1) = 0;
        *(undefined1 *)(param_1 + 0x8ee2) = 0;
        *(undefined1 *)(param_1 + 0x8ee3) = 0;
        *(undefined1 *)(param_1 + 0x8ee4) = 0;
        *(undefined1 *)(param_1 + 0x8ee5) = 0;
        *(undefined1 *)(param_1 + 0x8ee8) = 0;
        *(undefined1 *)(param_1 + 0x8ee9) = 0;
        *(undefined1 *)(param_1 + 0x8eea) = 0;
        *(undefined1 *)(param_1 + 0x8eeb) = 0;
        *(undefined1 *)(param_1 + 0x8eec) = 0;
        *(undefined1 *)(param_1 + 0x8eed) = 0;
        *(undefined1 *)(param_1 + 0x8eee) = 0;
        *(undefined1 *)(param_1 + 0x8eef) = 0;
        *(undefined1 *)(param_1 + 0x8ef0) = 0;
        *(undefined1 *)(param_1 + 0x8ef1) = 0;
        *(undefined1 *)(param_1 + 0x8ef2) = 0;
        *(undefined4 *)(param_1 + 0x8efc) = 0;
        iVar16 = *(int *)(param_1 + 0x8ef8) + 1;
        if (iVar16 == 0) {
          iVar16 = 1;
        }
        *(int *)(param_1 + 0x8ef8) = iVar16;
      }
      FUN_ram_4ff3ee10(param_1 + 0x8f24);
      iVar16 = *(int *)(*(int *)(param_1 + 0x8500) + 0x7cd0);
      if ((*(char *)(iVar16 + 0x8fde) == '\0') && (*(char *)(iVar16 + 0x8f94) == '\0')) {
        puVar21 = *(uint **)(*(int *)(param_1 + 0x8500) + 0x7cdc);
        fence();
        uVar14 = *puVar21;
        do {
          uVar22 = uVar14 & 0xfffcffff;
          if (((uVar14 >> 0x10 & 3) != 2) || ((uVar14 & 0xffff) == 0)) goto LAB_ram_480e462c;
          bVar1 = *puVar21 != uVar14;
          uVar14 = *puVar21;
        } while (bVar1);
        *puVar21 = uVar22 - 1;
LAB_ram_480e462c:
        cVar28 = *(char *)((int)param_2 + 10);
      }
    }
  }
LAB_ram_480e4630:
  if (*(char *)((int)param_2 + 0x6e) == '\0') {
    FUN_ram_480df148(param_1 + 0x84a8,1);
  }
  uVar14 = param_2[0x19];
  if ((char)uStack_108 != (char)uVar14) {
    if (*(int *)(param_1 + 0x87e8) != 0) {
      FUN_ram_480dce8c(*(undefined4 *)(param_1 + 0x8500));
    }
    *(char *)(param_1 + 0x87dc) = (char)uVar14;
    *(undefined4 *)(param_1 + 0x8810) = 0;
    *(undefined4 *)(param_1 + 0x87e4) = 0;
    *(undefined4 *)(param_1 + 0x87e8) = 0;
    *(undefined4 *)(param_1 + 0x87e0) = 0;
    *(undefined **)(param_1 + 0x87de) = &stvec;
  }
  if (((cVar28 != '\0') && ((char)param_2[3] != '\0')) &&
     ((cVar29 == '\0' || ((uStack_160 & 0xff) == 0)))) {
    uVar4 = FUN_ram_48025ba6();
    FUN_ram_4ff3ec14(param_1 + 0x8820,0xffffffff);
    if (*(char *)(param_1 + 0x885b) != '\0') {
      *(undefined4 *)(param_1 + 0x8828) = uVar4;
      *(undefined1 *)(param_1 + 0x885b) = 0;
      *(undefined2 *)(param_1 + 0x885c) = 0;
      *(undefined1 *)(param_1 + 0x885e) = 0;
      *(undefined4 *)(param_1 + 0x8868) = 0;
      *(undefined1 *)(param_1 + 0x883e) = 0;
      *(undefined1 *)(param_1 + 0x8840) = 0;
      *(undefined1 *)(param_1 + 0x8856) = 0;
      *(char *)(param_1 + 0x8845) = *(char *)(param_1 + 0x8843);
      *(undefined1 *)(param_1 + 0x8846) = *(undefined1 *)(param_1 + 0x8844);
      if (*(char *)(param_1 + 0x8843) == '\0') {
        if (*(char *)(param_1 + 0x8842) == '\0') {
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined1 *)(param_1 + 0x8857) = 0;
        }
        else {
          iVar16 = *(int *)(param_1 + 0x882c) + 1;
          if (iVar16 == 0) {
            iVar16 = 1;
          }
          *(int *)(param_1 + 0x882c) = iVar16;
          *(undefined4 *)(param_1 + 0x8834) = uVar4;
          *(undefined1 *)(param_1 + 0x883c) = 0;
          *(undefined1 *)(param_1 + 0x883f) = 0;
          *(undefined1 *)(param_1 + 0x8845) = 0;
          *(undefined1 *)(param_1 + 0x8848) = 0;
          *(undefined4 *)(param_1 + 0x8830) = *(undefined4 *)(param_1 + 0x8860);
          *(undefined4 *)(param_1 + 0x8838) = 1;
          *(undefined1 *)(param_1 + 0x8857) = 3;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x8838) = 0;
        iVar16 = *(int *)(param_1 + 0x8860) + 1;
        if (iVar16 == 0) {
          iVar16 = 1;
        }
        *(int *)(param_1 + 0x8860) = iVar16;
        *(undefined1 *)(param_1 + 0x8857) = 0;
        *(undefined1 *)(param_1 + 0x8859) = 0;
        *(undefined1 *)(param_1 + 0x884b) = 0;
        *(undefined1 *)(param_1 + 0x8853) = 0;
        *(undefined1 *)(param_1 + 0x8855) = 0;
        *(undefined4 *)(param_1 + 0x8884) = 0;
        *(undefined4 *)(param_1 + 0x8888) = 0;
        *(undefined2 *)(param_1 + 0x8850) = 0;
        *(undefined1 *)(param_1 + 0x8845) = 1;
        *(undefined2 *)(param_1 + 0x8848) = 1;
      }
    }
    FUN_ram_4ff3ee10(param_1 + 0x8820);
    uVar4 = FUN_ram_48025ba6();
    FUN_ram_4809f360(param_1 + 0x84a8,uVar4);
    fence();
    *(undefined1 *)(param_1 + 0x8a18) = 0;
  }
  FUN_ram_4809ec88(iVar27,param_2);
  if (*(char *)((int)param_2 + 1) != cVar11) {
    FUN_ram_4ff3ec14(iVar25,0xffffffff);
    iVar27 = *(int *)(param_1 + 0x1e08);
    FUN_ram_4ff3ee10(iVar25);
    if ((iVar27 != 0) && (iVar25 = FUN_ram_480597a8(param_1), iVar25 == 0)) {
      FUN_ram_480599fe(param_1,0);
      FUN_ram_4ff3ec14(param_1 + 0xb30,0xffffffff);
      *(undefined4 *)(param_1 + 0x9784) = 0xffffffff;
      FUN_ram_4ff3ee10(param_1 + 0xb30);
      return 1;
    }
  }
  FUN_ram_480599fe(param_1,0);
  return 1;
}


