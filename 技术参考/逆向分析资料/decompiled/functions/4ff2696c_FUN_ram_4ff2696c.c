/* Firmware entry: 0x4ff2696c */

/* WARNING: Type propagation algorithm not settling */

bool FUN_ram_4ff2696c(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  char cVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  int *piVar21;
  byte bVar22;
  uint *puVar23;
  uint *puVar24;
  int *piVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  uint uStack_f4;
  int iStack_dc;
  uint local_d8 [2];
  uint local_d0;
  ushort uStack_cc;
  uint uStack_c8;
  uint *puStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint local_ac;
  undefined1 auStack_a8 [4];
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint uStack_4c;
  uint uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar10 = FUN_ram_4ff21a0a();
  if (param_3 == (int *)0x0) {
    return false;
  }
  uVar11 = FUN_ram_4ff2b006((char)param_3[5],uVar10);
  puVar24 = &local_d0;
  puVar23 = local_d8;
  do {
    *(undefined1 *)puVar23 = 0;
    puVar23 = (uint *)((int)puVar23 + 1);
  } while (puVar24 != puVar23);
  do {
    *(undefined1 *)puVar24 = 0;
    puVar24 = (uint *)((int)puVar24 + 1);
  } while (&uStack_b0 != puVar24);
  uStack_b4 = 8;
  puStack_b8 = local_d8;
  iVar12 = FUN_ram_4ff2dc84(param_1);
  uVar30 = local_d0;
  if (iVar12 != 0) {
    FUN_ram_4ff3ec14(param_3 + 0x21d,0xffffffff);
    param_3[0xc1f] = iVar12;
    FUN_ram_4ff3ee10(param_3 + 0x21d);
    FUN_ram_4ff2b226((char)param_3[5],uVar10,uVar11,0);
    return false;
  }
  puVar24 = &local_ac;
  puVar23 = puVar24;
  do {
    *(undefined1 *)puVar23 = 0;
    uVar20 = uStack_a0;
    puVar23 = (uint *)((int)puVar23 + 1);
  } while (&uStack_88 != puVar23);
  uVar9 = (undefined1)param_3[5];
  local_ac = local_d0;
  auStack_a8[0] = (byte)uStack_cc;
  uStack_a0._3_1_ = SUB41(uVar20,3);
  uStack_a0._0_3_ = CONCAT12(1,CONCAT11(uVar9,(char)uStack_a0));
  uStack_94._0_3_ = CONCAT12(1,(undefined2)uStack_94);
  uStack_9c = uVar10;
  if ((((uStack_c8 & 7) != 0) || (0x7ff < local_d0)) || (8 < (byte)uStack_cc)) {
    FUN_ram_4ff2b13a(uVar9,local_d0,uVar10,0);
    uVar26 = 0;
    iVar12 = 1;
    bVar5 = false;
    uStack_f4 = 0;
    uVar30 = 0;
    goto LAB_ram_4ff26a22;
  }
  if ((byte)uStack_cc != 0) {
    FUN_ram_4ff45158(auStack_a8 + 1,local_d8);
    uVar9 = uStack_a0._1_1_;
  }
  FUN_ram_4ff2b13a(uVar9,uVar30,uVar10,1);
  if (*param_3 == 0) {
    if ((char)param_3[5] == '\x02') {
LAB_ram_4ff2722c:
      FUN_ram_4ff3ec14(param_3 + 0x21d,0xffffffff);
      FUN_ram_4ff26908(param_3,uVar10);
      FUN_ram_4ff3ee10(param_3 + 0x21d);
      if (*param_3 != 0) {
        fence();
        uVar30 = (uint)(*(char *)(*param_3 + 0x18d90) != '\0');
        goto LAB_ram_4ff27052;
      }
    }
LAB_ram_4ff27050:
    uVar30 = 0;
LAB_ram_4ff27052:
    iVar12 = FUN_ram_4ff22e9e(&local_ac,uVar30);
    uVar26 = uStack_a0 >> 8 & 0xff;
    uVar27 = local_ac;
    if (iVar12 == 4) {
      if (uVar26 == 1) goto LAB_ram_4ff26c36;
      if (uVar30 == 0) {
        if (uVar26 != 2) goto LAB_ram_4ff27404;
LAB_ram_4ff278a6:
        if (uVar27 != 0x3c2) {
          uVar26 = 1;
          uVar30 = 0;
          iVar12 = 4;
          bVar5 = false;
          uStack_f4 = 0;
          goto LAB_ram_4ff26a22;
        }
        iVar12 = 4;
        uVar30 = 0;
        iVar31 = iVar12;
        uVar27 = uVar30;
        if (auStack_a8[0] != '\b') goto LAB_ram_4ff26c42;
        if (((uint)auStack_a8 >> 8 & 3) == 1) {
          bVar5 = true;
          iVar12 = 4;
          uVar30 = 0;
        }
        else {
          bVar5 = false;
        }
LAB_ram_4ff26c44:
        uStack_f4 = 0;
        goto LAB_ram_4ff26c46;
      }
      if (uVar26 == 2) goto LAB_ram_4ff27836;
LAB_ram_4ff27742:
      uVar30 = 1;
      iVar12 = 4;
LAB_ram_4ff27408:
      uStack_f4 = 0;
      if (uVar26 != 4) {
LAB_ram_4ff27374:
        uVar26 = 1;
        bVar5 = false;
        goto LAB_ram_4ff26a22;
      }
LAB_ram_4ff27390:
      if (local_ac == 0x370) {
        uVar26 = 1;
        if (auStack_a8[0] != '\b') goto LAB_ram_4ff27374;
        bVar7 = true;
        bVar3 = true;
        bVar5 = false;
        bVar29 = false;
        bVar4 = false;
        uVar27 = 0;
        bVar6 = false;
      }
      else {
        if (local_ac != 0x39b) goto LAB_ram_4ff27374;
        uVar26 = 1;
        bVar5 = false;
        bVar3 = auStack_a8[0] == '\b';
        bVar7 = false;
        bVar4 = false;
        uVar27 = 0;
        bVar6 = false;
        bVar29 = bVar3;
      }
    }
    else {
      if (uVar26 == 2) {
LAB_ram_4ff274a4:
        if (uVar27 == 0x3c2) {
          if ((auStack_a8[0] == '\b') && (((uint)auStack_a8 >> 8 & 3) == 1)) {
            bVar5 = true;
            if (iVar12 != 2) {
              uStack_f4 = 0;
              bVar5 = true;
              goto LAB_ram_4ff26c46;
            }
          }
          else {
            bVar5 = false;
            if (iVar12 != 2) {
              bVar5 = false;
              goto LAB_ram_4ff26c44;
            }
          }
        }
        else {
          bVar5 = false;
          if (iVar12 != 2) {
            uVar26 = 1;
            uStack_f4 = 0;
            goto LAB_ram_4ff26a22;
          }
        }
        uStack_f4 = (uint)(uVar27 == 0x334 || uVar27 == 0x3a1);
        iVar12 = 2;
        uVar26 = 1;
      }
      else {
LAB_ram_4ff2706c:
        if (iVar12 == 2) {
          if (uVar26 == 1) {
            if (local_ac == 0x334) {
              bVar5 = false;
              uStack_f4 = 1;
            }
            else {
              uStack_f4 = (uint)(local_ac == 0x399 || local_ac == 0x3f8);
              if (local_ac != 0x3fd) goto LAB_ram_4ff27374;
              if (((uint)auStack_a8 & 0xff) == 8) {
                uVar27 = 0;
                goto LAB_ram_4ff273d8;
              }
              bVar5 = false;
              uVar26 = 1;
            }
            goto LAB_ram_4ff26a22;
          }
          bVar5 = uVar26 == 4;
          uVar26 = 1;
          if (bVar5) {
            uStack_f4 = (uint)(local_ac == 0x30a || local_ac == 0x286);
            goto LAB_ram_4ff27390;
          }
        }
        else {
          if (uVar26 != 1) goto LAB_ram_4ff27408;
          if (local_ac == 0x3fd) {
            iVar31 = iVar12;
            uVar27 = uVar30;
            if ((auStack_a8[0] != '\b') || (1 < (byte)((auStack_a8[1] & 7) - 1)))
            goto LAB_ram_4ff26c42;
            uStack_f4 = 0;
            goto LAB_ram_4ff273f2;
          }
        }
        bVar5 = false;
        uStack_f4 = 0;
      }
LAB_ram_4ff26a22:
      bVar7 = false;
      bVar4 = false;
      bVar6 = false;
      bVar3 = false;
      uVar27 = 0;
      bVar29 = false;
    }
  }
  else {
    fence();
    if (*(char *)(*param_3 + 0x18d88) == '\0') {
      if ((char)param_3[5] == '\x02') goto LAB_ram_4ff2722c;
      if (*param_3 == 0) goto LAB_ram_4ff27050;
      fence();
      uVar30 = (uint)(*(char *)(*param_3 + 0x18d90) != '\0');
      goto LAB_ram_4ff27052;
    }
    if ((char)param_3[5] == '\x02') {
      FUN_ram_4ff3ec14(param_3 + 0x21d,0xffffffff);
      uStack_f4 = FUN_ram_4ff26908(param_3,uVar10);
      FUN_ram_4ff3ee10(param_3 + 0x21d);
      if (*param_3 == 0) {
        uVar30 = 0;
      }
      else {
        fence();
        uVar30 = (uint)(*(char *)(*param_3 + 0x18d90) != '\0');
      }
    }
    else if (*param_3 == 0) {
      uVar30 = 0;
      uStack_f4 = 0;
    }
    else {
      fence();
      uStack_f4 = 0;
      uVar30 = (uint)(*(char *)(*param_3 + 0x18d90) != '\0');
    }
    uVar27 = local_ac;
    uVar26 = uStack_a0 >> 8 & 0xff;
    if (uVar26 == 2) {
      if (((local_ac != 0x3c2) || (auStack_a8[0] != '\b')) || (((uint)auStack_a8 >> 8 & 3) != 1)) {
        iVar12 = FUN_ram_4ff22e9e(&local_ac,uVar30);
        if (iVar12 == 4) goto LAB_ram_4ff27832;
        goto LAB_ram_4ff274a4;
      }
      iVar12 = 3;
      bVar5 = true;
      if (uStack_f4 != 0) {
LAB_ram_4ff27832:
        if (uVar30 == 0) goto LAB_ram_4ff278a6;
LAB_ram_4ff27836:
        if (uVar27 == 0x3fd) {
          if (auStack_a8[0] != '\b') goto LAB_ram_4ff27846;
          if (((uint)auStack_a8 & 0x700) == 0) {
            bVar4 = true;
            uVar30 = 1;
            iVar12 = 4;
            uStack_f4 = 0;
            uVar27 = 0;
            goto LAB_ram_4ff276f4;
          }
          iVar31 = 4;
          uVar27 = 1;
        }
        else {
          if (uVar27 != 0x3c2) {
LAB_ram_4ff27846:
            uVar26 = 1;
            iVar12 = 4;
            bVar5 = false;
            uStack_f4 = 0;
            uVar30 = uVar26;
            goto LAB_ram_4ff26a22;
          }
          iVar31 = 4;
          iVar12 = 4;
          uVar27 = 1;
          uVar30 = 1;
          if ((auStack_a8[0] == '\b') &&
             (iVar31 = iVar12, uVar27 = uVar30, ((uint)auStack_a8 >> 8 & 3) == 1)) {
            bVar5 = true;
            uStack_f4 = 0;
            uVar26 = 1;
            goto LAB_ram_4ff26a22;
          }
        }
LAB_ram_4ff26c42:
        bVar5 = false;
        iVar12 = iVar31;
        uVar30 = uVar27;
        goto LAB_ram_4ff26c44;
      }
LAB_ram_4ff26c46:
      uVar26 = 1;
      goto LAB_ram_4ff26a22;
    }
    iVar12 = FUN_ram_4ff22e9e(&local_ac,uVar30);
    if (iVar12 != 4) goto LAB_ram_4ff2706c;
    if (uVar26 != 1) {
      if (uVar30 != 0) goto LAB_ram_4ff27742;
LAB_ram_4ff27404:
      uVar30 = 0;
      iVar12 = 4;
      goto LAB_ram_4ff27408;
    }
LAB_ram_4ff26c36:
    if ((local_ac != 0x3fd) || (((uint)auStack_a8 & 0xff) != 8)) {
      iVar31 = 4;
      uVar27 = uVar30;
      goto LAB_ram_4ff26c42;
    }
    iVar12 = 4;
    uStack_f4 = 0;
    uVar27 = (uint)(((uint)auStack_a8 & 0x700) == 0);
LAB_ram_4ff273d8:
    if ((byte)((auStack_a8[1] & 7) - 1) < 2) {
      if (uVar27 == 0) {
        uVar26 = 1;
LAB_ram_4ff273f2:
        bVar5 = false;
        bVar7 = false;
        bVar4 = false;
        bVar6 = false;
        bVar3 = false;
        uVar27 = uVar26;
        bVar29 = false;
        goto LAB_ram_4ff26a2e;
      }
LAB_ram_4ff276e6:
      bVar4 = (auStack_a8[1] & 7) == 0;
    }
    else {
      bVar5 = false;
      if (uVar27 == 0) goto LAB_ram_4ff26c46;
      bVar4 = false;
      uVar27 = 0;
      if (local_ac == 0x3fd) goto LAB_ram_4ff276e6;
    }
LAB_ram_4ff276f4:
    uVar26 = 1;
    bVar6 = true;
    bVar5 = false;
    bVar7 = false;
    bVar3 = false;
    bVar29 = false;
  }
LAB_ram_4ff26a2e:
  piVar25 = param_3 + 0x21d;
  iStack_dc = 0;
  FUN_ram_4ff3ec14(piVar25,0xffffffff);
  param_3[0xbae] = uVar10;
  param_3[0xbad] = param_3[0xbad] + 1;
  param_3[0xc26] = local_ac;
  if (uVar26 == 0) {
LAB_ram_4ff26c64:
    if (((bVar6) || (uVar27 != 0)) && (uVar19 = (uint)auStack_a8 >> 8 & 7, uVar19 < 3)) {
LAB_ram_4ff26aa0:
      uVar30 = 0;
      goto LAB_ram_4ff26aa2;
    }
LAB_ram_4ff26c78:
    uVar19 = 0;
    uVar30 = 0;
    bVar13 = false;
    iVar31 = 0;
    iVar28 = 0;
    bVar8 = false;
    if (bVar5) goto LAB_ram_4ff26ad0;
LAB_ram_4ff26c82:
    uVar19 = 0;
    uVar33 = 0;
  }
  else {
    cVar15 = uStack_a0._1_1_;
    if (uStack_a0._1_1_ == '\x01') {
      if (local_ac == 0x399) {
        if (*param_3 == 0) {
          if (*(char *)((int)param_3 + 0x882) == '\0') goto LAB_ram_4ff27696;
        }
        else {
          fence();
          *(undefined1 *)(*param_3 + 0x18d89) = 0;
          *(uint *)(*param_3 + 0x18d8c) = uVar10;
          bVar13 = false;
          if ((auStack_a8[0] == '\b') && ((auStack_a8[1] & 0xf) == 6)) {
            cVar16 = -100;
            do {
              pcVar1 = (char *)((int)puVar24 + 5);
              puVar24 = (uint *)((int)puVar24 + 1);
              cVar16 = cVar16 + *pcVar1;
            } while ((uint *)(auStack_a8 + 3) != puVar24);
            bVar13 = (char)uStack_a0 == cVar16;
          }
          fence();
          *(bool *)(*param_3 + 0x18d89) = bVar13;
          if (*(char *)((int)param_3 + 0x882) == '\0') {
LAB_ram_4ff27696:
            if ((auStack_a8[0] == '\0') || (*param_3 == 0)) goto LAB_ram_4ff26c64;
            FUN_ram_4ff230ce(*param_3 + 0x18d84,(auStack_a8[1] & 0xf) - 3 < 4);
            cVar15 = uStack_a0._1_1_;
          }
          if (cVar15 != '\x01') goto LAB_ram_4ff26a6e;
        }
      }
      if (local_ac == 0x3fd) {
        iVar31 = -1;
        if (*(char *)((int)param_3 + 0x8c1) != '\0') {
          iVar31 = uVar10 - param_3[0x22e];
        }
        param_3[0x231] = iVar31;
        param_3[0x22e] = uVar10;
        *(undefined1 *)((int)param_3 + 0x8c1) = 1;
      }
      goto LAB_ram_4ff26c64;
    }
LAB_ram_4ff26a6e:
    if ((((uVar30 == 0) || (cVar15 != '\x02')) || (local_ac != 0x3fd)) || (auStack_a8[0] != '\b'))
    goto LAB_ram_4ff26c64;
    uVar19 = (uint)auStack_a8 >> 8 & 7;
    if (((uint)auStack_a8 & 0x700) == 0) {
      if ((!bVar6) && (uVar27 == 0)) goto LAB_ram_4ff26c78;
      goto LAB_ram_4ff26aa0;
    }
    if (2 < uVar19) goto LAB_ram_4ff26c78;
LAB_ram_4ff26aa2:
    uStack_8c = param_3[uVar19 + 0x163] + 1;
    if (uStack_8c == 0) {
      param_3[uVar19 + 0x163] = 1;
      param_3[uVar19 + 0x16a] = uVar10;
      *(undefined1 *)((int)param_3 + uVar19 + 0x5b4) = 0;
      uStack_8c = 1;
      if (bVar6) goto LAB_ram_4ff26ac6;
LAB_ram_4ff26eb0:
      bVar13 = false;
      iVar28 = 0;
    }
    else {
      param_3[uVar19 + 0x163] = uStack_8c;
      param_3[uVar19 + 0x16a] = uVar10;
      *(undefined1 *)((int)param_3 + uVar19 + 0x5b4) = 0;
      if (!bVar6) goto LAB_ram_4ff26eb0;
LAB_ram_4ff26ac6:
      iVar28 = param_3[0x15a];
      bVar13 = bVar6;
    }
    iVar31 = iVar28;
    uVar19 = uVar30;
    bVar8 = bVar13;
    if (!bVar5) goto LAB_ram_4ff26c82;
LAB_ram_4ff26ad0:
    bVar13 = bVar8;
    uVar33 = param_3[0x166] + 1;
    iVar28 = iVar31;
    uVar30 = uVar19;
    if (uVar33 == 0) {
      uVar33 = 1;
      param_3[0x166] = 1;
      uVar19 = param_3[0xb9f];
    }
    else {
      param_3[0x166] = uVar33;
      uVar19 = param_3[0xb9f];
    }
  }
  if (bVar4) {
    param_3[0x22f] = uVar10;
    *(undefined1 *)(param_3 + 0x230) = 1;
  }
  if (uVar26 == 0) {
    param_3[0xc15] = param_3[0xc15] + 1;
    param_3[0xc2b] = local_d0;
    if ((uStack_c8 & 2) != 0) {
      param_3[0xc16] = param_3[0xc16] + 1;
    }
    if ((uStack_c8 & 1) != 0) {
      param_3[0xc17] = param_3[0xc17] + 1;
    }
    if ((8 < uStack_cc) || ((uStack_c8 & 4) != 0)) {
      param_3[0xc18] = param_3[0xc18] + 1;
    }
    if (*(byte *)((int)param_3 + 0x2de2) < 8) {
      bVar2 = *(byte *)(param_3 + 0xb78);
      param_3[(uint)bVar2 * 4 + 0xb58] = param_3[0xb9e];
      param_3[(uint)bVar2 * 4 + 0xb59] = local_d0;
      iVar12 = FUN_ram_4ff3c5de();
      param_3[(uint)bVar2 * 4 + 0xb5a] = iVar12;
      *(byte *)(param_3 + (uint)bVar2 * 4 + 0xb5b) = (byte)uStack_c8 >> 1 & 1;
      *(byte *)((int)param_3 + (uint)bVar2 * 0x10 + 0x2d6d) = (byte)uStack_c8 & 1;
      bVar22 = 1;
      if (uStack_cc < 9) {
        bVar22 = (byte)uStack_c8 >> 2 & 1;
      }
      *(byte *)((int)param_3 + (uint)bVar2 * 0x10 + 0x2d6e) = bVar22;
      *(byte *)(param_3 + 0xb78) = (char)param_3[0xb78] + 1U & 7;
      *(char *)((int)param_3 + 0x2de2) = *(char *)((int)param_3 + 0x2de2) + '\x01';
      FUN_ram_4ff3ee10(piVar25);
    }
    else {
      param_3[0xc30] = param_3[0xc30] + 1;
      FUN_ram_4ff3ee10(piVar25);
    }
joined_r0x4ff26e8e:
    uVar30 = uStack_a0;
    if (!bVar13) goto LAB_ram_4ff26b88;
LAB_ram_4ff26b60:
    uVar30 = uStack_a0;
    if (iVar28 == 0) goto LAB_ram_4ff26b88;
    bVar5 = false;
    iVar12 = 0;
LAB_ram_4ff26b68:
    FUN_ram_4ff2b1b0(2,uStack_a0._1_1_,uVar10);
    FUN_ram_4ff3e1d8(iVar28,0,&iStack_dc);
joined_r0x4ff27f92:
    uVar30 = uStack_a0;
    if (!bVar5) goto LAB_ram_4ff26b88;
  }
  else {
    param_3[local_ac + 0x2b4] = param_3[local_ac + 0x2b4] + 1;
    if ((((*param_3 == 0) || (fence(), *(char *)(*param_3 + 0x18c78) == '\0')) ||
        ((1 < (byte)(uStack_a0._1_1_ - 1) && (uStack_a0._1_1_ != 4)))) ||
       (iVar31 = *param_3, (uStack_a0._1_1_ & *(byte *)(iVar31 + 0x18d7c)) == 0)) {
LAB_ram_4ff26dda:
      if ((char)param_3[0xab4] == '\0') goto LAB_ram_4ff26e44;
      uVar17 = local_ac >> 5;
      uVar14 = local_ac & 0x1f;
      if (local_ac < 0x800) goto LAB_ram_4ff26df4;
LAB_ram_4ff26e06:
      iVar31 = *param_3;
LAB_ram_4ff26e0a:
      param_3[0xc14] = param_3[0xc14] + 1;
      if (iVar31 != 0) {
        iVar12 = *(int *)(iVar31 + 0x18d80);
        if ((iVar12 == 0) || (iVar31 = FUN_ram_4ff3c5de(), iVar12 - iVar31 < 0)) {
          FUN_ram_4ff3ee10(piVar25);
        }
        else if (*(byte *)((int)param_3 + 0x2e76) < 0xc) {
          bVar2 = *(byte *)(param_3 + 0xb9d);
          iVar12 = param_3[0xb9e];
          param_3[(uint)bVar2 * 3 + 0xb7a] = local_ac;
          param_3[(uint)bVar2 * 3 + 0xb79] = iVar12;
          iVar12 = FUN_ram_4ff3c5de();
          param_3[(uint)bVar2 * 3 + 0xb7b] = iVar12;
          *(char *)((int)param_3 + 0x2e76) = *(char *)((int)param_3 + 0x2e76) + '\x01';
          *(char *)(param_3 + 0xb9d) = (char)((*(byte *)(param_3 + 0xb9d) + 1) % 0xc);
          FUN_ram_4ff3ee10(piVar25);
        }
        else {
          param_3[0xc2f] = param_3[0xc2f] + 1;
          FUN_ram_4ff3ee10(piVar25);
        }
        goto joined_r0x4ff26e8e;
      }
      FUN_ram_4ff3ee10(piVar25);
      uVar30 = uStack_a0;
      if (!bVar13) goto LAB_ram_4ff26b88;
      bVar5 = false;
      iVar12 = 0;
      if (iVar28 == 0) goto LAB_ram_4ff26b88;
      goto LAB_ram_4ff26b68;
    }
    if (local_ac < 0x800) {
      uVar17 = local_ac >> 5;
      uVar14 = local_ac & 0x1f;
      if ((1 << uVar14 & *(uint *)(iVar31 + uVar17 * 4 + 0x18c7c)) == 0) {
        cVar15 = (char)param_3[0xab4];
      }
      else {
        if (param_3[0x142] != 0) {
          uStack_64 = uStack_9c;
          uStack_60 = uStack_8c;
          uStack_58 = CONCAT31(CONCAT12((undefined1)uStack_a4,auStack_a8._2_2_),auStack_a8[1]);
          uStack_5c = CONCAT13(uStack_a0._1_1_ | uStack_a0._2_1_ << 7,
                               CONCAT12(auStack_a8[0],(short)local_ac));
          uStack_54 = CONCAT13((char)uStack_a0,(int3)(uStack_a4 >> 8));
          iVar31 = FUN_ram_4ff3b2ac(param_3[0x142],&uStack_64,&iStack_dc,0);
          if (iVar31 != 1) {
            param_3[0xbba] = param_3[0xbba] + 1;
          }
          goto LAB_ram_4ff26dda;
        }
        cVar15 = (char)param_3[0xab4];
        param_3[0xbba] = param_3[0xbba] + 1;
      }
      if (cVar15 != '\0') {
LAB_ram_4ff26df4:
        if (((uint)param_3[uVar17 + 0x274] >> uVar14 & 1) == 0) goto LAB_ram_4ff26e06;
      }
    }
    else if ((char)param_3[0xab4] != '\0') goto LAB_ram_4ff26e0a;
LAB_ram_4ff26e44:
    if (*(char *)((int)param_3 + 0x882) != '\0') {
      param_3[0xc05] = param_3[0xc05] + 1;
      param_3[0xc06] = param_3[0xc06] + 1;
      param_3[0xc1f] = 0x103;
      if (bVar4) {
        param_3[0xbbe] = param_3[0xbbe] + 1;
      }
      else if (bVar6) {
        param_3[0xbf1] = param_3[0xbf1] + 1;
      }
      else if (bVar5) {
        if (iVar12 == 3) {
LAB_ram_4ff278f8:
          param_3[0xbf4] = param_3[0xbf4] + 1;
        }
        else {
LAB_ram_4ff271b8:
          param_3[0xc00] = param_3[0xc00] + 1;
        }
      }
      else {
        if (iVar12 == 3) goto LAB_ram_4ff278f8;
        if (iVar12 == 2) goto LAB_ram_4ff271b8;
      }
      uVar20 = FUN_ram_4ff21a0a();
      cVar15 = '\x04';
      uVar19 = 0;
LAB_ram_4ff26e82:
      FUN_ram_4ff262c4(&local_ac,uVar20,0,uVar19,cVar15,3,iVar12);
      FUN_ram_4ff3ee10(piVar25);
      goto joined_r0x4ff26e8e;
    }
    iVar31 = param_3[0xc];
    if (bVar4) {
      iVar32 = param_3[0x24];
      if (uVar27 == 0) {
        if (bVar3) goto LAB_ram_4ff2753e;
        if (uVar30 != 0) goto LAB_ram_4ff26ee4;
        if (bVar5) goto LAB_ram_4ff2713a;
        if (uStack_f4 != 0) goto LAB_ram_4ff272cc;
        if (iVar32 == 0) {
          param_3[0xc05] = param_3[0xc05] + 1;
          param_3[0xc06] = param_3[0xc06] + 1;
          param_3[0xc1f] = 0x101;
          param_3[0xbbe] = param_3[0xbbe] + 1;
          uVar19 = 0;
          goto LAB_ram_4ff27b80;
        }
LAB_ram_4ff27aa2:
        if (iVar31 == iVar32) {
LAB_ram_4ff27aa6:
          uStack_64 = uStack_9c;
          uStack_54 = CONCAT13((char)uStack_a0,(int3)(uStack_a4 >> 8));
          uStack_60 = uStack_8c;
          uStack_5c = CONCAT13(uStack_a0._2_1_ << 7 | uStack_a0._1_1_,
                               CONCAT12(auStack_a8[0],(short)local_ac));
          uStack_58 = CONCAT13((undefined1)uStack_a4,auStack_a8._1_3_);
          iVar18 = FUN_ram_4ff3b2ac(iVar31,&uStack_64,&iStack_dc,0);
          iVar32 = iVar31;
        }
        else {
          iVar18 = FUN_ram_4ff3b2ac(iVar32,&local_ac,&iStack_dc,0);
        }
        uVar19 = FUN_ram_4ff3ba62(iVar32);
        if (iVar18 == 1) goto LAB_ram_4ff26fb8;
        uVar26 = 0;
        iVar31 = iVar32;
        goto LAB_ram_4ff2715a;
      }
      if (bVar3) goto LAB_ram_4ff2753e;
LAB_ram_4ff26ee4:
      piVar21 = (int *)param_3[0x3c];
      if (piVar21 == (int *)0x0) {
        param_3[0xc05] = param_3[0xc05] + 1;
        param_3[0xc06] = param_3[0xc06] + 1;
        param_3[0xc1f] = 0x101;
        param_3[0xbbe] = param_3[0xbbe] + 1;
        uVar19 = 0;
        iVar31 = 0;
        goto LAB_ram_4ff2718e;
      }
LAB_ram_4ff26eec:
      iVar18 = *piVar21;
      iVar31 = iVar32;
      if (iVar18 == 0) {
        iVar32 = piVar21[1];
        if (iVar32 == 0) {
          uVar19 = 0;
        }
        else {
          bVar2 = *(byte *)(iVar32 + 0x138);
          uVar19 = (uint)bVar2;
          if (uVar19 != 0xff) {
            *(undefined1 *)(iVar32 + 0x138) = *(undefined1 *)(iVar32 + uVar19 + 0x120);
            puVar23 = (uint *)(uVar19 * 0x24 + iVar32);
            *puVar23 = local_ac;
            puVar23[1] = (uint)auStack_a8;
            puVar23[2] = uStack_a4;
            puVar23[3] = uStack_a0;
            puVar23[4] = uStack_9c;
            puVar23[5] = uStack_98;
            puVar23[6] = uStack_94;
            puVar23[7] = uStack_90;
            puVar23[8] = uStack_8c;
            *(undefined1 *)(iVar32 + uVar19 + 0x120) = 0xff;
            iVar31 = iVar32 + (auStack_a8[1] & 7);
            if (*(byte *)(iVar31 + 0x130) == 0xff) {
              *(byte *)(iVar31 + 0x128) = bVar2;
            }
            else {
              *(byte *)((uint)*(byte *)(iVar31 + 0x130) + iVar32 + 0x120) = bVar2;
            }
            *(byte *)(iVar31 + 0x130) = bVar2;
            *(byte *)(iVar32 + 0x139) = *(byte *)(iVar32 + 0x139) | (byte)(1 << (auStack_a8[1] & 7))
            ;
            *(char *)(iVar32 + 0x13a) = *(char *)(iVar32 + 0x13a) + '\x01';
            piVar21 = (int *)param_3[0x3c];
            if (piVar21 != (int *)0x0) {
              if (*piVar21 == 0) goto LAB_ram_4ff27c6a;
              uVar19 = (uint)*(byte *)(*piVar21 + 0x952);
              goto LAB_ram_4ff26fb8;
            }
            goto LAB_ram_4ff278bc;
          }
          uVar19 = (uint)*(byte *)(iVar32 + 0x13a);
        }
LAB_ram_4ff2715a:
        param_3[0xc05] = param_3[0xc05] + 1;
        param_3[0xc06] = param_3[0xc06] + 1;
        param_3[0xc1f] = 0x101;
        if (bVar4) {
          param_3[0xbbe] = param_3[0xbbe] + 1;
        }
        else {
          if (!bVar6) goto LAB_ram_4ff278d4;
          param_3[0xbf1] = param_3[0xbf1] + 1;
        }
        if (uVar26 != 0) goto LAB_ram_4ff278f2;
        if (!bVar5) goto LAB_ram_4ff27464;
        goto LAB_ram_4ff2718a;
      }
      bVar2 = *(byte *)(iVar18 + 0x950);
      uVar19 = (uint)bVar2;
      if (uVar19 == 0xff) {
        uVar19 = (uint)*(byte *)(iVar18 + 0x952);
        goto LAB_ram_4ff2715a;
      }
      *(undefined1 *)(iVar18 + 0x950) = *(undefined1 *)(iVar18 + uVar19 + 0x900);
      puVar23 = (uint *)(uVar19 * 0x24 + iVar18);
      puVar23[8] = uStack_8c;
      *puVar23 = local_ac;
      puVar23[1] = (uint)auStack_a8;
      puVar23[2] = uStack_a4;
      puVar23[3] = uStack_a0;
      puVar23[4] = uStack_9c;
      puVar23[5] = uStack_98;
      puVar23[6] = uStack_94;
      puVar23[7] = uStack_90;
      iVar31 = iVar18 + (auStack_a8[1] & 7);
      *(undefined1 *)(iVar18 + uVar19 + 0x900) = 0xff;
      if (*(byte *)(iVar31 + 0x948) == 0xff) {
        *(byte *)(iVar31 + 0x940) = bVar2;
      }
      else {
        *(byte *)((uint)*(byte *)(iVar31 + 0x948) + iVar18 + 0x900) = bVar2;
      }
      *(byte *)(iVar31 + 0x948) = bVar2;
      *(byte *)(iVar18 + 0x951) = *(byte *)(iVar18 + 0x951) | (byte)(1 << (auStack_a8[1] & 7));
      *(char *)(iVar18 + 0x952) = *(char *)(iVar18 + 0x952) + '\x01';
      piVar21 = (int *)param_3[0x3c];
      if (piVar21 == (int *)0x0) {
LAB_ram_4ff278bc:
        uVar19 = 0;
      }
      else if (*piVar21 == 0) {
LAB_ram_4ff27c6a:
        if (piVar21[1] == 0) goto LAB_ram_4ff278bc;
        uVar19 = (uint)*(byte *)(piVar21[1] + 0x13a);
      }
      else {
        uVar19 = (uint)*(byte *)(*piVar21 + 0x952);
      }
    }
    else {
      if ((uVar27 != 0) || (uVar30 != 0)) {
        if (bVar3) goto LAB_ram_4ff2753e;
        piVar21 = (int *)param_3[0x3c];
        iVar32 = 0;
        iVar31 = 0;
        if (piVar21 != (int *)0x0) goto LAB_ram_4ff26eec;
        param_3[0xc05] = param_3[0xc05] + 1;
        param_3[0xc06] = param_3[0xc06] + 1;
        param_3[0xc1f] = 0x101;
        uVar19 = 0;
        if (bVar6) {
          uVar19 = 0;
          param_3[0xbf1] = param_3[0xbf1] + 1;
          iVar31 = 0;
          goto LAB_ram_4ff2718e;
        }
LAB_ram_4ff278d4:
        if (!bVar5) {
          if (iVar12 == 3) {
            param_3[0xbf4] = param_3[0xbf4] + 1;
            if (uVar26 != 0) {
              iVar31 = param_3[0x3c];
              goto LAB_ram_4ff2718e;
            }
          }
          else if (iVar12 == 2) {
            param_3[0xc00] = param_3[0xc00] + 1;
            if (uVar26 != 0) {
              iVar31 = param_3[0x3c];
              goto LAB_ram_4ff2718e;
            }
          }
          else if (uVar26 != 0) goto LAB_ram_4ff278f2;
LAB_ram_4ff27464:
          if ((uStack_f4 == 0) && (iVar31 == 0)) {
LAB_ram_4ff27b80:
            uVar20 = FUN_ram_4ff21a0a();
            cVar15 = '\x05';
          }
          else {
            uVar20 = FUN_ram_4ff21a0a();
            cVar15 = '\x02';
          }
          goto LAB_ram_4ff26e82;
        }
        if (iVar12 == 4) {
          param_3[0xbf1] = param_3[0xbf1] + 1;
          param_3[0xbf4] = param_3[0xbf4] + 1;
          if (uVar26 == 0) goto LAB_ram_4ff2718a;
          iVar31 = param_3[0x3c];
        }
        else if (iVar12 == 3) {
          param_3[0xbf4] = param_3[0xbf4] + 1;
          if (uVar26 == 0) goto LAB_ram_4ff2718a;
          iVar31 = param_3[0x3c];
        }
        else {
          param_3[0xc00] = param_3[0xc00] + 1;
          if (uVar26 == 0) {
LAB_ram_4ff2718a:
            iVar31 = param_3[0x3d];
          }
          else {
LAB_ram_4ff278f2:
            iVar31 = param_3[0x3c];
          }
        }
LAB_ram_4ff2718e:
        uVar20 = FUN_ram_4ff21a0a();
        cVar15 = ((iVar31 != 0) - 1U & 3) + 2;
        goto LAB_ram_4ff26e82;
      }
      if (bVar5) {
        iVar32 = 0;
        if (!bVar3) {
LAB_ram_4ff2713a:
          iVar18 = param_3[0x3d];
          iVar31 = iVar32;
          if (iVar18 == 0) {
            uVar26 = 0;
            uVar19 = 0;
          }
          else {
            bVar2 = *(byte *)(iVar18 + 0x602);
            if (bVar2 < 0x20) {
              bVar22 = *(byte *)(iVar18 + 0x601);
              puVar23 = (uint *)((uint)bVar22 * 0x30 + iVar18);
              *puVar23 = local_ac;
              puVar23[1] = (uint)auStack_a8;
              puVar23[2] = uStack_a4;
              puVar23[3] = uStack_a0;
              puVar23[4] = uStack_9c;
              puVar23[5] = uStack_98;
              puVar23[6] = uStack_94;
              puVar23[7] = uStack_90;
              puVar23[8] = uStack_8c;
              puVar23[9] = uVar10;
              puVar23[10] = uVar33;
              puVar23[0xb] = uVar19;
              *(byte *)(iVar18 + 0x601) = bVar22 + 1 & 0x1f;
              *(byte *)(iVar18 + 0x602) = bVar2 + 1;
              if (param_3[0x3d] != 0) {
                uVar19 = (uint)*(byte *)(param_3[0x3d] + 0x602);
                goto LAB_ram_4ff26fb8;
              }
              goto LAB_ram_4ff278bc;
            }
            uVar19 = (uint)*(byte *)(iVar18 + 0x602);
            uVar26 = 0;
          }
          goto LAB_ram_4ff2715a;
        }
      }
      else if (!bVar3) {
        if (uStack_f4 != 0) {
          iVar32 = 0;
LAB_ram_4ff272cc:
          uVar19 = (uint)*(byte *)(param_3 + 0x122);
          if (uVar19 == 0) {
LAB_ram_4ff272fc:
            cVar15 = '\x01';
            param_3[uVar19 * 9 + 0x71] = uStack_a0;
            param_3[uVar19 * 9 + 0x72] = uStack_9c;
            param_3[uVar19 * 9 + 0x73] = uStack_98;
            param_3[uVar19 * 9 + 0x6e] = local_ac;
            param_3[uVar19 * 9 + 0x6f] = (int)auStack_a8;
            param_3[uVar19 * 9 + 0x76] = uStack_8c;
            param_3[uVar19 * 9 + 0x70] = uStack_a4;
            param_3[uVar19 * 9 + 0x74] = uStack_94;
            param_3[uVar19 * 9 + 0x75] = uStack_90;
            *(char *)(param_3 + 0x122) = (char)(uVar19 + 1);
            bVar29 = false;
            uVar19 = uVar19 + 1 & 0xff;
          }
          else {
            puVar23 = (uint *)(param_3 + 0x6e);
            uVar26 = 0;
            do {
              if ((((*(byte *)((int)puVar23 + 0xd) == uStack_a0._1_1_) && (*puVar23 == local_ac)) &&
                  (auStack_a8[0] == (byte)puVar23[1])) && (local_ac != 0x3c2)) {
                if (uStack_a0._1_1_ == 2) {
                  if (((local_ac != 0x213) && ((local_ac == 0x334 || (local_ac == 0x3a1)))) &&
                     ((*puVar23 != 0x3a1 ||
                      (((byte)puVar23[1] < 7 ||
                       (((*(byte *)((int)puVar23 + 0xb) ^ uStack_a4._3_1_) & 0xf) == 0))))))
                  goto LAB_ram_4ff27a3e;
                }
                else if (uStack_a0._1_1_ == 1) {
                  if (((local_ac == 0x334) || (local_ac == 0x399)) || (local_ac == 0x3f8))
                  goto LAB_ram_4ff27a3e;
                }
                else if ((uStack_a0._1_1_ == 4) && ((local_ac == 0x30a || (local_ac == 0x286)))) {
LAB_ram_4ff27a3e:
                  param_3[uVar26 * 9 + 0x6f] = (int)auStack_a8;
                  param_3[uVar26 * 9 + 0x6e] = local_ac;
                  param_3[uVar26 * 9 + 0x70] = uStack_a4;
                  param_3[uVar26 * 9 + 0x72] = uStack_9c;
                  param_3[uVar26 * 9 + 0x71] = uStack_a0;
                  param_3[uVar26 * 9 + 0x73] = uStack_98;
                  param_3[uVar26 * 9 + 0x75] = uStack_90;
                  bVar29 = true;
                  param_3[uVar26 * 9 + 0x74] = uStack_94;
                  param_3[uVar26 * 9 + 0x76] = uStack_8c;
                  cVar15 = '\x01';
                  goto LAB_ram_4ff27a82;
                }
              }
              uVar26 = uVar26 + 1;
              puVar23 = puVar23 + 9;
            } while (uVar26 != uVar19);
            bVar29 = false;
            cVar15 = '\0';
            if (uVar19 != 0x14) goto LAB_ram_4ff272fc;
          }
LAB_ram_4ff27a82:
          uStack_64._0_2_ = CONCAT11(bVar29,cVar15);
          if (bVar29) {
            param_3[0xc04] = param_3[0xc04] + 1;
          }
          if (cVar15 != '\0') goto LAB_ram_4ff26fb8;
          uVar26 = 0;
          iVar31 = iVar32;
          goto LAB_ram_4ff2715a;
        }
        if (iVar12 == 3) {
          iVar32 = param_3[0x3e];
LAB_ram_4ff27e22:
          if (iVar32 != 0) goto LAB_ram_4ff27aa2;
          param_3[0xc05] = param_3[0xc05] + 1;
          param_3[0xc06] = param_3[0xc06] + 1;
          param_3[0xc1f] = 0x101;
          if (!bVar6) {
            if (iVar12 == 3) {
              uVar19 = 0;
              param_3[0xbf4] = param_3[0xbf4] + 1;
            }
            else {
              uVar19 = 0;
              param_3[0xc00] = param_3[0xc00] + 1;
            }
            goto LAB_ram_4ff27b80;
          }
          param_3[0xbf1] = param_3[0xbf1] + 1;
        }
        else {
          if (iVar12 == 2) {
            iVar32 = param_3[0x56];
            goto LAB_ram_4ff27e22;
          }
          if (iVar31 != 0) goto LAB_ram_4ff27aa6;
          param_3[0xc05] = param_3[0xc05] + 1;
          param_3[0xc06] = param_3[0xc06] + 1;
          param_3[0xc1f] = 0x101;
          if (bVar6) {
            uVar19 = 0;
            param_3[0xbf1] = param_3[0xbf1] + 1;
            goto LAB_ram_4ff27b80;
          }
        }
        uVar19 = 0;
        goto LAB_ram_4ff27b80;
      }
LAB_ram_4ff2753e:
      cVar15 = *(char *)((int)param_3 + 0x505);
      if (bVar29) {
        iVar31 = param_3[0x13d] + 1;
        if (iVar31 == 0) {
          iVar31 = 1;
        }
        if ((char)param_3[0x141] != '\0') {
          param_3[0xc04] = param_3[0xc04] + 1;
          param_3[0x13f] = param_3[0x13f] + 1;
        }
        param_3[0x13d] = iVar31;
        param_3[300] = iVar31;
        param_3[0x12d] = param_3[0xb9f];
        uStack_88 = local_ac;
        param_3[0x123] = local_ac;
        uStack_84 = (uint)auStack_a8;
        param_3[0x124] = (int)auStack_a8;
        uStack_7c = uStack_a0;
        param_3[0x126] = uStack_a0;
        param_3[0x12e] = 0;
        param_3[0x12f] = 0;
        uStack_68 = uStack_8c;
        param_3[299] = uStack_8c;
        uStack_80 = uStack_a4;
        param_3[0x125] = uStack_a4;
        uStack_78 = uStack_9c;
        param_3[0x127] = uStack_9c;
        uStack_74 = uStack_98;
        param_3[0x128] = uStack_98;
        uStack_70 = uStack_94;
        param_3[0x129] = uStack_94;
        uStack_6c = uStack_90;
        param_3[0x12a] = uStack_90;
        cVar16 = '\x01';
        *(undefined1 *)(param_3 + 0x141) = 1;
      }
      else {
        if (cVar15 == '\0') {
          iVar31 = *param_3;
          if (iVar31 != 0) goto LAB_ram_4ff27780;
          iVar32 = param_3[0x13d];
          iVar31 = param_3[0x13e] + 1;
          if (iVar31 == 0) {
            iVar31 = 1;
          }
          param_3[0x13e] = iVar31;
          iVar18 = 0;
        }
        else {
          iVar31 = *param_3;
          param_3[0xbff] = param_3[0xbff] + 1;
          if (iVar31 == 0) {
            iVar32 = param_3[0x13d];
            iVar31 = param_3[0x13e] + 1;
            if (iVar31 == 0) {
              iVar31 = 1;
            }
            param_3[0x13e] = iVar31;
            iVar18 = 0;
          }
          else {
LAB_ram_4ff27780:
            iVar18 = *(int *)(iVar31 + 0x18d84);
            fence();
            iVar32 = param_3[0x13d];
            iVar31 = param_3[0x13e] + 1;
            if (iVar31 == 0) {
              iVar31 = 1;
            }
            param_3[0x13e] = iVar31;
            if (*(char *)((int)param_3 + 0x505) == '\0') goto LAB_ram_4ff277b0;
          }
          param_3[0x140] = param_3[0x140] + 1;
        }
LAB_ram_4ff277b0:
        uStack_60 = (uint)auStack_a8;
        param_3[0x139] = iVar31;
        uStack_54 = uStack_9c;
        uStack_64 = local_ac;
        uStack_5c = uStack_a4;
        uStack_58 = uStack_a0;
        param_3[0x13a] = param_3[0xb9f];
        param_3[0x13b] = iVar32;
        param_3[0x13c] = iVar18;
        uStack_4c = uStack_94;
        param_3[0x131] = (int)auStack_a8;
        uStack_44 = uStack_8c;
        param_3[0x134] = uStack_9c;
        cVar15 = '\x01';
        param_3[0x130] = local_ac;
        param_3[0x132] = uStack_a4;
        param_3[0x133] = uStack_a0;
        param_3[0x135] = uStack_98;
        param_3[0x136] = uStack_94;
        param_3[0x137] = uStack_90;
        param_3[0x138] = uStack_8c;
        *(undefined1 *)((int)param_3 + 0x505) = 1;
        cVar16 = (char)param_3[0x141];
      }
      uVar19 = (uint)(byte)(cVar15 + cVar16);
    }
LAB_ram_4ff26fb8:
    if (!bVar6) {
      if ((uVar27 == 0) && (uVar30 == 0)) {
        if (!bVar4) goto LAB_ram_4ff26fc8;
      }
      else {
        if ((auStack_a8[1] & 7) < 3) {
          *(undefined1 *)((int)param_3 + (auStack_a8[1] & 7) + 0x5b4) = 1;
        }
        if (!bVar4) goto LAB_ram_4ff274f2;
      }
LAB_ram_4ff2742c:
      param_3[0xbbf] = uVar19;
      if ((uint)param_3[0xbc0] < uVar19) {
        param_3[0xbc0] = uVar19;
      }
      iVar28 = param_3[0x15a];
      FUN_ram_4ff3ee10(piVar25);
      uVar30 = uStack_a0;
      if (uVar19 != 1) goto LAB_ram_4ff26b88;
      goto LAB_ram_4ff26b60;
    }
    if ((auStack_a8[1] & 7) < 3) {
      *(undefined1 *)((int)param_3 + (auStack_a8[1] & 7) + 0x5b4) = 1;
    }
    if (bVar4) goto LAB_ram_4ff2742c;
    if ((uVar27 != 0) || (uVar30 != 0)) {
LAB_ram_4ff274f2:
      param_3[0xbf2] = uVar19;
      if ((uint)param_3[0xbf3] < uVar19) {
        param_3[0xbf3] = uVar19;
      }
      goto LAB_ram_4ff27506;
    }
LAB_ram_4ff26fc8:
    if (bVar5) {
      if ((iVar12 - 3U & 0xff) < 2) {
        param_3[0xbf5] = uVar19;
        if ((uint)param_3[0xbf6] < uVar19) {
          param_3[0xbf6] = uVar19;
        }
      }
      else {
        param_3[0xc01] = uVar19;
        if ((uint)param_3[0xc02] < uVar19) {
          param_3[0xc02] = uVar19;
        }
      }
      iVar12 = param_3[0x15b];
      FUN_ram_4ff3ee10(piVar25);
      uVar30 = uStack_a0;
      if ((bVar13) && (iVar28 != 0)) {
        FUN_ram_4ff2b1b0(2,uStack_a0._1_1_,uVar10);
        FUN_ram_4ff3e1d8(iVar28,0,&iStack_dc);
        uVar30 = uStack_a0;
      }
      if ((uVar19 == 1) && (iVar12 != 0)) {
        uStack_a0._1_1_ = (byte)(uVar30 >> 8);
        uVar9 = uStack_a0._1_1_;
        uStack_a0 = uVar30;
        FUN_ram_4ff2b1b0(1,uVar9,uVar10);
        FUN_ram_4ff3e1d8(iVar12,0,&iStack_dc);
        uVar30 = uStack_a0;
      }
      goto LAB_ram_4ff26b88;
    }
    if (uStack_f4 == 0) {
      if (bVar3) {
        if (bVar7) {
          param_3[0xbf5] = (uint)*(byte *)((int)param_3 + 0x505);
          if ((uint)param_3[0xbf6] < (uint)*(byte *)((int)param_3 + 0x505)) {
            param_3[0xbf6] = 1;
          }
        }
        else {
          param_3[0xc01] = (uint)*(byte *)(param_3 + 0x141);
          if ((uint)param_3[0xc02] < (uint)*(byte *)(param_3 + 0x141)) {
            param_3[0xc02] = 1;
          }
        }
        goto LAB_ram_4ff27506;
      }
      if (iVar12 == 3) {
        param_3[0xbf5] = uVar19;
        if ((uint)param_3[0xbf6] < uVar19) {
          param_3[0xbf6] = uVar19;
        }
      }
      else if ((iVar12 == 2) && (param_3[0xc01] = uVar19, (uint)param_3[0xc02] < uVar19)) {
        param_3[0xc02] = uVar19;
      }
      iVar12 = param_3[0x15c];
      FUN_ram_4ff3ee10(piVar25);
      bVar5 = uVar19 == 1;
      if ((bVar13) && (iVar28 != 0)) goto LAB_ram_4ff26b68;
      goto joined_r0x4ff27f92;
    }
    param_3[0xc01] = uVar19;
    if ((uint)param_3[0xc02] < uVar19) {
      param_3[0xc02] = uVar19;
    }
LAB_ram_4ff27506:
    iVar12 = param_3[0x15c];
    FUN_ram_4ff3ee10(piVar25);
    if ((bVar13) && (bVar5 = true, iVar28 != 0)) goto LAB_ram_4ff26b68;
  }
  uVar30 = uStack_a0;
  if (iVar12 != 0) {
    FUN_ram_4ff2b1b0(1,uStack_a0._1_1_,uVar10);
    FUN_ram_4ff3e1d8(iVar12,0,&iStack_dc);
    uVar30 = uStack_a0;
  }
LAB_ram_4ff26b88:
  uStack_a0 = uVar30;
  uVar20 = 1;
  if (iStack_dc == 1) {
    uVar20 = 3;
  }
  FUN_ram_4ff2b226(uStack_a0._1_1_,uVar10,uVar11,uVar20);
  return iStack_dc == 1;
}


