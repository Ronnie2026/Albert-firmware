/* Firmware entry: 0x4801d44c */

int FUN_ram_4801d44c(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  uint *puVar3;
  int *piVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar17 = *param_1;
  iVar13 = 0;
  if (*(int *)(iVar17 + 0x18) != 0) {
    iVar16 = 0;
    iVar13 = 0;
    uVar19 = 0;
LAB_ram_4801d480:
    do {
      while( true ) {
        pbVar18 = (byte *)(param_2 + iVar13);
        iVar1 = *(int *)(iVar17 + 0x1c) + iVar16;
        iVar11 = *(int *)(iVar1 + 8);
        piVar4 = (int *)(*(int *)(iVar1 + 0x14) + (int)param_1);
        if (iVar11 != 0) break;
LAB_ram_4801d73c:
        iVar1 = FUN_ram_4801dd3e(iVar1,piVar4,pbVar18);
        iVar17 = *param_1;
LAB_ram_4801d748:
        iVar13 = iVar13 + iVar1;
        uVar19 = uVar19 + 1;
        iVar16 = iVar16 + 0x30;
        if (*(uint *)(iVar17 + 0x18) <= uVar19) goto LAB_ram_4801d666;
      }
      uVar7 = *(uint *)(iVar1 + 0x20);
      puVar10 = (uint *)(*(int *)(iVar1 + 0x10) + (int)param_1);
      if (iVar11 == 1) {
        if ((uVar7 & 4) != 0) {
LAB_ram_4801d722:
          if (*puVar10 != *(uint *)(iVar1 + 4)) goto LAB_ram_4801d652;
          if ((*(int *)(iVar1 + 0xc) - 0xeU & 0xfffffffd) != 0) goto LAB_ram_4801d73c;
LAB_ram_4801d732:
          if ((*piVar4 == 0) || (*piVar4 == *(int *)(iVar1 + 0x1c))) goto LAB_ram_4801d652;
          goto LAB_ram_4801d73c;
        }
        if ((*(int *)(iVar1 + 0xc) - 0xeU & 0xfffffffd) == 0) goto LAB_ram_4801d732;
        if (*puVar10 == 0) goto LAB_ram_4801d652;
        iVar1 = FUN_ram_4801dd3e(iVar1,piVar4,pbVar18);
        iVar17 = *param_1;
        goto LAB_ram_4801d748;
      }
      if (iVar11 != 3) {
        uVar7 = uVar7 & 1;
        uVar14 = *puVar10;
        puVar10 = (uint *)*piVar4;
        if (uVar7 == 0) {
          if (0x10 < *(uint *)(iVar1 + 0xc)) {
LAB_ram_4801dd3a:
                    /* WARNING: Subroutine does not return */
            FUN_ram_4801c56c();
          }
          uVar7 = 1 << (*(uint *)(iVar1 + 0xc) & 0x1f);
          if ((uVar7 & 0x174c7) == 0) {
            if ((uVar7 & 0x8b38) == 0) goto LAB_ram_4801dd3a;
            iVar11 = 8;
          }
          else {
            iVar11 = 4;
          }
          if (uVar14 != 0) {
            uVar7 = 0;
            iVar15 = 0;
            do {
              iVar17 = FUN_ram_4801dd3e(iVar1,puVar10,iVar13 + iVar15 + param_2);
              uVar7 = uVar7 + 1;
              puVar10 = (uint *)((int)puVar10 + iVar11);
              iVar15 = iVar15 + iVar17;
            } while (uVar14 != uVar7);
            iVar17 = *param_1;
            uVar19 = uVar19 + 1;
            iVar13 = iVar13 + iVar15;
            iVar16 = iVar16 + 0x30;
            if (*(uint *)(iVar17 + 0x18) <= uVar19) break;
            goto LAB_ram_4801d480;
          }
        }
        else if (uVar14 != 0) {
          uVar8 = *(uint *)(iVar1 + 4);
          uVar12 = uVar8 << 3;
          uStack_44 = uVar7;
          if (uVar8 < 0x20000000) {
            pbVar2 = pbVar18;
            uStack_48 = uVar7;
            if (0x7f < uVar12) {
              *pbVar18 = (byte)uVar12 | 0x80;
              uVar12 = (uVar8 & 0x1fffffff) >> 4;
              if (uVar12 < 0x80) {
                uStack_48 = 2;
                pbVar2 = pbVar18 + 1;
              }
              else {
                pbVar18[1] = (byte)uVar12 | 0x80;
                uVar12 = (uVar8 & 0x1fffffff) >> 0xb;
                if (uVar12 < 0x80) {
                  uStack_48 = 3;
                  pbVar2 = pbVar18 + 2;
                }
                else {
                  pbVar18[2] = (byte)uVar12 | 0x80;
                  uVar12 = (uVar8 & 0x1fffffff) >> 0x12;
                  if (uVar12 < 0x80) {
                    uStack_48 = 4;
                    pbVar2 = pbVar18 + 3;
                  }
                  else {
                    pbVar18[3] = (byte)uVar12 | 0x80;
                    uVar12 = (uVar8 & 0x1fffffff) >> 0x19;
                    uStack_48 = 5;
                    pbVar2 = pbVar18 + 4;
                  }
                }
              }
            }
            *pbVar2 = (byte)uVar12;
            *pbVar18 = *pbVar18 | 2;
            uVar8 = *(uint *)(iVar1 + 0xc);
            uVar12 = uVar8 - 2;
            if (uVar12 < 10) goto LAB_ram_4801d518;
LAB_ram_4801d924:
            if (uVar14 < 0x80) {
              iVar17 = uStack_48 + 1;
LAB_ram_4801dcfc:
              pbStack_4c = pbVar18 + iVar17;
              if (uVar8 < 7) {
                if (uVar8 != 1) goto LAB_ram_4801db42;
                goto LAB_ram_4801d588;
              }
LAB_ram_4801d990:
              if (uVar8 != 0xc) {
                if (uVar8 != 0xd) {
                    /* WARNING: Subroutine does not return */
                  FUN_ram_4ff44e88("protobuf-c.c",0x599,"repeated_field_pack","0");
                }
LAB_ram_4801db42:
                uVar12 = *puVar10;
                puVar3 = puVar10 + uVar14;
                pbVar2 = pbStack_4c;
                if ((int)uVar12 < 0) goto LAB_ram_4801db8c;
                do {
                  pbVar5 = pbVar2;
                  uVar14 = uVar7;
                  if (0x7f < uVar12) {
                    *pbVar2 = (byte)uVar12 | 0x80;
                    uVar8 = uVar12 >> 7;
                    if (uVar8 < 0x80) {
                      pbVar5 = pbVar2 + 1;
                      uVar14 = 2;
                      uVar12 = uVar8;
                    }
                    else {
                      pbVar2[1] = (byte)uVar8 | 0x80;
                      uVar8 = uVar12 >> 0xe;
                      if (uVar8 < 0x80) {
                        pbVar5 = pbVar2 + 2;
                        uVar14 = 3;
                        uVar12 = uVar8;
                      }
                      else {
                        pbVar2[2] = (byte)uVar8 | 0x80;
                        uVar8 = uVar12 >> 0x15;
                        if (uVar8 < 0x80) {
                          pbVar5 = pbVar2 + 3;
                          uVar14 = 4;
                          uVar12 = uVar8;
                        }
                        else {
                          pbVar2[3] = (byte)uVar8 | 0x80;
                          pbVar5 = pbVar2 + 4;
                          uVar14 = 5;
                          uVar12 = uVar12 >> 0x1c;
                        }
                      }
                    }
                  }
                  *pbVar5 = (byte)uVar12;
                  while( true ) {
                    puVar10 = puVar10 + 1;
                    pbVar2 = pbVar2 + uVar14;
                    if (puVar10 == puVar3) goto LAB_ram_4801d5dc;
                    uVar12 = *puVar10;
                    if (-1 < (int)uVar12) break;
LAB_ram_4801db8c:
                    pbVar2[1] = (byte)(uVar12 >> 7) | 0x80;
                    pbVar2[2] = (byte)(uVar12 >> 0xe) | 0x80;
                    pbVar2[4] = (byte)(uVar12 >> 0x1c) | 0xf0;
                    pbVar2[8] = 0xff;
                    pbVar2[7] = 0xff;
                    pbVar2[6] = 0xff;
                    pbVar2[5] = 0xff;
                    pbVar2[9] = 1;
                    pbVar2[3] = (byte)(uVar12 >> 0x15) | 0x80;
                    *pbVar2 = (byte)uVar12 | 0x80;
                    uVar14 = 10;
                  }
                } while( true );
              }
              puVar3 = puVar10 + uVar14;
              pbVar2 = pbStack_4c;
              do {
                uVar7 = *puVar10;
                puVar10 = puVar10 + 1;
                *pbVar2 = uVar7 != 0;
                pbVar2 = pbVar2 + 1;
              } while (puVar3 != puVar10);
              pbVar2 = pbStack_4c + uVar14;
            }
            else {
              if (uVar14 < 0x4000) {
                iVar17 = uStack_48 + 2;
                uStack_44 = 2;
                goto LAB_ram_4801dcfc;
              }
              if (0x1fffff < uVar14) {
                if (uVar14 < 0x10000000) {
                  iVar17 = uStack_48 + 4;
                  pbStack_4c = pbVar18 + iVar17;
                  uStack_44 = 4;
                }
                else {
                  iVar17 = uStack_48 + 5;
                  pbStack_4c = pbVar18 + iVar17;
                  uStack_44 = 5;
                }
                goto LAB_ram_4801d572;
              }
              iVar17 = uStack_48 + 3;
              pbStack_4c = pbVar18 + iVar17;
              if (6 < uVar8) {
                uStack_44 = 3;
                goto LAB_ram_4801d990;
              }
              uStack_44 = 3;
LAB_ram_4801d582:
              if (uVar8 != 1) {
                if (uVar8 != 2) goto LAB_ram_4801db42;
LAB_ram_4801d89e:
                uVar14 = uVar14 << 2;
                goto LAB_ram_4801d8a4;
              }
LAB_ram_4801d588:
              puVar3 = puVar10 + uVar14;
              pbVar2 = pbStack_4c;
              do {
                while( true ) {
                  uVar14 = *puVar10 << 1 ^ (int)*puVar10 >> 0x1f;
                  if (uVar14 < 0x80) break;
                  *pbVar2 = (byte)uVar14 | 0x80;
                  bVar6 = (byte)(uVar14 >> 7);
                  if (uVar14 >> 7 < 0x80) {
                    pbVar5 = pbVar2 + 1;
                    iVar1 = 2;
                  }
                  else {
                    pbVar2[1] = bVar6 | 0x80;
                    bVar6 = (byte)(uVar14 >> 0xe);
                    if (uVar14 >> 0xe < 0x80) {
                      pbVar5 = pbVar2 + 2;
                      iVar1 = 3;
                    }
                    else {
                      pbVar2[2] = bVar6 | 0x80;
                      bVar6 = (byte)(uVar14 >> 0x15);
                      if (uVar14 >> 0x15 < 0x80) {
                        pbVar5 = pbVar2 + 3;
                        iVar1 = 4;
                      }
                      else {
                        pbVar2[3] = bVar6 | 0x80;
                        bVar6 = (byte)(uVar14 >> 0x1c);
                        pbVar5 = pbVar2 + 4;
                        iVar1 = 5;
                      }
                    }
                  }
                  *pbVar5 = bVar6;
                  puVar10 = puVar10 + 1;
                  pbVar2 = pbVar2 + iVar1;
                  if (puVar10 == puVar3) goto LAB_ram_4801d5dc;
                }
                *pbVar2 = (byte)uVar14;
                puVar10 = puVar10 + 1;
                pbVar2 = pbVar2 + uVar7;
              } while (puVar10 != puVar3);
            }
LAB_ram_4801d5dc:
            uVar14 = (int)pbVar2 - (int)pbStack_4c;
            if (uVar14 < 0x80) goto LAB_ram_4801d8c4;
LAB_ram_4801d5e8:
            bVar6 = (byte)uVar14;
            if (uVar14 < 0x4000) {
              if (uStack_44 != 2) {
                if (uStack_44 != 1) goto LAB_ram_4801d8ca;
                iVar17 = iVar17 + 1;
                FUN_ram_4ff4522c(pbVar18 + iVar17,pbStack_4c,uVar14);
              }
              pbVar18[uStack_48] = bVar6 | 0x80;
              pbVar18 = pbVar18 + uStack_48 + 1;
              uVar7 = uVar14 >> 7;
            }
            else if (uVar14 < 0x200000) {
              iVar1 = 3;
              if (uStack_44 != 3) goto LAB_ram_4801d604;
              (pbVar18 + uStack_48)[1] = (byte)(uVar14 >> 7) | 0x80;
              pbVar18[uStack_48] = bVar6 | 0x80;
LAB_ram_4801d642:
              pbVar18 = pbVar18 + uStack_48 + 2;
              uVar7 = uVar14 >> 0xe;
            }
            else {
              if (uVar14 < 0x10000000) {
                iVar1 = 4;
                if (uStack_44 == 4) {
                  pbVar18 = pbVar18 + uStack_48;
                  pbVar18[2] = (byte)(uVar14 >> 0xe) | 0x80;
                  *pbVar18 = bVar6 | 0x80;
                  pbVar18[1] = (byte)(uVar14 >> 7) | 0x80;
                  pbVar18 = pbVar18 + 3;
                  uVar7 = uVar14 >> 0x15;
                  goto LAB_ram_4801d644;
                }
LAB_ram_4801d604:
                if (uStack_44 + 1 != iVar1) goto LAB_ram_4801d8ca;
                iVar17 = iVar17 + 1;
                FUN_ram_4ff4522c(pbVar18 + iVar17,pbStack_4c,uVar14);
                pbVar2 = pbVar18 + uStack_48;
                *pbVar2 = bVar6 | 0x80;
                pbVar2[1] = (byte)(uVar14 >> 7) | 0x80;
                if (uVar14 >> 0xe < 0x80) goto LAB_ram_4801d642;
                pbVar2[2] = (byte)(uVar14 >> 0xe) | 0x80;
                if (uVar14 >> 0x15 < 0x80) {
                  pbVar18 = pbVar2 + 3;
                  uVar7 = uVar14 >> 0x15;
                  goto LAB_ram_4801d644;
                }
              }
              else {
                iVar1 = 5;
                if (uStack_44 != 5) goto LAB_ram_4801d604;
                pbVar2 = pbVar18 + uStack_48;
                pbVar2[2] = (byte)(uVar14 >> 0xe) | 0x80;
                *pbVar2 = bVar6 | 0x80;
                pbVar2[1] = (byte)(uVar14 >> 7) | 0x80;
              }
              pbVar18[uStack_48 + 3] = (byte)(uVar14 >> 0x15) | 0x80;
              pbVar18 = pbVar18 + uStack_48 + 4;
              uVar7 = uVar14 >> 0x1c;
            }
          }
          else {
            pbVar18[4] = (byte)((uVar8 >> 0x1d) << 4) | (byte)(uVar12 >> 0x1c);
            pbVar18[2] = (byte)((uVar8 & 0x1fffffff) >> 0xb) | 0x80;
            pbVar18[3] = (byte)((uVar8 & 0x1fffffff) >> 0x12) | 0x80;
            pbVar18[1] = (byte)((uVar8 & 0x1fffffff) >> 4) | 0x80;
            *pbVar18 = (byte)uVar12 | 0x82;
            uVar8 = *(uint *)(iVar1 + 0xc);
            uStack_48 = 5;
            uVar12 = uVar8 - 2;
            if (9 < uVar12) goto LAB_ram_4801d924;
LAB_ram_4801d518:
            uVar9 = 1 << (uVar12 & 0x1f);
            uVar12 = uVar14 << 3;
            if (((uVar9 & 0x288) == 0) && (uVar12 = uVar14, (uVar9 & 0x121) != 0)) {
              uVar12 = uVar14 << 2;
            }
            if (((0x7f < uVar12) && (uStack_44 = 2, 0x3fff < uVar12)) &&
               (uStack_44 = 3, 0x1fffff < uVar12)) {
              uStack_44 = (0xfffffff < uVar12) + 4;
            }
            iVar17 = uStack_44 + uStack_48;
            pbStack_4c = pbVar18 + iVar17;
            if (uVar8 == 6) {
              puVar3 = puVar10 + uVar14;
              pbVar2 = pbStack_4c;
              do {
                uVar12 = *puVar10;
                pbVar5 = pbVar2;
                uVar14 = uVar7;
                if (0x7f < uVar12) {
                  *pbVar2 = (byte)uVar12 | 0x80;
                  uVar8 = uVar12 >> 7;
                  if (uVar8 < 0x80) {
                    pbVar5 = pbVar2 + 1;
                    uVar14 = 2;
                    uVar12 = uVar8;
                  }
                  else {
                    pbVar2[1] = (byte)uVar8 | 0x80;
                    uVar8 = uVar12 >> 0xe;
                    if (uVar8 < 0x80) {
                      pbVar5 = pbVar2 + 2;
                      uVar14 = 3;
                      uVar12 = uVar8;
                    }
                    else {
                      pbVar2[2] = (byte)uVar8 | 0x80;
                      uVar8 = uVar12 >> 0x15;
                      if (uVar8 < 0x80) {
                        pbVar5 = pbVar2 + 3;
                        uVar14 = 4;
                        uVar12 = uVar8;
                      }
                      else {
                        pbVar2[3] = (byte)uVar8 | 0x80;
                        uVar12 = uVar12 >> 0x1c;
                        pbVar5 = pbVar2 + 4;
                        uVar14 = 5;
                      }
                    }
                  }
                }
                *pbVar5 = (byte)uVar12;
                puVar10 = puVar10 + 1;
                pbVar2 = pbVar2 + uVar14;
              } while (puVar3 != puVar10);
              goto LAB_ram_4801d5dc;
            }
LAB_ram_4801d572:
            pbVar2 = pbStack_4c;
            if (uVar8 < 7) {
              if (uVar8 == 3) {
LAB_ram_4801da7e:
                uVar7 = 0;
                do {
                  uVar7 = uVar7 + 1;
                  iVar1 = FUN_ram_4801ca0a(*puVar10,puVar10[1],pbVar2);
                  puVar10 = puVar10 + 2;
                  pbVar2 = pbVar2 + iVar1;
                } while (uVar14 != uVar7);
              }
              else {
                if (uVar8 < 4) goto LAB_ram_4801d582;
                if (uVar8 != 4) goto LAB_ram_4801d9da;
                uVar7 = 0;
                do {
                  uVar12 = (int)puVar10[1] >> 0x1f;
                  uVar7 = uVar7 + 1;
                  iVar1 = FUN_ram_4801ca0a(*puVar10 << 1 ^ uVar12,
                                           (*puVar10 >> 0x1f | puVar10[1] << 1) ^ uVar12,pbVar2);
                  puVar10 = puVar10 + 2;
                  pbVar2 = pbVar2 + iVar1;
                } while (uVar14 != uVar7);
              }
              goto LAB_ram_4801d5dc;
            }
            if (uVar8 != 0xb) {
              if (0xb < uVar8) goto LAB_ram_4801d990;
              if (uVar8 == 8) goto LAB_ram_4801da7e;
              if ((uVar8 < 9) || (uVar8 != 9)) goto LAB_ram_4801d89e;
            }
LAB_ram_4801d9da:
            uVar14 = uVar14 << 3;
LAB_ram_4801d8a4:
            FUN_ram_4ff45158(pbStack_4c,puVar10,uVar14);
            if (0x7f < uVar14) goto LAB_ram_4801d5e8;
LAB_ram_4801d8c4:
            if (uStack_44 != 1) {
LAB_ram_4801d8ca:
                    /* WARNING: Subroutine does not return */
              FUN_ram_4ff44e88("protobuf-c.c",0x59f,"repeated_field_pack",
                               "actual_length_size == length_size_min + 1");
            }
            pbVar18 = pbVar18 + uStack_48;
            uVar7 = uVar14;
          }
LAB_ram_4801d644:
          *pbVar18 = (byte)uVar7;
          iVar13 = uVar14 + iVar13 + iVar17;
          iVar17 = *param_1;
        }
LAB_ram_4801d652:
        uVar19 = uVar19 + 1;
        iVar16 = iVar16 + 0x30;
        if (*(uint *)(iVar17 + 0x18) <= uVar19) break;
        goto LAB_ram_4801d480;
      }
      if ((uVar7 & 4) != 0) goto LAB_ram_4801d722;
      iVar11 = FUN_ram_4801c594(*(undefined4 *)(iVar1 + 0xc));
      if (iVar11 != 0) goto LAB_ram_4801d652;
      iVar1 = FUN_ram_4801dd3e(iVar1,piVar4,pbVar18);
      iVar17 = *param_1;
      uVar19 = uVar19 + 1;
      iVar13 = iVar13 + iVar1;
      iVar16 = iVar16 + 0x30;
    } while (uVar19 < *(uint *)(iVar17 + 0x18));
  }
LAB_ram_4801d666:
  if (param_1[1] != 0) {
    uVar19 = 0;
    do {
      pbVar18 = (byte *)(param_2 + iVar13);
      puVar10 = (uint *)(param_1[2] + uVar19 * 0x10);
      uVar14 = *puVar10;
      uVar7 = uVar14 << 3;
      if (uVar14 < 0x20000000) {
        if (uVar7 < 0x80) {
          iVar17 = 1;
          pbVar2 = pbVar18;
        }
        else {
          *pbVar18 = (byte)uVar7 | 0x80;
          uVar7 = (uVar14 & 0x1fffffff) >> 4;
          if (uVar7 < 0x80) {
            iVar17 = 2;
            pbVar2 = pbVar18 + 1;
          }
          else {
            pbVar18[1] = (byte)uVar7 | 0x80;
            uVar7 = (uVar14 & 0x1fffffff) >> 0xb;
            if (uVar7 < 0x80) {
              iVar17 = 3;
              pbVar2 = pbVar18 + 2;
            }
            else {
              pbVar18[2] = (byte)uVar7 | 0x80;
              uVar7 = (uVar14 & 0x1fffffff) >> 0x12;
              if (uVar7 < 0x80) {
                iVar17 = 4;
                pbVar2 = pbVar18 + 3;
              }
              else {
                pbVar18[3] = (byte)uVar7 | 0x80;
                uVar7 = (uVar14 & 0x1fffffff) >> 0x19;
                iVar17 = 5;
                pbVar2 = pbVar18 + 4;
              }
            }
          }
        }
        *pbVar2 = (byte)uVar7;
        bVar6 = *pbVar18;
      }
      else {
        bVar6 = (byte)uVar7 | 0x80;
        pbVar18[4] = (byte)((uVar14 >> 0x1d) << 4) | ((byte)(uVar14 >> 0x18) & 0x1f) >> 1;
        *pbVar18 = bVar6;
        pbVar18[1] = (byte)((uVar14 & 0x1fffffff) >> 4) | 0x80;
        pbVar18[2] = (byte)((uVar14 & 0x1fffffff) >> 0xb) | 0x80;
        pbVar18[3] = (byte)((uVar14 & 0x1fffffff) >> 0x12) | 0x80;
        iVar17 = 5;
      }
      uVar19 = uVar19 + 1;
      *pbVar18 = bVar6 | (byte)puVar10[1];
      FUN_ram_4ff45158(pbVar18 + iVar17,puVar10[3],puVar10[2]);
      iVar13 = puVar10[2] + iVar13 + iVar17;
    } while (uVar19 < (uint)param_1[1]);
  }
  return iVar13;
}


