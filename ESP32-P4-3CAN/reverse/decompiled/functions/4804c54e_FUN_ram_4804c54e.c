/* Firmware entry: 0x4804c54e */

/* WARNING: Removing unreachable block (ram,0x4804c7fc) */
/* WARNING: Removing unreachable block (ram,0x4804c80c) */

void FUN_ram_4804c54e(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  short sVar19;
  undefined4 uVar20;
  ushort uVar21;
  ushort uVar22;
  uint uVar23;
  uint uVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar27 = *(short *)((int)param_2 + 2);
  sVar5 = *(short *)(param_2 + 1);
  sVar25 = *(short *)((int)param_2 + 6);
  sVar28 = *(short *)(param_2 + 2);
  sVar19 = *(short *)((int)param_2 + 10);
  sVar26 = *(short *)(param_2 + 3);
  sVar1 = *(short *)((int)param_2 + 0xe);
  sVar3 = *(short *)(param_2 + 4);
  uVar22 = *(ushort *)((int)param_2 + 0x12);
  uVar21 = *(ushort *)(param_2 + 5);
  uVar10 = param_2[6];
  uVar17 = param_2[7];
  uVar24 = param_2[8];
  uVar7 = param_2[9];
  uVar16 = param_2[0xc];
  uVar13 = param_2[0xd];
  uVar23 = param_2[0xe];
  uVar6 = param_2[0xf];
  uVar15 = param_2[0x11];
  sVar2 = sVar27;
  if (sVar27 <= sVar5) {
    sVar2 = sVar5;
    sVar5 = sVar27;
  }
  if (0xb4 < sVar5) {
    sVar5 = 0xb4;
  }
  if (sVar5 < 0x96) {
    sVar5 = 0x96;
  }
  if (0xb4 < sVar2) {
    sVar2 = 0xb4;
  }
  if (sVar2 < 0x96) {
    sVar2 = 0x96;
  }
  sVar27 = sVar25;
  if (sVar25 <= sVar28) {
    sVar27 = sVar28;
    sVar28 = sVar25;
  }
  if (0xb4 < sVar28) {
    sVar28 = 0xb4;
  }
  if (sVar28 < 0x96) {
    sVar28 = 0x96;
  }
  if (0xb4 < sVar27) {
    sVar27 = 0xb4;
  }
  if (sVar27 < 0x96) {
    sVar27 = 0x96;
  }
  sVar25 = sVar19;
  if (sVar19 <= sVar26) {
    sVar25 = sVar26;
    sVar26 = sVar19;
  }
  if (0xfa < sVar26) {
    sVar26 = 0xfa;
  }
  if (sVar26 < 0xb4) {
    sVar26 = 0xb4;
  }
  if (0xfa < sVar25) {
    sVar25 = 0xfa;
  }
  if (sVar25 < 0xb4) {
    sVar25 = 0xb4;
  }
  sVar19 = sVar1;
  if (sVar1 <= sVar3) {
    sVar19 = sVar3;
    sVar3 = sVar1;
  }
  if (0xfa < sVar3) {
    sVar3 = 0xfa;
  }
  if (sVar3 < 0xb4) {
    sVar3 = 0xb4;
  }
  if (0xfa < sVar19) {
    sVar19 = 0xfa;
  }
  if (sVar19 < 0xb4) {
    sVar19 = 0xb4;
  }
  if (uVar22 != 0) {
    if (uVar22 < 0x100) {
      if (uVar22 < 10) {
        uVar22 = 10;
      }
    }
    else {
      uVar22 = 0xff;
    }
  }
  if (uVar21 != 0) {
    if (uVar21 < 0x100) {
      if (uVar21 < 10) {
        uVar21 = 10;
      }
    }
    else {
      uVar21 = 0xff;
    }
  }
  uVar11 = uVar10;
  if (uVar10 <= uVar17) {
    uVar11 = uVar17;
    uVar17 = uVar10;
  }
  if (uVar17 < 100) {
    uVar17 = 100;
  }
  if (uVar11 < 100) {
    uVar11 = 100;
  }
  if (uVar24 == 0) {
    uVar10 = 0;
    uVar8 = uVar7;
    if (uVar7 != 0) {
LAB_ram_4804c706:
      uVar8 = uVar7;
      uVar10 = 100;
      goto LAB_ram_4804c70a;
    }
  }
  else {
    uVar10 = uVar7;
    if (uVar7 < 100) {
      uVar10 = 100;
    }
    uVar8 = uVar24;
    if ((uVar24 <= uVar7) && (uVar8 = uVar7, uVar10 = uVar24, uVar24 < 100)) goto LAB_ram_4804c706;
LAB_ram_4804c70a:
    if (uVar8 < 100) {
      uVar8 = 100;
    }
  }
  uVar7 = uVar13;
  if (uVar16 <= uVar13) {
    uVar7 = uVar16;
    uVar16 = uVar13;
  }
  if (uVar7 < 100) {
    uVar7 = 100;
  }
  if (uVar16 < 100) {
    uVar16 = 100;
  }
  if (uVar23 == 0) {
    uVar13 = 0;
    uVar24 = uVar6;
    if (uVar6 == 0) goto LAB_ram_4804c748;
LAB_ram_4804c73a:
    uVar24 = uVar6;
    uVar13 = 100;
  }
  else {
    uVar13 = uVar6;
    if (uVar6 < 100) {
      uVar13 = 100;
    }
    uVar24 = uVar23;
    if ((uVar23 <= uVar6) && (uVar24 = uVar6, uVar13 = uVar23, uVar23 < 100)) goto LAB_ram_4804c73a;
  }
  if (uVar24 < 100) {
    uVar24 = 100;
  }
LAB_ram_4804c748:
  param_2[0xd] = uVar16;
  *(short *)((int)param_2 + 2) = sVar5;
  *(short *)(param_2 + 1) = sVar2;
  *(short *)((int)param_2 + 6) = sVar28;
  *(short *)(param_2 + 2) = sVar27;
  *(short *)((int)param_2 + 10) = sVar26;
  *(short *)(param_2 + 3) = sVar25;
  *(short *)((int)param_2 + 0xe) = sVar3;
  *(short *)(param_2 + 4) = sVar19;
  *(ushort *)((int)param_2 + 0x12) = uVar22;
  *(ushort *)(param_2 + 5) = uVar21;
  param_2[6] = uVar17;
  param_2[7] = uVar11;
  param_2[8] = uVar10;
  param_2[9] = uVar8;
  param_2[0xc] = uVar7;
  param_2[0xe] = uVar13;
  param_2[0xf] = uVar24;
  if (2000 < uVar15) {
    uVar15 = 2000;
  }
  if (uVar15 < 100) {
    uVar15 = 100;
  }
  param_2[0x11] = uVar15;
  puVar14 = param_2 + 0x12;
  do {
    uVar4 = param_2[1];
    uVar20 = param_2[2];
    uVar18 = param_2[3];
    uVar9 = param_2[4];
    uVar12 = param_2[5];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar20;
    param_1[3] = uVar18;
    param_1[4] = uVar9;
    param_1[5] = uVar12;
    param_2 = param_2 + 6;
    param_1 = param_1 + 6;
  } while (param_2 != puVar14);
  return;
}


