/* Firmware entry: 0x4805d88e */

void FUN_ram_4805d88e(undefined4 *param_1,char *param_2,int *param_3,undefined2 param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  byte *pbVar9;
  int iVar10;
  char cVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  int iVar24;
  int iVar25;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar2 = *param_2;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = param_4;
  *(undefined1 *)((int)param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 2) = 8;
  if ((((cVar2 == '\0') || (8 < (byte)param_2[9])) || (*param_3 != *(int *)(param_2 + 4))) ||
     ((uVar22 = (uint)*(byte *)(param_3 + 1), uVar22 != (byte)param_2[9] ||
      ((param_2[8] & *(byte *)((int)param_3 + 0xd)) == 0)))) {
LAB_ram_4805d92e:
    *(undefined1 *)((int)param_1 + 1) = 4;
    return;
  }
  if (uVar22 == 0) {
    iVar25 = param_3[1];
    iVar24 = param_3[2];
    iVar16 = param_3[3];
    iVar3 = param_3[4];
    iVar13 = param_3[5];
    iVar10 = param_3[6];
    iVar4 = param_3[7];
    iVar6 = param_3[8];
    param_1[1] = *param_3;
    param_1[2] = iVar25;
    param_1[3] = iVar24;
    param_1[4] = iVar16;
    param_1[5] = iVar3;
    param_1[6] = iVar13;
    param_1[7] = iVar10;
    param_1[8] = iVar4;
    param_1[9] = iVar6;
  }
  else {
    pbVar20 = (byte *)((int)param_3 + 5);
    pbVar12 = (byte *)(param_2 + 10);
    pbVar23 = pbVar12 + uVar22;
    pbVar9 = pbVar20;
    do {
      pbVar1 = pbVar12 + 8;
      bVar7 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      if (((*pbVar9 ^ *pbVar1) & bVar7) != 0) goto LAB_ram_4805d92e;
      pbVar9 = pbVar9 + 1;
    } while (pbVar12 != pbVar23);
    iVar10 = param_3[6];
    iVar6 = *param_3;
    iVar3 = param_3[1];
    iVar25 = param_3[2];
    iVar24 = param_3[3];
    iVar4 = param_3[4];
    iVar13 = param_3[7];
    iVar16 = param_3[8];
    param_1[6] = param_3[5];
    param_1[7] = iVar10;
    pbVar23 = pbVar20 + uVar22;
    param_1[1] = iVar6;
    param_1[2] = iVar3;
    param_1[3] = iVar25;
    param_1[4] = iVar24;
    param_1[5] = iVar4;
    param_1[8] = iVar13;
    param_1[9] = iVar16;
    pbVar9 = (byte *)(param_2 + 0x1a);
    pbVar12 = (byte *)((int)param_1 + 9);
    do {
      bVar7 = *pbVar20;
      pbVar20 = pbVar20 + 1;
      *pbVar12 = bVar7 ^ (pbVar9[8] ^ bVar7) & *pbVar9;
      pbVar9 = pbVar9 + 1;
      pbVar12 = pbVar12 + 1;
    } while (pbVar23 != pbVar20);
  }
  if (param_2[0x31] != '\0') {
    uVar21 = (uint)(byte)param_2[0x34];
    uVar18 = (uint)(byte)param_2[0x32];
    bVar7 = param_2[0x37];
    uVar22 = (uint)bVar7;
    uVar14 = (uint)(byte)param_2[0x38];
    uVar5 = (uint)(byte)param_2[0x33];
    uVar19 = uVar21 - 1 & 0xff;
    if (param_2[0x31] == '\x01') {
      if ((uVar19 < 8) && (uVar21 + uVar5 < 9)) {
        uVar17 = 0xff;
        if (uVar21 != 8) {
          uVar17 = (1 << (uVar21 & 0x1f)) - 1U & 0xffff;
        }
        if (uVar22 <= uVar14) {
          iVar3 = (int)((uint)*(byte *)((int)param_3 + uVar18 + 5) & uVar17 << (uVar5 & 0x1f)) >>
                  (uVar5 & 0x1f);
          goto LAB_ram_4805dc28;
        }
        goto LAB_ram_4805da14;
      }
      iVar3 = 0;
      if (uVar22 <= uVar14) {
LAB_ram_4805dc28:
        uVar14 = (uVar14 + 1) - uVar22;
        iVar3 = ((int)(((iVar3 + param_2[0x39]) - uVar22) * 0x10000) >> 0x10) % (int)uVar14;
        if (iVar3 < 0) {
          iVar3 = iVar3 + (uVar14 & 0xffff);
        }
        uVar22 = (int)(short)iVar3 + uVar22 & 0xff;
        goto LAB_ram_4805da08;
      }
      bVar7 = 0;
    }
    else {
      if (*(char *)((int)param_1 + 0x29) == '\0') {
        if (uVar22 <= uVar14) {
          uVar17 = (uVar14 + 1) - uVar22;
          iVar3 = (int)((byte)param_2[0x36] - uVar22) % (int)uVar17;
          if (iVar3 < 0) {
            iVar3 = (int)(((uVar17 & 0xffff) + iVar3) * 0x10000) >> 0x10;
          }
          else {
            iVar3 = (int)(short)iVar3;
          }
          uVar17 = iVar3 + uVar22 & 0xff;
          *(undefined1 *)((int)param_1 + 0x29) = 1;
          goto LAB_ram_4805d9d4;
        }
        *(undefined1 *)((int)param_1 + 0x29) = 1;
        uVar17 = uVar22;
      }
      else {
        uVar17 = (uint)*(byte *)(param_1 + 10);
LAB_ram_4805d9d4:
        if (uVar22 <= uVar14) {
          uVar14 = (uVar14 + 1) - uVar22;
          iVar3 = ((int)((((byte)param_2[0x35] - uVar22) + uVar17) * 0x10000) >> 0x10) % (int)uVar14
          ;
          if (iVar3 < 0) {
            iVar3 = iVar3 + (uVar14 & 0xffff);
          }
          bVar7 = (char)iVar3 + bVar7;
        }
      }
      *(byte *)(param_1 + 10) = bVar7;
      uVar22 = uVar17;
LAB_ram_4805da08:
      bVar7 = 0;
      if (uVar19 < 8) {
LAB_ram_4805da14:
        bVar7 = 0;
        if (uVar21 + uVar5 < 9) {
          uVar14 = 0xff;
          if (uVar21 != 8) {
            uVar14 = (1 << (uVar21 & 0x1f)) - 1U & 0xffff;
          }
          bVar7 = (byte)(uVar14 << (uVar5 & 0x1f));
        }
      }
    }
    bVar15 = *(byte *)((int)param_1 + uVar18 + 9);
    *(byte *)((int)param_1 + uVar18 + 9) =
         bVar15 ^ bVar7 & ((byte)(uVar22 << (uVar5 & 0x1f)) ^ bVar15);
  }
  cVar2 = param_2[0x3a];
  if (cVar2 == '\0') goto LAB_ram_4805db7c;
  bVar7 = param_2[0x3b];
  uVar5 = (uint)(byte)param_2[0x3c];
  uVar22 = (uint)*(byte *)(param_1 + 2);
  if (cVar2 == '\x01') {
    uVar14 = (uint)(byte)param_2[0x3d];
    if (uVar22 != 0) {
      uVar18 = 0;
      do {
        if (((bVar7 >> (uVar18 & 0x1f) & 1) != 0) && ((uVar18 & 0xff) != uVar5)) {
          uVar14 = uVar14 + *(byte *)((int)param_1 + uVar18 + 9) & 0xffff;
        }
        uVar18 = uVar18 + 1;
      } while (uVar22 != uVar18);
      uVar14 = uVar14 & 0xff;
    }
LAB_ram_4805db72:
    bVar15 = (byte)uVar14;
  }
  else {
    if (cVar2 != '\x02') {
      uVar18 = (uint)(byte)param_2[0x3e];
      uVar14 = (uint)(byte)param_2[0x3f];
      cVar2 = param_2[0x41];
      if (param_2[0x43] != '\0') {
        uVar19 = (uint)param_1[1] >> 8;
        uVar21 = uVar19 & 7;
        if (cVar2 != '\0') {
          uVar21 = (uVar19 & 2) << 5 | ((uVar19 & 4) << 2 | (uVar19 & 1) << 6) << 1;
        }
        uVar14 = uVar14 ^ uVar21;
        cVar11 = '\b';
        do {
          cVar8 = (char)uVar14;
          cVar11 = cVar11 + -1;
          uVar14 = (uVar14 & 0x7f) << 1;
          if (cVar8 < '\0') {
            uVar14 = uVar18 ^ uVar14;
          }
        } while (cVar11 != '\0');
        uVar19 = param_1[1] & 0xff;
        if (cVar2 != '\0') {
          uVar19 = (uVar19 >> 4 | uVar19 << 4 & 0xff) >> 2 & 0x33 |
                   ((uVar19 >> 4 | uVar19 << 4) & 0x33) << 2;
          uVar19 = (uVar19 & 0x55) << 1 | uVar19 >> 1 & 0x55;
        }
        uVar14 = uVar14 ^ uVar19;
        cVar11 = '\b';
        do {
          cVar8 = (char)uVar14;
          cVar11 = cVar11 + -1;
          uVar14 = (uVar14 & 0x7f) << 1;
          if (cVar8 < '\0') {
            uVar14 = uVar18 ^ uVar14;
          }
        } while (cVar11 != '\0');
      }
      uVar19 = 0;
      if (uVar22 != 0) {
        do {
          if (((bVar7 >> (uVar19 & 0x1f) & 1) != 0) && ((uVar19 & 0xff) != uVar5)) {
            bVar15 = *(byte *)((int)param_1 + uVar19 + 9);
            uVar21 = (uint)bVar15;
            if (cVar2 != '\0') {
              uVar17 = (uint)(bVar15 >> 4);
              uVar21 = (uVar17 | uVar21 << 4 & 0xff) >> 2 & 0x33 |
                       ((uVar17 | uVar21 << 4) & 0x33) << 2;
              uVar21 = (uVar21 & 0x55) << 1 | uVar21 >> 1 & 0x55;
            }
            uVar14 = uVar14 ^ uVar21;
            cVar11 = '\b';
            do {
              cVar8 = (char)uVar14;
              cVar11 = cVar11 + -1;
              uVar14 = (uVar14 & 0x7f) << 1;
              if (cVar8 < '\0') {
                uVar14 = uVar18 ^ uVar14;
              }
            } while (cVar11 != '\0');
          }
          uVar19 = uVar19 + 1;
        } while (uVar22 != uVar19);
      }
      if (param_2[0x42] != '\0') {
        uVar22 = (uVar14 >> 4 | uVar14 << 4 & 0xff) >> 2 & 0x33 |
                 ((uVar14 >> 4 | uVar14 << 4) & 0x33) << 2;
        uVar14 = (uVar22 & 0x55) << 1 | uVar22 >> 1 & 0x55;
      }
      goto LAB_ram_4805db72;
    }
    bVar15 = param_2[0x3d];
    if (uVar22 != 0) {
      uVar14 = 0;
      do {
        if (((bVar7 >> (uVar14 & 0x1f) & 1) != 0) && ((uVar14 & 0xff) != uVar5)) {
          bVar15 = bVar15 ^ *(byte *)((int)param_1 + uVar14 + 9);
        }
        uVar14 = uVar14 + 1;
      } while (uVar22 != uVar14);
    }
  }
  *(byte *)((int)param_1 + uVar5 + 9) = bVar15 ^ param_2[0x40];
LAB_ram_4805db7c:
  param_1[6] = 0;
  *(undefined1 *)((int)param_1 + 0x1f) = 0;
  param_1[8] = 0;
  param_1[1] = param_1[1] & 0x7ff;
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xfe00;
  *(undefined1 *)param_1 = 1;
  return;
}


