/* Firmware entry: 0x48082b62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_48082b62(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int *piVar27;
  int *piVar28;
  undefined4 *puVar29;
  uint uVar30;
  uint uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_254 [4];
  uint uStack_250;
  int iStack_24c;
  uint uStack_248;
  undefined1 uStack_240;
  undefined4 local_23c;
  uint uStack_238;
  undefined1 local_234 [4];
  undefined4 auStack_230 [19];
  undefined4 uStack_1e4;
  uint auStack_1e0 [5];
  undefined1 uStack_1cc;
  undefined1 uStack_1cb;
  undefined1 auStack_1c8 [8];
  uint auStack_1c0 [8];
  undefined4 uStack_1a0;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  int iStack_18c;
  uint uStack_188;
  int iStack_184;
  uint uStack_180;
  uint uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  int aiStack_170 [66];
  undefined1 uStack_68;
  undefined4 local_48 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = FUN_ram_48025ba6();
  if (DAT_ram_4ff6ddd8 != '\0') {
    if ((uint)(iVar6 - DAT_ram_4ff6ddd4) < 1000) goto LAB_ram_48082bc0;
  }
  FUN_ram_4802eeb4();
LAB_ram_48082bc0:
  *(undefined4 *)(DAT_ram_4ff6de38 + 0x724) = param_1;
  uVar7 = FUN_ram_480295a2(&DAT_ram_4ff6dc18);
  *(undefined4 *)(DAT_ram_4ff6de38 + 0xb14) = uVar7;
  uVar7 = FUN_ram_480295c8(&DAT_ram_4ff6dc18);
  *(undefined4 *)(DAT_ram_4ff6de38 + 0xb18) = uVar7;
  uVar7 = FUN_ram_48001f52(0x804);
  *(undefined4 *)(DAT_ram_4ff6de38 + 0xb1c) = uVar7;
  uVar7 = FUN_ram_48001f84(0x804);
  *(undefined4 *)(DAT_ram_4ff6de38 + 0xb20) = uVar7;
  iVar25 = DAT_ram_4ff6ddb0;
  iVar6 = DAT_ram_4ff6ddac;
  iVar8 = FUN_ram_48025b94();
  iVar9 = DAT_ram_4ff6de38;
  uVar17 = 0xffffffff;
  if (iVar25 != 0) {
    uVar17 = (uint)(iVar8 - iVar25) / 1000;
  }
  *(uint *)(DAT_ram_4ff6de38 + 0xc6c) = uVar17;
  *(int *)(iVar9 + 0xc64) = iVar8;
  *(int *)(iVar9 + 0xc68) = iVar25;
  iVar9 = FUN_ram_48025b94();
  iVar25 = DAT_ram_4ff6de38;
  uVar17 = 0xffffffff;
  if (iVar6 != 0) {
    uVar17 = (uint)(iVar9 - iVar6) / 1000;
  }
  uVar7 = *(undefined4 *)(DAT_ram_4ff6de38 + 0xc6c);
  *(int *)(DAT_ram_4ff6de38 + 0xc70) = iVar9;
  *(int *)(iVar25 + 0xc74) = iVar6;
  *(uint *)(iVar25 + 0xc78) = uVar17;
  *(uint *)(iVar25 + 0xb28) = uVar17;
  *(undefined4 *)(iVar25 + 0xb24) = uVar7;
  FUN_ram_48032c66(auStack_254);
  iVar6 = DAT_ram_4ff6de38;
  *(uint *)(DAT_ram_4ff6de38 + 0xb2c) = uStack_250;
  *(int *)(iVar6 + 0xb30) = iStack_24c;
  *(uint *)(iVar6 + 0xb34) = uStack_248;
  *(undefined1 *)(iVar6 + 0xb38) = uStack_240;
  memset((void *)((int)&local_23c + 2),0,0x52);
  if (DAT_ram_4ff5ca94 == 0) {
    local_234[0] = 0;
  }
  else {
    puVar20 = &local_23c;
    puVar15 = (undefined4 *)(DAT_ram_4ff5ca94 + 0x170);
    uVar17 = 0;
    uVar21 = 0;
    do {
      uVar7 = puVar15[1];
      uVar22 = uVar21 + (DAT_ram_4ff5ca9c >> (uVar17 & 0x1f) & 1);
      puVar20[5] = *puVar15;
      puVar20[0xd] = uVar7;
      uVar17 = uVar17 + 1;
      uVar21 = uVar22 & 0xff;
      local_234[0] = (undefined1)uVar22;
      puVar15 = puVar15 + 0x5f;
      puVar20 = puVar20 + 1;
    } while (uVar17 != 8);
  }
  puVar20 = &local_23c;
  local_23c._0_2_ = _DAT_ram_4ff5ca98;
  uStack_238 = DAT_ram_4ff5ca9c;
  puVar15 = (undefined4 *)(iVar6 + 0xb3c);
  auStack_230[0] = DAT_ram_4ff5caa0;
  auStack_230[1] = DAT_ram_4ff5caa4;
  do {
    uVar7 = puVar20[1];
    uVar11 = puVar20[2];
    uVar12 = puVar20[3];
    *puVar15 = *puVar20;
    puVar15[1] = uVar7;
    puVar15[2] = uVar11;
    puVar15[3] = uVar12;
    puVar20 = puVar20 + 4;
    puVar15 = puVar15 + 4;
  } while (puVar20 != auStack_230 + 0x11);
  *puVar15 = *puVar20;
  memset(&uStack_1e4,0,0x6c);
  iVar6 = DAT_ram_4ff6de38;
  auStack_1c0[0] = 0xffffffff;
  auStack_1c0[4] = 0xffffffff;
  uStack_1a0 = 0xffffffff;
  uStack_1cb = 1;
  fence();
  fence();
  uStack_1e4._0_1_ = DAT_ram_4ff6df34 != '\0';
  fence();
  fence();
  auStack_1e0[1] = *(undefined4 *)(DAT_ram_4ff6de38 + 0xb1c);
  auStack_1e0[2] = *(undefined4 *)(DAT_ram_4ff6de38 + 0xb20);
  auStack_1e0[3] = *(uint *)(DAT_ram_4ff6de38 + 0xb24);
  auStack_1e0[4] = *(uint *)(DAT_ram_4ff6de38 + 0xb28);
  uStack_1e4._1_1_ = DAT_ram_4ff6df38 != '\0';
  uStack_1cc = uStack_240;
  uStack_1e4._2_1_ = DAT_ram_4ff6ddd0;
  auStack_1e0[0] = DAT_ram_4ff6ddcc;
  uVar5 = 0;
  auStack_230[0x12] = param_1;
  if (*(char *)(DAT_ram_4ff6de38 + 0xb3c) != '\0') {
    uVar5 = 0;
    if (*(char *)(DAT_ram_4ff6de38 + 0xb3d) != '\0') {
      uVar5 = FUN_ram_4802feee();
    }
  }
  uVar22 = (uint)(uStack_250 + iStack_24c < uStack_250);
  iStack_184 = 0;
  uStack_180 = *(int *)(iVar6 + 0xb4c) + DAT_ram_4ff6de84;
  uStack_17c = (uint)(uStack_180 < DAT_ram_4ff6de84);
  puVar15 = auStack_230 + 0x12;
  iVar6 = 0;
  uVar17 = uStack_250 + iStack_24c;
  uVar21 = uStack_248;
  puVar20 = puVar15;
  uStack_1cb = uVar5;
  do {
    iVar8 = iStack_184;
    iVar9 = iStack_18c;
    uVar30 = uStack_190;
    uStack_198 = uVar17;
    uStack_194 = uVar22;
    uStack_188 = uVar21;
    memset(&local_178,0,0x134);
    iVar25 = DAT_ram_4ff6de38;
    aiStack_170[0x3d] = 0xffffffff;
    uStack_68 = 1;
    if (DAT_ram_4ff6df2c == (int *)0x0) {
      *(undefined1 *)(DAT_ram_4ff6de38 + iVar6 + 0xb04) = 0;
      puVar29 = &local_178;
      puVar23 = (undefined4 *)(iVar25 + iVar6 * 0x134 + 0x768);
      do {
        uVar7 = puVar29[1];
        uVar11 = puVar29[2];
        uVar12 = puVar29[3];
        *puVar23 = *puVar29;
        puVar23[1] = uVar7;
        puVar23[2] = uVar11;
        puVar23[3] = uVar12;
        puVar29 = puVar29 + 4;
        puVar23 = puVar23 + 4;
      } while (puVar29 != local_48);
      *puVar23 = local_48[0];
      iVar10 = FUN_ram_48025b94();
      iVar25 = 0;
      uVar13 = 0xffffffff;
    }
    else {
      uVar5 = (**(code **)(*DAT_ram_4ff6df2c + 0x15c))
                        (DAT_ram_4ff6df2c,(&DAT_ram_481f5594)[iVar6],&local_178);
      iVar25 = aiStack_170[2];
      iVar10 = DAT_ram_4ff6de38;
      *(undefined1 *)(DAT_ram_4ff6de38 + iVar6 + 0xb04) = uVar5;
      puVar29 = &local_178;
      puVar23 = (undefined4 *)(iVar10 + iVar6 * 0x134 + 0x768);
      do {
        uVar7 = puVar29[1];
        uVar11 = puVar29[2];
        uVar12 = puVar29[3];
        *puVar23 = *puVar29;
        puVar23[1] = uVar7;
        puVar23[2] = uVar11;
        puVar23[3] = uVar12;
        puVar29 = puVar29 + 4;
        puVar23 = puVar23 + 4;
      } while (puVar29 != local_48);
      *puVar23 = local_48[0];
      iVar10 = FUN_ram_48025b94();
      uVar13 = 0xffffffff;
      if (iVar25 != 0) {
        uVar13 = (uint)(iVar10 - iVar25) / 1000;
      }
    }
    iVar2 = DAT_ram_4ff6de38;
    iVar24 = iVar6 * 0xc + DAT_ram_4ff6de38;
    *(int *)(iVar24 + 0xc44) = iVar25;
    *(uint *)(iVar24 + 0xc48) = uVar13;
    *(int *)(iVar24 + 0xc40) = iVar10;
    iVar25 = iVar6 * 4 + iVar2;
    *(uint *)(iVar25 + 0xb08) = uVar13;
    *(int *)(iVar25 + 0xc7c) = aiStack_170[1];
    uVar5 = *(undefined1 *)(iVar2 + iVar6 + 0xb04);
    uVar18 = aiStack_170[0x1a] + aiStack_170[0x17];
    bVar1 = uVar18 < (uint)aiStack_170[0x17];
    puVar20[10] = uVar13;
    *(undefined1 *)(puVar20 + 8) = uVar5;
    iVar24 = aiStack_170[0x26];
    iVar10 = aiStack_170[0x1d];
    uVar4 = uStack_174._1_1_;
    uVar5 = local_178._2_1_;
    uVar14 = uVar17 + uVar18;
    uVar22 = uVar22 + bVar1 + (uint)(uVar14 < uVar17);
    *(undefined1 *)((int)puVar20 + 0x21) = (undefined1)local_178;
    *(undefined1 *)((int)puVar20 + 0x23) = uVar5;
    iVar25 = aiStack_170[0x18];
    uVar3 = local_178._3_1_;
    uVar5 = local_178._1_1_;
    uVar26 = iVar24 + iVar10;
    *(undefined1 *)((int)puVar20 + 0x25) = uVar4;
    uVar17 = (uint)(uVar26 < (uint)iVar10);
    uVar13 = uVar18 + uVar26;
    *(undefined1 *)((int)puVar20 + 0x22) = uVar5;
    *(undefined1 *)(puVar20 + 9) = uVar3;
    puVar20[0xb] = iVar25;
    if (((uint)(uVar13 < uVar18) + bVar1 + uVar17 == 0) && (uVar13 < (uint)aiStack_170[0x2b])) {
      uVar13 = aiStack_170[0x2b] - uVar13;
      iVar25 = -(uint)((uint)aiStack_170[0x2b] < uVar13);
    }
    else {
      uVar13 = 0;
      iVar25 = 0;
    }
    iVar10 = 0;
    if ((uint)aiStack_170[0x2b] < (uint)aiStack_170[0x2c]) {
      iVar10 = aiStack_170[0x2c] - aiStack_170[0x2b];
    }
    uVar31 = aiStack_170[0x29] + aiStack_170[0x24];
    uVar18 = aiStack_170[0xf] + uVar31;
    uVar19 = aiStack_170[0x12] + uVar18;
    uVar26 = uVar26 + uVar19;
    uVar13 = uVar26 + uVar13;
    uStack_190 = iVar10 + uVar13 + uVar30;
    uStack_188 = uVar21 + aiStack_170[0x23];
    iStack_18c = (uint)(uStack_190 < uVar30) +
                 (uint)(iVar10 + uVar13 < uVar13) +
                 (uint)(uVar13 < uVar26) +
                 (uint)(uVar26 < uVar19) +
                 (uint)(uVar19 < uVar18) +
                 (uint)(uVar18 < uVar31) + (uint)(uVar31 < (uint)aiStack_170[0x24]) + uVar17 +
                 iVar25 + iVar9;
    iStack_184 = iVar8 + (uint)(uStack_188 < uVar21);
    iVar6 = iVar6 + 1;
    puVar20 = puVar20 + 4;
    uVar17 = uVar14;
    uVar21 = uStack_188;
  } while (iVar6 != 3);
  uStack_198 = uVar14;
  uStack_194 = uVar22;
  FUN_ram_48081e52(&local_178,&DAT_ram_4ff5c930,auStack_230 + 0x12);
  piVar27 = &local_178;
  piVar16 = (int *)(iVar2 + 0x728);
  piVar28 = piVar16;
  do {
    iVar9 = piVar27[1];
    iVar6 = piVar27[2];
    iVar25 = piVar27[3];
    *piVar28 = *piVar27;
    piVar28[1] = iVar9;
    piVar28[2] = iVar6;
    piVar28[3] = iVar25;
    piVar27 = piVar27 + 4;
    piVar28 = piVar28 + 4;
  } while (piVar27 != aiStack_170 + 0xe);
  puVar29 = auStack_230 + 0x12;
  puVar20 = (undefined4 *)(iVar2 + 0xbd0);
  do {
    uVar12 = *puVar29;
    uVar7 = puVar29[1];
    uVar11 = puVar29[2];
    puVar20[3] = puVar29[3];
    *puVar20 = uVar12;
    puVar20[1] = uVar7;
    puVar20[2] = uVar11;
    puVar29 = puVar29 + 4;
    puVar20 = puVar20 + 4;
  } while (puVar29 != &local_178);
  piVar28 = (int *)(iVar2 + 0xb90);
  do {
    iVar6 = piVar16[1];
    iVar25 = piVar16[2];
    iVar9 = piVar16[3];
    *piVar28 = *piVar16;
    piVar28[1] = iVar6;
    piVar28[2] = iVar25;
    piVar28[3] = iVar9;
    iVar6 = DAT_ram_4ff6de38;
    piVar16 = piVar16 + 4;
    piVar28 = piVar28 + 4;
  } while (piVar16 != (int *)(iVar2 + 0x768));
  fence();
  *(undefined4 *)(DAT_ram_4ff6de38 + 0xc88) = DAT_ram_4ff6de94;
  *(undefined4 *)(iVar6 + 0xc8c) = DAT_ram_4ff6de88;
  *(uint *)(iVar6 + 0xc90) = DAT_ram_4ff6de84;
  iVar25 = *(int *)(iVar6 + 0x1d18);
  *(undefined4 *)(iVar6 + 0xc94) = DAT_ram_4ff6de80;
  puVar20 = (undefined4 *)(iVar6 + 0xb90);
  puVar29 = (undefined4 *)(iVar25 * 0x108 + iVar6 + 0xc98);
  do {
    uVar33 = puVar20[1];
    uVar7 = puVar20[2];
    uVar32 = puVar20[3];
    uVar12 = puVar20[4];
    uVar11 = puVar20[5];
    *puVar29 = *puVar20;
    puVar29[1] = uVar33;
    puVar29[2] = uVar7;
    puVar29[3] = uVar32;
    puVar29[4] = uVar12;
    puVar29[5] = uVar11;
    puVar20 = puVar20 + 6;
    puVar29 = puVar29 + 6;
  } while (puVar20 != (undefined4 *)(iVar6 + 0xc98));
  *(uint *)(iVar6 + 0x1d18) = iVar25 + 1U & 0xf;
  if (*(uint *)(iVar6 + 0x1d1c) < 0x10) {
    *(uint *)(iVar6 + 0x1d1c) = *(uint *)(iVar6 + 0x1d1c) + 1;
  }
  iVar6 = DAT_ram_4ff6de38;
  uVar22 = 0;
  uVar17 = 0;
  uVar21 = 0;
  uVar13 = 0;
  uVar30 = 0;
  do {
    uVar14 = puVar15[10];
    if (uVar14 == 0xffffffff) {
      uVar30 = uVar30 | 1 << (uVar22 & 0x1f);
    }
    else {
      uVar18 = 1 << (uVar22 & 0x1f);
      if (uVar17 < uVar14) {
        uVar17 = uVar14;
      }
      if ((0x9c4 < uVar14) && (uVar13 = uVar13 | uVar18, 5000 < uVar14)) {
        uVar21 = uVar21 | uVar18;
      }
    }
    uVar22 = uVar22 + 1;
    puVar15 = puVar15 + 4;
  } while (uVar22 != 3);
  uVar22 = 0xffffffc0;
  if (*(uint *)(DAT_ram_4ff6de38 + 0xc8c) < 0x4000000) {
    uVar22 = *(uint *)(DAT_ram_4ff6de38 + 0xc8c) << 6;
  }
  if (DAT_ram_4ff48b58 != '\0') {
    DAT_ram_4ff48a74 = (uint)*(byte *)(DAT_ram_4ff6de38 + 0x733);
    DAT_ram_4ff48a78 = (uint)*(byte *)(DAT_ram_4ff6de38 + 0x732);
    fence();
    fence();
    fence();
    DAT_ram_4ff48a6c = 0xc;
    DAT_ram_4ff48a70 = DAT_ram_4ff47ea0;
    DAT_ram_4ff48a7c = *(uint *)(DAT_ram_4ff6de38 + 0xc88) & 0x3f | uVar22;
    DAT_ram_4ff48a84 = uVar21 << 8 | uVar30 << 0x10 | uVar13;
    if (auStack_1e0[3] < auStack_1e0[4]) {
      auStack_1e0[3] = auStack_1e0[4];
    }
    DAT_ram_4ff48a64 = (DAT_ram_4ff48a64 + 1U & 0xfffffffe) + 2;
    fence();
    DAT_ram_4ff48a68 = param_1;
    DAT_ram_4ff48a80 = uVar17;
    DAT_ram_4ff48a88 = auStack_1e0[3];
  }
  *(undefined1 *)(DAT_ram_4ff6de38 + 0x720) = 1;
  return iVar6 + 0x728;
}


