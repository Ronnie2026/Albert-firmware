/* Firmware entry: 0x480cdf26 */

undefined4
FUN_ram_480cdf26(void *param_1,int param_2,undefined4 *param_3,code *param_4,undefined1 *param_5)

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
  byte bVar10;
  int *piVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  byte bVar17;
  short sVar18;
  int *piVar19;
  int *piVar20;
  byte *pbVar21;
  int *piVar22;
  int *piVar23;
  uint uVar24;
  byte *pbVar25;
  ushort uVar26;
  byte bVar27;
  void *pvVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  int iStack_74;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (0x14 < *(byte *)(param_3 + 0x22)) {
    return 0;
  }
  pbVar25 = (byte *)(param_3 + 0x140);
  bVar17 = 0;
  pbVar21 = pbVar25;
  do {
    bVar27 = *pbVar21;
    pbVar21 = pbVar21 + 1;
    bVar17 = bVar17 | bVar27;
  } while (pbVar21 != (byte *)(param_3 + 0x143));
  if (bVar17 == 0) {
    return 1;
  }
  if (*(short *)((int)param_1 + 0x22500) == 0) {
    uVar29 = 0;
    uVar12 = 0;
    if (*(byte *)(param_3 + 0x22) == 0) goto LAB_ram_480ce20c;
LAB_ram_480cdfb0:
    piVar22 = param_3 + 0x24;
    bVar27 = 0;
    iStack_74 = 0;
    do {
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      if (*piVar22 == 0) {
        return 0;
      }
      iVar13 = (*param_4)(piVar22,&uStack_60);
      if (iVar13 == 0) {
        return 0;
      }
      uVar26 = *(ushort *)((int)param_1 + 0x22500);
      if (uVar26 != 0) {
        iVar31 = param_3[0x146];
        iVar32 = param_3[0x147];
        iVar13 = *piVar22;
        pvVar28 = param_1;
        do {
          if ((((*(int *)((int)pvVar28 + 0x10) == iVar31) &&
               (*(int *)((int)pvVar28 + 0x14) == iVar32)) &&
              (iVar13 == *(int *)((int)pvVar28 + 0x18))) &&
             (iVar14 = FUN_ram_4ff4511a(pvVar28,pbVar25,0xc), iVar14 == 0)) goto LAB_ram_480ce040;
          pvVar28 = (void *)((int)pvVar28 + 0x88);
        } while ((void *)((uint)uVar26 * 0x88 + (int)param_1) != pvVar28);
      }
      if (*(byte *)((int)param_1 + 0x22502) != 0) {
        iVar13 = param_3[0x146];
        iVar14 = (int)param_1 + 0x2201c;
        iVar32 = param_3[0x147];
        iVar31 = *piVar22;
        iVar30 = iVar14 + (uint)*(byte *)((int)param_1 + 0x22502) * 0x40;
        do {
          while (((*(int *)(iVar14 + -0xc) != iVar13 || (*(int *)(iVar14 + -8) != iVar32)) ||
                 (iVar31 != *(int *)(iVar14 + -4)))) {
LAB_ram_480ce260:
            iVar14 = iVar14 + 0x40;
            if (iVar30 == iVar14) goto LAB_ram_480ce2b8;
          }
          iVar33 = FUN_ram_4ff4511a(iVar14 + -0x1c,pbVar25,0xc);
          if (iVar33 != 0) goto LAB_ram_480ce260;
          iVar33 = FUN_ram_4ff4511a(iVar14,&uStack_60);
          if (iVar33 == 0) goto LAB_ram_480ce040;
          iVar14 = iVar14 + 0x40;
        } while (iVar30 != iVar14);
      }
LAB_ram_480ce2b8:
      iStack_74 = iStack_74 + 1;
LAB_ram_480ce040:
      bVar17 = *(byte *)(param_3 + 0x22);
      bVar27 = bVar27 + 1;
      piVar22 = piVar22 + 0xe;
    } while (bVar27 < bVar17);
    uVar29 = uVar29 + iStack_74;
  }
  else {
    uVar26 = 0;
    uVar29 = 0;
    pvVar28 = param_1;
    do {
      if (*(char *)((int)pvVar28 + 0x84) == '\0') {
        iVar32 = *(int *)((int)pvVar28 + 0x10);
        iVar31 = *(int *)((int)pvVar28 + 0x14);
        iVar13 = *(int *)((int)pvVar28 + 0x18);
        if ((((param_3[0x146] == iVar32) && (param_3[0x147] == iVar31)) &&
            (iVar14 = FUN_ram_4ff4511a(pbVar25,pvVar28,0xc), iVar14 == 0)) &&
           ((*(byte *)(param_3 + 0x22) - 1 & 0xff) < 0x14)) {
          uVar34 = 0;
          iVar14 = param_3[0x24];
          piVar22 = param_3 + 0x32;
          while (iVar13 != iVar14) {
            uVar34 = uVar34 + 1;
            if (*(byte *)(param_3 + 0x22) == uVar34) goto LAB_ram_480ce0f8;
            iVar14 = *piVar22;
            piVar22 = piVar22 + 0xe;
          }
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          iVar13 = (*param_4)(param_3 + uVar34 * 0xe + 0x24,&uStack_60);
          if ((iVar13 != 0) &&
             (iVar13 = FUN_ram_4ff4511a(&uStack_60,(int)pvVar28 + 0x28,0x20), iVar13 == 0))
          goto LAB_ram_480cdf94;
          iVar32 = *(int *)((int)pvVar28 + 0x10);
          iVar31 = *(int *)((int)pvVar28 + 0x14);
          iVar13 = *(int *)((int)pvVar28 + 0x18);
        }
LAB_ram_480ce0f8:
        if (((*(int *)(param_2 + 0x518) == iVar32) && (*(int *)(param_2 + 0x51c) == iVar31)) &&
           (iVar31 = FUN_ram_4ff4511a(param_2 + 0x500,pvVar28,0xc), iVar31 == 0)) {
          piVar22 = (int *)(param_2 + 0x90);
          uVar34 = 0;
          if ((*(byte *)(param_2 + 0x88) - 1 & 0xff) < 0x14) {
            do {
              iVar31 = *piVar22;
              piVar22 = piVar22 + 0xe;
              if (iVar31 == iVar13) {
                uStack_60 = 0;
                uStack_5c = 0;
                uStack_58 = 0;
                uStack_54 = 0;
                uStack_50 = 0;
                uStack_4c = 0;
                uStack_48 = 0;
                uStack_44 = 0;
                iVar13 = (*param_4)(uVar34 * 0x38 + 0x90 + param_2,&uStack_60);
                if ((iVar13 != 0) &&
                   (iVar13 = FUN_ram_4ff4511a(&uStack_60,(int)pvVar28 + 0x28,0x20), iVar13 == 0))
                goto LAB_ram_480cdf94;
                break;
              }
              uVar34 = uVar34 + 1;
            } while (uVar34 != *(byte *)(param_2 + 0x88));
          }
        }
      }
      else {
LAB_ram_480cdf94:
        uVar29 = uVar29 + 1;
      }
      uVar26 = uVar26 + 1;
      pvVar28 = (void *)((int)pvVar28 + 0x88);
    } while (uVar26 < *(ushort *)((int)param_1 + 0x22500));
    bVar17 = 0;
    if (*(char *)(param_3 + 0x22) != '\0') goto LAB_ram_480cdfb0;
  }
  if (0x400 < uVar29) {
    return 0;
  }
  iStack_74 = 0;
  uVar29 = 0;
  if (*(short *)((int)param_1 + 0x22500) != 0) {
    do {
      pvVar28 = (void *)((int)param_1 + uVar29 * 0x88);
      if (*(char *)((int)pvVar28 + 0x84) == '\0') {
        iVar31 = (int)param_1 + uVar29 * 0x88 + 0x28;
        iVar13 = FUN_ram_480cde6e(param_2,pvVar28,*(undefined4 *)((int)pvVar28 + 0x10),
                                  *(undefined4 *)((int)pvVar28 + 0x14),
                                  *(undefined4 *)((int)pvVar28 + 0x18),iVar31,param_4);
        if (iVar13 != 0) {
          if ((*(char *)((int)pvVar28 + 0x84) == '\0') &&
             (iVar13 = FUN_ram_480cde6e(param_2,pvVar28,*(undefined4 *)((int)pvVar28 + 0x10),
                                        *(undefined4 *)((int)pvVar28 + 0x14),
                                        *(undefined4 *)((int)pvVar28 + 0x18),iVar31,param_4),
             iVar13 != 0)) {
            *(undefined1 *)((int)pvVar28 + 0x84) = 1;
            iStack_74 = iVar13;
          }
          goto LAB_ram_480ce072;
        }
        iVar13 = FUN_ram_480cde6e(param_3,pvVar28,*(undefined4 *)((int)pvVar28 + 0x10),
                                  *(undefined4 *)((int)pvVar28 + 0x14),
                                  *(undefined4 *)((int)pvVar28 + 0x18),iVar31,param_4);
        if (iVar13 != 0) goto LAB_ram_480ce072;
        if (*(ushort *)((int)param_1 + 0x22500) <= uVar29) {
          bVar17 = *(byte *)(param_3 + 0x22);
          iStack_74 = 1;
          goto LAB_ram_480ce14e;
        }
        uVar34 = *(ushort *)((int)param_1 + 0x22500) - 1;
        uVar24 = uVar34 & 0xffff;
        *(short *)((int)param_1 + 0x22500) = (short)(uVar34 * 0x10000 >> 0x10);
        if (uVar29 != uVar24) {
          FUN_ram_4ff45158(pvVar28,(void *)(uVar24 * 0x88 + (int)param_1),0x85);
          uVar24 = (uint)*(ushort *)((int)param_1 + 0x22500);
        }
        memset((void *)(uVar24 * 0x88 + (int)param_1),0,0x85);
        iStack_74 = 1;
      }
      else {
LAB_ram_480ce072:
        uVar29 = uVar29 + 1 & 0xffff;
      }
    } while (uVar29 < *(ushort *)((int)param_1 + 0x22500));
    bVar17 = *(byte *)(param_3 + 0x22);
  }
LAB_ram_480ce14e:
  uVar12 = (undefined1)iStack_74;
  if (bVar17 != 0) {
    piVar22 = param_3 + 0x24;
    bVar17 = 0;
LAB_ram_480ce164:
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (*piVar22 == 0) {
      return 0;
    }
    iVar13 = (*param_4)(piVar22,&uStack_60);
    if (iVar13 == 0) {
      return 0;
    }
    iVar32 = param_3[0x146];
    iVar31 = param_3[0x147];
    iVar14 = *piVar22;
    if (*(byte *)((int)param_1 + 0x22502) != 0) {
      iVar30 = (int)param_1 + 0x2201c;
      iVar33 = iVar30 + (uint)*(byte *)((int)param_1 + 0x22502) * 0x40;
      do {
        if (((*(int *)(iVar30 + -0xc) == iVar32) && (*(int *)(iVar30 + -8) == iVar31)) &&
           (iVar14 == *(int *)(iVar30 + -4))) {
          iVar15 = FUN_ram_4ff4511a(iVar30 + -0x1c,pbVar25,0xc);
          if ((iVar15 == 0) && (iVar15 = FUN_ram_4ff4511a(iVar30,&uStack_60), iVar15 == 0))
          goto LAB_ram_480ce1f4;
        }
        iVar30 = iVar30 + 0x40;
      } while (iVar33 != iVar30);
    }
    uVar26 = *(ushort *)((int)param_1 + 0x22500);
    uVar29 = (uint)uVar26;
    if (uVar29 != 0) {
      uVar34 = 0;
      pvVar28 = param_1;
LAB_ram_480ce3d2:
      if (((*(int *)((int)pvVar28 + 0x10) != iVar32) || (*(int *)((int)pvVar28 + 0x14) != iVar31))
         || ((iVar14 != *(int *)((int)pvVar28 + 0x18) ||
             (iVar30 = FUN_ram_4ff4511a(pvVar28,pbVar25,0xc), iVar30 != 0)))) goto LAB_ram_480ce3c8;
      iVar31 = FUN_ram_4ff4511a(uVar34 * 0x88 + 0x28 + (int)param_1,&uStack_60);
      if (iVar31 == 0) {
        if (*(char *)((int)param_1 + uVar34 * 0x88 + 0x84) != '\0') goto LAB_ram_480ce1f4;
      }
      else {
        uVar29 = *(uint *)((int)param_1 + 0x22508);
        iVar31 = *(int *)((int)param_1 + 0x2250c);
        if ((iVar31 - (uint)(uVar29 == 0) == -1) && (0xfffffffd < uVar29 - 1)) {
          return 0;
        }
        *(uint *)((int)param_1 + 0x2250c) = (uint)(uVar29 + 1 < uVar29) + iVar31;
        *(uint *)((int)param_1 + 0x22508) = uVar29 + 1;
        *(uint *)((int)param_1 + uVar34 * 0x88 + 0x20) = uVar29;
        *(int *)((int)param_1 + uVar34 * 0x88 + 0x24) = iVar31;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x40) = uStack_48;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x44) = uStack_44;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x28) = uStack_60;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x2c) = uStack_5c;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x30) = uStack_58;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x34) = uStack_54;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x38) = uStack_50;
        *(undefined4 *)((int)param_1 + uVar34 * 0x88 + 0x3c) = uStack_4c;
        piVar20 = piVar22;
        piVar11 = (int *)((int)param_1 + uVar34 * 0x88 + 0x48);
        do {
          piVar23 = piVar11;
          piVar19 = piVar20;
          iVar31 = piVar19[1];
          iVar32 = piVar19[2];
          iVar14 = piVar19[3];
          *piVar23 = *piVar19;
          piVar23[1] = iVar31;
          piVar23[2] = iVar32;
          piVar23[3] = iVar14;
          piVar20 = piVar19 + 4;
          piVar11 = piVar23 + 4;
        } while (piVar20 != piVar22 + 0xc);
        iVar31 = piVar19[5];
        piVar23[4] = *piVar20;
        piVar23[5] = iVar31;
        iVar14 = *piVar22;
        *(undefined1 *)((int)param_1 + uVar34 * 0x88 + 0x84) = 0;
        iStack_74 = iVar13;
      }
      iVar13 = FUN_ram_480cde6e(param_2,pbVar25,param_3[0x146],param_3[0x147],iVar14,&uStack_60,
                                param_4);
      if (iVar13 != 0) {
        *(undefined1 *)((int)param_1 + uVar34 * 0x88 + 0x84) = 1;
        iStack_74 = iVar13;
      }
      goto LAB_ram_480ce1f4;
    }
    uVar29 = 0;
    sVar18 = 1;
    pvVar28 = param_1;
    goto LAB_ram_480ce592;
  }
LAB_ram_480ce20c:
  iVar13 = FUN_ram_4807a88c(param_1);
  if (iVar13 == 0) {
    return 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  return 1;
LAB_ram_480ce3c8:
  uVar34 = uVar34 + 1;
  pvVar28 = (void *)((int)pvVar28 + 0x88);
  if (uVar29 == uVar34) goto LAB_ram_480ce578;
  goto LAB_ram_480ce3d2;
LAB_ram_480ce578:
  if (uVar29 == 0x400) {
    return 0;
  }
  sVar18 = uVar26 + 1;
  pvVar28 = (void *)(uVar29 * 0x88 + (int)param_1);
LAB_ram_480ce592:
  *(short *)((int)param_1 + 0x22500) = sVar18;
  pbVar21 = memset(pvVar28,0,0x85);
  bVar27 = *(byte *)(param_3 + 0x142);
  bVar1 = *(byte *)((int)param_3 + 0x509);
  bVar2 = *(byte *)((int)param_3 + 0x50a);
  bVar3 = *(byte *)((int)param_3 + 0x50b);
  bVar4 = *pbVar25;
  bVar5 = *(byte *)((int)param_3 + 0x501);
  bVar6 = *(byte *)((int)param_3 + 0x502);
  bVar7 = *(byte *)((int)param_3 + 0x503);
  bVar8 = *(byte *)(param_3 + 0x141);
  bVar9 = *(byte *)((int)param_3 + 0x505);
  bVar10 = *(byte *)((int)param_3 + 0x507);
  pbVar21[6] = *(byte *)((int)param_3 + 0x506);
  pbVar21[8] = bVar27;
  *pbVar21 = bVar4;
  pbVar21[1] = bVar5;
  pbVar21[2] = bVar6;
  pbVar21[3] = bVar7;
  pbVar21[4] = bVar8;
  pbVar21[5] = bVar9;
  pbVar21[7] = bVar10;
  pbVar21[9] = bVar1;
  pbVar21[10] = bVar2;
  pbVar21[0xb] = bVar3;
  uVar16 = param_3[0x147];
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x10) = param_3[0x146];
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x14) = uVar16;
  uVar34 = *(uint *)((int)param_1 + 0x22508);
  iVar31 = *(int *)((int)param_1 + 0x2250c);
  *(int *)((int)param_1 + uVar29 * 0x88 + 0x18) = *piVar22;
  if ((iVar31 + 1U == (uint)(uVar34 == 0)) && (0xfffffffd < uVar34 - 1)) {
    return 0;
  }
  *(uint *)((int)param_1 + 0x2250c) = (uint)(uVar34 + 1 < uVar34) + iVar31;
  *(uint *)((int)param_1 + 0x22508) = uVar34 + 1;
  *(uint *)((int)param_1 + uVar29 * 0x88 + 0x20) = uVar34;
  *(int *)((int)param_1 + uVar29 * 0x88 + 0x24) = iVar31;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x40) = uStack_48;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x44) = uStack_44;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x28) = uStack_60;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x2c) = uStack_5c;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x30) = uStack_58;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x34) = uStack_54;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x38) = uStack_50;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x3c) = uStack_4c;
  piVar20 = piVar22;
  piVar11 = (int *)((int)param_1 + uVar29 * 0x88 + 0x48);
  do {
    piVar23 = piVar11;
    piVar19 = piVar20;
    iVar31 = piVar19[1];
    iVar32 = piVar19[2];
    iVar14 = piVar19[3];
    *piVar23 = *piVar19;
    piVar23[1] = iVar31;
    piVar23[2] = iVar32;
    piVar23[3] = iVar14;
    piVar20 = piVar19 + 4;
    piVar11 = piVar23 + 4;
  } while (piVar20 != piVar22 + 0xc);
  iVar31 = piVar19[5];
  piVar23[4] = *piVar20;
  piVar23[5] = iVar31;
  *(undefined4 *)((int)param_1 + uVar29 * 0x88 + 0x80) = *param_3;
  uVar12 = FUN_ram_480cde6e(param_2,pbVar25,param_3[0x146],param_3[0x147],*piVar22,&uStack_60,
                            param_4);
  *(undefined1 *)((int)param_1 + uVar29 * 0x88 + 0x84) = uVar12;
  iStack_74 = iVar13;
LAB_ram_480ce1f4:
  uVar12 = (undefined1)iStack_74;
  piVar22 = piVar22 + 0xe;
  bVar17 = bVar17 + 1;
  if (*(byte *)(param_3 + 0x22) <= bVar17) goto LAB_ram_480ce20c;
  goto LAB_ram_480ce164;
}


