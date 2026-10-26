/* Firmware entry: 0x4807aaf8 */

int FUN_ram_4807aaf8(byte *param_1,byte *param_2,uint param_3,uint *param_4)

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
  undefined2 uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  byte *pbVar16;
  byte *pbVar17;
  int iVar18;
  ushort uVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_4 = 0;
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  uVar15 = ((uint)param_1[0x22502] * 7 + (uint)*(ushort *)(param_1 + 0x22500) * 0xf) * 8 + 0x18;
  if (param_3 < uVar15) {
    return 0;
  }
  if (0x1e478 < uVar15) {
    return 0;
  }
  iVar12 = FUN_ram_4807a88c();
  if (iVar12 == 0) {
    return 0;
  }
  param_2[1] = 0x42;
  param_2[3] = 0x31;
  param_2[5] = 0;
  *param_2 = 0x4f;
  param_2[2] = 0x58;
  param_2[4] = 1;
  uVar11 = *(undefined2 *)(param_1 + 0x22500);
  param_2[6] = (byte)uVar11;
  param_2[7] = (byte)((ushort)uVar11 >> 8);
  bVar13 = param_1[0x22502];
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = bVar13;
  param_2[0xb] = 0;
  uVar23 = *(uint *)(param_1 + 0x2250c);
  uVar22 = *(uint *)(param_1 + 0x22508);
  pbVar21 = param_2 + 0xc;
  uVar15 = 0;
  pbVar17 = pbVar21;
  do {
    bVar13 = (byte)(uVar22 >> (uVar15 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar15 & 0x1f));
    if (-1 < (int)(uVar15 - 0x20)) {
      bVar13 = (byte)(uVar23 >> (uVar15 - 0x20 & 0x1f));
    }
    *pbVar17 = bVar13;
    uVar15 = uVar15 + 8;
    pbVar17 = pbVar17 + 1;
  } while (uVar15 != 0x40);
  if (*(short *)(param_1 + 0x22500) == 0) {
    iVar18 = 0x14;
    uVar15 = 0x18;
    if (param_1[0x22502] == 0) goto LAB_ram_4807b04a;
LAB_ram_4807af30:
    pbVar17 = param_1 + 0x22000;
    bVar13 = 0;
    do {
      bVar14 = pbVar17[5];
      bVar1 = pbVar17[6];
      bVar2 = pbVar17[9];
      bVar3 = *pbVar17;
      bVar4 = pbVar17[1];
      bVar5 = pbVar17[2];
      bVar6 = pbVar17[3];
      bVar7 = pbVar17[4];
      bVar8 = pbVar17[8];
      bVar9 = pbVar17[10];
      bVar10 = pbVar17[0xb];
      pbVar20 = param_2 + iVar18;
      pbVar20[7] = pbVar17[7];
      pbVar20[9] = bVar2;
      *pbVar20 = bVar3;
      pbVar20[1] = bVar4;
      pbVar20[2] = bVar5;
      pbVar20[3] = bVar6;
      pbVar20[4] = bVar7;
      pbVar20[5] = bVar14;
      pbVar20[6] = bVar1;
      pbVar20[8] = bVar8;
      pbVar20[10] = bVar9;
      pbVar20[0xb] = bVar10;
      uVar23 = *(uint *)(pbVar17 + 0x14);
      uVar15 = *(uint *)(pbVar17 + 0x10);
      pbVar20 = pbVar21 + iVar18;
      uVar22 = 0;
      do {
        bVar14 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar14 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar20 = bVar14;
        uVar22 = uVar22 + 8;
        pbVar20 = pbVar20 + 1;
      } while (uVar22 != 0x40);
      uVar15 = *(uint *)(pbVar17 + 0x18);
      pbVar20 = param_2 + iVar18 + 0x14;
      uVar22 = 0;
      do {
        *pbVar20 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar20 = pbVar20 + 1;
      } while (uVar22 != 0x20);
      FUN_ram_4ff45158(param_2 + iVar18 + 0x18,pbVar17 + 0x1c,0x20);
      bVar13 = bVar13 + 1;
      iVar18 = iVar18 + 0x38;
      pbVar17 = pbVar17 + 0x40;
    } while (bVar13 < param_1[0x22502]);
  }
  else {
    pbVar20 = param_2 + 0x7c;
    iVar18 = 0x14;
    uVar19 = 0;
    pbVar17 = param_1;
    do {
      bVar13 = pbVar17[5];
      bVar14 = pbVar17[6];
      bVar1 = pbVar17[9];
      bVar2 = *pbVar17;
      bVar3 = pbVar17[1];
      bVar4 = pbVar17[2];
      bVar5 = pbVar17[3];
      bVar6 = pbVar17[4];
      bVar7 = pbVar17[8];
      bVar8 = pbVar17[10];
      bVar9 = pbVar17[0xb];
      pbVar16 = param_2 + iVar18;
      pbVar16[7] = pbVar17[7];
      pbVar16[9] = bVar1;
      *pbVar16 = bVar2;
      pbVar16[1] = bVar3;
      pbVar16[2] = bVar4;
      pbVar16[3] = bVar5;
      pbVar16[4] = bVar6;
      pbVar16[5] = bVar13;
      pbVar16[6] = bVar14;
      pbVar16[8] = bVar7;
      pbVar16[10] = bVar8;
      pbVar16[0xb] = bVar9;
      uVar23 = *(uint *)(pbVar17 + 0x14);
      uVar15 = *(uint *)(pbVar17 + 0x10);
      pbVar16 = pbVar21 + iVar18;
      uVar22 = 0;
      do {
        bVar13 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar13 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar16 = bVar13;
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x40);
      uVar15 = *(uint *)(pbVar17 + 0x18);
      pbVar16 = param_2 + iVar18 + 0x14;
      uVar22 = 0;
      do {
        *pbVar16 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x20);
      uVar23 = *(uint *)(pbVar17 + 0x24);
      uVar15 = *(uint *)(pbVar17 + 0x20);
      pbVar16 = param_2 + iVar18 + 0x18;
      uVar22 = 0;
      do {
        bVar13 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar13 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar16 = bVar13;
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x40);
      FUN_ram_4ff45158(param_2 + iVar18 + 0x20,pbVar17 + 0x28,0x20);
      uVar15 = *(uint *)(pbVar17 + 0x48);
      pbVar16 = param_2 + iVar18 + 0x40;
      uVar22 = 0;
      do {
        *pbVar16 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x20);
      uVar15 = *(uint *)(pbVar17 + 0x4c);
      pbVar16 = param_2 + iVar18 + 0x44;
      uVar22 = 0;
      do {
        *pbVar16 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x20);
      uVar15 = *(uint *)(pbVar17 + 0x50);
      pbVar16 = param_2 + iVar18 + 0x48;
      uVar22 = 0;
      do {
        *pbVar16 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x20);
      uVar15 = *(uint *)(pbVar17 + 0x54);
      pbVar16 = param_2 + iVar18 + 0x4c;
      uVar22 = 0;
      do {
        *pbVar16 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x20);
      uVar23 = *(uint *)(pbVar17 + 0x5c);
      uVar15 = *(uint *)(pbVar17 + 0x58);
      pbVar16 = param_2 + iVar18 + 0x50;
      uVar22 = 0;
      do {
        bVar13 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar13 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar16 = bVar13;
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x40);
      uVar23 = *(uint *)(pbVar17 + 100);
      uVar15 = *(uint *)(pbVar17 + 0x60);
      pbVar16 = param_2 + iVar18 + 0x58;
      uVar22 = 0;
      do {
        bVar13 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar13 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar16 = bVar13;
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x40);
      uVar23 = *(uint *)(pbVar17 + 0x6c);
      uVar15 = *(uint *)(pbVar17 + 0x68);
      pbVar16 = param_2 + iVar18 + 0x60;
      uVar22 = 0;
      do {
        bVar13 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar13 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar16 = bVar13;
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x40);
      *pbVar20 = pbVar17[0x70];
      pbVar16 = param_2 + iVar18 + 0x6b;
      uVar22 = 0;
      pbVar20[1] = pbVar17[0x71];
      pbVar20[2] = pbVar17[0x72];
      uVar23 = *(uint *)(pbVar17 + 0x7c);
      uVar15 = *(uint *)(pbVar17 + 0x78);
      do {
        bVar13 = (byte)(uVar15 >> (uVar22 & 0x1f)) | (byte)((uVar23 << 1) << (0x1f - uVar22 & 0x1f))
        ;
        if (-1 < (int)(uVar22 - 0x20)) {
          bVar13 = (byte)(uVar23 >> (uVar22 - 0x20 & 0x1f));
        }
        *pbVar16 = bVar13;
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x40);
      uVar15 = *(uint *)(pbVar17 + 0x80);
      pbVar16 = param_2 + iVar18 + 0x73;
      uVar22 = 0;
      do {
        *pbVar16 = (byte)(uVar15 >> (uVar22 & 0x1f));
        uVar22 = uVar22 + 8;
        pbVar16 = pbVar16 + 1;
      } while (uVar22 != 0x20);
      uVar19 = uVar19 + 1;
      pbVar20[0xf] = pbVar17[0x84];
      iVar18 = iVar18 + 0x78;
      pbVar17 = pbVar17 + 0x88;
      pbVar20 = pbVar20 + 0x78;
    } while (uVar19 < *(ushort *)(param_1 + 0x22500));
    if (param_1[0x22502] != 0) goto LAB_ram_4807af30;
  }
  uVar15 = iVar18 + 4;
  if ((param_3 < uVar15) || (0x1e478 < uVar15)) {
    return 0;
  }
LAB_ram_4807b04a:
  pbVar17 = param_2 + iVar18;
  uVar22 = 0xffffffff;
  do {
    iVar18 = 8;
    uVar22 = uVar22 ^ *param_2;
    do {
      iVar18 = iVar18 + -1;
      uVar22 = uVar22 >> 1 ^ -(uVar22 & 1) & 0xedb88320;
    } while (iVar18 != 0);
    param_2 = param_2 + 1;
  } while (pbVar17 != param_2);
  uVar23 = 0;
  do {
    *pbVar17 = (byte)(~uVar22 >> (uVar23 & 0x1f));
    uVar23 = uVar23 + 8;
    pbVar17 = pbVar17 + 1;
  } while (uVar23 != 0x20);
  *param_4 = uVar15;
  return iVar12;
}


