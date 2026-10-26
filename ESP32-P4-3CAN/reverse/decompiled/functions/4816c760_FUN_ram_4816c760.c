/* Firmware entry: 0x4816c760 */

int FUN_ram_4816c760(int *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  ushort *puVar5;
  undefined1 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  size_t sVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  int *piVar19;
  int iVar20;
  uint *puVar21;
  byte *pbVar22;
  ushort *puVar23;
  char cVar24;
  ushort *puVar25;
  int iVar26;
  char *pcVar27;
  char *pcVar28;
  undefined8 uVar29;
  ushort *puStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar20 = param_1[1];
  if (iVar20 == 0xc) {
    if (*(char *)(param_1[0x10] + 4) == '\0') {
      iVar20 = FUN_ram_48170fd4();
      return iVar20;
    }
    param_1[1] = 0x10;
  }
  else {
    if (iVar20 == 7) {
      iVar20 = FUN_ram_4816b5e8();
      return iVar20;
    }
    if (iVar20 < 8) {
      if (iVar20 == 3) {
        cVar24 = *(char *)(param_1[0x10] + 2);
        if (cVar24 == '\x03') {
          cVar24 = *(char *)(*param_1 + 10);
        }
        uVar7 = (uint)*(byte *)(*(int *)(param_1[0x10] + 0x10) + 10);
        if ((10 < uVar7) || ((0x69eU >> (uVar7 & 0x1f) & 1) == 0)) {
          *(undefined4 *)(param_1[0xf] + 0x6c) = 0;
          goto LAB_ram_4816c42e;
        }
        if (*(char *)(*param_1 + 8) == '\x01') {
          if (uVar7 == 7) goto LAB_ram_4816c42e;
          if (cVar24 == '\0') {
            *(undefined4 *)(param_1[0xf] + 0x6c) = 0x80;
            goto LAB_ram_4816c42e;
          }
        }
        iVar20 = FUN_ram_48170c76(param_1,1);
        if (iVar20 != 0) {
          return iVar20;
        }
        iVar20 = param_1[0xf];
        if (((((*(char *)(*param_1 + 8) != '\0') && (param_1[0x22] == 7)) && (param_1[0x1f] == 0x16)
             ) && ((pcVar8 = (char *)param_1[0x1d], *pcVar8 == '\v' && (pcVar8[4] == '\0')))) &&
           ((pcVar8[5] == '\0' && (pcVar8[6] == '\0')))) {
          *(undefined4 *)(iVar20 + 0x6c) = 0x40;
          if (cVar24 != '\x01') {
            return -0x7480;
          }
LAB_ram_4816c42e:
          param_1[1] = param_1[1] + 1;
          return 0;
        }
        if (*(int *)(iVar20 + 0x68) != 0) {
          FUN_ram_48189290();
          thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar20 + 0x68));
          *(undefined4 *)(iVar20 + 0x68) = 0;
        }
        iVar20 = thunk_FUN_ram_4817b126(1,0x198);
        if (iVar20 == 0) {
          FUN_ram_48170f7a(param_1,2,0x50);
          return -0x7f00;
        }
        FUN_ram_48189282();
        if ((param_1[0x1f] == 0x16) && (pcVar8 = (char *)param_1[0x1d], *pcVar8 == '\v')) {
          uVar7 = param_1[0x22];
          if (((uVar7 < 10) || (pcVar8[4] != '\0')) ||
             (uVar7 != ((uint)(*(ushort *)(pcVar8 + 5) >> 8) | (*(ushort *)(pcVar8 + 5) & 0xff) << 8
                       ) + 7)) {
LAB_ram_4816c51e:
            FUN_ram_48170f7a(param_1,2,0x32);
            iVar11 = -0x7300;
          }
          else {
            uVar18 = 7;
            iVar12 = 0;
            do {
              uVar9 = uVar18 + 3;
              if (uVar7 < uVar9) goto LAB_ram_4816c51e;
              iVar11 = param_1[0x1d];
              if (*(char *)(uVar18 + iVar11) != '\0') {
                FUN_ram_48170f7a(param_1,2,0x2b);
LAB_ram_4816c548:
                iVar11 = -0x7a00;
                goto LAB_ram_4816c40c;
              }
              uVar2 = *(ushort *)((char *)(uVar18 + iVar11) + 1);
              uVar16 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
              if ((uVar16 < 0x80) || (uVar18 = uVar9 + uVar16, uVar7 < uVar18))
              goto LAB_ram_4816c51e;
              if (((iVar12 == 0) && (*(char *)(*param_1 + 8) == '\0')) && (param_1[2] == 1)) {
                iVar15 = param_1[0xe];
                iVar26 = *(int *)(iVar15 + 0x68);
                if (((iVar26 == 0) || (uVar16 != *(uint *)(iVar26 + 8))) ||
                   (iVar11 = FUN_ram_4ff4511a(*(undefined4 *)(iVar26 + 0xc),iVar11 + uVar9),
                   iVar11 != 0)) {
                  FUN_ram_48170f7a(param_1,2,0x31);
                  goto LAB_ram_4816c548;
                }
                FUN_ram_48189290(iVar26);
                thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar15 + 0x68));
                iVar11 = param_1[0x1d];
                *(undefined4 *)(iVar15 + 0x68) = 0;
              }
              iVar11 = FUN_ram_48189d0e(iVar20,iVar11 + uVar9,uVar16);
              if (iVar11 == -0x2580) {
                uVar13 = 0x2b;
LAB_ram_4816c3fa:
                FUN_ram_48170f7a(param_1,2,uVar13);
                goto LAB_ram_4816c40c;
              }
              if (iVar11 < -0x257f) {
                if (iVar11 == -0x2880) {
                  uVar13 = 0x50;
                  goto LAB_ram_4816c3fa;
                }
                if (iVar11 != -0x262e) goto LAB_ram_4816c4b6;
              }
              else if (iVar11 != 0) {
LAB_ram_4816c4b6:
                uVar13 = 0x2a;
                goto LAB_ram_4816c3fa;
              }
              uVar7 = param_1[0x22];
              iVar12 = iVar12 + 1;
            } while (uVar18 < uVar7);
            iVar11 = FUN_ram_4816c054(param_1,cVar24,iVar20,*(undefined4 *)(param_1[0x10] + 0x10),0)
            ;
            if (iVar11 == 0) {
              *(int *)(param_1[0xf] + 0x68) = iVar20;
              goto LAB_ram_4816c42e;
            }
          }
        }
        else {
          FUN_ram_48170f7a(param_1,2,10);
          iVar11 = -0x7700;
        }
LAB_ram_4816c40c:
        FUN_ram_48189290(iVar20);
        thunk_FUN_ram_4ff209c6(iVar20);
        return iVar11;
      }
      if (iVar20 < 4) {
        if (iVar20 == 1) {
          iVar20 = FUN_ram_4816f274();
          return iVar20;
        }
        if (iVar20 != 2) {
          if (iVar20 != 0) {
            return -0x7100;
          }
          param_1[1] = 1;
          return 0;
        }
        iVar20 = FUN_ram_48170c76(param_1,1);
        if (iVar20 != 0) {
          return iVar20;
        }
        if (param_1[0x1f] == 0x16) {
          if ((0x29 < (uint)param_1[0x22]) && (pcVar8 = (char *)param_1[0x1d], *pcVar8 == '\x02')) {
            pcVar28 = pcVar8 + 4;
            uVar7 = FUN_ram_48171466(pcVar28,*(undefined1 *)(*param_1 + 9));
            iVar20 = param_1[0xf];
            puVar21 = (uint *)*param_1;
            param_1[4] = uVar7;
            *(uint *)(iVar20 + 4) = uVar7;
            *(char *)(iVar20 + 2) = (char)puVar21[2];
            if ((uVar7 < puVar21[1]) || (*puVar21 < uVar7)) {
              FUN_ram_48170f7a(param_1,2,0x46);
              return -0x6e80;
            }
            FUN_ram_4ff45158(param_1[0x10] + 0x1d4,pcVar8 + 6,0x20);
            uVar7 = (uint)(byte)pcVar8[0x26];
            if (uVar7 < 0x21) {
              uVar18 = param_1[0x22];
              if (uVar7 + 0x2b < uVar18) {
                uVar9 = (*(ushort *)(pcVar28 + uVar7 + 0x26) & 0xff) << 8 |
                        (uint)(*(ushort *)(pcVar28 + uVar7 + 0x26) >> 8);
                if ((2 < uVar9 - 1) && (uVar18 == uVar7 + 0x2c + uVar9)) {
LAB_ram_4816cee8:
                  uVar18 = (uint)(*(ushort *)(pcVar28 + uVar7 + 0x23) >> 8) |
                           (*(ushort *)(pcVar28 + uVar7 + 0x23) & 0xff) << 8;
                  if (pcVar28[uVar7 + 0x25] != '\0') {
                    FUN_ram_48170f7a(param_1,2,0x2f);
                    return -0x7080;
                  }
                  iVar11 = param_1[0x10];
                  uVar13 = FUN_ram_4816f1ea(uVar18);
                  iVar20 = param_1[0x10];
                  *(undefined4 *)(iVar11 + 0x10) = uVar13;
                  if (*(int *)(iVar20 + 0x10) == 0) {
                    FUN_ram_48170f7a(param_1,2,0x50);
                    return -0x7100;
                  }
                  FUN_ram_4816a338(param_1);
                  pcVar27 = (char *)param_1[0x10];
                  iVar20 = param_1[0xf];
                  if (((((*pcVar27 == '\0') || (uVar7 == 0)) || (param_1[2] != 0)) ||
                      ((uVar18 != *(uint *)(iVar20 + 0x10) || (uVar7 != *(uint *)(iVar20 + 0x14)))))
                     || (iVar11 = FUN_ram_4ff4511a(iVar20 + 0x18,pcVar8 + 0x27,uVar7), iVar11 != 0))
                  {
                    param_1[1] = param_1[1] + 1;
                    *pcVar27 = '\0';
                    uVar29 = FUN_ram_4819b728(0);
                    iVar11 = param_1[0xf];
                    *(undefined8 *)(iVar20 + 8) = uVar29;
                    *(uint *)(iVar11 + 0x10) = uVar18;
                    *(uint *)(iVar11 + 0x14) = uVar7;
                    FUN_ram_4ff45158(iVar11 + 0x18,pcVar8 + 0x27,uVar7);
                  }
                  else {
                    param_1[1] = 0xc;
                  }
                  piVar19 = *(int **)(*param_1 + 0x14);
                  do {
                    iVar20 = *piVar19;
                    piVar19 = piVar19 + 1;
                    if (iVar20 == 0) goto LAB_ram_4816cfa0;
                  } while (iVar20 != *(int *)(param_1[0xf] + 0x10));
                  uVar13 = FUN_ram_4816f1ea();
                  iVar20 = FUN_ram_4816bb3a(param_1,uVar13,param_1[4]);
                  pcVar28 = pcVar28 + uVar7 + 0x28;
                  if (iVar20 == 0) {
                    bVar4 = false;
                    while (uVar9 != 0) {
                      puVar3 = *(undefined **)pcVar28;
                      uVar7 = (*(ushort *)(pcVar28 + 2) & 0xff) << 8 |
                              (uint)(*(ushort *)(pcVar28 + 2) >> 8);
                      if (uVar9 < uVar7 + 4) goto LAB_ram_4816cb58;
                      if (puVar3 == (undefined *)0x1600) {
                        if ((*(char *)(*param_1 + 0xd) == '\0') || (uVar7 != 0)) {
LAB_ram_4816d4f4:
                          FUN_ram_48170f7a(param_1,2,0x6e);
                          return -0x7500;
                        }
                        *(undefined4 *)(param_1[0xf] + 0x88) = 1;
                      }
                      else if ((ushort)((short)puVar3 << 8 | (ushort)puVar3 >> 8) < 0x17) {
                        if (puVar3 == &DAT_csreg_0b00) {
                          if ((uVar7 == 0) || (uVar18 = (uint)(byte)pcVar28[4], uVar18 + 1 != uVar7)
                             ) goto LAB_ram_4816cb58;
                          pbVar22 = (byte *)(pcVar28 + 5);
                          if (uVar18 == 0) goto LAB_ram_4816d1c0;
                          pbVar17 = pbVar22 + uVar18;
                          while( true ) {
                            bVar1 = *pbVar22;
                            pbVar22 = pbVar22 + 1;
                            if (bVar1 < 2) break;
                            if (pbVar22 == pbVar17) goto LAB_ram_4816d1c0;
                          }
                          *(byte *)(param_1[0x10] + 0x4c) = bVar1;
                        }
                        else if (puVar3 == (undefined *)0x1000) {
                          piVar19 = *(int **)(*param_1 + 0x68);
                          if (piVar19 == (int *)0x0) goto LAB_ram_4816d4f4;
                          if (((uVar7 < 4) ||
                              (((uint)(*(ushort *)(pcVar28 + 4) >> 8) |
                               (*(ushort *)(pcVar28 + 4) & 0xff) << 8) != uVar7 - 2)) ||
                             (uVar18 = (uint)(byte)pcVar28[6], uVar18 != uVar7 - 3))
                          goto LAB_ram_4816cb58;
                          pcVar8 = (char *)*piVar19;
                          if (pcVar8 == (char *)0x0) goto LAB_ram_4816d1c0;
                          while ((sVar14 = strlen(pcVar8), uVar18 != sVar14 ||
                                 (iVar20 = FUN_ram_4ff4511a(pcVar28 + 7,pcVar8,uVar18), iVar20 != 0)
                                 )) {
                            pcVar8 = (char *)piVar19[1];
                            piVar19 = piVar19 + 1;
                            if (pcVar8 == (char *)0x0) goto LAB_ram_4816d1c0;
                          }
                          param_1[0x33] = (int)pcVar8;
                        }
                        else if ((puVar3 == (undefined *)0x100) &&
                                (((*(char *)(*param_1 + 0xc) == '\0' || (uVar7 != 1)) ||
                                 (pcVar28[4] != *(char *)(*param_1 + 0xc))))) {
LAB_ram_4816cfa0:
                          FUN_ram_48170f7a(param_1,2,0x2f);
                          return -0x6600;
                        }
                      }
                      else if (puVar3 == (undefined *)0x2300) {
                        if (((*(byte *)(*param_1 + 0x10) & 1) == 0) || (uVar7 != 0))
                        goto LAB_ram_4816d4f4;
                        *(undefined1 *)(param_1[0x10] + 4) = 1;
                      }
                      else if (puVar3 == (undefined *)0x1ff) {
                        if (param_1[2] == 0) {
                          if ((uVar7 != 1) || (pcVar28[4] != '\0')) goto LAB_ram_4816d1c0;
                          param_1[0x34] = 1;
                        }
                        else if ((((uVar7 != param_1[0x35] * 2 + 1U) ||
                                  (param_1[0x35] * 2 != (uint)(byte)pcVar28[4])) ||
                                 (iVar20 = FUN_ram_481723ca(pcVar28 + 5,param_1 + 0x36), iVar20 != 0
                                 )) || (iVar20 = FUN_ram_481723ca(pcVar28 + param_1[0x35] + 5,
                                                                  param_1 + 0x39), iVar20 != 0))
                        goto LAB_ram_4816d1c0;
                        bVar4 = true;
                      }
                      else if (puVar3 == (undefined *)0x1700) {
                        if ((*(char *)(*param_1 + 0xe) == '\0') || (uVar7 != 0))
                        goto LAB_ram_4816d4f4;
                        *(undefined1 *)(param_1[0x10] + 0xc) = 1;
                      }
                      iVar20 = uVar9 - uVar7;
                      pcVar28 = pcVar28 + uVar7 + 4;
                      uVar9 = iVar20 - 4;
                      if (iVar20 - 5U < 3) {
                        return -0x7300;
                      }
                    }
                    if ((*(char *)param_1[0x10] != '\0') &&
                       (iVar20 = FUN_ram_4816b0fa(param_1), iVar20 != 0)) {
                      FUN_ram_48170f7a(param_1,2,0x50);
                      return iVar20;
                    }
                    if (param_1[0x34] == 0) {
                      if (*(char *)(*param_1 + 0xb) != '\x02') {
                        if (param_1[2] != 1) {
                          return 0;
                        }
                        if ((*(char *)(*param_1 + 0xb) != '\0') && (!bVar4)) {
                          return 0;
                        }
                      }
                    }
                    else {
                      if (param_1[2] != 1) {
                        return 0;
                      }
                      if (param_1[0x34] != 1) {
                        return 0;
                      }
                      if (bVar4) {
                        return 0;
                      }
                    }
                  }
LAB_ram_4816d1c0:
                  FUN_ram_48170f7a(param_1,2,0x28);
                  return -0x6e00;
                }
              }
              else if (uVar18 == uVar7 + 0x2a) {
                uVar9 = 0;
                goto LAB_ram_4816cee8;
              }
            }
          }
          goto LAB_ram_4816cb58;
        }
        if (param_1[2] == 1) {
          iVar11 = param_1[3];
          iVar20 = *(int *)(*param_1 + 0x70);
          param_1[3] = iVar11 + 1;
          if ((-1 < iVar20) && (iVar20 < iVar11 + 1)) {
            return -0x7700;
          }
          param_1[0x24] = 1;
          return -0x6b00;
        }
        goto LAB_ram_4816d47a;
      }
      iVar11 = 5;
      if (iVar20 != 5) {
        if (iVar20 == 6) {
          iVar20 = FUN_ram_48170c76(param_1,1);
          if (iVar20 != 0) {
            return iVar20;
          }
          if (param_1[0x1f] != 0x16) {
            return -0x7700;
          }
          if ((param_1[0x22] == 4) && (*(char *)param_1[0x1d] == '\x0e')) {
            param_1[1] = param_1[1] + 1;
            return 0;
          }
          goto LAB_ram_4816cb58;
        }
        puStack_90 = (ushort *)0x0;
        iVar20 = *(int *)(param_1[0x10] + 0x10);
        if (*(char *)(iVar20 + 10) != '\x01') {
          if ((byte)(*(char *)(iVar20 + 10) - 9U) < 2) {
            iVar20 = *(int *)(param_1[0xf] + 0x68);
            if (iVar20 == 0) {
              iVar20 = -0x6c00;
LAB_ram_4816ce1a:
              FUN_ram_48170f7a(param_1,2,0x28);
              return iVar20;
            }
            iVar11 = FUN_ram_48177194(iVar20 + 0xcc,2);
            if (iVar11 == 0) {
              iVar20 = -0x6d00;
              goto LAB_ram_4816ce1a;
            }
            iStack_80 = *(int *)(iVar20 + 0xcc);
            uStack_7c = *(undefined4 *)(iVar20 + 0xd0);
            iVar20 = FUN_ram_481774c4(&iStack_80);
            uVar13 = 0;
            if (iVar20 - 2U < 3) {
              uVar13 = uStack_7c;
            }
            iVar20 = FUN_ram_48172830(param_1[0x10] + 0x4c,uVar13,1);
            if (iVar20 != 0) goto LAB_ram_4816ce1a;
            uVar13 = *(undefined4 *)(param_1[0x10] + 0x50);
            iVar20 = FUN_ram_4816af70(uVar13);
            if ((iVar20 == 0) || (iVar20 = FUN_ram_4816aeea(param_1,uVar13), iVar20 != 0)) {
              iVar20 = -0x7a00;
              goto LAB_ram_4816ce1a;
            }
          }
          else {
            iVar11 = FUN_ram_48170c76();
            if (iVar11 != 0) {
              return iVar11;
            }
            if (param_1[0x1f] != 0x16) {
LAB_ram_4816ca1e:
              FUN_ram_48170f7a(param_1,2,10);
              return -0x7700;
            }
            pcVar8 = (char *)param_1[0x1d];
            bVar1 = *(byte *)(iVar20 + 10);
            if (*pcVar8 == '\f') {
              puStack_90 = (ushort *)(pcVar8 + 4);
              puVar25 = (ushort *)(pcVar8 + param_1[0x22]);
              if ((1 < (byte)(bVar1 - 3)) && (bVar1 != 8)) {
                return -0x6c00;
              }
              iVar11 = FUN_ram_48172770(param_1[0x10] + 0x4c,&puStack_90,puVar25);
              if (iVar11 != 0) {
LAB_ram_4816d318:
                FUN_ram_48170f7a(param_1,2,0x2f);
                return -0x6600;
              }
              uVar13 = *(undefined4 *)(param_1[0x10] + 0x50);
              iVar11 = FUN_ram_4816af70(uVar13);
              if ((iVar11 == 0) ||
                 (iVar11 = FUN_ram_4816aeea(param_1,uVar13), puVar5 = puStack_90, iVar11 != 0))
              goto LAB_ram_4816d318;
              if (*(byte *)(iVar20 + 10) - 2 < 3) {
                iVar20 = *(int *)(param_1[0xf] + 0x68);
                if (iVar20 == 0) {
                  return -0x6c00;
                }
                if ((puVar25 < puStack_90) || ((int)puVar25 - (int)puStack_90 < 2)) {
                  FUN_ram_481714f0(param_1,0x32,0xffff8d00);
                  return -0x7300;
                }
                iVar26 = param_1[0x1d];
                uVar7 = (uint)*puStack_90;
                uVar18 = (uint)(*puStack_90 >> 8);
                iVar12 = FUN_ram_4816ae5c(uVar18);
                iVar11 = FUN_ram_4816ae6c(uVar7 & 0xff);
                if ((iVar12 == 0) || (iVar11 == 0)) {
                  if (uVar7 == 0x508) {
                    iVar12 = 6;
                    iVar11 = 10;
                  }
                  else if (uVar7 == 0x608) {
                    iVar12 = 6;
                    iVar11 = 0xb;
                  }
                  else {
                    if (uVar7 != 0x408) goto LAB_ram_4816d3be;
                    iVar12 = 6;
                    iVar11 = 9;
                  }
                }
                if ((((param_1[4] != 0x303) || (5 < (uVar7 & 0xff) - 1)) || ((uVar18 & 0xfd) != 1))
                   || (puVar23 = *(ushort **)(*param_1 + 0x60), puVar23 == (ushort *)0x0)) {
LAB_ram_4816d3be:
                  FUN_ram_48170f7a(param_1,2,0x2f);
                  return -0x6600;
                }
                do {
                  uVar2 = *puVar23;
                  puVar23 = puVar23 + 1;
                  if (uVar2 == 0) goto LAB_ram_4816d3be;
                } while (((uVar7 & 0xff) << 8 | uVar18) != (uint)uVar2);
                iVar20 = iVar20 + 0xcc;
                puStack_90 = puStack_90 + 1;
                iVar15 = FUN_ram_48177194(iVar20,iVar12);
                if (iVar15 == 0) goto LAB_ram_4816d3be;
                if (puVar25 + -1 < puStack_90) {
LAB_ram_4816d64e:
                  FUN_ram_48170f7a(param_1,2,0x32);
                  return -0x7300;
                }
                uVar2 = *puStack_90;
                puStack_90 = puStack_90 + 1;
                uVar7 = (uVar2 & 0xff) << 8 | (uint)(uVar2 >> 8);
                if (puStack_90 != (ushort *)((int)puVar25 - uVar7)) goto LAB_ram_4816d64e;
                iVar26 = FUN_ram_4816ba5a(param_1,&iStack_80,&iStack_8c,iVar26 + 4,
                                          (int)puVar5 - (iVar26 + 4),iVar11);
                if (iVar26 != 0) {
                  return iVar26;
                }
                iVar26 = FUN_ram_48177194(iVar20,iVar12);
                if (iVar26 == 0) {
                  FUN_ram_48170f7a(param_1,2,0x28);
                  return -0x6d00;
                }
                if (iVar12 == 6) {
                  iStack_88 = iVar11;
                  FUN_ram_4817697e(iVar11);
                  iStack_84 = FUN_ram_48176d4c();
                  if (iStack_84 == 0) {
                    return -0x6c00;
                  }
                  iVar20 = FUN_ram_48177276(6,&iStack_88,iVar20,iVar11,&iStack_80,iStack_8c,
                                            puStack_90,uVar7);
                }
                else {
                  iVar20 = FUN_ram_481771a6(iVar20,iVar11,&iStack_80,iStack_8c,puStack_90,uVar7,0);
                }
                if (iVar20 != 0) {
                  FUN_ram_48170f7a(param_1,2,0x33);
                  return iVar20;
                }
              }
            }
            else {
              if ((bVar1 & 0xfd) != 5) goto LAB_ram_4816ca1e;
              param_1[0x24] = 1;
            }
          }
          iVar11 = param_1[1] + 1;
        }
        param_1[1] = iVar11;
        return 0;
      }
      bVar1 = *(byte *)(*(int *)(param_1[0x10] + 0x10) + 10);
      if (bVar1 < 5) {
        if (bVar1 == 0) goto LAB_ram_4816cd2a;
      }
      else if (1 < (byte)(bVar1 - 9)) {
LAB_ram_4816cd2a:
        param_1[1] = 6;
        return 0;
      }
      iVar20 = FUN_ram_48170c76(param_1,1);
      if (iVar20 != 0) {
        return iVar20;
      }
      if (param_1[0x1f] != 0x16) goto LAB_ram_4816d47a;
      pcVar8 = (char *)param_1[0x1d];
      param_1[1] = param_1[1] + 1;
      cVar24 = *pcVar8;
      *(bool *)(param_1[0x10] + 0x168) = cVar24 == '\r';
      if (cVar24 != '\r') {
        param_1[0x24] = 1;
        return 0;
      }
      uVar7 = param_1[0x22];
      if (((4 < uVar7) && (uVar18 = (uint)(byte)pcVar8[4], uVar18 + 6 < uVar7)) &&
         ((uVar9 = (uint)(*(ushort *)(pcVar8 + uVar18 + 5) >> 8) |
                   (*(ushort *)(pcVar8 + uVar18 + 5) & 0xff) << 8, uVar18 + 7 + uVar9 < uVar7 &&
          (iVar20 = uVar18 + uVar9,
          uVar7 == iVar20 + 9 +
                   ((uint)(*(ushort *)(pcVar8 + iVar20 + 7) >> 8) |
                   (*(ushort *)(pcVar8 + iVar20 + 7) & 0xff) << 8))))) {
        return 0;
      }
      goto LAB_ram_4816cb58;
    }
    if (iVar20 == 0xb) {
      iVar20 = FUN_ram_4816b80a();
      return iVar20;
    }
    if (iVar20 < 0xc) {
      if (iVar20 != 9) {
        if (iVar20 == 10) {
          iVar20 = FUN_ram_48170fb4();
          return iVar20;
        }
        iVar20 = param_1[0x10];
        cVar24 = *(char *)(*(int *)(iVar20 + 0x10) + 10);
        if (((byte)(cVar24 - 3U) < 2) || ((byte)(cVar24 - 9U) < 2)) {
          iVar20 = FUN_ram_48172906(iVar20 + 0x4c,&iStack_80,param_1[0x2c] + 4,1000,
                                    *(undefined4 *)(*param_1 + 0x20),
                                    *(undefined4 *)(*param_1 + 0x24));
          if (iVar20 != 0) {
            return iVar20;
          }
          iVar20 = param_1[0x10];
          iVar20 = FUN_ram_48172a1c(iVar20 + 0x4c,iVar20 + 0x238,iVar20 + 500,0x400,
                                    *(undefined4 *)(*param_1 + 0x20),
                                    *(undefined4 *)(*param_1 + 0x24));
          if (iVar20 != 0) {
            return iVar20;
          }
LAB_ram_4816c866:
          param_1[0x2e] = iStack_80 + 4;
          param_1[0x2d] = 0x16;
          *(undefined1 *)param_1[0x2c] = 0x10;
          param_1[1] = param_1[1] + 1;
          iVar20 = FUN_ram_48170976(param_1,1);
          return iVar20;
        }
        if (cVar24 == '\x01') {
          FUN_ram_48171448(iVar20 + 500,*(undefined1 *)(*param_1 + 9),0x303);
          iVar11 = (**(code **)(*param_1 + 0x20))
                             (*(undefined4 *)(*param_1 + 0x24),iVar20 + 0x1f6,0x2e);
          if (iVar11 != 0) {
            return iVar11;
          }
          iVar11 = *(int *)(param_1[0xf] + 0x68);
          *(undefined4 *)(param_1[0x10] + 0x238) = 0x30;
          if (iVar11 != 0) {
            iVar11 = iVar11 + 0xcc;
            iVar12 = FUN_ram_48177194(iVar11,1);
            if (iVar12 == 0) {
              return -0x6d00;
            }
            iVar20 = FUN_ram_48177494(iVar11,iVar20 + 500,*(undefined4 *)(param_1[0x10] + 0x238),
                                      param_1[0x2c] + 6,&iStack_80,0xffa,
                                      *(undefined4 *)(*param_1 + 0x20),
                                      *(undefined4 *)(*param_1 + 0x24));
            if (iVar20 != 0) {
              return iVar20;
            }
            iVar20 = param_1[0x2c];
            *(char *)(iVar20 + 4) = (char)((uint)iStack_80 >> 8);
            *(char *)(iVar20 + 5) = (char)iStack_80;
            iStack_80 = iStack_80 + 2;
            goto LAB_ram_4816c866;
          }
        }
        return -0x6c00;
      }
      iVar20 = *(int *)(param_1[0x10] + 0x10);
      iVar12 = param_1[0x2c];
      iVar26 = param_1[0x27];
      iStack_8c = 0;
      iVar11 = FUN_ram_4816b0fa();
      if (iVar11 != 0) {
        return iVar11;
      }
      bVar1 = *(byte *)(iVar20 + 10);
      if (bVar1 < 5) {
        if (bVar1 == 0) goto LAB_ram_4816cdc0;
      }
      else if (1 < (byte)(bVar1 - 9)) goto LAB_ram_4816cdc0;
      iVar20 = param_1[0x10];
      if ((*(char *)(iVar20 + 0x168) != '\0') &&
         (((piVar19 = *(int **)(iVar20 + 0xfc), piVar19 != (int *)0x0 ||
           (piVar19 = *(int **)(*param_1 + 0x54), piVar19 != (int *)0x0)) && (*piVar19 != 0)))) {
        if (piVar19[1] == 0) {
          return -0x7600;
        }
        iVar20 = (**(code **)(iVar20 + 0x18))
                           (param_1,&iStack_80,&iStack_88,*piVar19,piVar19[1],
                            *(code **)(iVar20 + 0x18));
        if (iVar20 == 0) {
          if (*(char *)(*(int *)(param_1[0x10] + 0x10) + 9) == '\n') {
            uVar10 = 5;
            uVar6 = 10;
          }
          else {
            uVar10 = 4;
            uVar6 = 9;
          }
          *(undefined1 *)(param_1[0x2c] + 4) = uVar10;
          if (((param_1[0x10] == 0) || (iVar20 = *(int *)(param_1[0x10] + 0xfc), iVar20 == 0)) &&
             (iVar20 = *(int *)(*param_1 + 0x54), iVar20 == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(iVar20 + 4);
          }
          iVar20 = param_1[0x2c];
          uVar10 = FUN_ram_4816ae14(uVar13);
          *(undefined1 *)(iVar20 + 5) = uVar10;
          iStack_88 = 0;
          iVar20 = *param_1;
          if (((param_1[0x10] == 0) || (iVar11 = *(int *)(param_1[0x10] + 0xfc), iVar11 == 0)) &&
             (iVar11 = *(int *)(iVar20 + 0x54), iVar11 == 0)) {
            uVar13 = 0;
          }
          else {
            uVar13 = *(undefined4 *)(iVar11 + 4);
          }
          iVar20 = FUN_ram_4817737e(uVar13,uVar6,&iStack_80,0,param_1[0x2c] + 8,
                                    0x1145 - (iVar12 - iVar26),&iStack_8c,
                                    *(undefined4 *)(iVar20 + 0x20),*(undefined4 *)(iVar20 + 0x24),0)
          ;
          if (iVar20 == 0) {
            iVar20 = param_1[0x2c];
            *(char *)(iVar20 + 6) = (char)((uint)iStack_8c >> 8);
            *(char *)(iVar20 + 7) = (char)iStack_8c;
            param_1[0x2e] = iStack_8c + 8;
            param_1[0x2d] = 0x16;
            *(undefined1 *)param_1[0x2c] = 0xf;
            param_1[1] = param_1[1] + 1;
            iVar20 = FUN_ram_48170976(param_1,1);
            return iVar20;
          }
          return iVar20;
        }
        return iVar20;
      }
LAB_ram_4816cdc0:
      param_1[1] = param_1[1] + 1;
      return 0;
    }
    if (iVar20 == 0xe) {
      param_1[1] = 0xf;
      return 0;
    }
    if (iVar20 < 0xf) {
      iVar20 = FUN_ram_4816b912();
      return iVar20;
    }
    if (iVar20 == 0xf) {
      FUN_ram_4816b758();
      return 0;
    }
    if (iVar20 != 0x10) {
      return -0x7100;
    }
  }
  iVar20 = FUN_ram_48170c76(param_1,1);
  if (iVar20 != 0) {
    return iVar20;
  }
  if (param_1[0x1f] != 0x16) {
LAB_ram_4816d47a:
    FUN_ram_48170f7a(param_1,2,10);
    return -0x7700;
  }
  pcVar8 = (char *)param_1[0x1d];
  if ((*pcVar8 == '\x04') && (9 < (uint)param_1[0x22])) {
    uVar13 = *(undefined4 *)(pcVar8 + 4);
    uVar7 = (*(ushort *)(pcVar8 + 8) & 0xff) << 8 | (uint)(*(ushort *)(pcVar8 + 8) >> 8);
    if (param_1[0x22] == uVar7 + 10) {
      *(undefined1 *)(param_1[0x10] + 4) = 0;
      param_1[1] = 0xc;
      if (uVar7 != 0) {
        iVar20 = param_1[0xe];
        if ((iVar20 != 0) && (*(int *)(iVar20 + 0x70) != 0)) {
          FUN_ram_48178b14(*(int *)(iVar20 + 0x70),*(undefined4 *)(iVar20 + 0x74));
          iVar20 = param_1[0xe];
          *(undefined4 *)(iVar20 + 0x70) = 0;
          *(undefined4 *)(iVar20 + 0x74) = 0;
        }
        FUN_ram_48178b14(*(undefined4 *)(param_1[0xf] + 0x70),*(undefined4 *)(param_1[0xf] + 0x74));
        iVar20 = param_1[0xf];
        *(undefined4 *)(iVar20 + 0x70) = 0;
        *(undefined4 *)(iVar20 + 0x74) = 0;
        iVar20 = thunk_FUN_ram_4817b126(1,uVar7);
        if (iVar20 == 0) {
          FUN_ram_48170f7a(param_1,2,0x50);
          return -0x7f00;
        }
        FUN_ram_4ff45158(iVar20,pcVar8 + 10,uVar7);
        iVar11 = param_1[0xf];
        *(int *)(iVar11 + 0x70) = iVar20;
        *(uint *)(iVar11 + 0x74) = uVar7;
        uVar13 = __bswapsi2(uVar13);
        *(undefined4 *)(iVar11 + 0x78) = uVar13;
        *(undefined4 *)(iVar11 + 0x14) = 0;
      }
      return 0;
    }
  }
LAB_ram_4816cb58:
  FUN_ram_48170f7a(param_1,2,0x32);
  return -0x7300;
}


