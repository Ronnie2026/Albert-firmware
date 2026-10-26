/* Firmware entry: 0x480b1222 */

undefined4 FUN_ram_480b1222(void *param_1,undefined4 *param_2,code *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int *piVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  short sVar20;
  int *piVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  int *piVar26;
  byte bVar27;
  byte bVar28;
  void *pvVar29;
  byte *pbVar30;
  int iVar31;
  int iVar32;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (0x14 < *(byte *)(param_2 + 0x22)) {
    return 0;
  }
  if (*(short *)((int)param_1 + 0x22500) == 0) {
    iStack_74 = 0;
  }
  else {
    iStack_74 = 0;
    uVar10 = 0;
    pvVar29 = param_1;
    do {
      if ((((*(char *)((int)pvVar29 + 0x84) == '\0') &&
           (*(int *)((int)pvVar29 + 0x10) == param_2[0x146])) &&
          (*(int *)((int)pvVar29 + 0x14) == param_2[0x147])) &&
         ((iVar12 = FUN_ram_4ff4511a(param_2 + 0x140,pvVar29,0xc), iVar12 == 0 &&
          ((*(byte *)(param_2 + 0x22) - 1 & 0xff) < 0x14)))) {
        piVar21 = param_2 + 0x24;
        uVar16 = 0;
        do {
          iVar12 = *piVar21;
          piVar21 = piVar21 + 0xe;
          if (*(int *)((int)pvVar29 + 0x18) == iVar12) {
            uStack_60 = 0;
            uStack_5c = 0;
            uStack_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            iVar12 = (*param_3)(param_2 + uVar16 * 0xe + 0x24,&uStack_60);
            if ((iVar12 != 0) &&
               (iVar13 = FUN_ram_4ff4511a(&uStack_60,(int)pvVar29 + 0x28,0x20), iVar13 == 0)) {
              uVar22 = *param_2;
              *(undefined1 *)((int)pvVar29 + 0x84) = 1;
              *(undefined4 *)((int)pvVar29 + 0x80) = uVar22;
              iStack_74 = iVar12;
            }
            break;
          }
          uVar16 = uVar16 + 1;
        } while (*(byte *)(param_2 + 0x22) != uVar16);
      }
      uVar10 = uVar10 + 1;
      pvVar29 = (void *)((int)pvVar29 + 0x88);
    } while (uVar10 < *(ushort *)((int)param_1 + 0x22500));
    if (*(ushort *)((int)param_1 + 0x22500) != 0) {
      uVar16 = 0;
      do {
        while( true ) {
          pvVar29 = (void *)((int)param_1 + uVar16 * 0x88);
          if (*(char *)((int)pvVar29 + 0x84) != '\0') break;
          if ((((*(int *)((int)pvVar29 + 0x10) == param_2[0x146]) &&
               (*(int *)((int)pvVar29 + 0x14) == param_2[0x147])) &&
              (iVar12 = FUN_ram_4ff4511a(param_2 + 0x140,pvVar29,0xc), iVar12 == 0)) &&
             ((*(byte *)(param_2 + 0x22) - 1 & 0xff) < 0x14)) {
            uVar23 = 0;
            iVar12 = param_2[0x24];
            piVar21 = param_2 + 0x32;
            while (*(int *)((int)pvVar29 + 0x18) != iVar12) {
              uVar23 = uVar23 + 1;
              if (uVar23 == *(byte *)(param_2 + 0x22)) goto LAB_ram_480b135a;
              iVar12 = *piVar21;
              piVar21 = piVar21 + 0xe;
            }
            uStack_60 = 0;
            uStack_5c = 0;
            uStack_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_48 = 0;
            uStack_44 = 0;
            iVar12 = (*param_3)(param_2 + uVar23 * 0xe + 0x24,&uStack_60);
            if ((iVar12 != 0) &&
               (iVar12 = FUN_ram_4ff4511a(&uStack_60,uVar16 * 0x88 + 0x28 + (int)param_1,0x20),
               iVar12 == 0)) break;
          }
LAB_ram_480b135a:
          if (*(ushort *)((int)param_1 + 0x22500) <= uVar16) {
            iStack_74 = 1;
            goto LAB_ram_480b13b8;
          }
          uVar23 = *(ushort *)((int)param_1 + 0x22500) - 1;
          uVar24 = uVar23 & 0xffff;
          *(short *)((int)param_1 + 0x22500) = (short)(uVar23 * 0x10000 >> 0x10);
          uVar23 = uVar16;
          if (uVar24 != uVar16) {
            FUN_ram_4ff45158(pvVar29,(void *)(uVar24 * 0x88 + (int)param_1),0x85);
            uVar23 = (uint)*(ushort *)((int)param_1 + 0x22500);
          }
          memset((void *)(uVar23 * 0x88 + (int)param_1),0,0x85);
          iStack_74 = 1;
          if (*(ushort *)((int)param_1 + 0x22500) <= uVar16) goto LAB_ram_480b13b8;
        }
        uVar16 = uVar16 + 1 & 0xffff;
      } while (uVar16 < *(ushort *)((int)param_1 + 0x22500));
    }
  }
LAB_ram_480b13b8:
  pbVar30 = (byte *)(param_2 + 0x140);
  bVar27 = 0;
  pbVar25 = pbVar30;
  do {
    bVar19 = *pbVar25;
    pbVar25 = pbVar25 + 1;
    bVar27 = bVar27 | bVar19;
  } while (pbVar25 != (byte *)(param_2 + 0x143));
  if (bVar27 == 0) {
    if (0x400 < *(ushort *)((int)param_1 + 0x22500)) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x22502) == '\0') goto LAB_ram_480b154a;
LAB_ram_480b17a2:
    uVar16 = 0;
    do {
      iVar12 = (uVar16 + 0x880) * 0x40;
      pvVar29 = (void *)((int)param_1 + iVar12);
      if (((*(int *)((int)param_1 + uVar16 * 0x40 + 0x22010) == param_2[0x146]) &&
          (*(int *)((int)param_1 + uVar16 * 0x40 + 0x22014) == param_2[0x147])) &&
         ((iVar13 = FUN_ram_4ff4511a(pbVar30,pvVar29,0xc), iVar13 == 0 &&
          ((*(byte *)(param_2 + 0x22) - 1 & 0xff) < 0x14)))) {
        uVar23 = 0;
        iVar13 = param_2[0x24];
        piVar21 = param_2 + 0x32;
        while (*(int *)((int)param_1 + uVar16 * 0x40 + 0x22018) != iVar13) {
          uVar23 = uVar23 + 1;
          if (*(byte *)(param_2 + 0x22) == uVar23) goto LAB_ram_480b17b8;
          iVar13 = *piVar21;
          piVar21 = piVar21 + 0xe;
        }
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        iVar13 = (*param_3)(param_2 + uVar23 * 0xe + 0x24,&uStack_60);
        if ((iVar13 == 0) ||
           (iVar12 = FUN_ram_4ff4511a(&uStack_60,(int)param_1 + iVar12 + 0x1c,0x20), iVar12 != 0))
        goto LAB_ram_480b17b8;
        uVar16 = uVar16 + 1 & 0xff;
      }
      else {
LAB_ram_480b17b8:
        if (*(byte *)((int)param_1 + 0x22502) <= uVar16) {
          iStack_74 = 1;
          break;
        }
        uVar23 = *(byte *)((int)param_1 + 0x22502) - 1;
        uVar24 = uVar23 & 0xff;
        *(char *)((int)param_1 + 0x22502) = (char)uVar23;
        if (uVar16 != uVar24) {
          FUN_ram_4ff45158(pvVar29,(void *)((uVar24 + 0x880) * 0x40 + (int)param_1),0x3c);
          uVar24 = (uint)*(byte *)((int)param_1 + 0x22502);
        }
        memset((void *)((uVar24 + 0x880) * 0x40 + (int)param_1),0,0x3c);
        iStack_74 = 1;
      }
    } while (uVar16 < *(byte *)((int)param_1 + 0x22502));
    if (bVar27 == 0) goto LAB_ram_480b154a;
    bVar19 = *(byte *)(param_2 + 0x22);
  }
  else {
    if (*(char *)(param_2 + 0x22) == '\0') {
      uVar16 = (uint)*(ushort *)((int)param_1 + 0x22500);
      iStack_70 = 0;
      bVar19 = 0;
    }
    else {
      piVar21 = param_2 + 0x24;
      bVar28 = 0;
      iStack_70 = 0;
      do {
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        if (*piVar21 == 0) {
          return 0;
        }
        iVar12 = (*param_3)(piVar21,&uStack_60);
        if (iVar12 == 0) {
          return 0;
        }
        iVar13 = param_2[0x146];
        iVar12 = param_2[0x147];
        uVar16 = (uint)*(ushort *)((int)param_1 + 0x22500);
        iVar31 = *piVar21;
        if (uVar16 != 0) {
          uVar23 = 0;
          pvVar29 = param_1;
          do {
            if (((*(int *)((int)pvVar29 + 0x10) == iVar13) &&
                (*(int *)((int)pvVar29 + 0x14) == iVar12)) &&
               ((iVar31 == *(int *)((int)pvVar29 + 0x18) &&
                (iVar14 = FUN_ram_4ff4511a(pvVar29,pbVar30,0xc), iVar14 == 0))))
            goto LAB_ram_480b1460;
            uVar23 = uVar23 + 1;
            pvVar29 = (void *)((int)pvVar29 + 0x88);
          } while (uVar16 != uVar23);
        }
        if (*(byte *)((int)param_1 + 0x22502) != 0) {
          iVar14 = (int)param_1 + 0x2201c;
          iVar11 = (uint)*(byte *)((int)param_1 + 0x22502) * 0x40 + iVar14;
LAB_ram_480b1656:
          do {
            if (((*(int *)(iVar14 + -0xc) == iVar13) && (*(int *)(iVar14 + -8) == iVar12)) &&
               (iVar31 == *(int *)(iVar14 + -4))) {
              iVar32 = FUN_ram_4ff4511a(iVar14 + -0x1c,pbVar30,0xc);
              if (iVar32 == 0) {
                iVar32 = FUN_ram_4ff4511a(iVar14,&uStack_60);
                if (iVar32 == 0) goto LAB_ram_480b1460;
                iVar14 = iVar14 + 0x40;
                if (iVar11 == iVar14) break;
                goto LAB_ram_480b1656;
              }
            }
            iVar14 = iVar14 + 0x40;
          } while (iVar11 != iVar14);
        }
        iStack_70 = iStack_70 + 1;
LAB_ram_480b1460:
        bVar19 = *(byte *)(param_2 + 0x22);
        bVar28 = bVar28 + 1;
        piVar21 = piVar21 + 0xe;
      } while (bVar28 < bVar19);
    }
    if (0x400 < iStack_70 + uVar16) {
      return 0;
    }
    if (*(char *)((int)param_1 + 0x22502) != '\0') goto LAB_ram_480b17a2;
  }
  uStack_78 = 0;
  piVar21 = param_2 + 0x24;
  if (bVar19 != 0) {
LAB_ram_480b14a6:
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (*piVar21 == 0) {
      return 0;
    }
    iVar12 = (*param_3)(piVar21,&uStack_60);
    if (iVar12 == 0) {
      return 0;
    }
    iVar13 = param_2[0x146];
    iVar31 = param_2[0x147];
    iVar14 = *piVar21;
    if (*(byte *)((int)param_1 + 0x22502) != 0) {
      iVar11 = (int)param_1 + 0x2201c;
      iVar32 = (uint)*(byte *)((int)param_1 + 0x22502) * 0x40 + iVar11;
      do {
        if (((*(int *)(iVar11 + -0xc) == iVar13) && (*(int *)(iVar11 + -8) == iVar31)) &&
           (iVar14 == *(int *)(iVar11 + -4))) {
          iVar15 = FUN_ram_4ff4511a(iVar11 + -0x1c,pbVar30,0xc);
          if ((iVar15 == 0) && (iVar15 = FUN_ram_4ff4511a(iVar11,&uStack_60), iVar15 == 0))
          goto LAB_ram_480b1534;
        }
        iVar11 = iVar11 + 0x40;
      } while (iVar32 != iVar11);
    }
    uVar10 = *(ushort *)((int)param_1 + 0x22500);
    if (uVar10 != 0) {
      pvVar29 = param_1;
      uVar16 = 0;
LAB_ram_480b18dc:
      uVar23 = uVar16;
      if (((*(int *)((int)pvVar29 + 0x10) != iVar13) || (*(int *)((int)pvVar29 + 0x14) != iVar31))
         || ((iVar14 != *(int *)((int)pvVar29 + 0x18) ||
             (iVar11 = FUN_ram_4ff4511a(pvVar29,pbVar30,0xc), iVar11 != 0)))) goto LAB_ram_480b18d2;
      iVar13 = uVar23 * 0x88;
      iVar31 = FUN_ram_4ff4511a(iVar13 + 0x28 + (int)param_1,&uStack_60);
      if (iVar31 == 0) {
        if (((((((iVar14 != *(int *)((int)param_1 + iVar13 + 0x48)) ||
                (*(int *)((int)param_1 + iVar13 + 0x4c) != piVar21[1])) ||
               (*(int *)((int)param_1 + iVar13 + 0x50) != piVar21[2])) ||
              ((*(int *)((int)param_1 + iVar13 + 0x54) != piVar21[3] ||
               (*(int *)((int)param_1 + iVar13 + 0x58) != piVar21[4])))) ||
             (*(int *)((int)param_1 + iVar13 + 0x5c) != piVar21[5])) ||
            (((*(int *)((int)param_1 + uVar23 * 0x88 + 0x60) != piVar21[6] ||
              (*(int *)((int)param_1 + uVar23 * 0x88 + 100) != piVar21[7])) ||
             ((*(int *)((int)param_1 + uVar23 * 0x88 + 0x68) != piVar21[8] ||
              (((*(int *)((int)param_1 + uVar23 * 0x88 + 0x6c) != piVar21[9] ||
                (((*(uint *)((int)param_1 + uVar23 * 0x88 + 0x70) ^ param_2[uStack_78 * 0xe + 0x2e])
                 & 0xffffff) != 0)) ||
               (*(int *)((int)param_1 + uVar23 * 0x88 + 0x78) != piVar21[0xc])))))))) ||
           (*(int *)((int)param_1 + uVar23 * 0x88 + 0x7c) != piVar21[0xd])) {
          piVar17 = piVar21;
          piVar9 = (int *)((int)param_1 + uVar23 * 0x88 + 0x48);
          do {
            piVar26 = piVar9;
            piVar18 = piVar17;
            iVar13 = piVar18[1];
            iVar31 = piVar18[2];
            iVar14 = piVar18[3];
            *piVar26 = *piVar18;
            piVar26[1] = iVar13;
            piVar26[2] = iVar31;
            piVar26[3] = iVar14;
            piVar17 = piVar18 + 4;
            piVar9 = piVar26 + 4;
          } while (piVar17 != piVar21 + 0xc);
          iVar13 = piVar18[5];
          piVar26[4] = *piVar17;
          piVar26[5] = iVar13;
          iStack_74 = iVar12;
        }
        if (*(char *)((int)param_1 + uVar23 * 0x88 + 0x84) == '\0') goto LAB_ram_480b19b2;
      }
      else {
        uVar16 = *(uint *)((int)param_1 + 0x22508);
        iVar13 = *(int *)((int)param_1 + 0x2250c);
        if ((iVar13 - (uint)(uVar16 == 0) == -1) && (0xfffffffd < uVar16 - 1)) {
          return 0;
        }
        *(uint *)((int)param_1 + 0x22508) = uVar16 + 1;
        *(uint *)((int)param_1 + 0x2250c) = (uint)(uVar16 + 1 < uVar16) + iVar13;
        *(uint *)((int)param_1 + uVar23 * 0x88 + 0x20) = uVar16;
        *(int *)((int)param_1 + uVar23 * 0x88 + 0x24) = iVar13;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x28) = uStack_60;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x2c) = uStack_5c;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x34) = uStack_54;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x40) = uStack_48;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x44) = uStack_44;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x30) = uStack_58;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x38) = uStack_50;
        *(undefined4 *)((int)param_1 + uVar23 * 0x88 + 0x3c) = uStack_4c;
        piVar17 = piVar21;
        piVar9 = (int *)((int)param_1 + uVar23 * 0x88 + 0x48);
        do {
          piVar26 = piVar9;
          piVar18 = piVar17;
          iVar13 = piVar18[1];
          iVar31 = piVar18[2];
          iVar14 = piVar18[3];
          *piVar26 = *piVar18;
          piVar26[1] = iVar13;
          piVar26[2] = iVar31;
          piVar26[3] = iVar14;
          piVar17 = piVar18 + 4;
          piVar9 = piVar26 + 4;
        } while (piVar17 != piVar21 + 0xc);
        iVar13 = piVar18[5];
        piVar26[4] = *piVar17;
        piVar26[5] = iVar13;
LAB_ram_480b19b2:
        *(undefined1 *)((int)param_1 + uVar23 * 0x88 + 0x84) = 1;
        iStack_74 = iVar12;
      }
      goto LAB_ram_480b1534;
    }
    uVar16 = 0;
    sVar20 = 1;
    pvVar29 = param_1;
    goto LAB_ram_480b16c6;
  }
LAB_ram_480b154a:
  iVar12 = FUN_ram_4807a88c(param_1);
  if (iVar12 == 0) {
    return 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)iStack_74;
  }
  return 1;
LAB_ram_480b18d2:
  uVar16 = uVar23 + 1;
  pvVar29 = (void *)((int)pvVar29 + 0x88);
  if (uVar16 == uVar10) goto LAB_ram_480b16b0;
  goto LAB_ram_480b18dc;
LAB_ram_480b16b0:
  sVar20 = (short)uVar23 + 2;
  pvVar29 = (void *)(uVar16 * 0x88 + (int)param_1);
LAB_ram_480b16c6:
  *(short *)((int)param_1 + 0x22500) = sVar20;
  pbVar25 = memset(pvVar29,0,0x85);
  bVar27 = *(byte *)(param_2 + 0x142);
  bVar19 = *(byte *)((int)param_2 + 0x50a);
  bVar28 = *(byte *)((int)param_2 + 0x50b);
  bVar1 = *pbVar30;
  bVar2 = *(byte *)((int)param_2 + 0x501);
  bVar3 = *(byte *)((int)param_2 + 0x502);
  bVar4 = *(byte *)((int)param_2 + 0x503);
  bVar5 = *(byte *)(param_2 + 0x141);
  bVar6 = *(byte *)((int)param_2 + 0x505);
  bVar7 = *(byte *)((int)param_2 + 0x506);
  bVar8 = *(byte *)((int)param_2 + 0x507);
  pbVar25[9] = *(byte *)((int)param_2 + 0x509);
  pbVar25[10] = bVar19;
  *pbVar25 = bVar1;
  pbVar25[1] = bVar2;
  pbVar25[2] = bVar3;
  pbVar25[3] = bVar4;
  pbVar25[4] = bVar5;
  pbVar25[5] = bVar6;
  pbVar25[6] = bVar7;
  pbVar25[7] = bVar8;
  pbVar25[8] = bVar27;
  pbVar25[0xb] = bVar28;
  uVar22 = param_2[0x147];
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x10) = param_2[0x146];
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x14) = uVar22;
  uVar23 = *(uint *)((int)param_1 + 0x22508);
  iVar13 = *(int *)((int)param_1 + 0x2250c);
  *(int *)((int)param_1 + uVar16 * 0x88 + 0x18) = *piVar21;
  if ((iVar13 + 1U == (uint)(uVar23 == 0)) && (0xfffffffd < uVar23 - 1)) {
    return 0;
  }
  *(uint *)((int)param_1 + 0x2250c) = (uint)(uVar23 + 1 < uVar23) + iVar13;
  *(uint *)((int)param_1 + 0x22508) = uVar23 + 1;
  *(uint *)((int)param_1 + uVar16 * 0x88 + 0x20) = uVar23;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x28) = uStack_60;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x2c) = uStack_5c;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x40) = uStack_48;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x44) = uStack_44;
  *(int *)((int)param_1 + uVar16 * 0x88 + 0x24) = iVar13;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x30) = uStack_58;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x34) = uStack_54;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x38) = uStack_50;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x3c) = uStack_4c;
  piVar17 = piVar21;
  piVar9 = (int *)((int)param_1 + uVar16 * 0x88 + 0x48);
  do {
    piVar26 = piVar9;
    piVar18 = piVar17;
    iVar13 = piVar18[1];
    iVar31 = piVar18[2];
    iVar14 = piVar18[3];
    *piVar26 = *piVar18;
    piVar26[1] = iVar13;
    piVar26[2] = iVar31;
    piVar26[3] = iVar14;
    piVar17 = piVar18 + 4;
    piVar9 = piVar26 + 4;
  } while (piVar17 != piVar21 + 0xc);
  iVar13 = piVar18[5];
  piVar26[4] = *piVar17;
  piVar26[5] = iVar13;
  *(undefined4 *)((int)param_1 + uVar16 * 0x88 + 0x80) = *param_2;
  *(undefined1 *)((int)param_1 + uVar16 * 0x88 + 0x84) = 1;
  iStack_74 = iVar12;
LAB_ram_480b1534:
  piVar21 = piVar21 + 0xe;
  uStack_78 = uStack_78 + 1;
  if ((uint)*(byte *)(param_2 + 0x22) <= (uStack_78 & 0xff)) goto LAB_ram_480b154a;
  goto LAB_ram_480b14a6;
}


