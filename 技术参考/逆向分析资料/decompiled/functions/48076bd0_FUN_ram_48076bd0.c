/* Firmware entry: 0x48076bd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_48076bd0(int *param_1,int param_2)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  void *pvVar12;
  int iVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  short sVar19;
  undefined **ppuVar20;
  short *psVar21;
  int *piVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  short sVar26;
  int iVar27;
  undefined2 *puVar28;
  int *piVar29;
  uint uVar30;
  undefined2 uVar31;
  int iVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  undefined2 uStack_288;
  int iStack_284;
  undefined1 uStack_280;
  undefined1 uStack_27c;
  undefined1 uStack_274;
  undefined1 uStack_270;
  undefined1 uStack_26c;
  undefined1 uStack_268;
  undefined1 uStack_264;
  undefined1 uStack_260;
  undefined1 uStack_25c;
  undefined1 uStack_258;
  undefined1 uStack_254;
  undefined1 uStack_250;
  undefined1 uStack_24c;
  undefined1 uStack_248;
  undefined1 uStack_244;
  undefined1 uStack_240;
  undefined2 uStack_23c;
  undefined2 uStack_238;
  undefined4 uStack_234;
  undefined2 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined *puStack_222;
  undefined1 auStack_220 [64];
  int local_1e0;
  undefined1 auStack_1dc [2];
  undefined2 uStack_1da;
  undefined4 auStack_1d8 [7];
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined4 uStack_144;
  undefined *puStack_140;
  undefined2 uStack_13e;
  undefined4 uStack_13c;
  undefined1 uStack_137;
  undefined1 uStack_132;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_11f;
  undefined4 uStack_11c;
  undefined1 uStack_117;
  undefined2 uStack_110;
  undefined1 uStack_10b;
  undefined2 uStack_10a;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_bf;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined4 uStack_ac;
  undefined1 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined2 local_99 [12];
  undefined2 uStack_80;
  short local_7e [30];
  short asStack_42 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6dd78 == '\0') || (0x20 < DAT_ram_4ff5c540)) {
    return 0;
  }
  if (param_2 == 0) {
    if (DAT_ram_4ff6dca9 == '\0') {
      return 0;
    }
    piVar22 = (int *)(DAT_ram_4ff6dcac + 0x35f4);
    piVar15 = (int *)(DAT_ram_4ff6dcac + 0x6be4);
    piVar25 = param_1;
    do {
      iVar10 = piVar22[1];
      iVar13 = piVar22[2];
      iVar27 = piVar22[3];
      *piVar25 = *piVar22;
      piVar25[1] = iVar10;
      piVar25[2] = iVar13;
      piVar25[3] = iVar27;
      piVar22 = piVar22 + 4;
      piVar25 = piVar25 + 4;
    } while (piVar22 != piVar15);
    *piVar25 = *piVar22;
  }
  else {
    iVar10 = FUN_ram_4804e46c();
    if (iVar10 == 0) {
      return 0;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 1;
    *(undefined1 *)(param_1 + 4) = 1;
    piVar25 = param_1 + 0x5d;
    do {
      pvVar12 = memset(piVar25 + -0x58,0,0x1a0);
      *(undefined1 *)((int)piVar25 + -299) = 0xd;
      *(undefined2 *)((int)piVar25 + -0x126) = 0xf;
      piVar25[-0x43] = 0x82008c;
      *(undefined1 *)((int)piVar25 + -0x11d) = 2;
      *(undefined1 *)((int)piVar25 + -0x119) = 2;
      *(undefined1 *)((int)piVar25 + -0x106) = 2;
      *(undefined1 *)((int)piVar25 + -0x11b) = 0xf0;
      *(undefined1 *)(piVar25 + -0x42) = 0xf0;
      piVar25[-0x46] = 0x46003c;
      piVar25[-0x45] = 0x5a0050;
      piVar25[-0x44] = 0x780064;
      *(undefined1 *)((int)piVar25 + -0xff) = 3;
      *(undefined2 *)((int)piVar25 + -0x13a) = 5;
      *(undefined2 *)(piVar25 + -0x4e) = 5;
      *(undefined2 *)((int)piVar25 + -0x136) = 5;
      *(undefined2 *)(piVar25 + -0x4d) = 5;
      *(undefined1 *)(piVar25 + -0x4b) = 1;
      *(undefined1 *)((int)piVar25 + -0x129) = 1;
      *(undefined1 *)(piVar25 + -0x4a) = 1;
      *(undefined1 *)(piVar25 + -0x49) = 1;
      *(undefined1 *)((int)piVar25 + -0x123) = 1;
      *(undefined1 *)((int)piVar25 + -0x122) = 1;
      *(undefined1 *)((int)piVar25 + -0x121) = 1;
      *(undefined1 *)(piVar25 + -0x48) = 1;
      *(undefined1 *)((int)piVar25 + -0x11f) = 1;
      *(undefined1 *)((int)piVar25 + -0x11e) = 1;
      *(undefined1 *)(piVar25 + -0x47) = 1;
      *(undefined1 *)((int)piVar25 + -0x105) = 1;
      *(undefined1 *)(piVar25 + -0x41) = 1;
      *(undefined1 *)((int)piVar25 + -0x102) = 1;
      *(undefined1 *)(piVar25 + -0x40) = 1;
      *(undefined1 *)((int)piVar25 + -0xfe) = 1;
      piVar25[-0x3f] = 0x1f401388;
      piVar25[-0x37] = 0x46003c;
      piVar25[-0x36] = 0x5a0050;
      piVar25[-0x35] = 0x780064;
      piVar25[-0x3d] = 0x500046;
      *(undefined1 *)((int)piVar25 + -0xbd) = 2;
      *(undefined1 *)((int)piVar25 + -0xae) = 2;
      piVar25[-0x3e] = 0x3c003c;
      piVar25[-0x3c] = 0x64005a;
      piVar25[-0x3b] = 0x3c0078;
      piVar25[-0x3a] = 0x4d0042;
      piVar25[-0x39] = 0x630058;
      piVar25[-0x38] = 0x84006e;
      piVar25[-0x34] = 0x6e008c;
      piVar25[-0x33] = 0x820079;
      piVar25[-0x2b] = 0x4b003e8;
      piVar25[-0x2a] = 0x12c04b0;
      piVar25[-0x27] = 0x753007d0;
      *(undefined2 *)(piVar25 + -0x24) = 0xa3c;
      *(undefined1 *)((int)piVar25 + -0x8b) = 10;
      *(undefined2 *)((int)piVar25 + -0x8a) = 500;
      *(undefined2 *)((int)piVar25 + -0xc2) = 0x2d;
      *(undefined1 *)((int)piVar25 + -199) = 1;
      *(undefined1 *)((int)piVar25 + -0xc3) = 1;
      *(undefined1 *)(piVar25 + -0x2f) = 1;
      *(undefined1 *)((int)piVar25 + -0xb9) = 1;
      *(undefined1 *)((int)piVar25 + -0xb7) = 1;
      *(undefined1 *)((int)piVar25 + -0xb2) = 1;
      *(undefined1 *)((int)piVar25 + -0xaf) = 1;
      *(undefined1 *)(piVar25 + -0x29) = 1;
      *(undefined1 *)((int)piVar25 + -0xa2) = 1;
      *(undefined1 *)((int)piVar25 + -0x9f) = 5;
      *(undefined1 *)((int)piVar25 + -0x97) = 1;
      *(undefined **)(piVar25 + -0x22) = &sedeleg;
      *(undefined1 *)((int)piVar25 + -0x3f) = 0x2d;
      *(undefined1 *)((int)piVar25 + -0x26) = 3;
      piVar25[-0x14] = 1000;
      piVar25[-0x11] = 0x2ee;
      *(undefined2 *)(piVar25 + -0x21) = 0xb4;
      *(undefined2 *)(piVar25 + -0x20) = 0xb4;
      *(undefined2 *)((int)piVar25 + -0x7e) = 0xb4;
      *(undefined2 *)((int)piVar25 + -0x7a) = 0xb4;
      *(undefined1 *)((int)piVar25 + -0x1e) = 1;
      *(undefined1 *)((int)piVar25 + -0x1d) = 0x3c;
      *(undefined1 *)(piVar25 + -7) = 0x5a;
      *(undefined1 *)((int)piVar25 + -0x1b) = 0x9f;
      piVar25[-0x15] = 4000;
      piVar25[-0x12] = 5000;
      *(undefined2 *)((int)piVar25 + -0x3a) = 0x50;
      *(undefined2 *)(piVar25 + -0xe) = 0xfa;
      *(undefined1 *)((int)piVar25 + -0x32) = 7;
      piVar25[-0xb] = -0x5f00fab0;
      piVar25[-9] = 0x7e3f0128;
      *(undefined2 *)(piVar25 + -8) = 0xe6c2;
      *(undefined2 *)((int)piVar25 + -0x86) = 0x96;
      *(undefined2 *)((int)piVar25 + -0x82) = 0x96;
      *(undefined2 *)(piVar25 + -0x1f) = 0xf0;
      *(undefined2 *)(piVar25 + -0x1e) = 0xf0;
      *(undefined2 *)((int)piVar25 + -0x76) = 100;
      *(undefined1 *)((int)piVar25 + -0x33) = 100;
      piVar25[-0x1c] = 2000;
      piVar25[-0x17] = 2000;
      piVar25[-0x13] = 2000;
      piVar25[-0x1b] = 3000;
      piVar25[-0x18] = 3000;
      piVar25[-0x16] = 3000;
      *(undefined1 *)((int)piVar25 + -0x1a) = 0xe6;
      piVar15 = (int *)((int)piVar25 + -0x19);
      do {
        *(undefined1 *)piVar15 = 1;
        *(undefined1 *)((int)piVar15 + 1) = 0x3c;
        *(undefined1 *)((int)piVar15 + 2) = 0x5a;
        *(undefined1 *)((int)piVar15 + 3) = 0x9f;
        *(undefined1 *)(piVar15 + 1) = 0xe6;
        piVar15 = (int *)((int)piVar15 + 5);
      } while (piVar15 != piVar25);
      *(undefined2 *)piVar25 = 0;
      memset((void *)((int)pvVar12 + 0x162),0,0x3c);
      piVar15 = piVar25;
      sVar26 = 5;
      do {
        piVar15 = (int *)((int)piVar15 + 2);
        sVar19 = sVar26 + 5;
        *(short *)piVar15 = sVar26;
        sVar26 = sVar19;
      } while (sVar19 != 0x9b);
      piVar25 = piVar25 + 0x68;
    } while (param_1 + 0xd5d != piVar25);
    *(undefined1 *)(param_1 + 0xd05) = 0;
    memset((void *)((int)param_1 + 0x3415),0,100);
    param_1[0xd1f] = 0x1000d01;
    *(undefined2 *)((int)param_1 + 0x3482) = 0xf;
    param_1[0xd21] = 0x1010101;
    param_1[0xd22] = 0x2010101;
    param_1[0xd23] = 0x200f001;
    param_1[0xd27] = 0x82008c;
    param_1[0xd28] = 0x10200f0;
    param_1[0xd2a] = 0x10301;
    param_1[0xd2b] = 0x1f401388;
    param_1[0xd2c] = 0x3c003c;
    param_1[0xd2d] = 0x500046;
    param_1[0xd2e] = 0x64005a;
    param_1[0xd2f] = 0x3c0078;
    param_1[0xd30] = 0x4d0042;
    param_1[0xd31] = 0x630058;
    param_1[0xd32] = 0x84006e;
    param_1[0xd36] = 0x6e008c;
    param_1[0xd37] = 0x820079;
    param_1[0xd39] = 0x2d0100;
    param_1[0xd3a] = 0x2000000;
    param_1[0xd3b] = 0x1000001;
    param_1[0xd3d] = 0x10000;
    param_1[0xd24] = 0x46003c;
    param_1[0xd33] = 0x46003c;
    param_1[0xd25] = 0x5a0050;
    param_1[0xd34] = 0x5a0050;
    param_1[0xd26] = 0x780064;
    param_1[0xd35] = 0x780064;
    param_1[0xd29] = 0x10001;
    param_1[0xd38] = 0x100;
    param_1[0xd3c] = 0x100;
    *(undefined1 *)(param_1 + 0xd20) = 1;
    *(undefined2 *)(param_1 + 0xd3e) = 0x100;
    param_1[0xd3f] = 0x4b003e8;
    param_1[0xd44] = 0x100;
    param_1[0xd41] = 0x10001;
    *(undefined1 *)((int)param_1 + 0x34fa) = 2;
    *(undefined2 *)(param_1 + 0xd46) = 0xa3c;
    param_1[0xd49] = 0x9600b4;
    param_1[0xd4c] = 0x6400f0;
    param_1[0xd40] = 0x12c04b0;
    param_1[0xd42] = 0x500;
    param_1[0xd43] = 0x753007d0;
    param_1[0xd47] = 0x1f40a00;
    param_1[0xd48] = 0x960101;
    param_1[0xd58] = 5000;
    param_1[0xd4e] = 2000;
    param_1[0xd53] = 2000;
    param_1[0xd57] = 2000;
    param_1[0xd4a] = 0xb400b4;
    param_1[0xd4b] = 0xb400f0;
    param_1[0xd55] = 4000;
    param_1[0xd5a] = 0x2d00;
    param_1[0xd4f] = 3000;
    param_1[0xd52] = 3000;
    param_1[0xd54] = 3000;
    *(undefined1 *)(param_1 + 0xd45) = 0;
    *(undefined2 *)(param_1 + 0xd4d) = 0;
    param_1[0xd50] = 0;
    param_1[0xd51] = 0;
    *(undefined1 *)((int)param_1 + 0x3572) = 1;
    param_1[0xd56] = 1000;
    param_1[0xd59] = 0x2ee;
    param_1[0xd5b] = 0x500000;
    *(undefined2 *)(param_1 + 0xd5c) = 0xfa;
    param_1[0xd5d] = 0x960064;
    param_1[0xd5e] = 0x6405;
    *(undefined2 *)(param_1 + 0xd5f) = 0x6400;
    param_1[0xd63] = 0x7e3f0128;
    param_1[0xd64] = 0x3c01e6c2;
    *(undefined2 *)(param_1 + 0xd65) = 0x9f5a;
    param_1[0xd60] = 0;
    *(undefined1 *)((int)param_1 + 0x357e) = 7;
    param_1[0xd61] = -0x5f00fab0;
    param_1[0xd62] = 0x30000;
    *(undefined1 *)((int)param_1 + 0x3596) = 0xe6;
    piVar25 = (int *)((int)param_1 + 0x3597);
    do {
      *(undefined1 *)piVar25 = 1;
      *(undefined1 *)((int)piVar25 + 1) = 0x3c;
      *(undefined1 *)((int)piVar25 + 2) = 0x5a;
      *(undefined1 *)((int)piVar25 + 3) = 0x9f;
      *(undefined1 *)(piVar25 + 1) = 0xe6;
      piVar25 = (int *)((int)piVar25 + 5);
    } while (param_1 + 0xd6c != piVar25);
    *(undefined2 *)(param_1 + 0xd6c) = 0;
    memset((void *)((int)param_1 + 0x35b2),0,0x3c);
    psVar21 = (short *)((int)param_1 + 0x35b2);
    sVar26 = 5;
    do {
      sVar19 = sVar26 + 5;
      *psVar21 = sVar26;
      cVar8 = DAT_ram_4ff6dd78;
      psVar21 = psVar21 + 1;
      sVar26 = sVar19;
    } while (sVar19 != 0x9b);
    *(undefined2 *)((int)param_1 + 0x35ee) = 0;
    *(undefined2 *)(param_1 + 0xd7c) = 0x1e;
    if (cVar8 == '\0') goto LAB_ram_48076c7a;
  }
  FUN_ram_48052e70();
LAB_ram_48076c7a:
  iVar23 = DAT_ram_4ff6dd80;
  iVar27 = DAT_ram_4ff6dd7c;
  uVar30 = DAT_ram_4ff5c540;
  iVar13 = DAT_ram_4ff47e80;
  iVar10 = DAT_ram_4ff47e7c;
  uVar18 = DAT_ram_4ff47e78;
  *param_1 = DAT_ram_4ff6dd80;
  param_1[1] = iVar27;
  param_1[2] = iVar13;
  param_1[3] = iVar10;
  *(undefined1 *)(param_1 + 4) = uVar18;
  *(char *)(param_1 + 0xd05) = (char)uVar30;
  if (uVar30 != 0) {
    iVar10 = 0;
    uVar30 = 0;
    piVar25 = param_1 + 6;
    do {
      piVar15 = (int *)(DAT_ram_4ff5c53c + iVar10);
      memset(&local_1e0,0,0x1a0);
      uStack_1a8 = 0xf0001;
      uStack_1a4 = 0x1010101;
      uStack_19c = 0x200f001;
      uStack_1a0 = 0x2010101;
      uStack_18c = 0x82008c;
      uStack_188 = 0x10200f0;
      uStack_180 = 0x10301;
      uStack_178 = 0x3c003c;
      uStack_17c = 0x1f401388;
      uStack_174 = 0x500046;
      uStack_170 = 0x64005a;
      uStack_16c = 0x3c0078;
      uStack_164 = 0x630058;
      uStack_1b8 = 0x50005;
      uStack_168 = 0x4d0042;
      uStack_160 = 0x84006e;
      uStack_150 = 0x6e008c;
      uStack_14c = 0x820079;
      uStack_13c = 0x1000001;
      uStack_144 = 0x2d0100;
      uStack_198 = 0x46003c;
      uStack_15c = 0x46003c;
      uStack_1ac = 0x1000d01;
      uStack_13e = CONCAT11(2,(undefined1)uStack_13e);
      uStack_194 = 0x5a0050;
      uStack_158 = 0x5a0050;
      uStack_190 = 0x780064;
      _uStack_1bc = CONCAT22(5,uStack_1bc);
      uStack_1b4 = CONCAT22(uStack_1b4._2_2_,5);
      uStack_147 = 1;
      uStack_154 = 0x780064;
      uStack_110 = 0xa3c;
      uStack_130 = 0x20100;
      uStack_10b = 10;
      uStack_10a = 500;
      uStack_184 = 0x10001;
      uStack_124 = 0x10001;
      uStack_128 = 0x12c04b0;
      uStack_108 = 0x960101;
      uStack_104 = 0x9600b4;
      uStack_f8 = 0x6400f0;
      uStack_100 = 0xb400b4;
      uStack_fc = 0xb400f0;
      uStack_d4 = 4000;
      uStack_c8 = 5000;
      uStack_c4 = 0x2ee;
      uStack_11c = 0x753007d0;
      uStack_bf = 0x2d;
      uStack_ba = 0x50;
      uStack_b8 = 0xfa;
      uStack_b3 = 100;
      uStack_b2 = 7;
      uStack_ac = 0xa0ff0550;
      uStack_ec = 3000;
      uStack_137 = 1;
      uStack_132 = 1;
      uStack_11f = 5;
      uStack_117 = 1;
      uStack_12c = 0x4b003e8;
      uStack_d0 = 1000;
      uStack_f0 = 2000;
      uStack_dc = 2000;
      uStack_cc = 2000;
      uStack_e0 = 3000;
      uStack_d8 = 3000;
      uStack_a6 = 3;
      uStack_a0 = 0x3c01e6c2;
      uStack_9c = 0x9f5a;
      puVar28 = local_99;
      uStack_9a = 0xe6;
      uStack_a4 = 0x7e3f0128;
      do {
        *(undefined1 *)puVar28 = 1;
        *(undefined1 *)((int)puVar28 + 1) = 0x3c;
        *(undefined1 *)(puVar28 + 1) = 0x5a;
        *(undefined1 *)((int)puVar28 + 3) = 0x9f;
        *(undefined1 *)(puVar28 + 2) = 0xe6;
        puVar28 = (undefined2 *)((int)puVar28 + 5);
      } while (&uStack_80 != puVar28);
      uStack_80 = 0;
      memset(local_7e,0,0x3c);
      psVar21 = local_7e;
      sVar26 = 5;
      do {
        *psVar21 = sVar26;
        sVar26 = sVar26 + 5;
        psVar21 = psVar21 + 1;
      } while (asStack_42 != psVar21);
      FUN_ram_4ff45158(piVar25 + -1,&local_1e0,0x19e);
      piVar25[-1] = *piVar15;
      if (*(char *)((int)piVar15 + 0x13) < '\0') {
        if (0x18 < (*(byte *)((int)piVar15 + 0x13) & 0x7f)) {
          return 0;
        }
        FUN_ram_4ff45158(piVar25,piVar15 + 1);
        if (*(char *)((int)piVar15 + 0x13) < '\0') goto LAB_ram_480777b2;
LAB_ram_48076ffe:
        uVar16 = 0;
        if (piVar15[1] != 0) {
          uVar16 = piVar15[3];
        }
      }
      else {
        uVar16 = 0;
        if ((piVar15[1] != 0) && (uVar16 = piVar15[3], 0x18 < uVar16)) {
          return 0;
        }
        FUN_ram_4ff45158(piVar25,piVar15[1],uVar16);
        if (-1 < *(char *)((int)piVar15 + 0x13)) goto LAB_ram_48076ffe;
LAB_ram_480777b2:
        uVar16 = *(byte *)((int)piVar15 + 0x13) & 0x7f;
      }
      piVar14 = piVar25 + 0xc;
      *(undefined1 *)((int)param_1 + uVar16 + uVar30 * 0x1a0 + 0x18) = 0;
      uVar31 = *(undefined2 *)((int)piVar15 + 0x16);
      iVar13 = piVar15[6];
      uVar33 = *(undefined2 *)((int)piVar15 + 0x1a);
      *(short *)((int)piVar25 + 0x1a) = (short)piVar15[5];
      iVar27 = piVar15[7];
      *(undefined2 *)(piVar25 + 7) = uVar31;
      uVar31 = *(undefined2 *)((int)piVar15 + 0x1e);
      *(short *)((int)piVar25 + 0x1e) = (short)iVar13;
      iVar13 = piVar15[8];
      *(undefined2 *)(piVar25 + 8) = uVar33;
      uVar33 = *(undefined2 *)((int)piVar15 + 0x22);
      *(short *)((int)piVar25 + 0x26) = (short)iVar13;
      uVar18 = *(undefined1 *)((int)piVar15 + 0x29);
      *(undefined2 *)(piVar25 + 10) = uVar33;
      iVar13 = piVar15[9];
      *(short *)((int)piVar25 + 0x22) = (short)iVar27;
      *(undefined2 *)(piVar25 + 9) = uVar31;
      *(undefined1 *)((int)piVar25 + 0x2a) = uVar18;
      piVar25[0xb] = iVar13;
      piVar22 = piVar15 + 0xb;
      do {
        iVar13 = piVar22[1];
        iVar27 = piVar22[2];
        iVar23 = piVar22[3];
        *piVar14 = *piVar22;
        piVar14[1] = iVar13;
        piVar14[2] = iVar27;
        piVar14[3] = iVar23;
        piVar22 = piVar22 + 4;
        piVar14 = piVar14 + 4;
      } while (piVar22 != piVar15 + 0x33);
      piVar24 = piVar25 + 0x35;
      piVar29 = piVar15 + 0x34;
      *piVar14 = *piVar22;
      do {
        iVar32 = piVar29[1];
        iVar13 = piVar29[2];
        iVar27 = piVar29[3];
        iVar23 = piVar29[4];
        iVar17 = piVar29[5];
        *piVar24 = *piVar29;
        piVar24[1] = iVar32;
        piVar24[2] = iVar13;
        piVar24[3] = iVar27;
        piVar24[4] = iVar23;
        piVar24[5] = iVar17;
        piVar29 = piVar29 + 6;
        piVar24 = piVar24 + 6;
      } while (piVar29 != piVar15 + 0x46);
      iVar13 = piVar15[0x46];
      uVar31 = *(undefined2 *)((int)piVar15 + 0x11a);
      iVar27 = piVar15[0x47];
      uVar33 = *(undefined2 *)((int)piVar15 + 0x11e);
      *(short *)(piVar25 + 0x49) = (short)piVar15[0x48];
      *(short *)(piVar25 + 0x47) = (short)iVar13;
      *(undefined2 *)((int)piVar25 + 0x11e) = uVar31;
      *(short *)(piVar25 + 0x48) = (short)iVar27;
      *(undefined2 *)((int)piVar25 + 0x122) = uVar33;
      iVar13 = *piVar15;
      if ((param_2 == 0) && (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) != 0)) {
        piVar14 = (int *)(DAT_ram_4ff6dcac + 0x3608);
        uVar16 = 0;
        piVar22 = piVar14;
LAB_ram_4807769e:
        iVar27 = *piVar22;
        piVar22 = piVar22 + 0x68;
        if (iVar27 != iVar13) goto LAB_ram_48077698;
        piVar15 = piVar25 + 0x57;
        FUN_ram_4ff45158((int)piVar25 + 0x126,(int)piVar14 + uVar16 * 0x1a0 + 0x12a,0x36);
        piVar22 = piVar14 + uVar16 * 0x68 + 0x58;
        do {
          iVar27 = piVar22[1];
          iVar23 = piVar22[2];
          iVar17 = piVar22[3];
          iVar32 = piVar22[4];
          *piVar15 = *piVar22;
          piVar15[1] = iVar27;
          piVar15[2] = iVar23;
          piVar15[3] = iVar17;
          piVar15[4] = iVar32;
          piVar22 = piVar22 + 5;
          piVar15 = piVar15 + 5;
        } while (piVar22 != piVar14 + uVar16 * 0x68 + 0x67);
        *(short *)piVar15 = (short)*piVar22;
        iVar23 = DAT_ram_4ff6dd80;
        if (DAT_ram_4ff6dd80 == iVar13) goto LAB_ram_48077712;
        goto LAB_ram_48077156;
      }
LAB_ram_48077104:
      iVar13 = FUN_ram_48041cb4(iVar13,(int)piVar25 + 0x126,&local_1e0);
      if (iVar13 == 0) {
        return 0;
      }
      iVar13 = FUN_ram_4804210e(*piVar15,piVar25 + 0x57);
      if (iVar13 == 2) {
        return 0;
      }
      if (iVar13 == 0) {
        FUN_ram_480346c0(auStack_220,piVar15 + 0xb);
        FUN_ram_4ff45158(piVar25 + 0x57,auStack_220,0x3e);
      }
      iVar13 = *piVar15;
      iVar23 = DAT_ram_4ff6dd80;
      if (DAT_ram_4ff6dd80 == iVar13) {
LAB_ram_48077712:
        iVar23 = DAT_ram_4ff6dd80;
        iStack_284 = (int)piVar25 + 0x126;
        piVar15 = piVar25 + 0x57;
        if (DAT_ram_4ff6dd4c != iVar13) {
          return 0;
        }
        if (DAT_ram_4ff6dd4a == '\0') {
          return 0;
        }
        if (DAT_ram_4ff6dd38 != iVar13) {
          return 0;
        }
        if (DAT_ram_4ff6dd36 == '\0') {
          return 0;
        }
        FUN_ram_4ff45158(iStack_284,&DAT_ram_4ff4894c,0x36);
        piVar22 = &DAT_ram_4ff5c4c4;
        do {
          iVar13 = piVar22[1];
          iVar27 = piVar22[2];
          iVar17 = piVar22[3];
          iVar32 = piVar22[4];
          *piVar15 = *piVar22;
          piVar15[1] = iVar13;
          piVar15[2] = iVar27;
          piVar15[3] = iVar17;
          piVar15[4] = iVar32;
          piVar22 = piVar22 + 5;
          piVar15 = piVar15 + 5;
        } while (piVar22 != (int *)&DAT_ram_4ff5c500);
        *(undefined2 *)piVar15 = _DAT_ram_4ff5c500;
      }
LAB_ram_48077156:
      uVar30 = uVar30 + 1;
      iVar10 = iVar10 + 0x124;
      piVar25 = piVar25 + 0x68;
    } while (uVar30 < DAT_ram_4ff5c540);
  }
  if (iVar23 == 0) {
    FUN_ram_4805883a(&local_1e0,&DAT_ram_4ff60e20);
    uStack_22c = uStack_1b8;
    uStack_288 = (undefined2)uStack_17c;
    uStack_230 = (undefined2)((uint)uStack_17c >> 0x10);
    iStack_284._0_2_ = (undefined2)uStack_178;
    uStack_238 = (undefined2)((uint)uStack_178 >> 0x10);
    uStack_23c = (undefined2)uStack_174;
    uStack_240 = (undefined1)((uint)uStack_174 >> 0x10);
    uStack_244 = (undefined1)((uint)uStack_174 >> 0x18);
    uStack_248 = (undefined1)uStack_170;
    uStack_24c = (undefined1)((uint)uStack_170 >> 8);
    uStack_250 = (undefined1)((uint)uStack_170 >> 0x10);
    uStack_254 = (undefined1)((uint)uStack_170 >> 0x18);
    uStack_258 = (undefined1)uStack_16c;
    uStack_25c = (undefined1)((uint)uStack_16c >> 8);
    uStack_260 = (undefined1)((uint)uStack_16c >> 0x10);
    uStack_264 = (undefined1)((uint)uStack_16c >> 0x18);
    uStack_268 = (undefined1)uStack_168;
    uStack_270 = (undefined1)((uint)uStack_168 >> 8);
    uStack_274 = (undefined1)((uint)uStack_168 >> 0x10);
    uStack_27c = (undefined1)((uint)uStack_168 >> 0x18);
    uStack_280 = (undefined1)uStack_164;
    uStack_228 = uStack_160;
    uStack_234 = uStack_154;
    uStack_26c = uStack_148;
    puStack_222 = puStack_140;
    uVar31 = uStack_184._2_2_;
    uVar33 = (undefined2)uStack_144;
    uVar18 = uStack_164._1_1_;
    uVar9 = uStack_164._2_1_;
  }
  else {
    FUN_ram_4805228e(&uStack_1ac);
    uStack_228 = 0x4b003e8;
    uStack_158 = 0x10001;
    uStack_14c = 0x100;
    puStack_222 = &mcycle;
    uStack_234 = 0x500;
    uStack_238 = 0x2d;
    uStack_22c = 0x10001;
    uStack_150 = 0x753007d0;
    uStack_15c = 0x12c04b0;
    uStack_1b0 = 0x1f401388;
    auStack_1d8[6] = 0x82008c;
    auStack_1d8[5] = 0x780064;
    auStack_1d8[4] = 0x5a0050;
    auStack_1d8[3] = 0x46003c;
    iStack_284._0_2_ = 0x100;
    uStack_288 = 0x100;
    uStack_1b4 = 0x10301;
    _uStack_1bc = 0x10200f0;
    auStack_1d8[2] = 0x200f001;
    auStack_1d8[1] = 0x2010101;
    auStack_1d8[0] = 0x1010101;
    local_1e0 = 0x1000d01;
    uStack_244 = 2;
    uStack_274 = 1;
    uStack_25c = 1;
    uStack_254 = 1;
    uStack_248 = 1;
    auStack_1dc[0] = 1;
    uStack_13e = 500;
    uStack_26c = 0;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    uStack_230 = 0;
    uStack_180._2_2_ = 0x82;
    uStack_180._0_2_ = 0x79;
    uStack_1da = 0xf;
    uVar31 = 0x6e;
    uVar33 = 0xa3c;
    uVar18 = 1;
    uVar9 = 2;
  }
  uStack_1b8 = uStack_22c;
  uStack_17c = CONCAT22(uStack_230,uStack_288);
  uStack_178 = CONCAT22(uStack_238,(undefined2)iStack_284);
  uStack_184 = CONCAT22(uVar31,(undefined2)uStack_184);
  uStack_174 = CONCAT13(uStack_244,CONCAT12(uStack_240,uStack_23c));
  uStack_160 = uStack_228;
  uStack_170 = CONCAT13(uStack_254,CONCAT12(uStack_250,CONCAT11(uStack_24c,uStack_248)));
  uStack_16c = CONCAT13(uStack_264,CONCAT12(uStack_260,CONCAT11(uStack_25c,uStack_258)));
  piVar25 = param_1 + 0xd1f;
  uStack_168 = CONCAT13(uStack_27c,CONCAT12(uStack_274,CONCAT11(uStack_270,uStack_268)));
  uStack_164 = CONCAT31(CONCAT12(uStack_164._3_1_,CONCAT11(uVar9,uVar18)),uStack_280);
  uStack_154 = uStack_234;
  uStack_144 = CONCAT22(uStack_144._2_2_,uVar33);
  uStack_148 = uStack_26c;
  puStack_140 = puStack_222;
  ppuVar20 = (undefined **)&local_1e0;
  do {
    iVar10 = *(int *)(ppuVar20 + 2);
    iVar13 = *(int *)(ppuVar20 + 4);
    iVar27 = *(int *)(ppuVar20 + 6);
    *piVar25 = *(int *)ppuVar20;
    piVar25[1] = iVar10;
    piVar25[2] = iVar13;
    piVar25[3] = iVar27;
    ppuVar20 = ppuVar20 + 8;
    piVar25 = piVar25 + 4;
  } while (ppuVar20 != &puStack_140);
  *piVar25 = *(int *)ppuVar20;
  FUN_ram_4ff3ec14(&DAT_ram_4ff61938,0xffffffff);
  uVar7 = DAT_ram_4ff619e6;
  uVar6 = DAT_ram_4ff619c7;
  uVar5 = DAT_ram_4ff619bc;
  uVar4 = DAT_ram_4ff61964._1_1_;
  uVar3 = (undefined1)DAT_ram_4ff61964;
  uVar2 = DAT_ram_4ff61960._3_1_;
  uVar9 = DAT_ram_4ff61960._2_1_;
  uVar18 = DAT_ram_4ff61958._1_1_;
  FUN_ram_4ff3ee10(&DAT_ram_4ff61938);
  *(undefined1 *)((int)param_1 + 0x347d) = uVar18;
  *(undefined1 *)((int)param_1 + 0x3486) = uVar9;
  *(undefined1 *)((int)param_1 + 0x3487) = uVar2;
  *(undefined1 *)(param_1 + 0xd22) = uVar3;
  *(undefined1 *)((int)param_1 + 0x3489) = uVar4;
  *(undefined1 *)(param_1 + 0xd38) = uVar5;
  *(undefined1 *)((int)param_1 + 0x34eb) = uVar6;
  *(undefined1 *)((int)param_1 + 0x350a) = uVar7;
  FUN_ram_4ff3ec14(&DAT_ram_4ff69338,0xffffffff);
  piVar25 = &DAT_ram_4ff6934c;
  ppuVar20 = (undefined **)&local_1e0;
  do {
    iVar17 = piVar25[1];
    iVar23 = piVar25[2];
    iVar10 = piVar25[3];
    iVar13 = piVar25[4];
    iVar27 = piVar25[5];
    *(int *)ppuVar20 = *piVar25;
    *(int *)(ppuVar20 + 2) = iVar17;
    *(int *)(ppuVar20 + 4) = iVar23;
    *(int *)(ppuVar20 + 6) = iVar10;
    *(int *)(ppuVar20 + 8) = iVar13;
    *(int *)(ppuVar20 + 10) = iVar27;
    piVar25 = piVar25 + 6;
    ppuVar20 = ppuVar20 + 0xc;
  } while (piVar25 != &DAT_ram_4ff69394);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69338);
  piVar25 = param_1 + 0xd48;
  ppuVar20 = (undefined **)&local_1e0;
  do {
    iVar17 = *(int *)(ppuVar20 + 2);
    iVar23 = *(int *)(ppuVar20 + 4);
    iVar10 = *(int *)(ppuVar20 + 6);
    iVar13 = *(int *)(ppuVar20 + 8);
    iVar27 = *(int *)(ppuVar20 + 10);
    *piVar25 = *(int *)ppuVar20;
    piVar25[1] = iVar17;
    piVar25[2] = iVar23;
    piVar25[3] = iVar10;
    piVar25[4] = iVar13;
    piVar25[5] = iVar27;
    ppuVar20 = ppuVar20 + 0xc;
    piVar25 = piVar25 + 6;
  } while (ppuVar20 != (undefined **)&uStack_198);
  uVar11 = FUN_ram_48025ba6();
  FUN_ram_48052b10(&local_1e0,&DAT_ram_4ff69640,uVar11);
  *(undefined **)(param_1 + 0xd5a) = (undefined *)local_1e0;
  uVar34 = FUN_ram_4803165c();
  uVar1 = DAT_ram_4ff4898a;
  uVar33 = DAT_ram_4ff48988;
  uVar31 = DAT_ram_4ff48986;
  uVar18 = DAT_ram_4ff48984;
  *(short *)((int)param_1 + 0x356e) = (short)((ulonglong)uVar34 >> 0x20);
  *(short *)(param_1 + 0xd5c) = (short)((ulonglong)uVar34 >> 0x30);
  *(short *)((int)param_1 + 0x356a) = (short)uVar34;
  *(short *)(param_1 + 0xd5b) = (short)((ulonglong)uVar34 >> 0x10);
  *(undefined1 *)((int)param_1 + 0x3572) = uVar18;
  *(undefined2 *)(param_1 + 0xd5d) = uVar31;
  *(undefined2 *)((int)param_1 + 0x3576) = uVar33;
  *(undefined2 *)(param_1 + 0xd5e) = uVar1;
  iVar10 = DAT_ram_4ff6dcac;
  if (param_2 == 0) {
    FUN_ram_4ff45158((int)param_1 + 0x357a,DAT_ram_4ff6dcac + 0x6b6e,0x36);
    piVar15 = (int *)(iVar10 + 0x6ba4);
    piVar25 = param_1 + 0xd6c;
    do {
      iVar13 = piVar15[1];
      iVar27 = piVar15[2];
      iVar23 = piVar15[3];
      iVar17 = piVar15[4];
      *piVar25 = *piVar15;
      piVar25[1] = iVar13;
      piVar25[2] = iVar27;
      piVar25[3] = iVar23;
      piVar25[4] = iVar17;
      piVar15 = piVar15 + 5;
      piVar25 = piVar25 + 5;
    } while (piVar15 != (int *)(iVar10 + 0x6be0));
    *(short *)piVar25 = (short)*piVar15;
  }
  else {
    iVar10 = FUN_ram_48041cb4(0,(int)param_1 + 0x357a,&local_1e0);
    if ((iVar10 == 0) || (iVar10 = FUN_ram_4804210e(0,param_1 + 0xd6c), iVar10 == 2)) {
      return 0;
    }
    if (iVar10 == 0) {
      FUN_ram_480346c0(auStack_220,param_1 + 0xd1f);
      FUN_ram_4ff45158(param_1 + 0xd6c,auStack_220,0x3e);
    }
  }
  if (DAT_ram_4ff6dd80 == 0) {
    if (DAT_ram_4ff6dd4c == 0) {
      FUN_ram_4ff45158((int)param_1 + 0x357a,&DAT_ram_4ff4894c,0x36);
    }
    if (DAT_ram_4ff6dd38 == 0) {
      piVar25 = &DAT_ram_4ff5c4c4;
      piVar15 = param_1 + 0xd6c;
      do {
        iVar23 = piVar25[1];
        iVar10 = piVar25[2];
        iVar13 = piVar25[3];
        iVar27 = piVar25[4];
        *piVar15 = *piVar25;
        piVar15[1] = iVar23;
        piVar15[2] = iVar10;
        piVar15[3] = iVar13;
        piVar15[4] = iVar27;
        piVar25 = piVar25 + 5;
        piVar15 = piVar15 + 5;
      } while (piVar25 != (int *)&DAT_ram_4ff5c500);
      *(undefined2 *)piVar15 = _DAT_ram_4ff5c500;
    }
  }
  iVar10 = DAT_ram_4ff6dcc8;
  *(undefined1 *)((int)param_1 + 0x35ee) = DAT_ram_4ff5c5f5;
  uVar31 = *(undefined2 *)(iVar10 + 0x288);
  *(undefined1 *)((int)param_1 + 0x35ef) = *(undefined1 *)(iVar10 + 0x28a);
  *(undefined2 *)(param_1 + 0xd7c) = uVar31;
  FUN_ram_4ff3ec14(&DAT_ram_4ff69340,0xffffffff);
  piVar25 = &DAT_ram_4ff69f6c;
  ppuVar20 = (undefined **)&local_1e0;
  do {
    iVar10 = piVar25[1];
    iVar13 = piVar25[2];
    iVar27 = piVar25[3];
    iVar23 = piVar25[4];
    *(int *)ppuVar20 = *piVar25;
    *(int *)(ppuVar20 + 2) = iVar10;
    *(int *)(ppuVar20 + 4) = iVar13;
    *(int *)(ppuVar20 + 6) = iVar27;
    *(int *)(ppuVar20 + 8) = iVar23;
    piVar25 = piVar25 + 5;
    ppuVar20 = ppuVar20 + 10;
  } while (piVar25 != (int *)&DAT_ram_4ff69fd0);
  FUN_ram_4ff3ee10(&DAT_ram_4ff69340);
  FUN_ram_4ff45158((int)param_1 + 0x3415,&local_1e0,100);
  uVar11 = FUN_ram_48076846(param_1);
  return uVar11;
LAB_ram_48077698:
  uVar16 = uVar16 + 1;
  if (*(byte *)(DAT_ram_4ff6dcac + 0x6a08) == uVar16) goto LAB_ram_48077104;
  goto LAB_ram_4807769e;
}


