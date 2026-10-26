/* Firmware entry: 0x4805934a */

undefined4 FUN_ram_4805934a(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  bool bVar28;
  byte bVar29;
  undefined4 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bStack_cc;
  byte bStack_cb;
  byte bStack_ca;
  byte bStack_c9;
  byte bStack_c8;
  byte bStack_c7;
  byte bStack_c6;
  byte bStack_c5;
  byte bStack_c4;
  byte bStack_c3;
  byte bStack_c2;
  byte bStack_c1;
  byte bStack_c0;
  byte bStack_bf;
  byte bStack_be;
  byte bStack_bd;
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  byte bStack_b9;
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  undefined1 uStack_b1;
  byte bStack_b0;
  byte bStack_af;
  undefined1 auStack_ac [3];
  byte bStack_a9;
  char cStack_a6;
  char cStack_a4;
  char cStack_a3;
  char cStack_a2;
  char cStack_78;
  int iStack_6c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2 + 0xb18,0xffffffff);
  bVar1 = param_2[0xb5f];
  bVar2 = param_2[0xb39];
  bVar3 = param_2[0xb40];
  bVar4 = param_2[0xbaa];
  bVar31 = param_2[0xb46];
  bVar5 = param_2[0xb9d];
  bVar6 = param_2[0xbab];
  bVar7 = param_2[0xba9];
  bVar8 = param_2[0xbc0];
  bVar9 = param_2[0xbad];
  bVar10 = param_2[0xbc1];
  bVar11 = param_2[0xbc2];
  bVar12 = param_2[0xbae];
  bVar13 = param_2[0xbb1];
  bVar29 = param_2[0xb3a];
  bVar33 = param_2[0xba1];
  bVar32 = param_2[0xba6];
  bVar14 = param_2[0xba8];
  bVar15 = param_2[0xb38];
  bVar16 = param_2[0xbcc];
  bVar17 = param_2[0xbc7];
  bVar18 = param_2[0xbd8];
  bVar19 = param_2[0xbce];
  bVar20 = param_2[0xbcf];
  bVar21 = param_2[0xbd0];
  FUN_ram_4ff3ee10(param_2 + 0xb18);
  FUN_ram_4ff3ec14(param_2 + 0x8518,0xffffffff);
  bVar22 = param_2[0x852c];
  FUN_ram_4ff3ee10(param_2 + 0x8518);
  FUN_ram_4ff3ec14(param_2 + 0x8820,0xffffffff);
  bVar23 = param_2[0x8845];
  FUN_ram_4ff3ee10(param_2 + 0x8820);
  FUN_ram_4ff3ec14(param_2 + 0x8a1c,0xffffffff);
  bVar24 = param_2[0x8a27];
  bVar25 = param_2[0x8a24];
  bVar26 = param_2[0x8a25];
  bVar27 = param_2[0x8a26];
  FUN_ram_4ff3ee10(param_2 + 0x8a1c);
  fence();
  bVar28 = param_2[0x8c70] != 0;
  if (bVar18 != 0) {
    bVar31 = 1;
  }
  bStack_ca = 0;
  bStack_c7 = 0;
  if (((bVar15 != 0) && (bStack_ca = bVar16, bStack_c7 = bVar11, bVar16 == 0)) &&
     (bStack_ca = bVar20, bVar20 == 0)) {
    bStack_ca = bVar21 | bVar19;
  }
  bStack_c4 = bVar14 & -(bVar1 != 0);
  uStack_b1 = 0;
  bStack_af = 0;
  if (bVar5 != 0) {
    bVar33 = 1;
  }
  bStack_be = bVar28 | bVar25;
  bStack_bd = bVar28 | bVar26;
  bStack_bc = bVar28 | bVar27;
  bStack_bb = bVar28 | bVar24;
  bStack_c2 = *param_2;
  bStack_b2 = bVar22 & bVar1;
  bStack_c1 = param_2[8];
  bStack_c0 = param_2[0xf];
  if ((((bStack_c2 == 0) && (bStack_c2 = param_2[1], bStack_c2 == 0)) &&
      ((bStack_c2 = param_2[2], bStack_c2 == 0 &&
       ((bStack_c2 = bStack_c1, bStack_c1 == 0 && (bStack_c2 = bStack_c0, bStack_c0 == 0)))))) &&
     (bStack_c2 = param_2[0x3a4], bStack_c2 == 0)) {
    bStack_c2 = param_2[0x3a5] | param_2[0x3fc];
  }
  if ((bVar32 == 0) && (bVar32 = param_2[0x9210], bVar32 == 0)) {
    bVar32 = 0;
    if ((param_2[0x9fa] != 0) && (bVar32 = param_2[0x9fb], bVar32 == 0)) {
      bVar32 = *(short *)(param_2 + 0x9f8) != 0;
    }
  }
  if (bVar29 == 0) {
    bVar29 = 1;
    if (((((*(int *)(param_2 + 0x7e5c) == 0) && (*(int *)(param_2 + 0x7e88) == 0)) &&
         (bVar29 = param_2[0x7eb4], bVar29 == 0)) &&
        ((bVar29 = param_2[0x7d6e], bVar29 == 0 && (bVar29 = 0, param_2[0xa4a] != 0)))) &&
       (bVar29 = param_2[0xa4b], bVar29 == 0)) {
      bVar29 = *(short *)(param_2 + 0xa48) != 0;
    }
  }
  if (bStack_c7 == 0) {
    fence();
    bStack_c7 = 1;
    if (param_2[0x7a14] == 0) {
      bStack_c7 = param_2[0x7eb5];
    }
  }
  bStack_cc = bVar2;
  bStack_cb = bVar29;
  bStack_c9 = bVar3;
  bStack_c8 = bVar11;
  bStack_c6 = bVar17;
  bStack_c5 = bVar10;
  bStack_c3 = bVar33;
  bStack_bf = bVar23;
  bStack_ba = bVar32;
  bStack_b9 = bVar7;
  bStack_b8 = bVar8;
  bStack_b7 = bVar4;
  bStack_b6 = bVar6;
  bStack_b5 = bVar9;
  bStack_b4 = bVar13;
  bStack_b3 = bVar12;
  bStack_b0 = bVar31;
  if (((bStack_c4 == 0) && (param_2[0x7f54] == 0)) && (FUN_ram_48025ba6(), param_2[0x7ee5] == 0)) {
    bStack_c4 = false;
    if (param_2[0xa72] != 0) {
      if (param_2[0xa73] != 0) goto LAB_ram_480595e4;
      bStack_c4 = *(short *)(param_2 + 0xa70) != 0;
    }
  }
  else {
LAB_ram_480595e4:
    bStack_c4 = true;
  }
  if (bVar33 == 0) {
    uVar30 = FUN_ram_48025ba6();
    if ((((*(int *)(param_2 + 0x846c) == 0) &&
         (((param_2[0x80b0] == 0 || (*(int *)(param_2 + 0x80b4) != 0)) &&
          (FUN_ram_4804a1e6(auStack_ac,param_2 + 0x7f88,uVar30), iStack_6c == 0)))) &&
        (((cStack_a4 == '\0' && (cStack_a6 == '\0')) &&
         ((cStack_a3 == '\0' && ((cStack_a2 == '\0' && (cStack_78 == '\0')))))))) &&
       ((bStack_a9 < 2 || (bStack_a9 == 10)))) {
      bStack_c3 = false;
      if (param_2[0xa9a] == 0) goto LAB_ram_480595f0;
      if (param_2[0xa9b] == 0) {
        bStack_c3 = *(short *)(param_2 + 0xa98) != 0;
        goto LAB_ram_480595f0;
      }
    }
  }
  bStack_c3 = true;
LAB_ram_480595f0:
  if ((param_2[0xb12] == 0) ||
     ((bStack_af = param_2[0xb13], param_2[0xb13] == 0 &&
      (bStack_af = param_2[0xb12], *(short *)(param_2 + 0xb10) == 0)))) {
    bStack_af = param_2[0x93d8];
  }
  FUN_ram_4804f4ba(param_1,&bStack_cc);
  return param_1;
}


