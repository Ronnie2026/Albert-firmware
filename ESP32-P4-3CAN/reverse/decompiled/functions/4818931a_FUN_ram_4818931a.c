/* Firmware entry: 0x4818931a */

/* WARNING: Type propagation algorithm not settling */

int FUN_ram_4818931a(undefined4 *param_1,byte *param_2,int param_3,int param_4,code *param_5,
                    undefined4 param_6)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  void *__s;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  int iStack_88;
  byte *pbStack_84;
  int iStack_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  byte *pbStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
    return -0x2800;
  }
  if (param_2 == (byte *)0x0) {
    return -0x2800;
  }
  puVar4 = (undefined4 *)0x0;
  puVar11 = param_1;
  do {
    puVar15 = puVar11;
    if (puVar15[7] == 0) goto LAB_ram_4818938a;
    puVar4 = puVar15;
    puVar11 = (undefined4 *)puVar15[0x65];
  } while ((undefined4 *)puVar15[0x65] != (undefined4 *)0x0);
  __s = (void *)thunk_FUN_ram_4817b126(1,0x198);
  puVar15[0x65] = __s;
  if (__s == (void *)0x0) {
    return -0x2880;
  }
  memset(__s,0,0x198);
  puVar11 = puVar15 + 0x65;
  iStack_70 = 0;
  iStack_64 = 0;
  uStack_58 = 0;
  iStack_6c = 0;
  uStack_68 = 0;
  iStack_60 = 0;
  uStack_5c = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  puVar15 = (undefined4 *)*puVar11;
  if ((undefined4 *)*puVar11 == (undefined4 *)0x0) {
    iVar7 = -0x2800;
    puVar15 = (undefined4 *)0x0;
    goto LAB_ram_48189420;
  }
LAB_ram_4818938a:
  uStack_50 = 0;
  iStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0;
  iStack_60 = 0;
  iStack_64 = 0;
  uStack_68 = 0;
  iStack_6c = 0;
  iStack_70 = 0;
  iStack_88 = param_3;
  pbStack_84 = param_2;
  iVar7 = FUN_ram_4817f40e(&pbStack_84,param_2 + param_3,&iStack_88,0x30);
  if (iVar7 == 0) {
    pbVar6 = pbStack_84 + iStack_88;
    puVar15[2] = (int)pbVar6 - (int)param_2;
    if (param_4 == 0) {
      puVar15[3] = param_2;
      *puVar15 = 0;
    }
    else {
      pbStack_84 = (byte *)thunk_FUN_ram_4817b126(1);
      puVar15[3] = pbStack_84;
      if (pbStack_84 == (byte *)0x0) {
        iVar7 = -0x2880;
        pbStack_84 = (byte *)0x0;
        goto LAB_ram_48189414;
      }
      FUN_ram_4ff45158(pbStack_84,param_2,puVar15[2]);
      *puVar15 = 1;
      pbVar6 = pbStack_84 + puVar15[2];
      pbStack_84 = pbStack_84 + (puVar15[2] - iStack_88);
    }
    puVar15[6] = pbStack_84;
    iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar6,&iStack_88,0x30);
    if (iVar7 == 0) {
      pbVar12 = pbStack_84 + iStack_88;
      puVar15[5] = (int)pbVar12 - puVar15[6];
      iVar8 = FUN_ram_4817f40e(&pbStack_84,pbVar12,&iStack_4c,0xa0);
      if (iVar8 == 0) {
        pbVar13 = pbStack_84 + iStack_4c;
        iVar7 = FUN_ram_4817f55c(&pbStack_84,pbVar13,puVar15 + 7);
        if (iVar7 != 0) {
          iVar7 = iVar7 + -0x2200;
          goto LAB_ram_4818940a;
        }
        if (pbVar13 == pbStack_84) goto LAB_ram_481894b2;
        iVar7 = -0x2266;
      }
      else {
        iVar7 = iVar8 + -0x2180;
        if (iVar8 == -0x62) {
          puVar15[7] = 0;
        }
        else {
LAB_ram_4818940a:
          if (iVar7 != 0) goto LAB_ram_4818940e;
        }
LAB_ram_481894b2:
        iVar7 = FUN_ram_48189e7e(&pbStack_84,pbVar12,puVar15 + 8);
        if (iVar7 == 0) {
          iVar7 = FUN_ram_48189f00(&pbStack_84,pbVar12,puVar15 + 0xb,&iStack_70);
          if (iVar7 == 0) {
            if (2 < (uint)puVar15[7]) {
              FUN_ram_48189290(puVar15);
              iVar7 = -0x2580;
              goto LAB_ram_48189414;
            }
            puVar15[7] = puVar15[7] + 1;
            iVar7 = FUN_ram_4818a5d8(puVar15 + 0xb,&iStack_70,puVar15 + 0x62,puVar15 + 99,
                                     puVar15 + 100);
            if (iVar7 != 0) goto LAB_ram_481896d8;
            puVar15[0x10] = pbStack_84;
            iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar12,&iStack_88,0x30);
            if (iVar7 != 0) {
LAB_ram_481896ea:
              FUN_ram_48189290(puVar15);
              goto joined_r0x4818964e;
            }
            iVar7 = FUN_ram_4818a182(&pbStack_84,pbStack_84 + iStack_88,puVar15 + 0x14);
            if (iVar7 == 0) {
              puVar15[0xf] = (int)pbStack_84 - puVar15[0x10];
              iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar12,&iStack_4c,0x30);
              if (iVar7 == 0) {
                pbVar13 = pbStack_84 + iStack_4c;
                iVar7 = FUN_ram_4818a2fc(&pbStack_84,pbVar13,puVar15 + 0x24);
                if ((iVar7 == 0) &&
                   (iVar7 = FUN_ram_4818a2fc(&pbStack_84,pbVar13,puVar15 + 0x2a), iVar7 == 0)) {
                  if (pbVar13 == pbStack_84) goto LAB_ram_48189562;
                  iVar7 = -0x2466;
                }
              }
              else {
                iVar7 = iVar7 + -0x2400;
                if (iVar7 == 0) {
LAB_ram_48189562:
                  puVar15[0x13] = pbStack_84;
                  iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar12,&iStack_88,0x30);
                  if (iVar7 != 0) goto LAB_ram_481896ea;
                  if ((iStack_88 == 0) ||
                     (iVar7 = FUN_ram_4818a182(&pbStack_84,pbStack_84 + iStack_88,puVar15 + 0x1c),
                     iVar7 == 0)) {
                    puVar15[0x32] = pbStack_84;
                    puVar15[0x12] = (int)pbStack_84 - puVar15[0x13];
                    iVar7 = FUN_ram_481784b0(&pbStack_84,pbVar12,puVar15 + 0x33);
                    if (iVar7 == 0) {
                      puVar15[0x31] = (int)pbStack_84 - puVar15[0x32];
                      if (1 < puVar15[7] - 2) {
LAB_ram_481895ce:
                        if (pbVar12 == pbStack_84) goto LAB_ram_481895d2;
LAB_ram_48189ac0:
                        FUN_ram_48189290(puVar15);
                        iVar7 = -0x21e6;
                        goto LAB_ram_48189414;
                      }
                      if (pbVar12 != pbStack_84) {
                        puVar15[0x35] = (uint)*pbStack_84;
                        iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar12,puVar15 + 0x36,0xa1);
                        if (iVar7 == 0) {
                          puVar15[0x37] = pbStack_84;
                          pbStack_84 = pbStack_84 + puVar15[0x36];
                        }
                        else if ((iVar7 != -0x62) && (iVar7 = iVar7 + -0x2180, iVar7 != 0))
                        goto LAB_ram_481896d8;
                        if (1 < puVar15[7] - 2) goto LAB_ram_481895ce;
                        if (pbVar12 != pbStack_84) {
                          puVar15[0x38] = (uint)*pbStack_84;
                          iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar12,puVar15 + 0x39,0xa2);
                          if (iVar7 == 0) {
                            puVar15[0x3a] = pbStack_84;
                            pbStack_84 = pbStack_84 + puVar15[0x39];
                          }
                          else if ((iVar7 != -0x62) && (iVar7 = iVar7 + -0x2180, iVar7 != 0))
                          goto LAB_ram_481896d8;
                          if (puVar15[7] != 3) goto LAB_ram_481895ce;
                          if (pbVar12 != pbStack_84) {
                            iVar7 = FUN_ram_4818a6b4(&pbStack_84,pbVar12,puVar15 + 0x3b);
                            if (iVar7 == 0) {
                              pbVar10 = (byte *)(puVar15[0x3d] + puVar15[0x3c]);
                              pbVar13 = pbStack_84;
                              pbVar3 = pbStack_84;
joined_r0x4818980c:
                              pbStack_84 = pbVar3;
                              if (pbVar10 <= pbVar13) {
                                if (pbVar10 != pbVar13) goto LAB_ram_48189aa2;
                                goto LAB_ram_481895ce;
                              }
                              iStack_4c = 0;
                              iStack_48 = 0;
                              pbStack_44 = (byte *)0x0;
                              iStack_7c = 0;
                              uStack_78 = 0;
                              iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar10,&iStack_80,0x30);
                              if (iVar7 != 0) {
LAB_ram_48189ad0:
                                iVar7 = iVar7 + -0x2500;
                                if (iVar7 == 0) goto LAB_ram_481895ce;
                                goto LAB_ram_481896d8;
                              }
                              pbVar5 = pbStack_84 + iStack_80;
                              iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar5,&iStack_48,6);
                              if (iVar7 != 0) goto LAB_ram_48189ad0;
                              iStack_4c = 6;
                              pbStack_44 = pbStack_84;
                              pbStack_84 = pbStack_84 + iStack_48;
                              iVar7 = FUN_ram_4817f4ac(&pbStack_84,pbVar5,&iStack_7c);
                              if (((iVar7 != 0) && (iVar7 != -0x62)) ||
                                 (iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar5,&iStack_80,4),
                                 pbVar1 = pbStack_84, iVar7 != 0)) goto LAB_ram_48189ad0;
                              pbVar14 = pbStack_84 + iStack_80;
                              if (pbVar5 != pbVar14) goto LAB_ram_48189aa2;
                              iVar7 = FUN_ram_48184fbc(&iStack_4c,&uStack_78);
                              pbVar13 = pbVar14;
                              if (iVar7 != 0) {
                                if (param_5 != (code *)0x0) {
                                  iVar7 = (*param_5)(param_6,puVar15,&iStack_4c,iStack_7c,pbStack_84
                                                     ,pbVar14);
                                  pbVar3 = pbVar14;
                                  iVar8 = iStack_7c;
                                  if (iVar7 != 0) goto joined_r0x48189cfa;
                                  goto joined_r0x4818980c;
                                }
                                pbVar3 = pbVar5;
                                if (iStack_7c != 0) goto code_r0x481899cc;
                                goto joined_r0x4818980c;
                              }
                              if ((puVar15[0x56] & uStack_78) != 0) {
LAB_ram_481899d8:
                                iVar7 = -0x2500;
                                goto LAB_ram_481896d8;
                              }
                              puVar15[0x56] = puVar15[0x56] | uStack_78;
                              if (uStack_78 == 0x20) {
                                iVar7 = FUN_ram_4818abec(&pbStack_84,pbVar5,puVar15 + 0x3e);
                                pbVar14 = pbStack_84;
                                iVar8 = iVar7;
                              }
                              else {
                                if ((int)uStack_78 < 0x21) {
                                  if (uStack_78 == 4) {
                                    iVar7 = FUN_ram_4818a76e(&pbStack_84,pbVar5,puVar15 + 0x59);
                                    pbVar14 = pbStack_84;
                                    iVar8 = iVar7;
                                    goto joined_r0x48189cfa;
                                  }
                                  if (4 < (int)uStack_78) {
                                    if (uStack_78 == 8) {
                                      iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,0x30);
                                      if (iVar7 == 0) {
                                        if ((pbVar14 == pbStack_84 + iStack_74) && (iStack_74 != 0))
                                        {
                                          iVar7 = 0;
                                          puVar11 = puVar15 + 0x52;
                                          pbVar13 = pbStack_84;
                                          while (pbVar13 < pbVar14) {
                                            iVar8 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,
                                                                     0x30);
                                            if (iVar8 != 0) {
LAB_ram_48189c36:
                                              iVar7 = iVar8 + -0x2500;
                                              goto LAB_ram_48189b5c;
                                            }
                                            pbVar13 = pbStack_84 + iStack_74;
                                            iVar8 = FUN_ram_4817f40e(&pbStack_84,pbVar13,&iStack_74,
                                                                     6);
                                            iVar2 = iStack_74;
                                            pbVar3 = pbStack_84;
                                            if (iVar8 != 0) goto LAB_ram_48189c36;
                                            if ((iStack_74 != 4) ||
                                               (iVar8 = FUN_ram_4ff4511a(&DAT_ram_4823a6c8,
                                                                         pbStack_84,4), iVar8 != 0))
                                            {
                                              iVar7 = -0x2080;
                                            }
                                            pbVar5 = pbVar3;
                                            puVar9 = puVar11;
                                            if (puVar11[2] != 0) {
                                              if (puVar11[3] != 0) goto LAB_ram_481899d8;
                                              puVar9 = (undefined4 *)thunk_FUN_ram_4817b126(1,0x10);
                                              puVar11[3] = puVar9;
                                              pbVar5 = pbStack_84;
                                              if (puVar9 == (undefined4 *)0x0) {
                                                iVar7 = -0x256a;
                                                goto LAB_ram_481896d8;
                                              }
                                            }
                                            *puVar9 = 6;
                                            puVar9[1] = iVar2;
                                            pbStack_84 = pbVar5 + iStack_74;
                                            puVar9[2] = pbVar3;
                                            if (pbStack_84 < pbVar13) {
                                              iVar8 = FUN_ram_4817f40e(&pbStack_84,pbVar13,
                                                                       &iStack_74,0x30);
                                              if (iVar8 != 0) goto LAB_ram_48189c36;
                                              pbStack_84 = pbStack_84 + iStack_74;
                                            }
                                            puVar11 = puVar9;
                                            if (pbStack_84 != pbVar13) goto LAB_ram_48189aa2;
                                          }
                                          puVar11[3] = 0;
                                          if (pbVar14 == pbVar13) goto LAB_ram_48189b5c;
                                        }
LAB_ram_48189aa2:
                                        iVar7 = -0x2566;
                                        goto LAB_ram_481896d8;
                                      }
                                      iVar7 = iVar7 + -0x2500;
LAB_ram_48189b5c:
                                      pbVar13 = pbStack_84;
                                      pbVar3 = pbStack_84;
                                      if (iVar7 == 0) goto joined_r0x4818980c;
                                      if (iVar7 != -0x2080) goto LAB_ram_481896d8;
                                      if ((param_5 != (code *)0x0) &&
                                         (iVar7 = (*param_5)(param_6,puVar15,&iStack_4c,iStack_7c,
                                                             pbVar1,pbVar14), pbVar13 = pbStack_84,
                                         pbVar3 = pbStack_84, iVar7 == 0)) goto joined_r0x4818980c;
                                    }
joined_r0x48189af0:
                                    pbVar3 = pbVar13;
                                    if (iStack_7c != 0) {
                                      iVar7 = -0x2080;
                                      goto LAB_ram_481896d8;
                                    }
                                    goto joined_r0x4818980c;
                                  }
                                  if (uStack_78 == 1) {
                                    iStack_74 = 0;
                                    iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,0x30);
                                    if (iVar7 != 0) goto LAB_ram_481899a4;
                                    if (pbVar14 != pbStack_84 + iStack_74) goto LAB_ram_48189aa2;
                                    iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,0x80);
                                    if (iVar7 == 0) {
                                      puVar15[0x46] = iStack_74;
                                      puVar15[0x47] = pbStack_84;
                                      pbStack_84 = pbStack_84 + iStack_74;
                                      puVar15[0x45] = 4;
                                    }
                                    else if (iVar7 != -0x62) goto LAB_ram_481899a4;
                                    if (pbVar14 <= pbStack_84) {
joined_r0x48189b4a:
                                      pbVar13 = pbStack_84;
                                      pbVar3 = pbStack_84;
                                      if (pbVar14 != pbStack_84) goto LAB_ram_48189aa2;
                                      goto joined_r0x4818980c;
                                    }
                                    iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,0xa1);
                                    if (iVar7 == 0) {
                                      iVar7 = FUN_ram_4818aa8c(&pbStack_84,pbStack_84 + iStack_74,
                                                               puVar15 + 0x48);
                                      if (iVar7 != 0) goto LAB_ram_481896d8;
                                      iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,0x82);
                                      if (iVar7 == 0) {
                                        puVar15[0x4d] = iStack_74;
                                        puVar15[0x4e] = pbStack_84;
                                        pbStack_84 = pbStack_84 + iStack_74;
                                        puVar15[0x4c] = 2;
                                        goto joined_r0x48189b4a;
                                      }
                                    }
                                  }
                                  else {
                                    if (uStack_78 != 2) goto joined_r0x48189af0;
                                    iStack_74 = 0;
                                    iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar5,&iStack_74,4);
                                    if (iVar7 == 0) {
                                      puVar15[0x43] = iStack_74;
                                      puVar15[0x44] = pbStack_84;
                                      pbStack_84 = pbStack_84 + iStack_74;
                                      puVar15[0x42] = 4;
                                      pbVar13 = pbStack_84;
                                      pbVar3 = pbStack_84;
                                      if (pbVar5 != pbStack_84) goto LAB_ram_48189aa2;
                                      goto joined_r0x4818980c;
                                    }
                                  }
                                }
                                else {
                                  if (uStack_78 == 0x800) {
                                    iVar7 = FUN_ram_4817f8a8(&pbStack_84,pbVar5,puVar15 + 0x5a,6);
                                    if (iVar7 != 0) goto LAB_ram_481899a4;
                                    pbVar13 = pbStack_84;
                                    pbVar3 = pbStack_84;
                                    if (puVar15[0x5c] == 0) {
LAB_ram_48189ce0:
                                      iVar7 = -0x2564;
                                      goto LAB_ram_481896d8;
                                    }
                                    goto joined_r0x4818980c;
                                  }
                                  if (uStack_78 == 0x10000) {
                                    iVar7 = FUN_ram_4818a716(&pbStack_84,pbVar5,puVar15 + 0x5e);
                                    pbVar14 = pbStack_84;
                                    iVar8 = iVar7;
                                    goto joined_r0x48189cfa;
                                  }
                                  if (uStack_78 != 0x100) goto joined_r0x48189af0;
                                  puVar15[0x57] = 0;
                                  puVar15[0x58] = 0;
                                  iVar7 = FUN_ram_4817f40e(&pbStack_84,pbVar14,&iStack_74,0x30);
                                  if (iVar7 == 0) {
                                    pbVar13 = pbStack_84;
                                    pbVar3 = pbStack_84;
                                    if (pbVar14 == pbStack_84) goto joined_r0x4818980c;
                                    iVar7 = FUN_ram_4817f4ac(&pbStack_84,pbVar14,puVar15 + 0x57);
                                    if (iVar7 != 0) {
                                      if ((iVar7 != -0x62) ||
                                         (iVar7 = FUN_ram_4817f55c(&pbStack_84,pbVar14,
                                                                   puVar15 + 0x57), iVar7 != 0))
                                      goto LAB_ram_481899a4;
                                      if (puVar15[0x57] != 0) {
                                        puVar15[0x57] = 1;
                                      }
                                    }
                                    pbVar13 = pbStack_84;
                                    pbVar3 = pbStack_84;
                                    if (pbVar14 == pbStack_84) goto joined_r0x4818980c;
                                    iVar7 = FUN_ram_4817f55c(&pbStack_84,pbVar14,puVar15 + 0x58);
                                    if (iVar7 == 0) {
                                      if (pbVar14 != pbStack_84) goto LAB_ram_48189aa2;
                                      if (puVar15[0x58] == 0x7fffffff) goto LAB_ram_48189ce0;
                                      puVar15[0x58] = puVar15[0x58] + 1;
                                      pbVar13 = pbStack_84;
                                      pbVar3 = pbStack_84;
                                      goto joined_r0x4818980c;
                                    }
                                  }
                                }
LAB_ram_481899a4:
                                iVar7 = iVar7 + -0x2500;
                                pbVar14 = pbStack_84;
                                iVar8 = iVar7;
                              }
joined_r0x48189cfa:
                              pbVar13 = pbVar14;
                              pbVar3 = pbVar14;
                              if (iVar8 != 0) goto LAB_ram_481896d8;
                              goto joined_r0x4818980c;
                            }
                            goto LAB_ram_481896d8;
                          }
                        }
                      }
LAB_ram_481895d2:
                      iVar7 = FUN_ram_48189f00(&pbStack_84,pbVar6,&uStack_58,&iStack_64);
                      if (iVar7 == 0) {
                        if (((((puVar15[0xc] != iStack_54) ||
                              (iVar7 = FUN_ram_4ff4511a(puVar15[0xd],uStack_50), iVar7 != 0)) ||
                             (iStack_70 != iStack_64)) || (iStack_6c != iStack_60)) ||
                           ((iStack_6c != 0 &&
                            (iVar7 = FUN_ram_4ff4511a(uStack_68,uStack_5c), iVar7 != 0)))) {
                          FUN_ram_48189290(puVar15);
                          iVar7 = -0x2680;
                          goto LAB_ram_48189414;
                        }
                        iVar7 = FUN_ram_4818a57c(&pbStack_84,pbVar6,puVar15 + 0x5f);
                        if (iVar7 == 0) {
                          if (pbVar6 == pbStack_84) {
                            return 0;
                          }
                          goto LAB_ram_48189ac0;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_ram_481896d8:
            FUN_ram_48189290(puVar15);
            goto LAB_ram_48189414;
          }
        }
      }
LAB_ram_4818940e:
      FUN_ram_48189290(puVar15);
    }
    else {
      FUN_ram_48189290(puVar15);
joined_r0x4818964e:
      iVar7 = iVar7 + -0x2180;
      if (iVar7 == 0) {
        return 0;
      }
    }
  }
  else {
    FUN_ram_48189290(puVar15);
    iVar7 = -0x2180;
  }
LAB_ram_48189414:
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[0x65] = 0;
  }
  if (param_1 == puVar15) {
    return iVar7;
  }
LAB_ram_48189420:
  thunk_FUN_ram_4ff209c6(puVar15);
  return iVar7;
code_r0x481899cc:
  iVar7 = -0x2562;
  pbStack_84 = pbVar5;
  goto LAB_ram_481896d8;
}


