/* Firmware entry: 0x48196408 */

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_ram_48196408(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined4 uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined4 uStack_154;
  uint uStack_138;
  byte *pbStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iStack_50 = 0;
  uVar36 = 0;
  for (pbStack_54 = param_2; bVar17 = *pbStack_54, pbVar10 = param_2, uVar35 = uVar36,
      bVar17 != 0x2b; pbStack_54 = pbStack_54 + 1) {
    if (0x2b < bVar17) {
      if (bVar17 == 0x2d) {
        uStack_154 = 1;
        goto LAB_ram_48196492;
      }
      uStack_154 = 0;
      goto LAB_ram_481964f2;
    }
    if (bVar17 < 0xe) {
      if (bVar17 < 9) {
        if (bVar17 != 0) goto LAB_ram_48196476;
        goto joined_r0x4819653c;
      }
    }
    else if (bVar17 != 0x20) goto LAB_ram_48196476;
  }
  uStack_154 = 0;
LAB_ram_48196492:
  bVar17 = pbStack_54[1];
  pbStack_54 = pbStack_54 + 1;
  if (bVar17 == 0) goto joined_r0x4819653c;
LAB_ram_481964f2:
  if (bVar17 == 0x30) {
    pbVar22 = pbStack_54 + 1;
    if ((pbStack_54[1] & 0xdf) == 0x58) {
      uVar23 = FUN_ram_4819d3a6(param_1,&pbStack_54,&DAT_ram_4823aef0,&iStack_4c,&iStack_50,
                                uStack_154,param_4);
      uVar23 = uVar23 & 0xf;
      pbVar10 = pbStack_54;
      uVar35 = 0;
      if ((uVar23 != 0) && (pbVar10 = pbVar22, uVar35 = 0, uVar23 != 6)) {
        if (iStack_50 != 0) {
          FUN_ram_4819e59e(&uStack_48,0x35);
          FUN_ram_4819db24(param_1,iStack_50);
        }
        uVar15 = 0;
        uVar19 = 0;
        switch(uVar23) {
        case 1:
        case 5:
          uVar15 = uStack_44 & 0xffefffff | (iStack_4c + 0x433) * 0x100000;
          uVar19 = uStack_48;
          break;
        case 2:
          uVar15 = uStack_44;
          uVar19 = uStack_48;
          break;
        case 3:
          uVar15 = 0x7ff00000;
          break;
        case 4:
          uVar15 = 0x7fffffff;
          uVar19 = 0xffffffff;
        }
        pbVar10 = pbStack_54;
        uVar35 = CONCAT44(uVar15,uVar19);
        if ((uVar15 >> 0x14 & 0x7ff) == 0) {
          puVar18 = (undefined4 *)FUN_ram_4819bf88();
          *puVar18 = 0x22;
          pbVar10 = pbStack_54;
          uVar35 = CONCAT44(uVar15,uVar19);
        }
      }
      goto joined_r0x4819653c;
    }
    do {
      pbStack_54 = pbVar22;
      pbVar22 = pbStack_54 + 1;
    } while (*pbStack_54 == 0x30);
    bVar14 = true;
    pbVar10 = pbStack_54;
    uVar35 = 0;
    if (*pbStack_54 == 0) goto joined_r0x4819653c;
  }
  else {
LAB_ram_48196476:
    bVar14 = false;
  }
  pbVar22 = pbStack_54;
  iVar27 = 0;
  iVar25 = 0;
  iVar26 = 0;
  while (uVar23 = (uint)*pbStack_54, (uVar23 - 0x30 & 0xff) < 10) {
    if (iVar26 < 9) {
      iVar25 = iVar25 * 10 + -0x30 + uVar23;
    }
    else {
      iVar27 = iVar27 * 10 + -0x30 + uVar23;
    }
    pbStack_54 = pbStack_54 + 1;
    iVar26 = iVar26 + 1;
  }
  iVar9 = FUN_ram_4ff45520(pbStack_54,&DAT_ram_481e304c,1);
  iVar28 = iVar26;
  if (iVar9 == 0) {
    pbVar10 = pbStack_54 + 1;
    uVar23 = (uint)pbStack_54[1];
    iVar30 = 0;
    pbStack_54 = pbVar10;
    if (iVar26 != 0) {
      iVar24 = iVar30;
      iVar9 = 0;
      goto LAB_ram_481966b8;
    }
    while (uVar23 == 0x30) {
      iVar30 = iVar30 + 1;
      uVar23 = (uint)pbStack_54[1];
      pbStack_54 = pbStack_54 + 1;
    }
    if (uVar23 - 0x31 < 9) {
      iVar28 = 0;
      iVar24 = 0;
      pbVar22 = pbStack_54;
      do {
        iVar13 = uVar23 - 0x30;
        iVar9 = iVar24 + 1;
        if (iVar13 != 0) {
          iVar30 = iVar30 + iVar24 + 1;
          iVar24 = iVar24 + iVar28;
          iVar12 = iVar28;
          while (iVar28 = iVar12 + 1, iVar12 != iVar24) {
            if (iVar12 < 9) {
              iVar25 = iVar25 * 10;
              iVar12 = iVar28;
            }
            else {
              iVar12 = iVar28;
              if (iVar28 < 0x11) {
                iVar27 = iVar27 * 10;
              }
            }
          }
          if (iVar12 < 9) {
            iVar25 = iVar13 + iVar25 * 10;
            iVar9 = 0;
          }
          else {
            iVar9 = 0;
            if (iVar12 < 0x10) {
              iVar27 = iVar13 + iVar27 * 10;
              iVar9 = 0;
            }
          }
        }
        uVar23 = (uint)pbStack_54[1];
        iVar24 = iVar9;
        iVar9 = iVar30;
        pbStack_54 = pbStack_54 + 1;
LAB_ram_481966b8:
        iVar30 = iVar9;
      } while (uVar23 - 0x30 < 10);
      bVar11 = true;
      iVar30 = iVar24;
      goto LAB_ram_48196634;
    }
    if ((uVar23 == 0x65) || (bVar11 = true, uVar23 == 0x45)) {
      iVar9 = 0;
      bVar11 = true;
LAB_ram_4819664a:
      pbVar10 = param_2;
      uVar35 = uVar36;
      if (!bVar14 && iVar30 == 0) goto joined_r0x4819653c;
      iVar28 = 0;
      goto LAB_ram_48196654;
    }
  }
  else {
    iVar9 = 0;
    bVar11 = false;
    iVar30 = 0;
LAB_ram_48196634:
    if ((uVar23 == 0x65) || (iVar24 = 0, uVar23 == 0x45)) {
      if (iVar28 == 0) goto LAB_ram_4819664a;
LAB_ram_48196654:
      param_2 = pbStack_54;
      uVar23 = (uint)pbStack_54[1];
      if (uVar23 == 0x2b) {
        bVar1 = false;
LAB_ram_48196764:
        uVar23 = (uint)pbStack_54[2];
        pbVar10 = pbStack_54 + 2;
      }
      else {
        bVar1 = false;
        pbVar10 = pbStack_54 + 1;
        if (uVar23 == 0x2d) {
          bVar1 = true;
          goto LAB_ram_48196764;
        }
      }
      pbStack_54 = pbVar10;
      if (uVar23 - 0x30 < 10) {
        while (uVar23 == 0x30) {
          uVar23 = (uint)pbStack_54[1];
          pbStack_54 = pbStack_54 + 1;
        }
        iVar24 = 0;
        pbVar10 = pbStack_54;
        if (uVar23 - 0x31 < 9) {
          while( true ) {
            iVar13 = uVar23 - 0x30;
            pbVar10 = pbVar10 + 1;
            uVar23 = (uint)*pbVar10;
            if (9 < (uVar23 - 0x30 & 0xff)) break;
            uVar23 = iVar13 * 10 + uVar23;
          }
          iVar24 = 19999;
          if (((int)pbVar10 - (int)pbStack_54 < 9) && (iVar24 = iVar13, 19999 < iVar13)) {
            iVar24 = 19999;
          }
          pbStack_54 = pbVar10;
          if (bVar1) {
            iVar24 = -iVar24;
          }
        }
      }
      else {
        iVar24 = 0;
        pbStack_54 = param_2;
      }
    }
    if (iVar28 != 0) {
      uVar23 = iVar24 - iVar9;
      if (iVar26 == 0) {
        iVar26 = iVar28;
      }
      iVar30 = iVar28;
      if (0x10 < iVar28) {
        iVar30 = 0x10;
      }
      uVar36 = __floatunsidf(iVar25);
      if (iVar28 < 10) {
LAB_ram_481968ee:
        uVar7 = (undefined4)(uVar36 >> 0x20);
        pbVar10 = pbStack_54;
        uVar35 = uVar36;
        if (uVar23 == 0) goto joined_r0x4819653c;
        if (0 < (int)uVar23) {
          if ((int)uVar23 < 0x17) {
            uVar37 = *(undefined8 *)(&DAT_ram_4823b6b0 + uVar23 * 8);
          }
          else {
            if (0x25 - iVar28 < (int)uVar23) goto LAB_ram_48196968;
            iVar26 = (0xf - iVar28) * 8;
            uVar37 = __muldf3(*(undefined4 *)(&DAT_ram_4823b6b0 + iVar26),
                              *(undefined4 *)(&DAT_ram_4823b6b4 + iVar26),(int)uVar36,uVar7);
            uVar36 = *(ulonglong *)(&DAT_ram_4823b6b0 + (uVar23 - (0xf - iVar28)) * 8);
          }
          uVar35 = __muldf3((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),(int)uVar36,
                            (int)(uVar36 >> 0x20));
          pbVar10 = pbStack_54;
          goto joined_r0x4819653c;
        }
        if (-0x17 < (int)uVar23) {
          iVar26 = (iVar9 - iVar24) * 8;
          uVar35 = __divdf3((int)uVar36,uVar7,*(undefined4 *)(&DAT_ram_4823b6b0 + iVar26),
                            *(undefined4 *)(&DAT_ram_4823b6b4 + iVar26));
          pbVar10 = pbStack_54;
          goto joined_r0x4819653c;
        }
      }
      else {
        iVar13 = (iVar30 + -9) * 8;
        uVar37 = __muldf3((int)uVar36,(int)(uVar36 >> 0x20),
                          *(undefined4 *)(&DAT_ram_4823b6b0 + iVar13),
                          *(undefined4 *)(&DAT_ram_4823b6b4 + iVar13));
        uVar38 = __floatunsidf(iVar27);
        uVar36 = __adddf3((int)uVar37,(int)((ulonglong)uVar37 >> 0x20),(int)uVar38,
                          (int)((ulonglong)uVar38 >> 0x20));
        if (iVar28 < 0x10) goto LAB_ram_481968ee;
      }
LAB_ram_48196968:
      uVar7 = (undefined4)(uVar36 >> 0x20);
      uVar15 = (iVar28 - iVar30) + uVar23;
      if ((int)uVar15 < 1) {
        if (uVar15 == 0) {
LAB_ram_48196a8a:
          iVar27 = 0;
LAB_ram_48196be8:
          iVar25 = FUN_ram_4819dc52(param_1,pbVar22,iVar26,iVar28,iVar25);
          uVar6 = DAT_ram_481f4d74;
          uVar5 = DAT_ram_481f4d70;
          uVar4 = DAT_ram_481f4d1c;
          uVar3 = DAT_ram_481f4d18;
          uVar2 = DAT_ram_481f4cc4;
          uVar7 = DAT_ram_481f4cc0;
          if (iVar25 != 0) {
            uVar19 = uVar23 & (int)~uVar23 >> 0x1f;
            uVar15 = (int)uVar23 >> 0x1f & iVar9 - iVar24;
            iVar9 = 0;
            iVar26 = 0;
LAB_ram_48196c52:
            uVar20 = (uint)(uVar36 >> 0x20);
            uVar8 = (uint)uVar36;
            iVar28 = FUN_ram_4819da72(param_1,*(undefined4 *)(iVar25 + 4));
            if (iVar28 == 0) goto LAB_ram_48196a96;
            FUN_ram_4ff45158(iVar28 + 0xc,iVar25 + 0xc,(*(int *)(iVar25 + 0x10) + 2) * 4);
            iStack_50 = FUN_ram_4819e432(param_1,uVar8,uVar20,&iStack_4c,&uStack_48);
            if (iStack_50 == 0) goto LAB_ram_48196a96;
            iVar26 = FUN_ram_4819ddc8(param_1,1);
            if (iVar26 == 0) {
LAB_ram_48196ca0:
              iVar26 = 0;
              goto LAB_ram_48196a96;
            }
            if (iStack_4c < 0) {
              uVar21 = uVar19 - iStack_4c;
              uVar33 = uVar15;
            }
            else {
              uVar21 = uVar19;
              uVar33 = iStack_4c + uVar15;
            }
            iVar30 = 0x36 - uStack_48;
            iVar24 = (iStack_4c - iVar27) + uStack_48 + -1;
            if (iVar24 < -0x3fe) {
              uVar16 = -iVar24 - 0x3fe;
              iVar30 = iVar30 - uVar16;
              uVar31 = 1;
              if ((int)uVar16 < 0x20) {
                uVar31 = 1 << (uVar16 & 0x1f);
                uStack_138 = 0;
              }
              else {
                uStack_138 = 1 << (-iVar24 - 0x41eU & 0x1f);
              }
            }
            else {
              uStack_138 = 0;
              uVar31 = 1;
            }
            uVar29 = uVar33 + iVar30;
            uVar16 = uVar21 + iVar30 + iVar27;
            uVar21 = uVar33;
            if ((int)uVar29 < (int)uVar33) {
              uVar21 = uVar29;
            }
            if ((int)uVar16 < (int)uVar21) {
              uVar21 = uVar16;
            }
            if (0 < (int)uVar21) {
              uVar29 = uVar29 - uVar21;
              uVar16 = uVar16 - uVar21;
              uVar33 = uVar33 - uVar21;
            }
            if (0 < (int)uVar15) {
              iVar26 = FUN_ram_4819df86(param_1,iVar26,uVar15);
              if (iVar26 == 0) goto LAB_ram_48196ca0;
              iVar30 = FUN_ram_4819de04(param_1,iVar26,iStack_50);
              if (iVar30 == 0) goto LAB_ram_48196a96;
              FUN_ram_4819db24(param_1,iStack_50);
              iStack_50 = iVar30;
            }
            if ((0 < (int)uVar29) &&
               (iStack_50 = FUN_ram_4819e070(param_1,iStack_50,uVar29), iStack_50 == 0))
            goto LAB_ram_48196a96;
            if (((0 < (int)uVar23) &&
                (iVar28 = FUN_ram_4819df86(param_1,iVar28,uVar19), iVar28 == 0)) ||
               ((0 < (int)uVar16 && (iVar28 = FUN_ram_4819e070(param_1,iVar28,uVar16), iVar28 == 0))
               )) goto LAB_ram_48196a94;
            if (((0 < (int)uVar33) &&
                (iVar26 = FUN_ram_4819e070(param_1,iVar26,uVar33), iVar26 == 0)) ||
               (iVar9 = FUN_ram_4819e1ae(param_1,iStack_50,iVar28), iVar9 == 0))
            goto LAB_ram_48196a96;
            iVar24 = *(int *)(iVar9 + 0xc);
            *(undefined4 *)(iVar9 + 0xc) = 0;
            iVar30 = FUN_ram_4819e178(iVar9,iVar26);
            if (iVar30 < 0) {
              if ((((iVar24 == 0 && uVar8 == 0) && ((uVar36 & 0xfffff00000000) == 0)) &&
                  (0x6b00000 < (uVar20 & 0x7ff00000))) &&
                 ((*(int *)(iVar9 + 0x14) != 0 || (1 < *(int *)(iVar9 + 0x10))))) {
                iVar9 = FUN_ram_4819e070(param_1,iVar9,1);
                iVar30 = FUN_ram_4819e178(iVar9,iVar26);
                if (iVar30 < 1) goto LAB_ram_48196ede;
LAB_ram_48196e00:
                uVar20 = uVar20 & 0x7ff00000;
                if ((iVar27 == 0) || (0x6b00000 < uVar20)) {
                  uVar36 = CONCAT44(uVar20 - 0x100000 | 0xfffff,0xffffffff);
                  goto LAB_ram_48196ede;
                }
                if (uVar20 < 0x3700001) goto LAB_ram_48196b26;
                goto LAB_ram_48196e1a;
              }
            }
            else {
              if (iVar30 != 0) {
                uVar37 = FUN_ram_4819e516(iVar9,iVar26);
                uVar34 = (undefined4)((ulonglong)uVar37 >> 0x20);
                uVar32 = (undefined4)uVar37;
                iVar30 = __ledf2(uVar32,uVar34,uVar3,uVar4);
                if (iVar30 < 1) {
                  if (iVar24 == 0) {
                    if (uVar8 == 0) {
                      if ((uVar36 & 0xfffff00000000) == 0) {
                        iVar30 = __ltdf2(uVar32,uVar34,DAT_ram_481f4d28,DAT_ram_481f4d2c);
                        if (iVar30 < 0) {
                          uVar37 = 0x3fe0000000000000;
                        }
                        else {
                          uVar37 = __muldf3(uVar32,uVar34,DAT_ram_481f4cc0,DAT_ram_481f4cc4);
                        }
                        uVar21 = (uint)((ulonglong)uVar37 >> 0x20) ^ 0x80000000;
                        goto LAB_ram_48196fe2;
                      }
                    }
                    else if (uVar36 == 1) goto LAB_ram_48196b26;
                    uVar21 = 0xbff00000;
                  }
                  else {
                    uVar21 = 0x3ff00000;
                  }
                  uVar37 = 0x3ff0000000000000;
                }
                else {
                  uVar37 = __muldf3(uVar32,uVar34,uVar7,uVar2);
                  uVar21 = (uint)((ulonglong)uVar37 >> 0x20);
                  if (iVar24 == 0) {
                    uVar21 = uVar21 ^ 0x80000000;
                  }
                }
LAB_ram_48196fe2:
                uVar32 = (undefined4)((ulonglong)uVar37 >> 0x20);
                uVar34 = (undefined4)uVar37;
                uVar35 = CONCAT44(uVar21,uVar34);
                uVar33 = uVar20 & 0x7ff00000;
                if (uVar33 == 0x7fe00000) {
                  uVar38 = FUN_ram_4819e326(uVar8,uVar20 + 0xfcb00000);
                  uVar38 = __muldf3((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),uVar34,uVar21);
                  uVar38 = __adddf3((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),uVar8,
                                    uVar20 + 0xfcb00000);
                  uVar20 = (uint)((ulonglong)uVar38 >> 0x20);
                  if ((uVar20 & 0x7ff00000) < 0x7ca00000) {
                    uVar36 = CONCAT44(uVar20 + 0x3500000,(int)uVar38);
                    goto LAB_ram_481970da;
                  }
                  if (uVar36 == 0x7fefffffffffffff) goto LAB_ram_48196a96;
                  uVar36 = 0x7fefffffffffffff;
                }
                else {
                  if ((iVar27 != 0) && (uVar33 < 0x6a00001)) {
                    iVar30 = __ledf2(uVar34,uVar32,uVar5,uVar6);
                    if (iVar30 < 1) {
                      iVar30 = __fixunsdfsi(uVar34,uVar32);
                      if (iVar30 == 0) {
                        iVar30 = 1;
                      }
                      uVar35 = __floatunsidf(iVar30);
                      uVar32 = (undefined4)(uVar35 >> 0x20);
                      if (iVar24 == 0) {
                        uVar35 = uVar35 ^ 0x8000000000000000;
                      }
                    }
                    uVar37 = CONCAT44(uVar32,(int)uVar35);
                    uVar21 = ((int)(uVar35 >> 0x20) + 0x6b00000) - uVar33;
                  }
                  uVar38 = FUN_ram_4819e326(uVar8,uVar20);
                  uVar38 = __muldf3((int)uVar37,uVar21,(int)uVar38,(int)((ulonglong)uVar38 >> 0x20))
                  ;
                  uVar36 = __adddf3((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),uVar8,uVar20);
LAB_ram_481970da:
                  uVar32 = (undefined4)((ulonglong)uVar37 >> 0x20);
                  if ((iVar27 == 0) && (uVar33 == ((uint)(uVar36 >> 0x20) & 0x7ff00000))) {
                    __fixdfdi((int)uVar37,uVar32);
                    uVar38 = __floatdidf();
                    uVar37 = __subdf3((int)uVar37,uVar32,(int)uVar38,
                                      (int)((ulonglong)uVar38 >> 0x20));
                    uVar34 = (undefined4)((ulonglong)uVar37 >> 0x20);
                    uVar32 = (undefined4)uVar37;
                    if (((uVar36 & 0xfffff00000000) == 0 && (int)uVar36 == 0) && iVar24 == 0) {
                      iVar30 = __ltdf2(uVar32,uVar34,DAT_ram_481f4db8,DAT_ram_481f4dbc);
                      if (iVar30 < 0) goto LAB_ram_48196aa8;
                    }
                    else {
                      iVar30 = __ltdf2(uVar32,uVar34,DAT_ram_481f4da8,DAT_ram_481f4dac);
                      if ((iVar30 < 0) ||
                         (iVar30 = __gtdf2(uVar32,uVar34,DAT_ram_481f4db0,DAT_ram_481f4db4),
                         0 < iVar30)) goto LAB_ram_48196aa8;
                    }
                  }
                }
                FUN_ram_4819db24(param_1,iStack_50);
                FUN_ram_4819db24(param_1,iVar28);
                FUN_ram_4819db24(param_1,iVar26);
                FUN_ram_4819db24(param_1,iVar9);
                goto LAB_ram_48196c52;
              }
              if (iVar24 == 0) {
                if ((uVar36 & 0xfffff00000000) == 0 && uVar8 == 0) goto LAB_ram_48196e00;
              }
              else if ((uVar20 & 0xfffff) == 0xfffff) {
                uVar23 = 0xffffffff;
                if ((iVar27 != 0) && ((uVar20 & 0x7ff00000) < 0x6a00001)) {
                  uVar23 = -1 << (0x6b - ((uVar20 & 0x7ff00000) >> 0x14) & 0x1f);
                }
                if (uVar8 == uVar23) {
                  if (uVar36 != 0x7fefffffffffffff) {
                    uVar36 = (ulonglong)((uVar20 & 0x7ff00000) + 0x100000) << 0x20;
                    goto LAB_ram_48196ede;
                  }
                  goto LAB_ram_48196a96;
                }
              }
              if (uStack_138 == 0) {
                uStack_138 = uVar31 & uVar8;
              }
              else {
                uStack_138 = uStack_138 & uVar20;
              }
              if (uStack_138 != 0) {
                if (iVar24 != 0) {
                  uVar37 = FUN_ram_481963aa(uVar8,uVar20,iVar27);
                  uVar36 = __adddf3(uVar8,uVar20,(int)uVar37,(int)((ulonglong)uVar37 >> 0x20));
                  goto LAB_ram_48196ede;
                }
                uVar37 = FUN_ram_481963aa(uVar8,uVar20,iVar27);
                uVar36 = __subdf3(uVar8,uVar20,(int)uVar37,(int)((ulonglong)uVar37 >> 0x20));
                iVar30 = __eqdf2((int)uVar36,(int)(uVar36 >> 0x20),0,0);
                if (iVar30 == 0) goto LAB_ram_48196b26;
              }
            }
LAB_ram_48196ede:
            if (iVar27 == 0) goto LAB_ram_48196aa8;
LAB_ram_48196e1a:
            uVar36 = __muldf3((int)uVar36,(int)(uVar36 >> 0x20),DAT_ram_481f4dc0,DAT_ram_481f4dc4);
            if (((uint)(uVar36 >> 0x34) & 0x7ff) == 0) {
              *param_1 = 0x22;
            }
            goto LAB_ram_48196aa8;
          }
          goto LAB_ram_48196a8e;
        }
        uVar19 = -uVar15 & 0xf;
        uVar15 = (int)-uVar15 >> 4;
        if ((uVar19 != 0) &&
           (iVar27 = uVar19 * 8,
           uVar36 = __divdf3((int)uVar36,uVar7,*(undefined4 *)(&DAT_ram_4823b6b0 + iVar27),
                             *(undefined4 *)(&DAT_ram_4823b6b4 + iVar27)), uVar15 == 0))
        goto LAB_ram_48196a8a;
        if ((int)uVar15 < 0x20) {
          iVar27 = 0;
          if ((uVar15 & 0x10) != 0) {
            iVar27 = 0x6a;
          }
          puVar18 = &DAT_ram_4823af08;
          bVar14 = false;
          uVar35 = uVar36;
          do {
            if ((uVar15 & 1) != 0) {
              uVar35 = __muldf3((int)uVar35,(int)(uVar35 >> 0x20),*puVar18,puVar18[1]);
              bVar14 = true;
            }
            uVar15 = (int)uVar15 >> 1;
            puVar18 = puVar18 + 2;
          } while (uVar15 != 0);
          if (bVar14) {
            uVar36 = uVar35;
          }
          uVar15 = (uint)(uVar36 >> 0x20);
          if (iVar27 != 0) {
            uVar19 = uVar15 >> 0x14 & 0x7ff;
            uVar20 = 0x6b - uVar19;
            if (0 < (int)uVar20) {
              if ((int)uVar20 < 0x20) {
                uVar36 = CONCAT44(uVar15,(uint)uVar36 & -1 << (uVar20 & 0x1f));
              }
              else if ((int)uVar20 < 0x35) {
                uVar36 = (ulonglong)(uVar15 & -1 << (0x4b - uVar19 & 0x1f)) << 0x20;
              }
              else {
                uVar36 = 0x370000000000000;
              }
            }
          }
          iVar30 = __eqdf2((int)uVar36,(int)(uVar36 >> 0x20),0,0);
          if (iVar30 == 0) goto LAB_ram_48196b1e;
          goto LAB_ram_48196be8;
        }
LAB_ram_48196b1e:
        iVar9 = 0;
        iVar26 = 0;
        iVar25 = 0;
        iVar28 = 0;
LAB_ram_48196b26:
        *param_1 = 0x22;
      }
      else {
        if (((uVar15 & 0xf) != 0) &&
           (iVar27 = (uVar15 & 0xf) * 8,
           uVar36 = __muldf3(*(undefined4 *)(&DAT_ram_4823b6b0 + iVar27),
                             *(undefined4 *)(&DAT_ram_4823b6b4 + iVar27),(int)uVar36,uVar7),
           (uVar15 & 0xfffffff0) == 0)) goto LAB_ram_48196a8a;
        if ((int)(uVar15 & 0xfffffff0) < 0x135) {
          puVar18 = &DAT_ram_4823b688;
          uVar15 = (int)uVar15 >> 4;
          bVar14 = false;
          iVar27 = 0;
          uVar35 = uVar36;
          while( true ) {
            if (uVar15 == 1) break;
            if ((uVar15 & 1) != 0) {
              uVar35 = __muldf3((int)uVar35,(int)(uVar35 >> 0x20),*puVar18,puVar18[1]);
              bVar14 = true;
            }
            iVar27 = iVar27 + 1;
            uVar15 = (int)uVar15 >> 1;
            puVar18 = puVar18 + 2;
          }
          if (bVar14) {
            uVar36 = uVar35;
          }
          uVar37 = __muldf3((&DAT_ram_4823b688)[iVar27 * 2],(&DAT_ram_4823b68c)[iVar27 * 2],
                            (int)uVar36,(int)(uVar36 >> 0x20) + -0x3500000);
          uVar15 = (uint)((ulonglong)uVar37 >> 0x20);
          uVar19 = uVar15 & 0x7ff00000;
          if (uVar19 < 0x7ca00001) {
            if (uVar19 < 0x7c900001) {
              uVar36 = CONCAT44(uVar15 + 0x3500000,(int)uVar37);
            }
            else {
              uVar36 = 0x7fefffffffffffff;
            }
            goto LAB_ram_48196a8a;
          }
        }
LAB_ram_48196a8e:
        iVar9 = 0;
        iVar26 = 0;
        iVar25 = 0;
LAB_ram_48196a94:
        iVar28 = 0;
LAB_ram_48196a96:
        *param_1 = 0x22;
      }
      uVar36 = 0;
      pbVar10 = pbStack_54;
      uVar35 = 0;
      if (iVar25 != 0) {
LAB_ram_48196aa8:
        FUN_ram_4819db24(param_1,iStack_50);
        FUN_ram_4819db24(param_1,iVar28);
        FUN_ram_4819db24(param_1,iVar26);
        FUN_ram_4819db24(param_1,iVar25);
        FUN_ram_4819db24(param_1,iVar9);
        pbVar10 = pbStack_54;
        uVar35 = uVar36;
      }
      goto joined_r0x4819653c;
    }
  }
  pbVar10 = pbStack_54;
  uVar35 = 0;
  if ((bVar14 || iVar30 != 0) || (pbVar10 = param_2, uVar35 = uVar36, bVar11))
  goto joined_r0x4819653c;
  if (uVar23 == 0x69) {
LAB_ram_48196876:
    iVar26 = FUN_ram_4819d890(&pbStack_54,"nf");
    if (iVar26 != 0) {
      pbStack_54 = pbStack_54 + -1;
      iVar26 = FUN_ram_4819d890(&pbStack_54,"inity");
      if (iVar26 == 0) {
        pbStack_54 = pbStack_54 + 1;
      }
      pbVar10 = pbStack_54;
      uVar35 = 0;
    }
  }
  else {
    if (uVar23 < 0x6a) {
      if (uVar23 == 0x49) goto LAB_ram_48196876;
      uVar15 = 0x4e;
    }
    else {
      uVar15 = 0x6e;
    }
    if ((uVar23 == uVar15) &&
       (iVar26 = FUN_ram_4819d890(&pbStack_54,&DAT_ram_481cfd2c), iVar26 != 0)) {
      if ((*pbStack_54 == 0x28) &&
         (iVar26 = FUN_ram_4819d8c0(&pbStack_54,&DAT_ram_4823aedc,&uStack_48), iVar26 == 5)) {
        pbVar10 = pbStack_54;
        uVar35 = (ulonglong)uStack_48;
      }
      else {
        uVar35 = FUN_ram_4819c09c(&DAT_ram_481df390);
        pbVar10 = pbStack_54;
      }
    }
  }
joined_r0x4819653c:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = pbVar10;
  }
  return uVar35;
}


