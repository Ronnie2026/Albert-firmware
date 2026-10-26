/* Firmware entry: 0x48164fa6 */

int FUN_ram_48164fa6(uint param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uStack_6c;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff4ba18 == 0) {
    return 0x103;
  }
  if (1 < param_1) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  uVar12 = param_2[0xd];
  if ((uVar12 & 4) != 0) {
    (&DAT_ram_4ff4ba65)[param_1 * 0x48] = 1;
  }
  uVar17 = (uint)*(byte *)(param_2 + 0xc);
  iVar13 = param_1 * 4;
  uVar16 = (uint)(byte)(&DAT_ram_4823a7f0)[iVar13];
  iVar15 = param_2[10];
  iVar14 = param_2[0xb];
  uVar18 = uVar16;
  if ((uVar17 != 0) && (uVar18 = uVar17, uVar16 < uVar17)) {
    return 0x102;
  }
  iVar7 = *param_2;
  iVar9 = param_1 * 0x48;
  *(uint *)(&DAT_ram_4ff4ba30 + iVar9) = uVar18;
  *(int *)(&DAT_ram_4ff4ba34 + iVar9) = iVar15;
  *(int *)(&DAT_ram_4ff4ba38 + iVar9) = iVar14;
  if (iVar7 == 0) {
    iVar9 = param_2[1];
    if (iVar9 == 0) {
      iVar2 = param_2[2];
      if (iVar2 != 0) {
        if (param_1 == 0) {
          iVar5 = param_2[3];
          iVar19 = param_2[5];
joined_r0x4816576c:
          if (uVar18 == 0) goto LAB_ram_48165516;
          goto LAB_ram_4816556c;
        }
        goto LAB_ram_481652ce;
      }
      iVar5 = param_2[3];
      if ((iVar5 != 0) || (param_2[4] != 0)) {
        if (param_1 == 0) {
          iVar19 = param_2[5];
          goto joined_r0x4816576c;
        }
        goto LAB_ram_481652d0;
      }
      iVar19 = param_2[5];
      if (((iVar19 == 0) && (param_2[6] == 0)) &&
         ((param_2[7] == 0 && ((param_2[8] == 0 && (param_2[9] == 0)))))) {
        if (param_1 == 0) goto LAB_ram_481657e0;
        DAT_ram_4ff4baac = 0;
        goto LAB_ram_4816507a;
      }
      if (param_1 == 0) goto joined_r0x4816576c;
LAB_ram_481652d4:
      (&DAT_ram_4ff4ba3c)[param_1 * 0x12] = iVar7;
      (&DAT_ram_4ff4ba40)[param_1 * 0x12] = iVar9;
      (&DAT_ram_4ff4ba44)[param_1 * 0x12] = iVar2;
      (&DAT_ram_4ff4ba48)[param_1 * 0x12] = iVar5;
      DAT_ram_4ff4baac = 1;
      if (uVar18 < 4) {
LAB_ram_48165526:
        *(int *)(&DAT_ram_4ff4ba50 + param_1 * 0x48) = iVar19;
        uStack_6c = 1;
        goto joined_r0x4816553a;
      }
      iVar9 = param_2[4];
    }
    else {
      if (param_1 != 0) goto LAB_ram_481652cc;
      if (uVar18 == 0) {
        iVar2 = param_2[2];
        iVar5 = param_2[3];
        iVar19 = param_2[5];
        goto LAB_ram_48165516;
      }
LAB_ram_48165566:
      iVar5 = param_2[3];
      iVar19 = param_2[5];
LAB_ram_4816556c:
      if (uVar18 < 4) {
        iVar2 = param_2[2];
        iVar9 = param_2[1];
        goto LAB_ram_48165516;
      }
LAB_ram_48165572:
      iVar9 = param_2[4];
      if (((iVar5 == 0x28) && (iVar9 == 0x29)) && (iVar19 == 0x2a)) goto LAB_ram_481657e0;
      DAT_ram_4ff4ba40 = param_2[1];
      DAT_ram_4ff4ba44 = param_2[2];
      DAT_ram_4ff4ba64 = 1;
      DAT_ram_4ff4ba3c = iVar7;
      DAT_ram_4ff4ba48 = iVar5;
    }
    iVar7 = param_1 * 0x48;
    *(int *)(&DAT_ram_4ff4ba4c + iVar7) = iVar9;
    *(int *)(&DAT_ram_4ff4ba50 + iVar7) = iVar19;
    if (7 < uVar18) {
      iVar19 = param_2[7];
      iVar9 = param_2[8];
      iVar5 = param_2[9];
      *(int *)(&DAT_ram_4ff4ba54 + iVar7) = param_2[6];
      *(int *)(&DAT_ram_4ff4ba58 + iVar7) = iVar19;
      *(int *)(&DAT_ram_4ff4ba5c + iVar7) = iVar9;
      *(int *)(&DAT_ram_4ff4ba60 + iVar7) = iVar5;
    }
    if (((uVar12 & 1) == 0) || (uVar16 < uVar18)) {
      uStack_6c = 1;
    }
    else {
      FUN_ram_4812a082((&DAT_ram_4ff4ba40)[param_1 * 0x12]);
      FUN_ram_4812a082((&DAT_ram_4ff4ba44)[param_1 * 0x12]);
      uStack_6c = 1;
LAB_ram_4816573a:
      iVar7 = param_1 * 0x48;
      FUN_ram_4812a082((&DAT_ram_4ff4ba48)[param_1 * 0x12]);
      FUN_ram_4812a082(*(undefined4 *)(&DAT_ram_4ff4ba4c + iVar7));
      FUN_ram_4812a082(*(undefined4 *)(&DAT_ram_4ff4ba50 + iVar7));
      if (uVar18 == 8) {
        FUN_ram_4812a082(*(undefined4 *)(&DAT_ram_4ff4ba54 + iVar7));
        FUN_ram_4812a082(*(undefined4 *)(&DAT_ram_4ff4ba58 + iVar7));
        FUN_ram_4812a082(*(undefined4 *)(&DAT_ram_4ff4ba5c + iVar7));
        FUN_ram_4812a082(*(undefined4 *)(&DAT_ram_4ff4ba60 + iVar7));
      }
    }
  }
  else {
    if (param_1 != 0) {
      iVar9 = param_2[1];
LAB_ram_481652cc:
      iVar2 = param_2[2];
LAB_ram_481652ce:
      iVar5 = param_2[3];
LAB_ram_481652d0:
      iVar19 = param_2[5];
      goto LAB_ram_481652d4;
    }
    if (uVar18 == 0) {
      iVar9 = param_2[1];
      iVar2 = param_2[2];
      iVar5 = param_2[3];
      iVar19 = param_2[5];
LAB_ram_48165516:
      DAT_ram_4ff4ba64 = 1;
      DAT_ram_4ff4ba3c = iVar7;
      DAT_ram_4ff4ba40 = iVar9;
      DAT_ram_4ff4ba44 = iVar2;
      DAT_ram_4ff4ba48 = iVar5;
      goto LAB_ram_48165526;
    }
    if (((iVar7 != 0x2b) || (param_2[1] != 0x2c)) || (param_2[2] != 0x27)) goto LAB_ram_48165566;
    if (3 < uVar18) {
      iVar5 = param_2[3];
      iVar19 = param_2[5];
      goto LAB_ram_48165572;
    }
LAB_ram_481657e0:
    DAT_ram_4ff4ba64 = 0;
LAB_ram_4816507a:
    iVar7 = param_1 * 0x30;
    uVar23 = *(undefined4 *)(&DAT_ram_4823a79c + iVar7);
    uVar22 = *(undefined4 *)(&DAT_ram_4823a7a0 + iVar7);
    uVar21 = *(undefined4 *)(&DAT_ram_4823a7a4 + iVar7);
    uVar20 = *(undefined4 *)(&DAT_ram_4823a7a8 + iVar7);
    uVar11 = *(undefined4 *)(&DAT_ram_4823a7ac + iVar7);
    uVar3 = *(undefined4 *)(&DAT_ram_4823a7b0 + iVar7);
    uVar4 = *(undefined4 *)(&DAT_ram_4823a7b4 + iVar7);
    uVar8 = *(undefined4 *)(&DAT_ram_4823a7bc + iVar7);
    uVar6 = *(undefined4 *)(&DAT_ram_4823a7b8 + iVar7);
    iVar9 = param_1 * 0x48;
    (&DAT_ram_4ff4ba3c)[param_1 * 0x12] = *(undefined4 *)(&DAT_ram_4823a798 + iVar7);
    (&DAT_ram_4ff4ba40)[param_1 * 0x12] = uVar23;
    (&DAT_ram_4ff4ba44)[param_1 * 0x12] = uVar22;
    (&DAT_ram_4ff4ba48)[param_1 * 0x12] = uVar21;
    *(undefined4 *)(&DAT_ram_4ff4ba4c + iVar9) = uVar20;
    *(undefined4 *)(&DAT_ram_4ff4ba50 + iVar9) = uVar11;
    *(undefined4 *)(&DAT_ram_4ff4ba54 + iVar9) = uVar3;
    *(undefined4 *)(&DAT_ram_4ff4ba58 + iVar9) = uVar4;
    *(undefined4 *)(&DAT_ram_4ff4ba5c + iVar9) = uVar6;
    *(undefined4 *)(&DAT_ram_4ff4ba60 + iVar9) = uVar8;
    uStack_6c = 0;
joined_r0x4816553a:
    if ((uVar12 & 1) != 0) {
      if (uVar16 < uVar18) goto LAB_ram_48165330;
      FUN_ram_4812a082((&DAT_ram_4ff4ba40)[param_1 * 0x12]);
      FUN_ram_4812a082((&DAT_ram_4ff4ba44)[param_1 * 0x12]);
      if (3 < uVar18) goto LAB_ram_4816573a;
    }
    if (uVar18 == 0) {
      uVar17 = (&DAT_ram_4ff4ba3c)[param_1 * 0x12];
      goto LAB_ram_481650f2;
    }
  }
LAB_ram_48165330:
  uVar17 = (&DAT_ram_4ff4ba3c)[param_1 * 0x12];
  if (-1 < (int)uVar17) {
    if ((int)(uVar17 - 0x20) < 0) {
      uVar10 = 0xffffffffU >> (uVar17 & 0x1f) | 0xfffffe << (0x1f - uVar17 & 0x1f);
    }
    else {
      uVar10 = 0x7fffff >> (uVar17 - 0x20 & 0x1f);
    }
    if ((uVar10 & 1) != 0) {
      uVar10 = (&DAT_ram_4ff4ba40)[param_1 * 0x12];
      if (-1 < (int)uVar10) {
        if ((int)(uVar10 - 0x20) < 0) {
          uVar10 = 0xffffffffU >> (uVar10 & 0x1f) | 0xfffffe << (0x1f - uVar10 & 0x1f);
        }
        else {
          uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
        }
        if ((uVar10 & 1) != 0) {
          uVar10 = (&DAT_ram_4ff4ba44)[param_1 * 0x12];
          if (-1 < (int)uVar10) {
            if ((int)(uVar10 - 0x20) < 0) {
              uVar10 = 0xffffffffU >> (uVar10 & 0x1f) | 0xfffffe << (0x1f - uVar10 & 0x1f);
            }
            else {
              uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
            }
            if ((uVar10 & 1) != 0) {
              if (uVar18 < 4) {
LAB_ram_481650f2:
                iVar7 = param_1 * 0x30;
                iVar9 = param_1 * 0x48;
                FUN_ram_48163b52(uVar17 & 0xff,(&DAT_ram_4823a738)[iVar7],2,uStack_6c);
                FUN_ram_48163b52(*(undefined1 *)(&DAT_ram_4ff4ba40 + param_1 * 0x12),
                                 (&DAT_ram_4823a73c)[iVar7],3,uStack_6c);
                FUN_ram_48163b52(*(undefined1 *)(&DAT_ram_4ff4ba44 + param_1 * 0x12),
                                 (&DAT_ram_4823a740)[iVar7],3,uStack_6c);
                if (3 < uVar18) {
                  FUN_ram_48163b52(*(undefined1 *)(&DAT_ram_4ff4ba48 + param_1 * 0x12),
                                   (&DAT_ram_4823a744)[iVar7],3,uStack_6c);
                  FUN_ram_48163b52((&DAT_ram_4ff4ba4c)[iVar9],(&DAT_ram_4823a748)[iVar7],3,uStack_6c
                                  );
                  uVar17 = *(uint *)(&DAT_ram_4ff4ba50 + iVar9);
                  if ((&DAT_ram_4ff4ba65)[iVar9] == '\0') {
                    if (-1 < (int)uVar17) {
                      uStack_54 = 0;
                      uStack_50 = 0;
                      uStack_4c = 0;
                      uStack_48 = 0;
                      uStack_44 = 0;
                      if ((int)(uVar17 - 0x20) < 0) {
                        iStack_60 = 1 << (uVar17 & 0x1f);
                        iStack_5c = 0;
                      }
                      else {
                        iStack_5c = 1 << (uVar17 - 0x20 & 0x1f);
                        iStack_60 = 0;
                      }
                      uStack_58 = 2;
                      FUN_ram_4812ad88(&iStack_60);
                      FUN_ram_4812aa8c(*(undefined4 *)(&DAT_ram_4ff4ba50 + param_1 * 0x48),1);
                    }
                  }
                  else {
                    FUN_ram_48163b52(uVar17 & 0xff,(&DAT_ram_4823a74c)[iVar7],3,uStack_6c);
                  }
                  if (uVar18 == 8) {
                    iVar9 = param_1 * 0x48;
                    iVar7 = param_1 * 0x30;
                    FUN_ram_48163b52((&DAT_ram_4ff4ba54)[iVar9],(&DAT_ram_4823a750)[iVar7],3,
                                     uStack_6c);
                    FUN_ram_48163b52((&DAT_ram_4ff4ba58)[iVar9],(&DAT_ram_4823a754)[iVar7],3,
                                     uStack_6c);
                    FUN_ram_48163b52((&DAT_ram_4ff4ba5c)[iVar9],(&DAT_ram_4823a758)[iVar7],3,
                                     uStack_6c);
                    FUN_ram_48163b52((&DAT_ram_4ff4ba60)[iVar9],(&DAT_ram_4823a75c)[iVar7],3,
                                     uStack_6c);
                  }
                }
                gpio_matrix_in(0x3f,(&DAT_ram_4823a7f3)[iVar13],0);
                iVar7 = 0x3e;
                if (iVar15 != -1) {
                  gpio_pad_select_gpio(iVar15);
                  FUN_ram_4812aca0(iVar15,1);
                  iVar7 = iVar15;
                }
                gpio_matrix_in(iVar7,(&DAT_ram_4823a7f1)[iVar13],0);
                iVar15 = 0x3f;
                if (iVar14 != -1) {
                  gpio_pad_select_gpio(iVar14);
                  FUN_ram_4812aca0(iVar14,1);
                  iVar15 = iVar14;
                }
                gpio_matrix_in(iVar15,(&DAT_ram_4823a7f2)[iVar13],uVar12 >> 1 & 1 ^ 1);
                iVar14 = FUN_ram_48164ac4(param_1,400);
                iVar13 = DAT_ram_4ff4ba24;
                if (iVar14 == 0) {
                  if (uVar16 == 0) {
                    return 0x102;
                  }
                  uVar12 = (uint)(char)~(byte)(1 << (param_1 & 0x1f));
                  *(uint *)(DAT_ram_4ff4ba24 + 0x18) =
                       (*(uint *)(DAT_ram_4ff4ba24 + 0x18) >> 0x10 & 3 & uVar12) << 0x10 |
                       *(uint *)(DAT_ram_4ff4ba24 + 0x18) & 0xfffcffff;
                  *(uint *)(iVar13 + 0x18) =
                       *(uint *)(iVar13 + 0x18) & 0xfffffffc | uVar12 & *(uint *)(iVar13 + 0x18) & 3
                  ;
                  bVar1 = DAT_ram_4ff4babc;
                  *(uint *)(&DAT_ram_4ff4ba2c + param_1 * 0x48) = param_1;
                  if ((bVar1 < 2) && (param_1 != (int)DAT_ram_4ff4babd)) {
                    DAT_ram_4ff4babc = bVar1 + 1;
                  }
                  DAT_ram_4ff4babd = (char)param_1;
                  return 0;
                }
                uVar3 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"sdmmc_periph",
                                 "E (%lu) %s: setting probing freq and 1-bit bus failed\n",uVar3,
                                 "sdmmc_periph");
                uVar3 = FUN_ram_4ff44d14();
                FUN_ram_4ff44bf0(1,"sdmmc_periph",
                                 "E (%lu) %s: %s: sdmmc_host_set_card_clk returned 0x%x\n",uVar3,
                                 "sdmmc_periph","sdmmc_host_init_slot",iVar14);
                return iVar14;
              }
              uVar10 = (&DAT_ram_4ff4ba48)[param_1 * 0x12];
              if (-1 < (int)uVar10) {
                if ((int)(uVar10 - 0x20) < 0) {
                  uVar10 = 0xffffffffU >> (uVar10 & 0x1f) | 0xfffffe << (0x1f - uVar10 & 0x1f);
                }
                else {
                  uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                }
                if ((uVar10 & 1) != 0) {
                  uVar10 = *(uint *)(&DAT_ram_4ff4ba4c + param_1 * 0x48);
                  if (-1 < (int)uVar10) {
                    if ((int)(uVar10 - 0x20) < 0) {
                      uVar10 = 0xffffffffU >> (uVar10 & 0x1f) | 0xfffffe << (0x1f - uVar10 & 0x1f);
                    }
                    else {
                      uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                    }
                    if ((uVar10 & 1) != 0) {
                      uVar10 = *(uint *)(&DAT_ram_4ff4ba50 + param_1 * 0x48);
                      if (-1 < (int)uVar10) {
                        if ((int)(uVar10 - 0x20) < 0) {
                          uVar10 = 0xffffffffU >> (uVar10 & 0x1f) |
                                   0xfffffe << (0x1f - uVar10 & 0x1f);
                        }
                        else {
                          uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                        }
                        if ((uVar10 & 1) != 0) {
                          if (uVar18 != 8) goto LAB_ram_481650f2;
                          uVar10 = *(uint *)(&DAT_ram_4ff4ba54 + param_1 * 0x48);
                          if (-1 < (int)uVar10) {
                            if ((int)(uVar10 - 0x20) < 0) {
                              uVar10 = 0xffffffffU >> (uVar10 & 0x1f) |
                                       0xfffffe << (0x1f - uVar10 & 0x1f);
                            }
                            else {
                              uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                            }
                            if ((uVar10 & 1) != 0) {
                              uVar10 = *(uint *)(&DAT_ram_4ff4ba58 + param_1 * 0x48);
                              if (-1 < (int)uVar10) {
                                if ((int)(uVar10 - 0x20) < 0) {
                                  uVar10 = 0xffffffffU >> (uVar10 & 0x1f) |
                                           0xfffffe << (0x1f - uVar10 & 0x1f);
                                }
                                else {
                                  uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                                }
                                if ((uVar10 & 1) != 0) {
                                  uVar10 = *(uint *)(&DAT_ram_4ff4ba5c + param_1 * 0x48);
                                  if (-1 < (int)uVar10) {
                                    if ((int)(uVar10 - 0x20) < 0) {
                                      uVar10 = 0xffffffffU >> (uVar10 & 0x1f) |
                                               0xfffffe << (0x1f - uVar10 & 0x1f);
                                    }
                                    else {
                                      uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                                    }
                                    if ((uVar10 & 1) != 0) {
                                      uVar10 = *(uint *)(&DAT_ram_4ff4ba60 + param_1 * 0x48);
                                      if (-1 < (int)uVar10) {
                                        if ((int)(uVar10 - 0x20) < 0) {
                                          uVar10 = 0xffffffffU >> (uVar10 & 0x1f) |
                                                   0xfffffe << (0x1f - uVar10 & 0x1f);
                                        }
                                        else {
                                          uVar10 = 0x7fffff >> (uVar10 - 0x20 & 0x1f);
                                        }
                                        if ((uVar10 & 1) != 0) goto LAB_ram_481650f2;
                                      }
                                      uVar3 = FUN_ram_4ff44d14();
                                      FUN_ram_4ff44bf0(1,"sdmmc_periph",
                                                                                                              
                                                  "E (%lu) %s: %s: Invalid GPIO number %d, returned 0x%x\n"
                                                  ,uVar3,"sdmmc_periph","sdmmc_host_init_slot",
                                                  *(undefined4 *)
                                                   (&DAT_ram_4ff4ba60 + param_1 * 0x48),0x102);
                                      return 0x102;
                                    }
                                  }
                                  uVar3 = FUN_ram_4ff44d14();
                                  uVar4 = *(undefined4 *)(&DAT_ram_4ff4ba5c + param_1 * 0x48);
                                  goto LAB_ram_48165260;
                                }
                              }
                              uVar3 = FUN_ram_4ff44d14();
                              uVar4 = *(undefined4 *)(&DAT_ram_4ff4ba58 + param_1 * 0x48);
                              goto LAB_ram_48165260;
                            }
                          }
                          uVar3 = FUN_ram_4ff44d14();
                          uVar4 = *(undefined4 *)(&DAT_ram_4ff4ba54 + param_1 * 0x48);
                          goto LAB_ram_48165260;
                        }
                      }
                      uVar3 = FUN_ram_4ff44d14();
                      uVar4 = *(undefined4 *)(&DAT_ram_4ff4ba50 + param_1 * 0x48);
                      goto LAB_ram_48165260;
                    }
                  }
                  uVar3 = FUN_ram_4ff44d14();
                  uVar4 = *(undefined4 *)(&DAT_ram_4ff4ba4c + param_1 * 0x48);
                  goto LAB_ram_48165260;
                }
              }
              uVar3 = FUN_ram_4ff44d14();
              uVar4 = (&DAT_ram_4ff4ba48)[param_1 * 0x12];
              goto LAB_ram_48165260;
            }
          }
          uVar3 = FUN_ram_4ff44d14();
          uVar4 = (&DAT_ram_4ff4ba44)[param_1 * 0x12];
          goto LAB_ram_48165260;
        }
      }
      uVar3 = FUN_ram_4ff44d14();
      uVar4 = (&DAT_ram_4ff4ba40)[param_1 * 0x12];
      goto LAB_ram_48165260;
    }
  }
  uVar3 = FUN_ram_4ff44d14();
  uVar4 = (&DAT_ram_4ff4ba3c)[param_1 * 0x12];
LAB_ram_48165260:
  FUN_ram_4ff44bf0(1,"sdmmc_periph","E (%lu) %s: %s: Invalid GPIO number %d, returned 0x%x\n",uVar3,
                   "sdmmc_periph","sdmmc_host_init_slot",uVar4,0x102);
  return 0x102;
}


