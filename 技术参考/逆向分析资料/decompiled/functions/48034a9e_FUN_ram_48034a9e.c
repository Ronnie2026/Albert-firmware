/* Firmware entry: 0x48034a9e */

undefined4 FUN_ram_48034a9e(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  size_t sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  char *__s;
  uint uStack_194;
  uint uStack_190;
  undefined1 auStack_174 [16];
  undefined4 uStack_164;
  int aiStack_160 [2];
  uint uStack_158;
  byte bStack_151;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined4 local_138 [8];
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined2 uStack_f0;
  undefined2 uStack_ee;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined4 uStack_d8;
  undefined1 uStack_d3;
  undefined4 uStack_d0;
  undefined1 uStack_c9;
  undefined4 uStack_c8;
  undefined1 uStack_c3;
  undefined1 uStack_be;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined1 uStack_ab;
  undefined4 uStack_a8;
  undefined1 uStack_a3;
  undefined2 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar20 = (uint)*(byte *)(param_1 + 0x3414);
  uVar21 = uVar20;
  if (DAT_ram_4ff5bd08 < uVar20) {
    iVar7 = FUN_ram_4ff206d8(uVar20 * 0x124,0x404);
    if (iVar7 == 0) {
      return 0;
    }
    iVar19 = iVar7 + 4;
    uVar21 = 0;
    if (DAT_ram_4ff5bd04 != 0) {
      do {
        puVar6 = (undefined4 *)(DAT_ram_4ff5bd00 + (-4 - iVar7) + iVar19);
        *(undefined4 *)(iVar19 + -4) = *puVar6;
        FUN_ram_4802ace6(iVar19,puVar6 + 1);
        uVar12 = puVar6[9];
        uVar1 = *(undefined2 *)(puVar6 + 10);
        uVar17 = puVar6[5];
        uVar9 = puVar6[6];
        uVar10 = puVar6[7];
        *(undefined4 *)(iVar19 + 0x1c) = puVar6[8];
        *(undefined4 *)(iVar19 + 0x20) = uVar12;
        *(undefined2 *)(iVar19 + 0x24) = uVar1;
        *(undefined4 *)(iVar19 + 0x10) = uVar17;
        *(undefined4 *)(iVar19 + 0x14) = uVar9;
        *(undefined4 *)(iVar19 + 0x18) = uVar10;
        puVar15 = puVar6 + 0xb;
        puVar13 = (undefined4 *)(iVar19 + 0x28);
        do {
          uVar9 = puVar15[1];
          uVar10 = puVar15[2];
          uVar12 = puVar15[3];
          *puVar13 = *puVar15;
          puVar13[1] = uVar9;
          puVar13[2] = uVar10;
          puVar13[3] = uVar12;
          puVar15 = puVar15 + 4;
          puVar13 = puVar13 + 4;
        } while (puVar15 != puVar6 + 0x33);
        puVar11 = (undefined4 *)(iVar19 + 0xcc);
        puVar16 = puVar6 + 0x34;
        *puVar13 = *puVar15;
        do {
          uVar18 = puVar16[1];
          uVar17 = puVar16[2];
          uVar9 = puVar16[3];
          uVar10 = puVar16[4];
          uVar12 = puVar16[5];
          *puVar11 = *puVar16;
          puVar11[1] = uVar18;
          puVar11[2] = uVar17;
          puVar11[3] = uVar9;
          puVar11[4] = uVar10;
          puVar11[5] = uVar12;
          uVar5 = DAT_ram_4ff5bd04;
          puVar16 = puVar16 + 6;
          puVar11 = puVar11 + 6;
        } while (puVar16 != puVar6 + 0x46);
        uVar1 = *(undefined2 *)((int)puVar6 + 0x11a);
        uVar2 = *(undefined2 *)(puVar6 + 0x47);
        uVar3 = *(undefined2 *)((int)puVar6 + 0x11e);
        uVar4 = *(undefined2 *)(puVar6 + 0x48);
        uVar21 = uVar21 + 1;
        *(undefined2 *)(iVar19 + 0x114) = *(undefined2 *)(puVar6 + 0x46);
        *(undefined2 *)(iVar19 + 0x116) = uVar1;
        *(undefined2 *)(iVar19 + 0x118) = uVar2;
        *(undefined2 *)(iVar19 + 0x11a) = uVar3;
        *(undefined2 *)(iVar19 + 0x11c) = uVar4;
        iVar19 = iVar19 + 0x124;
      } while (uVar21 < uVar5);
      if (uVar5 != 0) {
        iVar19 = 0;
        uVar21 = 0;
        do {
          uVar21 = uVar21 + 1;
          FUN_ram_4802a59e(DAT_ram_4ff5bd00 + iVar19 + 4);
          iVar19 = iVar19 + 0x124;
        } while (uVar21 < DAT_ram_4ff5bd04);
      }
    }
    FUN_ram_4ff209c6(DAT_ram_4ff5bd00);
    uVar21 = (uint)*(byte *)(param_1 + 0x3414);
    DAT_ram_4ff5bd00 = iVar7;
    DAT_ram_4ff5bd08 = uVar20;
  }
  if (uVar21 != 0) {
    __s = (char *)(param_1 + 0x18);
    uStack_194 = 0;
    do {
      memset(&uStack_164,0,0x124);
      uStack_116 = 0x82;
      uStack_108 = 0x1f401388;
      uStack_d0 = 0x2d0100;
      uStack_114 = 0x10200f0;
      uStack_10c = 0x10301;
      uStack_da = 0x6e;
      uStack_d8 = 0x820079;
      uStack_c9 = 2;
      uStack_c8 = 0x1000001;
      uStack_bc = 0x20100;
      uStack_b8 = 0x4b003e8;
      uStack_b4 = 0x12c04b0;
      uStack_a8 = 0x753007d0;
      uStack_ab = 5;
      uStack_9c = 0xa3c;
      uStack_98 = 0x1f40a00;
      local_94 = 0x960101;
      uStack_90 = 0x9600b4;
      uStack_8c = 0xb400b4;
      uStack_110 = 0x10001;
      uStack_b0 = 0x10001;
      uStack_d3 = 1;
      uStack_c3 = 1;
      uStack_be = 1;
      uStack_a3 = 1;
      uStack_148 = 0x50005;
      uStack_144 = 0x50005;
      local_138[0] = 0x1000d01;
      local_138[1] = 0xf0001;
      local_138[2] = 0x1010101;
      local_138[3] = 0x2010101;
      local_138[4] = 0x200f001;
      uStack_88 = 0xb400f0;
      uStack_84 = 0x6400f0;
      uStack_60 = 4000;
      uStack_5c = 1000;
      uStack_54 = 5000;
      uStack_50 = 0x2ee;
      uStack_4c = CONCAT11(0x2d,(undefined1)uStack_4c);
      uStack_46 = 0x50;
      uStack_44 = 0xfa;
      uStack_7c = 2000;
      uStack_68 = 2000;
      uStack_58 = 2000;
      uStack_78 = 3000;
      uStack_6c = 3000;
      uStack_64 = 3000;
      FUN_ram_4802a8a8(aiStack_160,&DAT_ram_481df390);
      local_138[5] = DAT_ram_48222e78;
      local_138[6] = DAT_ram_48222e7c;
      local_138[7] = DAT_ram_48222e80;
      uStack_118 = DAT_ram_48222e84;
      uStack_104 = DAT_ram_48222e88;
      uStack_100 = DAT_ram_48222e8c;
      uStack_fc = DAT_ram_48222e90;
      uStack_f8 = DAT_ram_48222e94;
      uStack_f6 = DAT_ram_48222e98;
      uStack_f4 = DAT_ram_48222e9a;
      uStack_f2 = DAT_ram_48222e9c;
      uStack_f0 = DAT_ram_48222e9e;
      uStack_ec = DAT_ram_48222ea2;
      uStack_ea = DAT_ram_48222ea4;
      uStack_ee = DAT_ram_48222ea0;
      uStack_164 = *(undefined4 *)(__s + -4);
      uStack_dc = DAT_ram_48222eb4;
      uStack_e8 = DAT_ram_48222ea8;
      uStack_e4 = DAT_ram_48222eac;
      uStack_e0 = DAT_ram_48222eb0;
      FUN_ram_4802a8a8(auStack_174,__s);
      FUN_ram_4802ad2c(aiStack_160,auStack_174);
      FUN_ram_4802a59e(auStack_174);
      if ((char)bStack_151 < '\0') {
        uVar21 = bStack_151 & 0x7f;
      }
      else {
        uVar21 = 0;
        if (aiStack_160[0] != 0) {
          uVar21 = uStack_158;
        }
      }
      sVar8 = strlen(__s);
      if (sVar8 != uVar21) {
LAB_ram_48034f88:
        FUN_ram_4802a59e(aiStack_160);
        return 0;
      }
      uStack_140 = *(undefined4 *)(__s + 0x2c);
      uStack_150 = *(undefined4 *)(__s + 0x1a);
      uStack_14c = *(undefined4 *)(__s + 0x1e);
      uStack_148 = *(undefined4 *)(__s + 0x22);
      uStack_144 = *(undefined4 *)(__s + 0x26);
      uStack_13c = CONCAT11(__s[0x2a],(undefined1)uStack_13c);
      puVar6 = local_138;
      pcVar14 = __s + 0x30;
      do {
        uVar9 = *(undefined4 *)(pcVar14 + 4);
        uVar10 = *(undefined4 *)(pcVar14 + 8);
        uVar12 = *(undefined4 *)(pcVar14 + 0xc);
        *puVar6 = *(undefined4 *)pcVar14;
        puVar6[1] = uVar9;
        puVar6[2] = uVar10;
        puVar6[3] = uVar12;
        pcVar14 = pcVar14 + 0x10;
        puVar6 = puVar6 + 4;
      } while (pcVar14 != __s + 0xd0);
      puVar13 = &local_94;
      *puVar6 = *(undefined4 *)pcVar14;
      pcVar14 = __s + 0xd4;
      do {
        uVar10 = *(undefined4 *)(pcVar14 + 4);
        uVar12 = *(undefined4 *)(pcVar14 + 8);
        *puVar13 = *(undefined4 *)pcVar14;
        uVar9 = *(undefined4 *)(pcVar14 + 0xc);
        puVar13[1] = uVar10;
        uVar10 = *(undefined4 *)(pcVar14 + 0x10);
        puVar13[2] = uVar12;
        uVar12 = *(undefined4 *)(pcVar14 + 0x14);
        puVar13[3] = uVar9;
        puVar13[4] = uVar10;
        puVar13[5] = uVar12;
        pcVar14 = pcVar14 + 0x18;
        puVar13 = puVar13 + 6;
      } while (pcVar14 != __s + 0x11c);
      uStack_4c = *(undefined2 *)(__s + 0x11c);
      uStack_48 = *(undefined2 *)(__s + 0x120);
      uStack_46 = *(undefined2 *)(__s + 0x122);
      uStack_4a = *(undefined2 *)(__s + 0x11e);
      uStack_44 = *(undefined2 *)(__s + 0x124);
      if (DAT_ram_4ff5bd04 == DAT_ram_4ff5bd08) {
        if (DAT_ram_4ff5bd08 == 0) {
          iVar7 = 0x490;
          uVar21 = 4;
        }
        else {
          uVar21 = 0xe07038;
          if (DAT_ram_4ff5bd08 < 0x70381d) {
            uVar21 = DAT_ram_4ff5bd08 << 1;
          }
          if (uVar21 <= DAT_ram_4ff5bd08) goto LAB_ram_48034f88;
          iVar7 = uVar21 * 0x124;
        }
        iVar7 = FUN_ram_4ff206d8(iVar7,0x404);
        if (iVar7 == 0) goto LAB_ram_48034f88;
        iVar19 = iVar7 + 4;
        if (DAT_ram_4ff5bd04 != 0) {
          uStack_190 = 0;
          do {
            puVar6 = (undefined4 *)(DAT_ram_4ff5bd00 + (-4 - iVar7) + iVar19);
            *(undefined4 *)(iVar19 + -4) = *puVar6;
            FUN_ram_4802ace6(iVar19,puVar6 + 1);
            uVar10 = puVar6[8];
            uVar12 = puVar6[9];
            uVar17 = puVar6[6];
            uVar9 = puVar6[7];
            *(undefined4 *)(iVar19 + 0x10) = puVar6[5];
            uVar1 = *(undefined2 *)(puVar6 + 10);
            *(undefined4 *)(iVar19 + 0x1c) = uVar10;
            *(undefined4 *)(iVar19 + 0x20) = uVar12;
            *(undefined2 *)(iVar19 + 0x24) = uVar1;
            *(undefined4 *)(iVar19 + 0x14) = uVar17;
            *(undefined4 *)(iVar19 + 0x18) = uVar9;
            puVar15 = puVar6 + 0xb;
            puVar13 = (undefined4 *)(iVar19 + 0x28);
            do {
              uVar9 = puVar15[1];
              uVar10 = puVar15[2];
              uVar12 = puVar15[3];
              *puVar13 = *puVar15;
              puVar13[1] = uVar9;
              puVar13[2] = uVar10;
              puVar13[3] = uVar12;
              puVar15 = puVar15 + 4;
              puVar13 = puVar13 + 4;
            } while (puVar15 != puVar6 + 0x33);
            puVar11 = (undefined4 *)(iVar19 + 0xcc);
            puVar16 = puVar6 + 0x34;
            *puVar13 = *puVar15;
            do {
              uVar18 = puVar16[1];
              uVar17 = puVar16[2];
              uVar9 = puVar16[3];
              uVar10 = puVar16[4];
              uVar12 = puVar16[5];
              *puVar11 = *puVar16;
              puVar11[1] = uVar18;
              puVar11[2] = uVar17;
              puVar11[3] = uVar9;
              puVar11[4] = uVar10;
              puVar11[5] = uVar12;
              puVar16 = puVar16 + 6;
              puVar11 = puVar11 + 6;
            } while (puVar16 != puVar6 + 0x46);
            uVar1 = *(undefined2 *)(puVar6 + 0x47);
            uStack_190 = uStack_190 + 1;
            *(undefined2 *)(iVar19 + 0x114) = *(undefined2 *)(puVar6 + 0x46);
            uVar2 = *(undefined2 *)((int)puVar6 + 0x11a);
            uVar3 = *(undefined2 *)((int)puVar6 + 0x11e);
            uVar4 = *(undefined2 *)(puVar6 + 0x48);
            *(undefined2 *)(iVar19 + 0x118) = uVar1;
            uVar20 = DAT_ram_4ff5bd04;
            *(undefined2 *)(iVar19 + 0x116) = uVar2;
            *(undefined2 *)(iVar19 + 0x11a) = uVar3;
            *(undefined2 *)(iVar19 + 0x11c) = uVar4;
            iVar19 = iVar19 + 0x124;
          } while (uStack_190 < uVar20);
          if (uVar20 != 0) {
            iVar19 = 0;
            uVar20 = 0;
            do {
              uVar20 = uVar20 + 1;
              FUN_ram_4802a59e(DAT_ram_4ff5bd00 + iVar19 + 4);
              iVar19 = iVar19 + 0x124;
            } while (uVar20 < DAT_ram_4ff5bd04);
          }
        }
        FUN_ram_4ff209c6(DAT_ram_4ff5bd00);
        DAT_ram_4ff5bd00 = iVar7;
        DAT_ram_4ff5bd08 = uVar21;
      }
      puVar6 = (undefined4 *)(DAT_ram_4ff5bd00 + DAT_ram_4ff5bd04 * 0x124);
      *puVar6 = uStack_164;
      FUN_ram_4802ace6(puVar6 + 1,aiStack_160);
      puVar6[9] = uStack_140;
      *(undefined2 *)(puVar6 + 10) = uStack_13c;
      puVar15 = local_138;
      puVar6[5] = uStack_150;
      puVar6[6] = uStack_14c;
      puVar6[7] = uStack_148;
      puVar6[8] = uStack_144;
      puVar13 = puVar6 + 0xb;
      do {
        uVar9 = puVar15[1];
        uVar10 = puVar15[2];
        uVar12 = puVar15[3];
        *puVar13 = *puVar15;
        puVar13[1] = uVar9;
        puVar13[2] = uVar10;
        puVar13[3] = uVar12;
        puVar15 = puVar15 + 4;
        puVar13 = puVar13 + 4;
      } while (puVar15 != &uStack_98);
      puVar11 = puVar6 + 0x34;
      puVar16 = &local_94;
      *puVar13 = *puVar15;
      do {
        uVar18 = puVar16[1];
        uVar17 = puVar16[2];
        uVar9 = puVar16[3];
        uVar10 = puVar16[4];
        uVar12 = puVar16[5];
        *puVar11 = *puVar16;
        puVar11[1] = uVar18;
        puVar11[2] = uVar17;
        puVar11[3] = uVar9;
        puVar11[4] = uVar10;
        puVar11[5] = uVar12;
        puVar16 = puVar16 + 6;
        puVar11 = puVar11 + 6;
      } while (puVar16 != (undefined4 *)&uStack_4c);
      *(undefined2 *)((int)puVar6 + 0x11a) = uStack_4a;
      *(undefined2 *)(puVar6 + 0x47) = uStack_48;
      DAT_ram_4ff5bd04 = DAT_ram_4ff5bd04 + 1;
      *(undefined2 *)(puVar6 + 0x46) = uStack_4c;
      *(undefined2 *)((int)puVar6 + 0x11e) = uStack_46;
      *(undefined2 *)(puVar6 + 0x48) = uStack_44;
      FUN_ram_4802a59e(aiStack_160);
      __s = __s + 0x1a0;
      uStack_194 = uStack_194 + 1;
    } while (uStack_194 < *(byte *)(param_1 + 0x3414));
  }
  return 1;
}


