/* Firmware entry: 0x480713be */

int FUN_ram_480713be(undefined4 *param_1,undefined4 param_2,byte *param_3)

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
  undefined4 *puVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte bVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar12 = FUN_ram_48070f54();
  if (iVar12 == 0) {
    return 0;
  }
  memset(param_3,0,0x4b3);
  *param_3 = 0x46;
  param_3[1] = 0x53;
  param_3[3] = 0x31;
  param_3[6] = 0xb3;
  param_3[9] = (byte)((uint)param_2 >> 8);
  param_3[10] = (byte)((uint)param_2 >> 0x10);
  param_3[4] = 4;
  param_3[7] = 4;
  param_3[8] = (byte)param_2;
  param_3[2] = 0x52;
  param_3[0xb] = (byte)((uint)param_2 >> 0x18);
  uVar17 = *param_1;
  pbVar13 = param_3 + 0x18;
  uVar18 = 0;
  param_3[0xd] = (byte)((uint)uVar17 >> 8);
  param_3[0xe] = (byte)((uint)uVar17 >> 0x10);
  param_3[0xf] = (byte)((uint)uVar17 >> 0x18);
  param_3[0xc] = (byte)uVar17;
  uVar17 = param_1[1];
  param_3[0x11] = (byte)((uint)uVar17 >> 8);
  param_3[0x12] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x13] = (byte)((uint)uVar17 >> 0x18);
  param_3[0x10] = (byte)uVar17;
  uVar17 = param_1[2];
  param_3[0x15] = (byte)((uint)uVar17 >> 8);
  param_3[0x14] = (byte)uVar17;
  param_3[0x16] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x17] = (byte)((uint)uVar17 >> 0x18);
  uVar20 = param_1[5];
  uVar19 = param_1[4];
  do {
    bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
    if (-1 < (int)(uVar18 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar18 = uVar18 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar18 != 0x40);
  uVar20 = param_1[7];
  uVar18 = param_1[6];
  pbVar13 = param_3 + 0x20;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  uVar20 = param_1[9];
  uVar18 = param_1[8];
  pbVar13 = param_3 + 0x28;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  uVar17 = param_1[10];
  pbVar13 = param_3 + 0x34;
  uVar19 = 0;
  param_3[0x31] = (byte)((uint)uVar17 >> 8);
  param_3[0x30] = (byte)uVar17;
  param_3[0x32] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x33] = (byte)((uint)uVar17 >> 0x18);
  uVar20 = param_1[0xd];
  uVar18 = param_1[0xc];
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  uVar20 = param_1[0xf];
  uVar18 = param_1[0xe];
  pbVar13 = param_3 + 0x3c;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  uVar20 = param_1[0x11];
  uVar18 = param_1[0x10];
  pbVar13 = param_3 + 0x44;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  pbVar13 = param_3 + 0x5d;
  uVar18 = 0;
  param_3[0x4c] = *(byte *)(param_1 + 0x12);
  uVar17 = param_1[0x14];
  param_3[0x4e] = (byte)((uint)uVar17 >> 8);
  param_3[0x4f] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x50] = (byte)((uint)uVar17 >> 0x18);
  param_3[0x4d] = (byte)uVar17;
  uVar17 = param_1[0x15];
  param_3[0x52] = (byte)((uint)uVar17 >> 8);
  param_3[0x53] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x54] = (byte)((uint)uVar17 >> 0x18);
  param_3[0x51] = (byte)uVar17;
  uVar17 = param_1[0x16];
  param_3[0x56] = (byte)((uint)uVar17 >> 8);
  param_3[0x57] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x58] = (byte)((uint)uVar17 >> 0x18);
  param_3[0x55] = (byte)uVar17;
  uVar17 = param_1[0x17];
  param_3[0x5a] = (byte)((uint)uVar17 >> 8);
  param_3[0x59] = (byte)uVar17;
  param_3[0x5b] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x5c] = (byte)((uint)uVar17 >> 0x18);
  uVar20 = param_1[0x19];
  uVar19 = param_1[0x18];
  do {
    bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
    if (-1 < (int)(uVar18 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar18 = uVar18 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar18 != 0x40);
  uVar20 = param_1[0x1b];
  uVar18 = param_1[0x1a];
  pbVar13 = param_3 + 0x65;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  uVar20 = param_1[0x1d];
  uVar18 = param_1[0x1c];
  pbVar13 = param_3 + 0x6d;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  param_3[0x75] = *(byte *)(param_1 + 0x1e);
  param_3[0x76] = *(byte *)((int)param_1 + 0x79);
  param_3[0x77] = *(byte *)((int)param_1 + 0x7a);
  param_3[0x78] = *(byte *)(param_1 + 0x22);
  puVar11 = param_1 + 0x24;
  pbVar13 = param_3 + 0x79;
  do {
    uVar17 = *puVar11;
    pbVar14 = pbVar13 + 0x10;
    uVar18 = 0;
    pbVar13[1] = (byte)((uint)uVar17 >> 8);
    pbVar13[2] = (byte)((uint)uVar17 >> 0x10);
    pbVar13[3] = (byte)((uint)uVar17 >> 0x18);
    *pbVar13 = (byte)uVar17;
    uVar17 = puVar11[1];
    pbVar13[5] = (byte)((uint)uVar17 >> 8);
    pbVar13[6] = (byte)((uint)uVar17 >> 0x10);
    pbVar13[7] = (byte)((uint)uVar17 >> 0x18);
    pbVar13[4] = (byte)uVar17;
    uVar17 = puVar11[2];
    pbVar13[9] = (byte)((uint)uVar17 >> 8);
    pbVar13[10] = (byte)((uint)uVar17 >> 0x10);
    pbVar13[0xb] = (byte)((uint)uVar17 >> 0x18);
    pbVar13[8] = (byte)uVar17;
    uVar17 = puVar11[3];
    pbVar13[0xd] = (byte)((uint)uVar17 >> 8);
    pbVar13[0xc] = (byte)uVar17;
    pbVar13[0xe] = (byte)((uint)uVar17 >> 0x10);
    pbVar13[0xf] = (byte)((uint)uVar17 >> 0x18);
    uVar20 = puVar11[5];
    uVar19 = puVar11[4];
    do {
      bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
      if (-1 < (int)(uVar18 - 0x20)) {
        bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
      }
      *pbVar14 = bVar15;
      uVar18 = uVar18 + 8;
      pbVar14 = pbVar14 + 1;
    } while (uVar18 != 0x40);
    uVar20 = puVar11[7];
    uVar19 = puVar11[6];
    pbVar14 = pbVar13 + 0x18;
    uVar18 = 0;
    do {
      bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
      if (-1 < (int)(uVar18 - 0x20)) {
        bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
      }
      *pbVar14 = bVar15;
      uVar18 = uVar18 + 8;
      pbVar14 = pbVar14 + 1;
    } while (uVar18 != 0x40);
    uVar20 = puVar11[9];
    uVar19 = puVar11[8];
    pbVar14 = pbVar13 + 0x20;
    uVar18 = 0;
    do {
      bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
      if (-1 < (int)(uVar18 - 0x20)) {
        bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
      }
      *pbVar14 = bVar15;
      uVar18 = uVar18 + 8;
      pbVar14 = pbVar14 + 1;
    } while (uVar18 != 0x40);
    pbVar14 = pbVar13 + 0x2b;
    pbVar13[0x28] = *(byte *)(puVar11 + 10);
    pbVar13[0x29] = *(byte *)((int)puVar11 + 0x29);
    pbVar13[0x2a] = *(byte *)((int)puVar11 + 0x2a);
    puVar11 = puVar11 + 0xe;
    pbVar13 = pbVar14;
  } while (pbVar14 != param_3 + 0x3d5);
  uVar20 = param_1[0x13d];
  uVar18 = param_1[0x13c];
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar14 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar14 = pbVar14 + 1;
  } while (uVar19 != 0x40);
  uVar20 = param_1[0x21];
  uVar18 = param_1[0x20];
  pbVar13 = param_3 + 0x3dd;
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar18 >> (uVar19 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  pbVar13 = param_3 + 0x3e5;
  puVar21 = param_1 + 0x30;
  do {
    uVar20 = puVar21[1];
    uVar19 = *puVar21;
    uVar18 = 0;
    pbVar14 = pbVar13;
    do {
      bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
      if (-1 < (int)(uVar18 - 0x20)) {
        bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
      }
      *pbVar14 = bVar15;
      uVar18 = uVar18 + 8;
      pbVar14 = pbVar14 + 1;
    } while (uVar18 != 0x40);
    pbVar13 = pbVar13 + 8;
    puVar21 = puVar21 + 0xe;
  } while (pbVar13 != param_3 + 0x485);
  uVar18 = param_1[0x13f];
  uVar20 = param_1[0x13e];
  uVar19 = 0;
  do {
    bVar15 = (byte)(uVar20 >> (uVar19 & 0x1f)) | (byte)((uVar18 << 1) << (0x1f - uVar19 & 0x1f));
    if (-1 < (int)(uVar19 - 0x20)) {
      bVar15 = (byte)(uVar18 >> (uVar19 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar19 = uVar19 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar19 != 0x40);
  bVar15 = *(byte *)((int)param_1 + 0x503);
  bVar1 = *(byte *)(param_1 + 0x141);
  bVar2 = *(byte *)((int)param_1 + 0x505);
  bVar3 = *(byte *)((int)param_1 + 0x506);
  bVar4 = *(byte *)((int)param_1 + 0x507);
  bVar5 = *(byte *)(param_1 + 0x142);
  bVar6 = *(byte *)((int)param_1 + 0x509);
  bVar7 = *(byte *)((int)param_1 + 0x50a);
  bVar8 = *(byte *)((int)param_1 + 0x50b);
  bVar9 = *(byte *)((int)param_1 + 0x501);
  bVar10 = *(byte *)((int)param_1 + 0x502);
  param_3[0x48d] = *(byte *)(param_1 + 0x140);
  param_3[0x490] = bVar15;
  param_3[0x491] = bVar1;
  param_3[0x492] = bVar2;
  param_3[0x493] = bVar3;
  param_3[0x494] = bVar4;
  param_3[0x495] = bVar5;
  param_3[0x496] = bVar6;
  param_3[0x497] = bVar7;
  param_3[0x48e] = bVar9;
  param_3[0x48f] = bVar10;
  param_3[0x498] = bVar8;
  pbVar13 = param_3 + 0x4a3;
  uVar18 = 0;
  param_3[0x499] = *(byte *)(param_1 + 0x143);
  param_3[0x49a] = *(byte *)((int)param_1 + 0x50d);
  uVar17 = param_1[0x144];
  param_3[0x49b] = (byte)uVar17;
  param_3[0x49c] = (byte)((uint)uVar17 >> 8);
  param_3[0x49d] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x49e] = (byte)((uint)uVar17 >> 0x18);
  uVar17 = param_1[0x145];
  param_3[0x4a0] = (byte)((uint)uVar17 >> 8);
  param_3[0x49f] = (byte)uVar17;
  param_3[0x4a1] = (byte)((uint)uVar17 >> 0x10);
  param_3[0x4a2] = (byte)((uint)uVar17 >> 0x18);
  uVar20 = param_1[0x147];
  uVar19 = param_1[0x146];
  do {
    bVar15 = (byte)(uVar19 >> (uVar18 & 0x1f)) | (byte)((uVar20 << 1) << (0x1f - uVar18 & 0x1f));
    if (-1 < (int)(uVar18 - 0x20)) {
      bVar15 = (byte)(uVar20 >> (uVar18 - 0x20 & 0x1f));
    }
    *pbVar13 = bVar15;
    uVar18 = uVar18 + 8;
    pbVar13 = pbVar13 + 1;
  } while (uVar18 != 0x40);
  uVar17 = param_1[0x148];
  param_3[0x4ac] = (byte)((uint)uVar17 >> 8);
  param_3[0x4ae] = (byte)((uint)uVar17 >> 0x18);
  param_3[0x4ab] = (byte)uVar17;
  param_3[0x4ad] = (byte)((uint)uVar17 >> 0x10);
  uVar18 = 0xffffffff;
  pbVar13 = param_3;
  do {
    cVar16 = '\b';
    uVar18 = uVar18 ^ *pbVar13;
    do {
      cVar16 = cVar16 + -1;
      uVar18 = uVar18 >> 1 ^ -(uVar18 & 1) & 0xedb88320;
    } while (cVar16 != '\0');
    pbVar13 = pbVar13 + 1;
  } while (param_3 + 0x4af != pbVar13);
  uVar18 = ~uVar18;
  param_3[0x4af] = (byte)uVar18;
  param_3[0x4b0] = (byte)(uVar18 >> 8);
  param_3[0x4b1] = (byte)(uVar18 >> 0x10);
  param_3[0x4b2] = (byte)(uVar18 >> 0x18);
  return iVar12;
}


