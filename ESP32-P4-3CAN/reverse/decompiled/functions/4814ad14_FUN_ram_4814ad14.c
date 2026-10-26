/* Firmware entry: 0x4814ad14 */

void FUN_ram_4814ad14(int param_1,uint param_2)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  undefined2 uVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  byte bVar25;
  char *pcVar26;
  int iVar27;
  uint *puVar28;
  byte *pbVar29;
  undefined4 *puVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char cStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  byte bStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pbVar7 = *(byte **)(param_1 + 4);
  bVar25 = *pbVar7;
  if (bVar25 == 0x87) {
    uVar3 = *(ushort *)(param_1 + 10);
    if (0x17 < uVar3) {
      uStack_54 = *(uint *)(pbVar7 + 8);
      uStack_50 = *(uint *)(pbVar7 + 0xc);
      uStack_4c = *(uint *)(pbVar7 + 0x10);
      uStack_48 = *(uint *)(pbVar7 + 0x14);
      bStack_44 = 0;
      if ((uStack_54 & 0xc0ff) == 0x80fe) {
        bStack_44 = *(char *)(param_2 + 0xea) + 1;
      }
      if (((*(char *)(DAT_ram_4ff6cdc0 + 7) == -1) && (pbVar7[1] == 0)) &&
         ((uStack_54 & 0xff) != 0xff)) {
        pbVar29 = (byte *)0x0;
        if ((0x19 < uVar3) && ((ushort)((ushort)pbVar7[0x19] * 8 + 0x18) <= uVar3)) {
          pbVar29 = pbVar7 + 0x18;
        }
        puVar16 = (uint *)(param_2 + 0x94);
        puVar28 = (uint *)(param_2 + 0x4c);
        puVar15 = puVar16;
        puVar6 = puVar28;
        do {
          uVar32 = *puVar15;
          puVar15 = (uint *)((int)puVar15 + 1);
          if (((((uVar32 & 0x10) != 0) ||
               (((uVar32 & 8) != 0 &&
                (((DAT_ram_4ff6cdc8 == 0 && DAT_ram_4ff6cdcc == 0) && DAT_ram_4ff6cdd0 == 0) &&
                 DAT_ram_4ff6cdd4 == 0)))) && (uStack_54 == *puVar6)) &&
             ((((uStack_50 == puVar6[1] && (uStack_4c == puVar6[2])) && (uStack_48 == puVar6[3])) &&
              ((byte)puVar6[4] == bStack_44)))) {
            if (((DAT_ram_4ff6cdc8 == 0 && DAT_ram_4ff6cdcc == 0) && DAT_ram_4ff6cdd0 == 0) &&
                DAT_ram_4ff6cdd4 == 0) {
              iVar8 = 0;
              do {
                if ((((((byte)*puVar16 != 0) && (uStack_54 == *puVar28)) &&
                     ((uStack_50 == puVar28[1] &&
                      ((uStack_4c == puVar28[2] && (uStack_48 == puVar28[3])))))) &&
                    (bStack_44 == (byte)puVar28[4])) &&
                   (FUN_ram_4814a25a(param_2,puVar28,0x22), (*puVar16 & 8) != 0)) {
                  FUN_ram_4814a938(param_2,iVar8);
                }
                uVar32 = iVar8 + 1;
                puVar16 = (uint *)((int)puVar16 + 1);
                puVar28 = puVar28 + 6;
                iVar8 = (int)(uVar32 * 0x1000000) >> 0x18;
              } while ((uVar32 & 0xff) != 3);
              goto LAB_ram_4814af34;
            }
            if (pbVar29 == (byte *)0x0) {
              FUN_ram_4814a25a(param_2,&uStack_54,0x60);
              FUN_ram_4813ac74(param_1);
              return;
            }
            iVar8 = FUN_ram_4814a19c(&DAT_ram_4ff6cdc8);
            if (iVar8 == -1) {
              iVar8 = FUN_ram_4814aa92();
              if (iVar8 == -1) break;
              iVar31 = iVar8 * 0x2c;
              uVar2 = *(undefined1 *)(param_2 + 0xe6);
              (&DAT_ram_4ff6d310)[iVar8 * 0xb] = param_2;
              FUN_ram_4ff45158(iVar31 + 0x4ff6d314,pbVar29 + 2,uVar2);
              uVar12 = DAT_ram_4ff6cdd4;
              uVar14 = DAT_ram_4ff6cdcc;
              uVar32 = DAT_ram_4ff6cdc8;
              *(uint *)(&DAT_ram_4ff6d304 + iVar31) = DAT_ram_4ff6cdd0;
              *(uint *)(&DAT_ram_4ff6d308 + iVar31) = uVar12;
              (&DAT_ram_4ff6d2fc)[iVar8 * 0xb] = uVar32;
              *(uint *)(&DAT_ram_4ff6d300 + iVar31) = uVar14;
              (&DAT_ram_4ff6d30c)[iVar31] = DAT_ram_4ff6cdd8;
              (&DAT_ram_4ff6d320)[iVar31] = 4;
              (&DAT_ram_4ff6d324)[iVar8 * 0xb] = 5;
            }
            else {
              iVar31 = iVar8 * 0x2c;
              if ((&DAT_ram_4ff6d320)[iVar31] == '\x01') {
                uVar2 = *(undefined1 *)(param_2 + 0xe6);
                (&DAT_ram_4ff6d310)[iVar8 * 0xb] = param_2;
                FUN_ram_4ff45158(iVar31 + 0x4ff6d314,pbVar29 + 2,uVar2);
                (&DAT_ram_4ff6d320)[iVar31] = 4;
                (&DAT_ram_4ff6d324)[iVar8 * 0xb] = 5;
              }
            }
            FUN_ram_4814a25a(param_2,&uStack_54,0x60);
            goto LAB_ram_4814af34;
          }
          puVar6 = puVar6 + 6;
        } while (puVar6 != puVar16);
      }
    }
    FUN_ram_4813ac74(param_1);
    return;
  }
  if (bVar25 < 0x88) {
    if (bVar25 == 2) {
      if (0x2f < *(ushort *)(param_1 + 10)) {
        uStack_54 = *(uint *)(pbVar7 + 0x20);
        uStack_50 = *(uint *)(pbVar7 + 0x24);
        uStack_4c = *(uint *)(pbVar7 + 0x28);
        uStack_48 = *(uint *)(pbVar7 + 0x2c);
        if (((uStack_54 & 0xc0ff) == 0x80fe) ||
           (bStack_44 = 0, ((uStack_54 & 0x8fff) - 0x1ff & 0xfffffeff) == 0)) {
          bStack_44 = *(char *)(param_2 + 0xea) + 1;
        }
        iVar8 = FUN_ram_4814a1fa(&uStack_54);
        if (iVar8 != -1) {
          uVar32 = FUN_ram_48137fd6(*(undefined4 *)(pbVar7 + 4));
          if (0xffff < uVar32) {
            uVar32 = 0xffff;
          }
          *(short *)(&DAT_ram_4ff6d144 + iVar8 * 0x30) = (short)uVar32;
        }
      }
    }
    else if ((((bVar25 == 0x86) && (0xf < *(ushort *)(param_1 + 10))) &&
             ((DAT_ram_4ff6cdc8 & 0xc0ff) == 0x80fe)) &&
            ((*(char *)(DAT_ram_4ff6cdc0 + 7) == -1 && (pbVar7[1] == 0)))) {
      bVar13 = false;
      if (2 < *(byte *)(param_2 + 0xec)) {
        iVar8 = FUN_ram_4814a42c(param_2);
        bVar13 = iVar8 != 0;
      }
      uVar32 = DAT_ram_4ff6cdc8;
      puVar30 = &DAT_ram_4ff6d06c;
      *(bool *)(param_2 + 0xec) = bVar13;
      puVar21 = &DAT_ram_4ff6d06c;
      iVar8 = 0;
      do {
        puVar15 = (uint *)*puVar21;
        uVar14 = iVar8 + 1;
        if ((((puVar15 != (uint *)0x0) && (param_2 == puVar15[5])) &&
            ((*puVar15 == uVar32 &&
             (((DAT_ram_4ff6cdcc == puVar15[1] && (DAT_ram_4ff6cdd0 == puVar15[2])) &&
              (DAT_ram_4ff6cdd4 == puVar15[3])))))) && (DAT_ram_4ff6cdd8 == (char)puVar15[4])) {
          iVar31 = iVar8 << 1;
          goto LAB_ram_4814b058;
        }
        iVar8 = (int)(uVar14 * 0x1000000) >> 0x18;
        puVar21 = puVar21 + 3;
      } while ((uVar14 & 0xff) != 3);
      iVar31 = FUN_ram_4814a19c(&DAT_ram_4ff6cdc8);
      if (iVar31 == -1) {
        iVar31 = FUN_ram_4814aa92();
        uVar12 = DAT_ram_4ff6cdd4;
        uVar14 = DAT_ram_4ff6cdd0;
        uVar32 = DAT_ram_4ff6cdc8;
        if (iVar31 == -1) goto LAB_ram_4814af34;
        iVar8 = iVar31 * 0x2c;
        puVar15 = &DAT_ram_4ff6d2fc + iVar31 * 0xb;
        *(uint *)(&DAT_ram_4ff6d300 + iVar8) = DAT_ram_4ff6cdcc;
        *(uint *)(&DAT_ram_4ff6d304 + iVar8) = uVar14;
        *puVar15 = uVar32;
        *(uint *)(&DAT_ram_4ff6d308 + iVar8) = uVar12;
        cVar1 = DAT_ram_4ff6cdd8;
        (&DAT_ram_4ff6d310)[iVar31 * 0xb] = param_2;
        (&DAT_ram_4ff6d31c)[iVar31 * 0xb] = 0;
        (&DAT_ram_4ff6d30c)[iVar8] = cVar1;
        (&DAT_ram_4ff6d320)[iVar8] = 1;
        (&DAT_ram_4ff6d324)[iVar31 * 0xb] = 1;
        FUN_ram_4814a5e8(param_2,puVar15);
      }
      else {
        puVar15 = &DAT_ram_4ff6d2fc + iVar31 * 0xb;
      }
      iVar27 = 3;
      iVar8 = 2;
      (&DAT_ram_4ff6d321)[iVar31 * 0x2c] = 1;
      do {
        puVar21 = puVar30 + 6;
        puVar30 = puVar30 + -3;
        if ((uint *)*puVar21 == puVar15) {
          iVar31 = iVar8 << 1;
          goto LAB_ram_4814b058;
        }
        if ((uint *)*puVar21 == (uint *)0x0) {
          iVar27 = iVar8;
        }
        iVar22 = (iVar8 + -1) * 0x1000000;
        iVar8 = iVar22 >> 0x18;
      } while (iVar8 != -1);
      if (iVar27 == 3) {
        (&DAT_ram_4ff6d321)[iVar31 * 0x2c] = 0;
      }
      else {
        iVar31 = iVar27 * 2;
        (&DAT_ram_4ff6d06c)[iVar27 * 3] = puVar15;
        *(char *)(iVar27 * 0xc + 0x4ff6d075) = (char)((uint)iVar22 >> 0x18);
        iVar8 = iVar27;
        if (iVar27 != -1) {
LAB_ram_4814b058:
          uVar9 = FUN_ram_48137fc8(*(undefined2 *)(pbVar7 + 6));
          (&DAT_ram_4ff6d070)[iVar31 + iVar8] = uVar9;
          if (*(int *)(pbVar7 + 0xc) != 0) {
            DAT_ram_4ff47f78 = FUN_ram_48137fd6();
          }
          if (*(int *)(pbVar7 + 8) != 0) {
            DAT_ram_4ff47f7c = FUN_ram_48137fd6();
          }
          *(byte *)((iVar31 + iVar8) * 4 + 0x4ff6d074) = pbVar7[5];
          uVar32 = 0x10;
          if (0x11 < *(ushort *)(param_1 + 8)) {
            do {
              uVar14 = FUN_ram_4813b616(param_1,uVar32 + 1);
              if ((int)uVar14 < 1) break;
              uVar14 = (uVar14 & 0xff) * 8;
              if ((int)(*(ushort *)(param_1 + 8) - uVar32) < (int)uVar14) break;
              if ((uint)*(ushort *)(param_1 + 10) == (uint)*(ushort *)(param_1 + 8)) {
                pcVar26 = (char *)(*(int *)(param_1 + 4) + uVar32);
                uVar12 = uVar14;
              }
              else {
                uVar12 = uVar14;
                if (0x20 < uVar14) {
                  iVar27 = FUN_ram_4813b5ee(param_1,uVar32);
                  if (iVar27 != 0x19) break;
                  uVar12 = 0x20;
                }
                uVar12 = FUN_ram_4813b38c(param_1,&DAT_ram_4ff6d038,uVar12,uVar32);
                pcVar26 = &DAT_ram_4ff6d038;
              }
              cVar1 = *pcVar26;
              if (cVar1 == '\x03') {
                if (uVar12 < 0x20) break;
                uVar12 = *(uint *)(pcVar26 + 0x10);
                if ((uVar12 & 0xc0ff) != 0x80fe) {
                  bVar25 = pcVar26[3];
                  uVar17 = *(uint *)(pcVar26 + 0x14);
                  if (((char)bVar25 < '\0') && (pcVar26[2] == '@')) {
                    uVar9 = *(undefined4 *)(pcVar26 + 0x18);
                    uVar5 = *(undefined4 *)(pcVar26 + 0x1c);
                    iVar27 = FUN_ram_48137fd6(*(undefined4 *)(pcVar26 + 4));
                    iVar22 = 0;
                    puVar15 = &DAT_ram_4ff6d090;
                    do {
                      uVar10 = iVar22 + 1;
                      if (((uVar12 == *puVar15) && (uVar17 == puVar15[1])) &&
                         (((char)puVar15[4] == '\0' && (param_2 == puVar15[5])))) {
                        bVar25 = pcVar26[3];
                        goto LAB_ram_4814ba22;
                      }
                      iVar22 = (int)(uVar10 * 0x1000000) >> 0x18;
                      puVar15 = puVar15 + 7;
                    } while ((uVar10 & 0xff) != 5);
                    bVar25 = pcVar26[3];
                    if (iVar27 != 0) {
                      piVar18 = &DAT_ram_4ff6d0a4;
                      iVar23 = 0;
LAB_ram_4814bcd8:
                      if ((*piVar18 != 0) &&
                         (piVar4 = piVar18 + 1, piVar18 = piVar18 + 7, *piVar4 != 0))
                      goto code_r0x4814bcea;
                      iVar19 = iVar23 * 0x1c;
                      iVar22 = (int)(char)iVar23;
                      (&DAT_ram_4ff6d0a4)[iVar23 * 7] = param_2;
                      (&DAT_ram_4ff6d090)[iVar23 * 7] = uVar12;
                      (&DAT_ram_4ff6d094)[iVar23 * 7] = uVar17;
                      *(undefined4 *)(&DAT_ram_4ff6d098 + iVar19) = uVar9;
                      *(undefined4 *)(iVar19 + 0x4ff6d09c) = uVar5;
                      *(undefined1 *)(iVar19 + 0x4ff6d0a0) = 0;
LAB_ram_4814ba22:
                      (&DAT_ram_4ff6d0a8)[iVar22 * 7] = iVar27;
                    }
                  }
LAB_ram_4814b58a:
                  if ((bVar25 & 0x40) != 0) {
                    uVar10 = FUN_ram_48137fd6(*(undefined4 *)(pcVar26 + 4));
                    uVar11 = FUN_ram_48137fd6(*(undefined4 *)(pcVar26 + 8));
                    if ((uVar11 <= uVar10) && (pcVar26[2] == '@')) {
                      puVar6 = (uint *)(param_2 + 100);
                      puVar16 = (uint *)(param_2 + 0x9c);
                      puVar15 = puVar6;
                      iVar27 = 1;
                      do {
                        cVar1 = *(char *)(param_2 + iVar27 + 0x94);
                        if ((((cVar1 != '\0') && (uVar24 = *puVar16, uVar24 != 0)) &&
                            (uVar12 == *puVar15)) &&
                           ((uVar17 == puVar15[1] && ((char)puVar15[4] == '\0')))) {
                          if ((uVar10 < 0x1c21) && (uVar10 <= uVar24)) {
                            if (0x1c20 < uVar24) {
                              *(undefined4 *)((iVar27 + 0x24) * 4 + param_2 + 8) = 0x1c20;
                            }
                          }
                          else {
                            *(uint *)((iVar27 + 0x24) * 4 + param_2 + 8) = uVar10;
                          }
                          if ((uVar11 != 0) && (cVar1 == '\x10')) {
                            FUN_ram_4813a504(param_2,iVar27,0x30);
                          }
                          *(uint *)((iVar27 + 0x28) * 4 + param_2 + 4) = uVar11;
                          goto LAB_ram_4814b12a;
                        }
                        puVar15 = puVar15 + 6;
                        puVar16 = puVar16 + 1;
                        bVar13 = iVar27 != 2;
                        iVar27 = 2;
                      } while (bVar13);
                      if (((*(char *)(param_2 + 0xeb) != '\0') && (uVar10 != 0)) &&
                         ((*(byte *)(param_2 + 0x94) & 0xbf) != 0)) {
                        uVar33 = *(uint *)(param_2 + 0x54);
                        uVar24 = *(uint *)(param_2 + 0x58);
                        iVar22 = 0;
                        iVar27 = 1;
                        do {
                          if (*(char *)(param_2 + iVar27 + 0x94) == '\0') {
                            if (iVar22 == 0) {
                              iVar22 = (int)(char)iVar27;
                            }
                          }
                          else if (((uVar12 == *puVar6) && (uVar17 == puVar6[1])) &&
                                  ((uVar33 == puVar6[2] &&
                                   ((uVar24 == puVar6[3] && ((char)puVar6[4] == '\0'))))))
                          goto LAB_ram_4814b12a;
                          puVar6 = puVar6 + 6;
                          bVar13 = iVar27 != 2;
                          iVar27 = 2;
                        } while (bVar13);
                        if (iVar22 != 0) {
                          iVar23 = iVar22 * 4 + param_2;
                          iVar27 = iVar22 * 0x18 + param_2;
                          *(uint *)(iVar27 + 0x4c) = uVar12;
                          *(uint *)(iVar27 + 0x50) = uVar17;
                          *(uint *)(iVar27 + 0x54) = uVar33;
                          *(uint *)(iVar27 + 0x58) = uVar24;
                          *(undefined1 *)(iVar27 + 0x5c) = 0;
                          *(undefined1 *)(iVar27 + 0x60) = 6;
                          *(uint *)(iVar23 + 0x98) = uVar10;
                          *(uint *)(iVar23 + 0xa4) = uVar11;
                          FUN_ram_4813a504(param_2,iVar22,8);
                        }
                      }
                    }
                  }
                }
              }
              else if (cVar1 == '\x05') {
                if (uVar12 < 8) break;
                uVar12 = FUN_ram_48137fd6(*(undefined4 *)(pcVar26 + 4));
                if (uVar12 - 0x500 < 0xfb00) {
                  uVar17 = (uint)*(ushort *)(param_2 + 0xdc);
                  if (uVar17 == 0) {
                    *(short *)(param_2 + 0xde) = (short)uVar12;
                  }
                  else {
                    uVar10 = (uint)*(ushort *)(param_2 + 0xde);
                    if (uVar17 < *(ushort *)(param_2 + 0xde)) {
                      uVar10 = uVar17;
                    }
                    uVar20 = (short)uVar10;
                    if ((uVar12 & 0xffff) < uVar10) {
                      uVar20 = (short)uVar12;
                    }
                    *(undefined2 *)(param_2 + 0xde) = uVar20;
                  }
                }
              }
              else if (cVar1 == '\x01') {
                if (uVar12 < 8) break;
                iVar27 = (&DAT_ram_4ff6d06c)[iVar31 + iVar8];
                if ((iVar27 != 0) && (*(char *)(iVar27 + 0x24) == '\x01')) {
                  FUN_ram_4ff45158(iVar27 + 0x18,pcVar26 + 2,*(undefined1 *)(param_2 + 0xe6));
                  uVar9 = DAT_ram_4ff47f7c;
                  iVar27 = (&DAT_ram_4ff6d06c)[iVar31 + iVar8];
                  *(undefined1 *)(iVar27 + 0x24) = 2;
                  *(undefined4 *)(iVar27 + 0x28) = uVar9;
                }
              }
LAB_ram_4814b12a:
              uVar32 = uVar14 + uVar32 & 0xffff;
            } while (1 < (int)(*(ushort *)(param_1 + 8) - uVar32));
          }
        }
      }
    }
  }
  else {
    if (bVar25 == 0x88) {
      uVar3 = *(ushort *)(param_1 + 10);
      if (0x17 < uVar3) {
        uStack_54 = *(uint *)(pbVar7 + 8);
        uStack_50 = *(uint *)(pbVar7 + 0xc);
        uStack_4c = *(uint *)(pbVar7 + 0x10);
        uStack_48 = *(uint *)(pbVar7 + 0x14);
        bStack_44 = 0;
        if ((uStack_54 & 0xc0ff) == 0x80fe) {
          bStack_44 = *(char *)(param_2 + 0xea) + 1;
        }
        if (((*(char *)(DAT_ram_4ff6cdc0 + 7) == -1) && (pbVar7[1] == 0)) &&
           ((uStack_54 & 0xff) != 0xff)) {
          if (DAT_ram_4ff6cde0 == -1) {
            puVar15 = (uint *)(param_2 + 0x4c);
            iVar8 = 0;
            do {
              if ((((*(byte *)(param_2 + iVar8 + 0x94) & 0xbf) != 0) && (uStack_54 == *puVar15)) &&
                 ((uStack_50 == puVar15[1] &&
                  (((uStack_4c == puVar15[2] && (uStack_48 == puVar15[3])) &&
                   ((byte)puVar15[4] == bStack_44)))))) {
                FUN_ram_4814a938(param_2,(int)(char)iVar8);
                goto LAB_ram_4814b3bc;
              }
              iVar8 = iVar8 + 1;
              puVar15 = puVar15 + 6;
            } while (iVar8 != 3);
            if ((0x19 < uVar3) && ((ushort)((ushort)pbVar7[0x19] * 8 + 0x18) <= uVar3)) {
              iVar8 = FUN_ram_4814a19c(&uStack_54);
              if ((iVar8 != -1) && ((pbVar7[4] & 0x20) != 0)) {
                FUN_ram_4ff45158(iVar8 * 0x2c + 0x4ff6d314,pbVar7 + 0x1a,
                                 *(undefined1 *)(param_2 + 0xe6));
              }
              goto LAB_ram_4814af34;
            }
          }
          else {
            iVar8 = FUN_ram_4814a19c(&uStack_54);
            if (iVar8 != -1) {
              if (((pbVar7[4] & 0x20) != 0) || ((&DAT_ram_4ff6d320)[iVar8 * 0x2c] == '\x01')) {
                if ((uVar3 < 0x1a) || (uVar3 < (ushort)((ushort)pbVar7[0x19] * 8 + 0x18)))
                goto LAB_ram_4814b3bc;
                FUN_ram_4ff45158(iVar8 * 0x2c + 0x4ff6d314,pbVar7 + 0x1a,
                                 *(undefined1 *)(param_2 + 0xe6));
              }
              uVar9 = DAT_ram_4ff47f7c;
              iVar31 = (&DAT_ram_4ff6d31c)[iVar8 * 0xb];
              (&DAT_ram_4ff6d310)[iVar8 * 0xb] = param_2;
              (&DAT_ram_4ff6d320)[iVar8 * 0x2c] = 2;
              (&DAT_ram_4ff6d324)[iVar8 * 0xb] = uVar9;
              if (iVar31 != 0) {
                FUN_ram_4814a806(iVar8);
              }
              goto LAB_ram_4814af34;
            }
          }
        }
      }
LAB_ram_4814b3bc:
      FUN_ram_4813ac74(param_1);
      return;
    }
    if ((bVar25 == 0x89) && (uVar3 = *(ushort *)(param_1 + 10), 0x27 < uVar3)) {
      uStack_68 = *(uint *)(pbVar7 + 0x18);
      uStack_64 = *(undefined4 *)(pbVar7 + 0x1c);
      uStack_60 = *(undefined4 *)(pbVar7 + 0x20);
      uStack_5c = *(undefined4 *)(pbVar7 + 0x24);
      cStack_58 = '\0';
      if ((uStack_68 & 0xc0ff) == 0x80fe) {
        cStack_58 = *(char *)(param_2 + 0xea) + '\x01';
      }
      if (((((DAT_ram_4ff6cdc8 & 0xc0ff) == 0x80fe) && (*(char *)(DAT_ram_4ff6cdc0 + 7) == -1)) &&
          (pbVar7[1] == 0)) && ((uStack_68 & 0xff) != 0xff)) {
        pbVar29 = (byte *)0x0;
        if ((0x29 < uVar3) && ((ushort)((ushort)pbVar7[0x29] * 8 + 0x28) <= uVar3)) {
          pbVar29 = pbVar7 + 0x28;
        }
        iVar8 = FUN_ram_4814a1fa(&uStack_68);
        if (iVar8 != -1) {
          uVar32 = *(uint *)(pbVar7 + 8);
          uVar14 = *(uint *)(pbVar7 + 0xc);
          uVar12 = *(uint *)(pbVar7 + 0x10);
          uVar17 = *(uint *)(pbVar7 + 0x14);
          bVar25 = 0;
          if ((uVar32 & 0xc0ff) == 0x80fe) {
            bVar25 = *(char *)(param_2 + 0xea) + 1;
          }
          (&DAT_ram_4ff6d130)[iVar8 * 0xc] = uVar32;
          (&DAT_ram_4ff6d134)[iVar8 * 0xc] = uVar14;
          (&DAT_ram_4ff6d138)[iVar8 * 0xc] = uVar12;
          (&DAT_ram_4ff6d13c)[iVar8 * 0xc] = uVar17;
          (&DAT_ram_4ff6d140)[iVar8 * 0x30] = bVar25;
          uStack_54 = uVar32;
          uStack_50 = uVar14;
          uStack_4c = uVar12;
          uStack_48 = uVar17;
          bStack_44 = bVar25;
          if ((pbVar29 != (byte *)0x0) && (*pbVar29 == 2)) {
            iVar8 = FUN_ram_4814a19c(&uStack_54);
            if (iVar8 == -1) {
              iVar8 = FUN_ram_4814aa92();
              if (iVar8 != -1) {
                iVar31 = iVar8 * 0x2c;
                uVar2 = *(undefined1 *)(param_2 + 0xe6);
                (&DAT_ram_4ff6d310)[iVar8 * 0xb] = param_2;
                FUN_ram_4ff45158(iVar31 + 0x4ff6d314,pbVar29 + 2,uVar2);
                (&DAT_ram_4ff6d2fc)[iVar8 * 0xb] = uVar32;
                *(uint *)(&DAT_ram_4ff6d300 + iVar31) = uVar14;
                *(uint *)(&DAT_ram_4ff6d304 + iVar31) = uVar12;
                *(uint *)(&DAT_ram_4ff6d308 + iVar31) = uVar17;
                (&DAT_ram_4ff6d30c)[iVar31] = bVar25;
                (&DAT_ram_4ff6d320)[iVar31] = 4;
                (&DAT_ram_4ff6d324)[iVar8 * 0xb] = 5;
              }
            }
            else {
              iVar31 = iVar8 * 0x2c;
              if ((&DAT_ram_4ff6d320)[iVar31] == '\x01') {
                FUN_ram_4ff45158(iVar31 + 0x4ff6d314,pbVar29 + 2,*(undefined1 *)(param_2 + 0xe6));
                (&DAT_ram_4ff6d320)[iVar31] = 4;
                (&DAT_ram_4ff6d324)[iVar8 * 0xb] = 5;
              }
            }
          }
        }
      }
    }
  }
LAB_ram_4814af34:
  FUN_ram_4813ac74(param_1);
  return;
code_r0x4814bcea:
  iVar23 = iVar23 + 1;
  if (iVar23 == 5) goto LAB_ram_4814b58a;
  goto LAB_ram_4814bcd8;
}


