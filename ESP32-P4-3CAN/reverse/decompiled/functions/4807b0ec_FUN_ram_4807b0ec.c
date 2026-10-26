/* Firmware entry: 0x4807b0ec */

int FUN_ram_4807b0ec(byte *param_1,int param_2,byte *param_3)

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
  ushort uVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  byte bVar27;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar21 = param_3;
  do {
    pvVar11 = memset(pbVar21,0,0x85);
    pbVar21 = (byte *)((int)pvVar11 + 0x88);
  } while (pbVar21 != param_3 + 0x22000);
  pbVar21 = param_3 + 0x22000;
  do {
    pvVar11 = memset(pbVar21,0,0x3c);
    pbVar21 = (byte *)((int)pvVar11 + 0x40);
  } while (param_3 + 0x22500 != pbVar21);
  param_3[0x22500] = 0;
  param_3[0x22501] = 0;
  param_3[0x22502] = 0;
  param_3[0x22508] = 1;
  param_3[0x22509] = 0;
  param_3[0x2250a] = 0;
  param_3[0x2250b] = 0;
  param_3[0x2250c] = 0;
  param_3[0x2250d] = 0;
  param_3[0x2250e] = 0;
  param_3[0x2250f] = 0;
  if ((param_1 != (byte *)0x0) && (param_2 - 0x18U < 0x1e461)) {
    uVar15 = 0;
    uVar23 = 0;
    do {
      uVar22 = uVar23 + 1;
      uVar15 = uVar15 | (uint)param_1[uVar23] << ((uVar23 & 3) << 3);
      uVar23 = uVar22;
    } while (uVar22 != 4);
    if (((uVar15 == 0x3158424f) && (*(short *)(param_1 + 4) == 1)) &&
       (*(short *)(param_1 + 10) == 0)) {
      uVar22 = param_2 - 4;
      uVar15 = 0;
      uVar23 = 0;
      pbVar21 = param_1 + uVar22;
      do {
        bVar27 = *pbVar21;
        pbVar21 = pbVar21 + 1;
        uVar12 = uVar23 & 0x1f;
        uVar23 = uVar23 + 8;
        uVar15 = uVar15 | (uint)bVar27 << uVar12;
      } while (uVar23 != 0x20);
      uVar23 = 0xffffffff;
      pbVar21 = param_1;
      do {
        iVar16 = 8;
        uVar23 = uVar23 ^ *pbVar21;
        do {
          iVar16 = iVar16 + -1;
          uVar23 = uVar23 >> 1 ^ -(uVar23 & 1) & 0xedb88320;
        } while (iVar16 != 0);
        pbVar21 = pbVar21 + 1;
      } while (param_1 + uVar22 != pbVar21);
      if (~uVar23 == uVar15) {
        uVar23 = (uint)*(ushort *)(param_1 + 6);
        if (uVar23 < 0x401) {
          uVar10 = *(ushort *)(param_1 + 8);
          uVar15 = (uint)*(ushort *)(param_1 + 8);
          if (uVar15 < 0x15) {
            *(ushort *)(param_3 + 0x22500) = *(ushort *)(param_1 + 6);
            param_3[0x22502] = (byte)uVar10;
            pbVar21 = param_1 + 0xc;
            uVar17 = 0;
            uVar12 = 0;
            uVar13 = 0;
            do {
              bVar27 = *pbVar21;
              if ((int)(uVar17 - 0x20) < 0) {
                uVar19 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar17 & 0x1f));
                uVar25 = (uint)bVar27 << (uVar17 & 0x1f);
              }
              else {
                uVar25 = 0;
                uVar19 = (uint)bVar27 << (uVar17 - 0x20 & 0x1f);
              }
              uVar17 = uVar17 + 8;
              uVar12 = uVar12 | uVar25;
              uVar13 = uVar13 | uVar19;
              pbVar21 = pbVar21 + 1;
            } while (uVar17 != 0x40);
            *(uint *)(param_3 + 0x22508) = uVar12;
            *(uint *)(param_3 + 0x2250c) = uVar13;
            if (uVar23 == 0) {
              uVar12 = 0x14;
            }
            else {
              uVar12 = 0x14;
              uVar13 = param_2 - 3;
              pbVar21 = param_3;
              do {
                memset(pbVar21,0,0x85);
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 0xc)) goto LAB_ram_4807b3fc;
                pbVar24 = param_1 + uVar12;
                bVar27 = *pbVar24;
                bVar14 = pbVar24[1];
                bVar1 = pbVar24[2];
                bVar2 = pbVar24[3];
                bVar3 = pbVar24[4];
                bVar4 = pbVar24[5];
                bVar5 = pbVar24[6];
                bVar6 = pbVar24[7];
                bVar7 = pbVar24[8];
                bVar8 = pbVar24[10];
                bVar9 = pbVar24[0xb];
                pbVar21[9] = pbVar24[9];
                *pbVar21 = bVar27;
                pbVar21[1] = bVar14;
                pbVar21[2] = bVar1;
                pbVar21[3] = bVar2;
                pbVar21[4] = bVar3;
                pbVar21[5] = bVar4;
                pbVar21[6] = bVar5;
                pbVar21[7] = bVar6;
                pbVar21[8] = bVar7;
                pbVar21[10] = bVar8;
                pbVar21[0xb] = bVar9;
                uVar17 = uVar12 + 0xc;
                if ((uVar22 < uVar17) || (uVar22 - uVar17 < 8)) {
                  uVar17 = 0;
                  uVar19 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar17;
                  uVar25 = 0;
                  uVar17 = 0;
                  uVar19 = 0;
                  do {
                    bVar27 = *pbVar24;
                    if ((int)(uVar25 - 0x20) < 0) {
                      uVar18 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar25 & 0x1f));
                      uVar26 = (uint)bVar27 << (uVar25 & 0x1f);
                    }
                    else {
                      uVar26 = 0;
                      uVar18 = (uint)bVar27 << (uVar25 - 0x20 & 0x1f);
                    }
                    uVar25 = uVar25 + 8;
                    uVar17 = uVar17 | uVar26;
                    uVar19 = uVar19 | uVar18;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar25 != 0x40);
                  uVar12 = uVar12 + 0x14;
                }
                *(uint *)(pbVar21 + 0x10) = uVar17;
                *(uint *)(pbVar21 + 0x14) = uVar19;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 4)) {
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    uVar25 = uVar19 & 0x1f;
                    uVar19 = uVar19 + 8;
                    uVar17 = uVar17 | (uint)bVar27 << uVar25;
                  } while (uVar19 != 0x20);
                  uVar12 = uVar12 + 4;
                }
                *(uint *)(pbVar21 + 0x18) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 8)) {
                  uVar17 = 0;
                  uVar19 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar25 = 0;
                  uVar17 = 0;
                  uVar19 = 0;
                  do {
                    bVar27 = *pbVar24;
                    if ((int)(uVar25 - 0x20) < 0) {
                      uVar18 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar25 & 0x1f));
                      uVar26 = (uint)bVar27 << (uVar25 & 0x1f);
                    }
                    else {
                      uVar26 = 0;
                      uVar18 = (uint)bVar27 << (uVar25 - 0x20 & 0x1f);
                    }
                    uVar25 = uVar25 + 8;
                    uVar17 = uVar17 | uVar26;
                    uVar19 = uVar19 | uVar18;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar25 != 0x40);
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(pbVar21 + 0x20) = uVar17;
                *(uint *)(pbVar21 + 0x24) = uVar19;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 0x20)) goto LAB_ram_4807b3fc;
                FUN_ram_4ff45158(pbVar21 + 0x28,param_1 + uVar12,0x20);
                uVar17 = uVar12 + 0x20;
                if ((uVar22 < uVar17) || (uVar22 - uVar17 < 4)) {
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar17;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    uVar25 = uVar19 & 0x1f;
                    uVar19 = uVar19 + 8;
                    uVar17 = uVar17 | (uint)bVar27 << uVar25;
                  } while (uVar19 != 0x20);
                  uVar12 = uVar12 + 0x24;
                }
                *(uint *)(pbVar21 + 0x48) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 4)) {
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    uVar25 = uVar19 & 0x1f;
                    uVar19 = uVar19 + 8;
                    uVar17 = uVar17 | (uint)bVar27 << uVar25;
                  } while (uVar19 != 0x20);
                  uVar12 = uVar12 + 4;
                }
                *(uint *)(pbVar21 + 0x4c) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 4)) {
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    uVar25 = uVar19 & 0x1f;
                    uVar19 = uVar19 + 8;
                    uVar17 = uVar17 | (uint)bVar27 << uVar25;
                  } while (uVar19 != 0x20);
                  uVar12 = uVar12 + 4;
                }
                *(uint *)(pbVar21 + 0x50) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 4)) {
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    uVar25 = uVar19 & 0x1f;
                    uVar19 = uVar19 + 8;
                    uVar17 = uVar17 | (uint)bVar27 << uVar25;
                  } while (uVar19 != 0x20);
                  uVar12 = uVar12 + 4;
                }
                *(uint *)(pbVar21 + 0x54) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 8)) {
                  uVar19 = 0;
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar25 = 0;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    if ((int)(uVar25 - 0x20) < 0) {
                      uVar26 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar25 & 0x1f));
                      uVar18 = (uint)bVar27 << (uVar25 & 0x1f);
                    }
                    else {
                      uVar18 = 0;
                      uVar26 = (uint)bVar27 << (uVar25 - 0x20 & 0x1f);
                    }
                    uVar25 = uVar25 + 8;
                    uVar19 = uVar19 | uVar18;
                    uVar17 = uVar17 | uVar26;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar25 != 0x40);
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(pbVar21 + 0x58) = uVar19;
                *(uint *)(pbVar21 + 0x5c) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 8)) {
                  uVar19 = 0;
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar25 = 0;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    if ((int)(uVar25 - 0x20) < 0) {
                      uVar26 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar25 & 0x1f));
                      uVar18 = (uint)bVar27 << (uVar25 & 0x1f);
                    }
                    else {
                      uVar18 = 0;
                      uVar26 = (uint)bVar27 << (uVar25 - 0x20 & 0x1f);
                    }
                    uVar25 = uVar25 + 8;
                    uVar19 = uVar19 | uVar18;
                    uVar17 = uVar17 | uVar26;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar25 != 0x40);
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(pbVar21 + 0x60) = uVar19;
                *(uint *)(pbVar21 + 100) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 8)) {
                  uVar19 = 0;
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar25 = 0;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    if ((int)(uVar25 - 0x20) < 0) {
                      uVar26 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar25 & 0x1f));
                      uVar18 = (uint)bVar27 << (uVar25 & 0x1f);
                    }
                    else {
                      uVar18 = 0;
                      uVar26 = (uint)bVar27 << (uVar25 - 0x20 & 0x1f);
                    }
                    uVar25 = uVar25 + 8;
                    uVar19 = uVar19 | uVar18;
                    uVar17 = uVar17 | uVar26;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar25 != 0x40);
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(pbVar21 + 0x68) = uVar19;
                *(uint *)(pbVar21 + 0x6c) = uVar17;
                if (uVar12 < uVar22) {
                  bVar27 = param_1[uVar12];
                  uVar12 = uVar12 + 1;
                }
                else {
                  bVar27 = 0;
                  uVar12 = uVar13;
                }
                if (uVar12 < uVar22) {
                  bVar14 = param_1[uVar12];
                  uVar12 = uVar12 + 1;
                }
                else {
                  bVar14 = 0;
                  uVar12 = uVar13;
                }
                pbVar21[0x71] = bVar14;
                if (uVar12 < uVar22) {
                  bVar14 = param_1[uVar12];
                  uVar12 = uVar12 + 1;
                }
                else {
                  bVar14 = 0;
                  uVar12 = uVar13;
                }
                pbVar21[0x72] = bVar14;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 8)) {
                  uVar19 = 0;
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar25 = 0;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar14 = *pbVar24;
                    if ((int)(uVar25 - 0x20) < 0) {
                      uVar26 = (uint)(byte)((bVar14 >> 1) >> (0x1f - uVar25 & 0x1f));
                      uVar18 = (uint)bVar14 << (uVar25 & 0x1f);
                    }
                    else {
                      uVar18 = 0;
                      uVar26 = (uint)bVar14 << (uVar25 - 0x20 & 0x1f);
                    }
                    uVar25 = uVar25 + 8;
                    uVar19 = uVar19 | uVar18;
                    uVar17 = uVar17 | uVar26;
                    pbVar24 = pbVar24 + 1;
                  } while (uVar25 != 0x40);
                  uVar12 = uVar12 + 8;
                }
                *(uint *)(pbVar21 + 0x78) = uVar19;
                *(uint *)(pbVar21 + 0x7c) = uVar17;
                if ((1 < bVar27) || (pbVar21[0x70] = bVar27 & 1, uVar22 < uVar12))
                goto LAB_ram_4807b3fc;
                if (uVar22 - uVar12 < 4) {
                  uVar17 = 0;
                  uVar12 = uVar13;
                }
                else {
                  pbVar24 = param_1 + uVar12;
                  uVar19 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                    uVar25 = uVar19 & 0x1f;
                    uVar19 = uVar19 + 8;
                    uVar17 = uVar17 | (uint)bVar27 << uVar25;
                  } while (uVar19 != 0x20);
                  uVar12 = uVar12 + 4;
                }
                *(uint *)(pbVar21 + 0x80) = uVar17;
                if (uVar12 < uVar22) {
                  if (1 < param_1[uVar12]) goto LAB_ram_4807b3fc;
                  bVar27 = param_1[uVar12] & 1;
                  uVar12 = uVar12 + 1;
                }
                else {
                  bVar27 = 0;
                  uVar12 = uVar13;
                }
                pbVar21[0x84] = bVar27;
                pbVar21 = pbVar21 + 0x88;
              } while (pbVar21 != param_3 + uVar23 * 0x88);
            }
            if (uVar15 != 0) {
              uVar23 = 0;
              do {
                iVar16 = (uVar23 + 0x880) * 0x40;
                pbVar21 = memset(param_3 + iVar16,0,0x3c);
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 0xc)) goto LAB_ram_4807b3fc;
                pbVar24 = param_1 + uVar12;
                bVar27 = pbVar24[1];
                bVar14 = pbVar24[2];
                bVar1 = pbVar24[3];
                bVar2 = pbVar24[4];
                bVar3 = pbVar24[5];
                bVar4 = pbVar24[6];
                bVar5 = pbVar24[7];
                bVar6 = pbVar24[8];
                bVar7 = pbVar24[9];
                bVar8 = pbVar24[10];
                bVar9 = pbVar24[0xb];
                *pbVar21 = *pbVar24;
                pbVar21[1] = bVar27;
                pbVar21[0xb] = bVar9;
                pbVar21[2] = bVar14;
                pbVar21[3] = bVar1;
                pbVar21[4] = bVar2;
                pbVar21[5] = bVar3;
                pbVar21[6] = bVar4;
                pbVar21[7] = bVar5;
                pbVar21[8] = bVar6;
                pbVar21[9] = bVar7;
                pbVar21[10] = bVar8;
                uVar13 = uVar12 + 0xc;
                if ((uVar22 < uVar13) || (uVar22 - uVar13 < 8)) {
                  uVar13 = 0;
                  uVar17 = 0;
                  uVar12 = param_2 - 3U;
                }
                else {
                  pbVar21 = param_1 + uVar13;
                  uVar19 = 0;
                  uVar13 = 0;
                  uVar17 = 0;
                  do {
                    bVar27 = *pbVar21;
                    if ((int)(uVar19 - 0x20) < 0) {
                      uVar25 = (uint)(byte)((bVar27 >> 1) >> (0x1f - uVar19 & 0x1f));
                      uVar18 = (uint)bVar27 << (uVar19 & 0x1f);
                    }
                    else {
                      uVar18 = 0;
                      uVar25 = (uint)bVar27 << (uVar19 - 0x20 & 0x1f);
                    }
                    uVar19 = uVar19 + 8;
                    uVar13 = uVar13 | uVar18;
                    uVar17 = uVar17 | uVar25;
                    pbVar21 = pbVar21 + 1;
                  } while (uVar19 != 0x40);
                  uVar12 = uVar12 + 0x14;
                }
                iVar20 = uVar23 * 0x40;
                *(uint *)(param_3 + iVar20 + 0x22010) = uVar13;
                *(uint *)(param_3 + iVar20 + 0x22014) = uVar17;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 4)) {
                  uVar13 = 0;
                  uVar12 = param_2 - 3U;
                }
                else {
                  pbVar21 = param_1 + uVar12;
                  uVar17 = 0;
                  uVar13 = 0;
                  do {
                    bVar27 = *pbVar21;
                    pbVar21 = pbVar21 + 1;
                    uVar19 = uVar17 & 0x1f;
                    uVar17 = uVar17 + 8;
                    uVar13 = uVar13 | (uint)bVar27 << uVar19;
                  } while (uVar17 != 0x20);
                  uVar12 = uVar12 + 4;
                }
                *(uint *)(param_3 + iVar20 + 0x22018) = uVar13;
                if ((uVar22 < uVar12) || (uVar22 - uVar12 < 0x20)) goto LAB_ram_4807b3fc;
                FUN_ram_4ff45158(param_3 + iVar16 + 0x1c,param_1 + uVar12,0x20);
                uVar23 = uVar23 + 1 & 0xff;
                uVar12 = uVar12 + 0x20;
              } while (uVar23 < uVar15);
            }
            if ((uVar22 == uVar12) && (iVar16 = FUN_ram_4807a88c(param_3), iVar16 != 0)) {
              return iVar16;
            }
LAB_ram_4807b3fc:
            FUN_ram_4807a816(param_3);
          }
        }
      }
    }
  }
  return 0;
}


