/* Firmware entry: 0x4805e494 */

undefined1 * FUN_ram_4805e494(undefined1 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  undefined1 uVar17;
  undefined4 *puVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  byte bVar22;
  byte bVar23;
  undefined1 *puVar24;
  byte *pbVar25;
  uint uVar26;
  char cVar27;
  byte bVar28;
  byte bVar29;
  uint uVar30;
  byte *pbVar31;
  byte bVar32;
  byte *pbVar33;
  undefined4 *puVar34;
  byte bVar35;
  uint uVar36;
  undefined4 uStack_d4;
  byte abStack_ce [2];
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined1 auStack_bc [6];
  byte abStack_b6 [2];
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0xc) = 0xff00ffff;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x10] = 0xff;
  puVar24 = param_1;
  do {
    puVar24[0x11] = 0;
    puVar24[0x12] = 0;
    puVar24[0x13] = 0xff;
    puVar24[0x14] = 0xff;
    puVar24[0x15] = 0;
    puVar24[0x16] = 0xff;
    puVar24[0x17] = 0xff;
    puVar24 = puVar24 + 7;
  } while (puVar24 != param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x44) = 0xff00ffff;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x48] = 0xff;
  puVar24 = param_1;
  do {
    puVar24[0x49] = 0;
    puVar24[0x4a] = 0;
    puVar24[0x4b] = 0xff;
    puVar24[0x4c] = 0xff;
    puVar24[0x4d] = 0;
    puVar24[0x4e] = 0xff;
    puVar24[0x4f] = 0xff;
    puVar24 = puVar24 + 7;
  } while (puVar24 != param_1 + 0x31);
  bVar2 = *param_2;
  *param_1 = 1;
  if (3 < (byte)(bVar2 - 1)) {
    param_1[8] = 1;
    *(undefined2 *)(param_1 + 10) = 1;
    *param_1 = 0;
    return param_1;
  }
  pbVar33 = param_2 + 4;
  bVar22 = 0;
  do {
    FUN_ram_4805dd60(auStack_bc,pbVar33,bVar22);
    uVar36 = uStack_b4 >> 8 & 0xff;
    if ((uStack_b4 & 0xff) != 0) {
      bVar12 = false;
      uVar30 = (uint)(byte)param_1[8];
      puVar24 = auStack_bc;
      do {
        uVar21 = uVar30;
        if (uVar30 < 8) {
          uVar17 = puVar24[10];
          uVar3 = puVar24[0xb];
          uVar4 = puVar24[0xc];
          uVar5 = puVar24[0xd];
          uVar6 = puVar24[0xe];
          uVar7 = puVar24[0xf];
          param_1[uVar30 * 7 + 0x10] = puVar24[0x10];
          uVar21 = uVar30 + 1 & 0xff;
          param_1[uVar30 * 7 + 10] = uVar17;
          param_1[uVar30 * 7 + 0xb] = uVar3;
          param_1[uVar30 * 7 + 0xc] = uVar4;
          param_1[uVar30 * 7 + 0xd] = uVar5;
          param_1[uVar30 * 7 + 0xe] = uVar6;
          param_1[uVar30 * 7 + 0xf] = uVar7;
          bVar12 = true;
        }
        puVar24 = puVar24 + 7;
        uVar30 = uVar21;
      } while (puVar24 != auStack_bc + (uStack_b4 & 0xff) * 7);
      *param_1 = 0;
      if (bVar12) {
        param_1[8] = (char)uVar21;
      }
    }
    if (uVar36 != 0) {
      bVar12 = false;
      uVar30 = (uint)(byte)param_1[9];
      puVar24 = auStack_bc;
      do {
        uVar21 = uVar30;
        if (uVar30 < 8) {
          uVar17 = puVar24[0x42];
          uVar3 = puVar24[0x43];
          uVar4 = puVar24[0x44];
          uVar5 = puVar24[0x45];
          uVar6 = puVar24[0x46];
          uVar7 = puVar24[0x47];
          param_1[uVar30 * 7 + 0x48] = puVar24[0x48];
          uVar21 = uVar30 + 1 & 0xff;
          param_1[uVar30 * 7 + 0x42] = uVar17;
          param_1[uVar30 * 7 + 0x43] = uVar3;
          param_1[uVar30 * 7 + 0x44] = uVar4;
          param_1[uVar30 * 7 + 0x45] = uVar5;
          param_1[uVar30 * 7 + 0x46] = uVar6;
          param_1[uVar30 * 7 + 0x47] = uVar7;
          bVar12 = true;
        }
        puVar24 = puVar24 + 7;
        uVar30 = uVar21;
      } while (puVar24 != auStack_bc + uVar36 * 7);
      if (bVar12) {
        param_1[9] = (char)uVar21;
      }
    }
    bVar22 = bVar22 + 1;
    pbVar33 = pbVar33 + 0x50;
  } while (bVar2 != bVar22);
  if (bVar2 == 1) {
LAB_ram_4805e732:
    *param_1 = param_1[8] == '\0';
    return param_1;
  }
  bVar22 = 1;
  pbVar33 = param_2 + 0xe;
LAB_ram_4805e684:
  bVar8 = pbVar33[-2];
  bVar9 = pbVar33[0x3a];
  cVar27 = bVar22 - 1;
  pbVar31 = pbVar33 + 0x50;
  bVar35 = bVar22;
LAB_ram_4805e6aa:
  do {
    bVar32 = pbVar31[-2];
    if (bVar9 == 0) {
      while (pbVar31[0x3a] == 0) {
        if (((bVar32 & bVar8) != 0) && (*(int *)(pbVar31 + -6) == *(int *)(pbVar33 + -6))) {
          uVar36 = (uint)pbVar33[-1];
          goto LAB_ram_4805e6d0;
        }
        bVar35 = bVar35 + 1;
        if (bVar2 <= bVar35) goto LAB_ram_4805e716;
        bVar32 = pbVar31[0x4e];
        pbVar31 = pbVar31 + 0x50;
      }
    }
    iVar13 = *(int *)(pbVar33 + -6);
    uStack_c4 = DAT_ram_482230b8;
    uStack_cc = DAT_ram_482230b0;
    uStack_c8 = DAT_ram_482230b4;
    uStack_c0 = DAT_ram_482230bc;
    uVar36 = (uint)pbVar33[-1];
    bVar11 = pbVar33[0x27];
    bVar10 = pbVar33[0x30];
    puVar34 = &uStack_d4;
    bVar28 = 7;
    if ((iVar13 != 0x3fd) && (bVar28 = 0, iVar13 == 0x3c2)) {
      bVar28 = 3;
    }
    bVar23 = 0;
    puVar18 = puVar34;
    pbVar20 = pbVar33;
    do {
      bVar14 = pbVar20[0x10];
      if ((((bVar11 != 0) && (pbVar33[0x28] == bVar23)) &&
          (uVar30 = (uint)pbVar33[0x2a], (uVar30 - 1 & 0xff) < 8)) && (pbVar33[0x29] + uVar30 < 9))
      {
        uVar21 = 0xff;
        if (uVar30 != 8) {
          uVar21 = (1 << (uVar30 & 0x1f)) - 1U & 0xffff;
        }
        bVar14 = bVar14 | (byte)(uVar21 << (pbVar33[0x29] & 0x1f));
      }
      if ((bVar10 == 0) || (pbVar33[0x32] != bVar23)) {
        bVar28 = *pbVar20 & bVar28 & ~bVar14;
      }
      else {
        bVar28 = 0;
      }
      bVar14 = pbVar20[8];
      bVar23 = bVar23 + 1;
      *(byte *)((int)puVar18 + 6) = bVar28;
      *(byte *)((int)puVar18 + 0xe) = bVar14 & bVar28;
      pbVar20 = pbVar20 + 1;
      puVar18 = (undefined4 *)((int)puVar18 + 1);
      bVar28 = 0;
    } while (bVar23 != 8);
    iVar15 = *(int *)(pbVar31 + -6);
    uStack_b0 = DAT_ram_482230b4;
    uStack_a8 = DAT_ram_482230bc;
    uStack_b4 = DAT_ram_482230b0;
    uStack_ac = DAT_ram_482230b8;
    bVar11 = pbVar31[-1];
    bVar10 = pbVar31[0x27];
    bVar28 = pbVar31[0x30];
    bVar23 = 7;
    if ((iVar15 != 0x3fd) && (bVar23 = 0, iVar15 == 0x3c2)) {
      bVar23 = 3;
    }
    bVar14 = 0;
    puVar24 = auStack_bc;
    pbVar20 = pbVar31;
    do {
      bVar29 = pbVar20[0x10];
      if ((((bVar10 != 0) && (pbVar31[0x28] == bVar14)) &&
          (uVar30 = (uint)pbVar31[0x2a], (uVar30 - 1 & 0xff) < 8)) && (pbVar31[0x29] + uVar30 < 9))
      {
        uVar21 = 0xff;
        if (uVar30 != 8) {
          uVar21 = (1 << (uVar30 & 0x1f)) - 1U & 0xffff;
        }
        bVar29 = bVar29 | (byte)(uVar21 << (pbVar31[0x29] & 0x1f));
      }
      if ((bVar28 == 0) || (pbVar31[0x32] != bVar14)) {
        bVar23 = bVar23 & *pbVar20 & ~bVar29;
      }
      else {
        bVar23 = 0;
      }
      bVar29 = pbVar20[8];
      bVar14 = bVar14 + 1;
      puVar24[6] = bVar23;
      puVar24[0xe] = bVar29 & bVar23;
      pbVar20 = pbVar20 + 1;
      puVar24 = puVar24 + 1;
      bVar23 = 0;
    } while (bVar14 != 8);
    if (((iVar15 != iVar13) || (bVar11 != uVar36)) || ((bVar32 & bVar8) == 0))
    goto joined_r0x4805ea4e;
    puVar24 = auStack_bc;
    do {
      pbVar20 = (byte *)((int)puVar34 + 0xe);
      pbVar25 = (byte *)((int)puVar34 + 6);
      puVar34 = (undefined4 *)((int)puVar34 + 1);
      if ((byte)((*pbVar20 ^ puVar24[0xe]) & *pbVar25 & puVar24[6]) != 0) goto LAB_ram_4805e6d0;
      puVar24 = puVar24 + 1;
    } while (puVar34 != &uStack_cc);
    bVar32 = param_1[8];
    if (bVar32 < 8) {
      iVar13 = (uint)bVar32 * 7;
      param_1[8] = bVar32 + 1;
      param_1[iVar13 + 10] = 0xb;
      param_1[iVar13 + 0xb] = 0;
      param_1[iVar13 + 0xd] = bVar35;
      param_1[iVar13 + 0xc] = cVar27;
      param_1[iVar13 + 0xe] = 0;
      param_1[iVar13 + 0xf] = 0xff;
      param_1[iVar13 + 0x10] = 0xff;
    }
LAB_ram_4805e986:
    *param_1 = 0;
LAB_ram_4805e98a:
    bVar35 = bVar35 + 1;
    pbVar31 = pbVar31 + 0x50;
  } while (bVar35 < bVar2);
  goto LAB_ram_4805e716;
LAB_ram_4805e6d0:
  if (pbVar31[-1] == uVar36) {
    if (uVar36 != 0) {
      pbVar20 = pbVar31;
      pbVar25 = pbVar33;
      do {
        bVar32 = *pbVar25;
        pbVar1 = pbVar25 + 8;
        pbVar25 = pbVar25 + 1;
        if ((byte)(bVar32 & *pbVar20 & (*pbVar1 ^ pbVar20[8])) != 0) goto joined_r0x4805ea4e;
        pbVar20 = pbVar20 + 1;
      } while (pbVar25 != pbVar33 + uVar36);
      bVar32 = pbVar31[0x27];
      bVar11 = pbVar31[0x30];
      pbVar20 = pbVar33 + 0x10;
      pbVar25 = pbVar31 + 0x10;
      uVar30 = 0;
      do {
        uVar21 = (uint)*pbVar20;
        if ((((pbVar33[0x27] != 0) && (pbVar33[0x28] == uVar30)) &&
            (uVar26 = (uint)pbVar33[0x2a], (uVar26 - 1 & 0xff) < 8)) && (pbVar33[0x29] + uVar26 < 9)
           ) {
          uVar19 = 0xff;
          if (uVar26 != 8) {
            uVar19 = (1 << (uVar26 & 0x1f)) - 1U & 0xffff;
          }
          uVar21 = uVar21 | uVar19 << (pbVar33[0x29] & 0x1f) & 0xff;
        }
        if ((pbVar33[0x30] != 0) && (pbVar33[0x32] == uVar30)) {
          uVar21 = 0xff;
        }
        uVar26 = (uint)*pbVar25;
        if (((bVar32 != 0) && (pbVar31[0x28] == uVar30)) &&
           ((uVar19 = (uint)pbVar31[0x2a], (uVar19 - 1 & 0xff) < 8 && (pbVar31[0x29] + uVar19 < 9)))
           ) {
          uVar16 = 0xff;
          if (uVar19 != 8) {
            uVar16 = (1 << (uVar19 & 0x1f)) - 1U & 0xffff;
          }
          uVar26 = uVar26 | uVar16 << (pbVar31[0x29] & 0x1f) & 0xff;
        }
        if ((bVar11 == 0) || (pbVar31[0x32] != uVar30)) {
          uVar21 = uVar26 & uVar21;
        }
        if (uVar21 != 0) {
          uVar26 = 0;
          do {
            if ((uVar21 >> (uVar26 & 0x1f) & 1) != 0) {
              uVar17 = (undefined1)uVar26;
              goto LAB_ram_4805eae6;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 != 8);
          uVar17 = 0xff;
LAB_ram_4805eae6:
          if ((pbVar33[0x27] == 0) || (pbVar33[0x28] != uVar30)) {
            if (pbVar33[0x30] == 0) {
              if ((bVar32 == 0) || (pbVar31[0x28] != uVar30)) {
                if (bVar11 != 0) {
                  uVar26 = (uint)pbVar31[0x32];
joined_r0x4805eb80:
                  if (uVar26 == uVar30) goto LAB_ram_4805eb18;
                }
LAB_ram_4805eb06:
                if ((uVar21 & (pbVar20[8] ^ pbVar25[8])) == 0) goto LAB_ram_4805e9fa;
              }
            }
            else {
              uVar26 = (uint)pbVar33[0x32];
              if ((bVar32 == 0) || (pbVar31[0x28] != uVar30)) {
                if (bVar11 == 0) {
                  if (uVar26 != uVar30) goto LAB_ram_4805eb06;
                }
                else if (pbVar31[0x32] != uVar30) goto joined_r0x4805eb80;
              }
            }
          }
LAB_ram_4805eb18:
          bVar32 = param_1[8];
          if (7 < bVar32) goto LAB_ram_4805e986;
          iVar13 = (uint)bVar32 * 7;
          param_1[8] = bVar32 + 1;
          param_1[iVar13 + 10] = 0xb;
          param_1[iVar13 + 0xb] = 0;
          param_1[iVar13 + 0xd] = bVar35;
          param_1[iVar13 + 0xc] = cVar27;
          param_1[iVar13 + 0xe] = 0;
          param_1[iVar13 + 0xf] = (char)uVar30;
          param_1[iVar13 + 0x10] = uVar17;
          *param_1 = 0;
          goto LAB_ram_4805e98a;
        }
LAB_ram_4805e9fa:
        uVar30 = uVar30 + 1 & 0xff;
        pbVar20 = pbVar20 + 1;
        pbVar25 = pbVar25 + 1;
      } while (uVar30 != uVar36);
    }
    bVar32 = param_1[9];
    if (bVar32 < 8) {
      iVar13 = (uint)bVar32 * 7;
      param_1[9] = bVar32 + 1;
      param_1[iVar13 + 0x43] = 2;
      param_1[iVar13 + 0x42] = 0;
      param_1[iVar13 + 0x45] = bVar35;
      param_1[iVar13 + 0x44] = cVar27;
      param_1[iVar13 + 0x46] = 0;
      param_1[iVar13 + 0x47] = 0xff;
      param_1[iVar13 + 0x48] = 0xff;
    }
  }
joined_r0x4805ea4e:
  bVar35 = bVar35 + 1;
  pbVar31 = pbVar31 + 0x50;
  if (bVar2 <= bVar35) goto LAB_ram_4805e716;
  goto LAB_ram_4805e6aa;
LAB_ram_4805e716:
  bVar22 = bVar22 + 1;
  pbVar33 = pbVar33 + 0x50;
  if (bVar2 == bVar22) goto LAB_ram_4805e732;
  goto LAB_ram_4805e684;
}


