/* Firmware entry: 0x48053f2a */

undefined4 * FUN_ram_48053f2a(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  byte bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_2,0xffffffff);
  memset((void *)((int)param_1 + 0x1f),0,0xbd);
  cVar1 = *(char *)(param_2 + 0xe9);
  uVar8 = *(undefined4 *)(param_2 + 8);
  uVar11 = *(undefined1 *)(param_2 + 0x10);
  bVar2 = *(byte *)(param_2 + 0xb);
  bVar9 = *(byte *)(param_2 + 0x48);
  param_1[1] = *(undefined4 *)(param_2 + 0xc);
  *param_1 = uVar8;
  *(undefined1 *)(param_1 + 2) = uVar11;
  bVar3 = *(byte *)(param_2 + 0xb4);
  bVar2 = bVar2 & cVar1 == '\x02';
  if (bVar9 == 0) {
    bVar9 = bVar3 | bVar2;
  }
  uVar11 = *(undefined1 *)(param_2 + 0xbc);
  iVar15 = *(int *)(param_2 + 0x14);
  *(byte *)((int)param_1 + 9) = bVar9;
  *(undefined1 *)((int)param_1 + 10) = uVar11;
  uVar11 = *(undefined1 *)(param_2 + 0xfb);
  cVar16 = *(char *)(param_2 + 0xf8);
  *(bool *)((int)param_1 + 0xb) = iVar15 != 0 && (uint)(param_3 - iVar15) < 0x2ef;
  *(undefined1 *)(param_1 + 3) = uVar11;
  bVar10 = false;
  if (cVar16 != '\0') {
    bVar10 = false;
    if (*(int *)(param_2 + 0xfc) != 0) {
      bVar10 = (uint)(param_3 - *(int *)(param_2 + 0xfc)) < 0x12d;
    }
  }
  cVar16 = *(char *)(param_2 + 0xf9);
  *(bool *)((int)param_1 + 0xd) = bVar10;
  if ((((cVar16 == '\0') || (*(int *)(param_2 + 0x100) == 0)) ||
      (300 < (uint)(param_3 - *(int *)(param_2 + 0x100)))) &&
     (cVar16 = '\0', *(char *)(param_2 + 0xfa) != '\0')) {
    cVar16 = '\0';
    if (*(int *)(param_2 + 0x104) != 0) {
      cVar16 = (uint)(param_3 - *(int *)(param_2 + 0x104)) < 0x12d;
    }
  }
  iVar12 = *(int *)(param_2 + 0x108);
  *(char *)((int)param_1 + 0xe) = cVar16;
  iVar17 = *(int *)(param_2 + 0x10c);
  *(bool *)((int)param_1 + 0xf) = iVar12 != 0 && (uint)(param_3 - iVar12) < 0x321;
  iVar12 = *(int *)(param_2 + 0x110);
  *(bool *)(param_1 + 4) = iVar17 != 0 && (uint)(param_3 - iVar17) < 0x321;
  iVar17 = *(int *)(param_2 + 0x114);
  *(bool *)((int)param_1 + 0x11) = iVar12 != 0 && (uint)(param_3 - iVar12) < 0x321;
  iVar12 = *(int *)(param_2 + 0x118);
  *(bool *)((int)param_1 + 0x12) = iVar17 != 0 && (uint)(param_3 - iVar17) < 0x321;
  iVar17 = *(int *)(param_2 + 0x11c);
  *(bool *)((int)param_1 + 0x13) = iVar12 != 0 && (uint)(param_3 - iVar12) < 0x321;
  uVar11 = *(undefined1 *)(param_2 + 0x4c);
  uVar4 = *(undefined1 *)(param_2 + 0x4d);
  uVar5 = *(undefined1 *)(param_2 + 0x4b);
  cVar16 = *(char *)(param_2 + 0xac);
  *(bool *)(param_1 + 5) = iVar17 != 0 && (uint)(param_3 - iVar17) < 0x321;
  *(char *)(param_1 + 6) = cVar1;
  *(undefined1 *)((int)param_1 + 0x15) = uVar11;
  *(undefined1 *)((int)param_1 + 0x16) = uVar4;
  *(undefined1 *)((int)param_1 + 0x17) = uVar5;
  uVar11 = 8;
  if (cVar16 == '\0') {
    uVar11 = *(undefined1 *)(param_2 + 0x4e);
  }
  uVar6 = *(undefined2 *)(param_2 + 0xec);
  uVar7 = *(undefined2 *)(param_2 + 0xee);
  iVar12 = *(int *)(param_2 + 0xf4);
  *(undefined1 *)((int)param_1 + 0x19) = uVar11;
  *(undefined2 *)((int)param_1 + 0x1a) = uVar6;
  *(undefined2 *)(param_1 + 7) = uVar7;
  if (iVar12 == 0) {
    bVar10 = false;
    uVar13 = 0xffffffff;
  }
  else {
    uVar18 = param_3 - iVar12;
    uVar13 = (int)~uVar18 >> 0x1f & uVar18;
    bVar10 = (int)uVar18 < 0x1f5;
  }
  *(bool *)((int)param_1 + 0x1e) = bVar10;
  param_1[8] = uVar13;
  uVar13 = 0xffffffff;
  if (iVar15 != 0) {
    uVar13 = param_3 - iVar15 & ~(param_3 - iVar15) >> 0x1f;
  }
  uVar25 = *(undefined4 *)(param_2 + 300);
  uVar24 = *(undefined4 *)(param_2 + 0x130);
  uVar23 = *(undefined4 *)(param_2 + 0x134);
  uVar8 = *(undefined4 *)(param_2 + 0x138);
  uVar21 = *(undefined4 *)(param_2 + 0x13c);
  uVar19 = *(undefined4 *)(param_2 + 0x140);
  uVar14 = *(undefined4 *)(param_2 + 0x144);
  uVar11 = *(undefined1 *)(param_2 + 0x148);
  param_1[9] = uVar13;
  iVar15 = *(int *)(param_2 + 0x164);
  param_1[10] = uVar25;
  param_1[0xb] = uVar24;
  param_1[0xc] = uVar23;
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar21;
  param_1[0xf] = uVar19;
  param_1[0x10] = uVar14;
  *(undefined1 *)(param_1 + 0x11) = uVar11;
  if ((iVar15 != 0) && ((uint)(param_3 - iVar15) < 0x1f5)) {
    iVar15 = *(int *)(param_2 + 0x168);
    *(undefined1 *)((int)param_1 + 0x45) = 1;
    if (iVar15 != 0) {
      bVar10 = (uint)(param_3 - iVar15) < 0x321;
      goto LAB_ram_4805414a;
    }
  }
  bVar10 = false;
LAB_ram_4805414a:
  uVar11 = *(undefined1 *)(param_2 + 0x155);
  uVar4 = *(undefined1 *)(param_2 + 0x159);
  uVar5 = *(undefined1 *)(param_2 + 0x1b0);
  iVar15 = *(int *)(param_2 + 0x58);
  *(bool *)((int)param_1 + 0x46) = bVar10;
  *(undefined1 *)((int)param_1 + 0x47) = uVar11;
  *(undefined1 *)(param_1 + 0x12) = uVar4;
  *(undefined1 *)((int)param_1 + 0x49) = uVar5;
  uVar11 = *(undefined1 *)(param_2 + 0x5c);
  uVar4 = *(undefined1 *)(param_2 + 0x5d);
  uVar5 = *(undefined1 *)(param_2 + 0x5e);
  uVar13 = 0xffffffff;
  if (iVar15 != 0) {
    uVar13 = param_3 - iVar15;
    if ((int)uVar13 < 0x1f5) {
      *(undefined1 *)((int)param_1 + 0x4a) = 1;
    }
    uVar13 = uVar13 & (int)~uVar13 >> 0x1f;
  }
  uVar14 = *(undefined4 *)(param_2 + 100);
  uVar8 = *(undefined4 *)(param_2 + 0x68);
  cVar1 = *(char *)(param_2 + 0x94);
  *(undefined1 *)((int)param_1 + 0x4b) = uVar11;
  *(undefined1 *)(param_1 + 0x13) = uVar4;
  *(undefined1 *)((int)param_1 + 0x4d) = uVar5;
  param_1[0x14] = uVar13;
  param_1[0x15] = uVar14;
  param_1[0x16] = uVar8;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x95);
    iVar15 = 0;
  }
  else {
    iVar15 = *(int *)(param_2 + 0x98);
    *(undefined1 *)(param_1 + 0x17) = 1;
    iVar15 = iVar15 - param_3;
    if (iVar15 < 1) {
      iVar15 = 0;
    }
  }
  param_1[0x18] = iVar15;
  uVar24 = *(undefined4 *)(param_2 + 0xa0);
  uVar19 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar26 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined1 *)(param_2 + 0xb6);
  uVar4 = *(undefined1 *)(param_2 + 0xc2);
  uVar5 = *(undefined1 *)(param_2 + 0xc5);
  uVar14 = *(undefined4 *)(param_2 + 200);
  uVar22 = *(undefined4 *)(param_2 + 0xcc);
  uVar20 = *(undefined4 *)(param_2 + 0xd0);
  uVar21 = *(undefined4 *)(param_2 + 0xd8);
  uVar23 = *(undefined4 *)(param_2 + 0xdc);
  *(byte *)((int)param_1 + 0x79) = bVar2;
  param_1[0x19] = uVar24;
  uVar24 = *(undefined4 *)(param_2 + 0xe0);
  uVar25 = *(undefined4 *)(param_2 + 0xe4);
  *(char *)(param_1 + 0x1c) = cVar16;
  param_1[0x25] = uVar24;
  param_1[0x26] = uVar25;
  *(byte *)(param_1 + 0x1e) = bVar3;
  param_1[0x1a] = uVar19;
  param_1[0x1b] = uVar8;
  param_1[0x1d] = uVar26;
  *(undefined1 *)((int)param_1 + 0x7a) = uVar11;
  *(undefined1 *)((int)param_1 + 0x7b) = uVar4;
  *(undefined1 *)(param_1 + 0x1f) = uVar5;
  param_1[0x20] = uVar14;
  param_1[0x21] = uVar22;
  param_1[0x22] = uVar20;
  param_1[0x23] = uVar21;
  param_1[0x24] = uVar23;
  iVar15 = *(int *)(param_2 + 0x15c);
  uVar13 = 0;
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x154);
  if (iVar15 != 0) {
    uVar13 = iVar15 - param_3;
    uVar13 = uVar13 & -(uint)(0 < (int)uVar13);
  }
  uVar24 = *(undefined4 *)(param_2 + 0x178);
  uVar23 = *(undefined4 *)(param_2 + 0x17c);
  uVar8 = *(undefined4 *)(param_2 + 0x180);
  uVar14 = *(undefined4 *)(param_2 + 0x184);
  uVar19 = *(undefined4 *)(param_2 + 0x188);
  uVar21 = *(undefined4 *)(param_2 + 0x18c);
  iVar15 = *(int *)(param_2 + 0x160);
  param_1[0x28] = uVar13;
  param_1[0x29] = uVar24;
  param_1[0x2a] = uVar23;
  param_1[0x2b] = uVar8;
  param_1[0x2c] = uVar14;
  param_1[0x2d] = uVar19;
  param_1[0x2e] = uVar21;
  uVar13 = 0xffffffff;
  if (iVar15 != 0) {
    uVar13 = param_3 - iVar15;
    uVar13 = uVar13 & (int)~uVar13 >> 0x1f;
  }
  iVar15 = *(int *)(param_2 + 0x14c);
  param_1[0x2f] = uVar13;
  uVar13 = 0;
  if (iVar15 != 0) {
    uVar13 = param_3 - iVar15;
    uVar13 = uVar13 & (int)~uVar13 >> 0x1f;
  }
  uVar25 = *(undefined4 *)(param_2 + 400);
  uVar24 = *(undefined4 *)(param_2 + 0x194);
  uVar8 = *(undefined4 *)(param_2 + 0x198);
  uVar23 = *(undefined4 *)(param_2 + 0x19c);
  uVar21 = *(undefined4 *)(param_2 + 0x1a0);
  uVar11 = *(undefined1 *)(param_2 + 0x157);
  uVar4 = *(undefined1 *)(param_2 + 0x156);
  uVar14 = *(undefined4 *)(param_2 + 0x1ac);
  uVar19 = *(undefined4 *)(param_2 + 0x1a8);
  param_1[0x30] = uVar13;
  param_1[0x31] = uVar25;
  param_1[0x32] = uVar24;
  param_1[0x33] = uVar8;
  param_1[0x34] = uVar23;
  param_1[0x35] = uVar21;
  *(undefined1 *)(param_1 + 0x36) = uVar11;
  *(undefined1 *)((int)param_1 + 0xd9) = uVar4;
  param_1[0x38] = uVar14;
  param_1[0x37] = uVar19;
  FUN_ram_4ff3ee10(param_2);
  return param_1;
}


