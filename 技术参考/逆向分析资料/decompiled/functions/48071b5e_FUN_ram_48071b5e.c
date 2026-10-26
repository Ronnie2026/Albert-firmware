/* Firmware entry: 0x48071b5e */

int FUN_ram_48071b5e(byte *param_1,uint param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  byte bVar20;
  uint uVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uStack_568;
  undefined4 uStack_564;
  undefined4 uStack_560;
  uint uStack_558;
  uint uStack_554;
  uint uStack_550;
  uint uStack_54c;
  uint uStack_548;
  uint uStack_544;
  undefined4 uStack_540;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  uint uStack_528;
  uint uStack_524;
  byte bStack_520;
  undefined4 uStack_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  uint uStack_508;
  uint uStack_504;
  uint uStack_500;
  uint uStack_4fc;
  uint uStack_4f8;
  uint uStack_4f4;
  byte bStack_4f0;
  byte bStack_4ef;
  byte bStack_4ee;
  uint uStack_4e8;
  uint uStack_4e4;
  byte bStack_4e0;
  uint local_4d8 [12];
  uint local_4a8 [268];
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint auStack_48 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  if (param_2 < 0xc) {
    return 0;
  }
  if (*(int *)param_1 != 0x31525346) {
    return 0;
  }
  sVar1 = *(short *)(param_1 + 4);
  bVar3 = true;
  uVar12 = (uint)*(ushort *)(param_1 + 6);
  if (sVar1 == 1) {
    if (uVar12 != 0x3d9) {
      return 0;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (param_2 != 0x3d9) {
LAB_ram_48071d6e:
      bVar3 = bVar4;
      if (param_2 != 0x4b3) {
        return 0;
      }
      pbVar9 = param_1 + uVar12;
      do {
        bVar22 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        if (bVar22 != 0xff) {
          return 0;
        }
        param_2 = uVar12;
      } while (param_1 + 0x4b3 != pbVar9);
    }
    bVar4 = false;
  }
  else if (sVar1 == 2) {
    if (uVar12 != 0x491) {
      return 0;
    }
    bVar2 = bVar3;
    if (param_2 != 0x491) {
      bVar4 = false;
      goto LAB_ram_48071d6e;
    }
    bVar3 = false;
    bVar4 = false;
  }
  else if (sVar1 == 3) {
    if (uVar12 != 0x49e) {
      return 0;
    }
    bVar2 = false;
    bVar4 = true;
    if (param_2 != 0x49e) goto LAB_ram_48071d6e;
    bVar4 = false;
    bVar2 = false;
  }
  else {
    if (sVar1 != 4) {
      return 0;
    }
    if (uVar12 != 0x4b3) {
      return 0;
    }
    if (param_2 != 0x4b3) {
      return 0;
    }
    bVar4 = true;
    bVar2 = false;
    bVar3 = false;
  }
  uVar12 = 0xffffffff;
  pbVar9 = param_1;
  do {
    cVar16 = '\b';
    uVar12 = uVar12 ^ *pbVar9;
    do {
      cVar16 = cVar16 + -1;
      uVar12 = uVar12 >> 1 ^ -(uVar12 & 1) & 0xedb88320;
    } while (cVar16 != '\0');
    pbVar9 = pbVar9 + 1;
  } while (pbVar9 != param_1 + (param_2 - 4));
  if (*(uint *)(param_1 + (param_2 - 4)) != ~uVar12) {
    return 0;
  }
  memset(&uStack_568,0,0x528);
  uStack_568 = *(undefined4 *)(param_1 + 0xc);
  uStack_564 = *(undefined4 *)(param_1 + 0x10);
  uStack_560 = *(undefined4 *)(param_1 + 0x14);
  pbVar9 = param_1 + 0x18;
  uVar12 = 0;
  uStack_558 = 0;
  uStack_554 = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar17 = 0;
      uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uVar12 = uVar12 + 8;
    uStack_558 = uStack_558 | uVar17;
    uStack_554 = uStack_554 | uVar13;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  pbVar9 = param_1 + 0x20;
  uVar12 = 0;
  uStack_550 = 0;
  uStack_54c = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar17 = 0;
      uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uVar12 = uVar12 + 8;
    uStack_550 = uStack_550 | uVar17;
    uStack_54c = uStack_54c | uVar13;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  pbVar9 = param_1 + 0x28;
  uVar12 = 0;
  uStack_548 = 0;
  uStack_544 = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar17 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar13 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar13 = 0;
      uVar17 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uVar12 = uVar12 + 8;
    uStack_548 = uStack_548 | uVar13;
    uStack_544 = uStack_544 | uVar17;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  uStack_540 = *(undefined4 *)(param_1 + 0x30);
  pbVar9 = param_1 + 0x34;
  uVar12 = 0;
  uStack_538 = 0;
  uStack_534 = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar17 = 0;
      uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uVar12 = uVar12 + 8;
    uStack_538 = uStack_538 | uVar17;
    uStack_534 = uStack_534 | uVar13;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  pbVar9 = param_1 + 0x3c;
  uVar12 = 0;
  uStack_530 = 0;
  uStack_52c = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar17 = 0;
      uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uVar12 = uVar12 + 8;
    uStack_530 = uStack_530 | uVar17;
    uStack_52c = uStack_52c | uVar13;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  pbVar9 = param_1 + 0x44;
  uVar12 = 0;
  uStack_528 = 0;
  uStack_524 = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar17 = 0;
      uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uVar12 = uVar12 + 8;
    uStack_528 = uStack_528 | uVar17;
    uStack_524 = uStack_524 | uVar13;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  if (1 < param_1[0x4c]) {
    return 0;
  }
  uStack_518 = *(undefined4 *)(param_1 + 0x4d);
  uStack_514 = *(undefined4 *)(param_1 + 0x51);
  uStack_510 = *(undefined4 *)(param_1 + 0x55);
  uStack_50c = *(undefined4 *)(param_1 + 0x59);
  bStack_520 = param_1[0x4c] & 1;
  pbVar9 = param_1 + 0x5d;
  uVar12 = 0;
  uStack_508 = 0;
  uStack_504 = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar17 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar13 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar13 = 0;
      uVar17 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uStack_508 = uStack_508 | uVar13;
    uStack_504 = uStack_504 | uVar17;
    uVar12 = uVar12 + 8;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  pbVar9 = param_1 + 0x65;
  uVar12 = 0;
  uStack_500 = 0;
  uStack_4fc = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar17 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar13 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar13 = 0;
      uVar17 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uStack_500 = uStack_500 | uVar13;
    uStack_4fc = uStack_4fc | uVar17;
    uVar12 = uVar12 + 8;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  pbVar9 = param_1 + 0x6d;
  uVar12 = 0;
  uStack_4f8 = 0;
  uStack_4f4 = 0;
  do {
    bVar22 = *pbVar9;
    if ((int)(uVar12 - 0x20) < 0) {
      uVar17 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
      uVar13 = (uint)bVar22 << (uVar12 & 0x1f);
    }
    else {
      uVar13 = 0;
      uVar17 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
    }
    uStack_4f8 = uStack_4f8 | uVar13;
    uStack_4f4 = uStack_4f4 | uVar17;
    uVar12 = uVar12 + 8;
    pbVar9 = pbVar9 + 1;
  } while (uVar12 != 0x40);
  bStack_4f0 = 1;
  bStack_4ee = 0;
  bStack_4ef = 0xff;
  if (param_1[0x75] < 2) {
    bStack_4ef = param_1[0x76];
    bStack_4ee = param_1[0x77];
    bStack_4f0 = param_1[0x75] & 1;
  }
  bStack_4e0 = param_1[0x78];
  puVar7 = (uint *)(param_1 + 0x79);
  puVar18 = local_4d8;
  do {
    uVar12 = *puVar7;
    uVar13 = puVar7[1];
    uVar14 = puVar7[2];
    uVar17 = puVar7[3];
    puVar10 = puVar7 + 4;
    uVar15 = 0;
    uVar19 = 0;
    uVar6 = 0;
    do {
      while( true ) {
        bVar22 = (byte)*puVar10;
        if (-1 < (int)(uVar15 - 0x20)) break;
        uVar19 = uVar19 | (uint)bVar22 << (uVar15 & 0x1f);
        uVar6 = uVar6 | (byte)((bVar22 >> 1) >> (0x1f - uVar15 & 0x1f));
        uVar15 = uVar15 + 8;
        puVar10 = (uint *)((int)puVar10 + 1);
        if (uVar15 == 0x40) goto LAB_ram_48072202;
      }
      uVar6 = uVar6 | (uint)bVar22 << (uVar15 - 0x20 & 0x1f);
      uVar15 = uVar15 + 8;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while (uVar15 != 0x40);
LAB_ram_48072202:
    puVar10 = puVar7 + 6;
    uVar15 = 0;
    uVar23 = 0;
    uVar21 = 0;
    do {
      while( true ) {
        bVar22 = (byte)*puVar10;
        if (-1 < (int)(uVar15 - 0x20)) break;
        uVar23 = uVar23 | (uint)bVar22 << (uVar15 & 0x1f);
        uVar21 = uVar21 | (byte)((bVar22 >> 1) >> (0x1f - uVar15 & 0x1f));
        uVar15 = uVar15 + 8;
        puVar10 = (uint *)((int)puVar10 + 1);
        if (uVar15 == 0x40) goto LAB_ram_48072258;
      }
      uVar21 = uVar21 | (uint)bVar22 << (uVar15 - 0x20 & 0x1f);
      uVar15 = uVar15 + 8;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while (uVar15 != 0x40);
LAB_ram_48072258:
    puVar10 = puVar7 + 8;
    uVar15 = 0;
    uVar25 = 0;
    uVar24 = 0;
    do {
      while( true ) {
        bVar22 = (byte)*puVar10;
        if (-1 < (int)(uVar15 - 0x20)) break;
        uVar25 = uVar25 | (uint)bVar22 << (uVar15 & 0x1f);
        uVar24 = uVar24 | (byte)((bVar22 >> 1) >> (0x1f - uVar15 & 0x1f));
        uVar15 = uVar15 + 8;
        puVar10 = (uint *)((int)puVar10 + 1);
        if (uVar15 == 0x40) goto LAB_ram_480722ae;
      }
      uVar24 = uVar24 | (uint)bVar22 << (uVar15 - 0x20 & 0x1f);
      uVar15 = uVar15 + 8;
      puVar10 = (uint *)((int)puVar10 + 1);
    } while (uVar15 != 0x40);
LAB_ram_480722ae:
    if ((byte)puVar7[10] < 2) {
      bVar22 = *(byte *)((int)puVar7 + 0x29);
      bVar20 = *(byte *)((int)puVar7 + 0x2a);
      bVar5 = (byte)puVar7[10] & 1;
    }
    else {
      bVar20 = 0;
      bVar5 = 1;
      bVar22 = 0xff;
    }
    puVar18[4] = uVar19;
    puVar18[7] = uVar21;
    *puVar18 = uVar12;
    puVar18[1] = uVar13;
    puVar18[2] = uVar14;
    puVar18[3] = uVar17;
    puVar18[5] = uVar6;
    puVar18[6] = uVar23;
    puVar18[8] = uVar25;
    puVar18[9] = uVar24;
    *(byte *)(puVar18 + 10) = bVar5;
    *(byte *)((int)puVar18 + 0x29) = bVar22;
    *(byte *)((int)puVar18 + 0x2a) = bVar20;
    puVar18[0xc] = 0;
    puVar18[0xd] = 0;
    puVar18 = puVar18 + 0xe;
    puVar7 = (uint *)((int)puVar7 + 0x2b);
  } while (puVar18 != &uStack_78);
  if (((bVar2) || (bVar3)) || (bVar4)) {
    pbVar9 = param_1 + 0x3d5;
    uVar12 = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    do {
      bVar22 = *pbVar9;
      if ((int)(uVar12 - 0x20) < 0) {
        uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
        uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
      }
      else {
        uVar17 = 0;
        uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
      }
      uVar12 = uVar12 + 8;
      uStack_78 = uStack_78 | uVar17;
      uStack_74 = uStack_74 | uVar13;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0x40);
    pbVar9 = param_1 + 0x3dd;
    uVar12 = 0;
    uStack_4e8 = 0;
    uStack_4e4 = 0;
    do {
      bVar22 = *pbVar9;
      if ((int)(uVar12 - 0x20) < 0) {
        uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
        uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
      }
      else {
        uVar17 = 0;
        uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
      }
      uVar12 = uVar12 + 8;
      uStack_4e8 = uStack_4e8 | uVar17;
      uStack_4e4 = uStack_4e4 | uVar13;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0x40);
    pbVar9 = param_1 + 0x3e5;
    puVar7 = local_4a8;
    do {
      uVar17 = 0;
      uVar12 = 0;
      uVar13 = 0;
      pbVar11 = pbVar9;
      do {
        while( true ) {
          uVar14 = uVar17 - 0x20;
          bVar22 = *pbVar11;
          uVar6 = 0x1f - uVar17;
          if (-1 < (int)uVar14) break;
          uVar14 = uVar17 & 0x1f;
          uVar17 = uVar17 + 8;
          uVar12 = uVar12 | (uint)bVar22 << uVar14;
          uVar13 = uVar13 | (byte)((bVar22 >> 1) >> (uVar6 & 0x1f));
          pbVar11 = pbVar11 + 1;
          if (uVar17 == 0x40) goto LAB_ram_4807247c;
        }
        uVar17 = uVar17 + 8;
        uVar13 = uVar13 | (uint)bVar22 << (uVar14 & 0x1f);
        pbVar11 = pbVar11 + 1;
      } while (uVar17 != 0x40);
LAB_ram_4807247c:
      *puVar7 = uVar12;
      puVar7[1] = uVar13;
      puVar7 = puVar7 + 0xe;
      pbVar9 = pbVar9 + 8;
    } while (auStack_48 != puVar7);
    pbVar9 = param_1 + 0x485;
    uVar12 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    do {
      bVar22 = *pbVar9;
      if ((int)(uVar12 - 0x20) < 0) {
        uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
        uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
      }
      else {
        uVar17 = 0;
        uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
      }
      uVar12 = uVar12 + 8;
      uStack_70 = uStack_70 | uVar17;
      uStack_6c = uStack_6c | uVar13;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0x40);
    if (bVar3) {
      bStack_68 = param_1[0x48d];
      bStack_66 = param_1[0x48f];
      bStack_67 = param_1[0x48e];
      bStack_65 = param_1[0x490];
      bStack_64 = param_1[0x491];
      bStack_63 = param_1[0x492];
      bStack_62 = param_1[0x493];
      bStack_61 = param_1[0x494];
      bStack_60 = param_1[0x495];
      bStack_5f = param_1[0x496];
      bStack_5e = param_1[0x497];
      bStack_5d = param_1[0x498];
      if (1 < param_1[0x499]) {
        return 0;
      }
      bStack_5c = param_1[0x499] & 1;
      if (!bVar4) goto LAB_ram_48072316;
    }
    else {
      if (!bVar4) goto LAB_ram_48072316;
      bStack_67 = param_1[0x48e];
      bStack_5d = param_1[0x498];
      bStack_68 = param_1[0x48d];
      bStack_66 = param_1[0x48f];
      bStack_65 = param_1[0x490];
      bStack_64 = param_1[0x491];
      bStack_63 = param_1[0x492];
      bStack_62 = param_1[0x493];
      bStack_61 = param_1[0x494];
      bStack_60 = param_1[0x495];
      bStack_5f = param_1[0x496];
      bStack_5e = param_1[0x497];
      if (1 < param_1[0x499]) {
        return 0;
      }
      bStack_5c = param_1[0x499] & 1;
    }
    if (1 < param_1[0x49a]) {
      return 0;
    }
    uStack_58 = *(undefined4 *)(param_1 + 0x49b);
    uStack_54 = *(undefined4 *)(param_1 + 0x49f);
    bStack_5b = param_1[0x49a] & 1;
    pbVar9 = param_1 + 0x4a3;
    uVar12 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    do {
      bVar22 = *pbVar9;
      if ((int)(uVar12 - 0x20) < 0) {
        uVar13 = (uint)(byte)((bVar22 >> 1) >> (0x1f - uVar12 & 0x1f));
        uVar17 = (uint)bVar22 << (uVar12 & 0x1f);
      }
      else {
        uVar17 = 0;
        uVar13 = (uint)bVar22 << (uVar12 - 0x20 & 0x1f);
      }
      uVar12 = uVar12 + 8;
      uStack_50 = uStack_50 | uVar17;
      uStack_4c = uStack_4c | uVar13;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0x40);
    auStack_48[0] = *(uint *)(param_1 + 0x4ab);
  }
LAB_ram_48072316:
  iVar8 = FUN_ram_48070f54(&uStack_568);
  if (iVar8 == 0) {
    return 0;
  }
  FUN_ram_4ff45158(param_3,&uStack_568,0x524);
  *param_4 = *(undefined4 *)(param_1 + 8);
  return iVar8;
}


