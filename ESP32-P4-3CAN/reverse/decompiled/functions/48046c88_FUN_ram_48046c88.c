/* Firmware entry: 0x48046c88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_48046c88(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  byte bVar26;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  char cStack_75;
  int aiStack_74 [4];
  uint uStack_64;
  undefined4 *puStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  
  uVar2 = DAT_ram_48222f9c;
  uVar12 = DAT_ram_48222f98;
  uVar9 = DAT_ram_48222f94;
  uVar8 = DAT_ram_48222f90;
  uVar3 = DAT_ram_48222f8c;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar14 = *(char *)((int)param_3 + 0x1d);
  *param_1 = DAT_ram_48222f88;
  param_1[5] = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar12;
  iVar19 = 2;
  if (cVar14 == '\x02') {
    iVar19 = 1;
  }
  else if ((cVar14 != '\x04') && (iVar19 = 0, cVar14 != '\x01')) {
    return param_1;
  }
  if ((((8 < *(byte *)(param_3 + 5)) || (0x7ff < (uint)param_3[4])) || (param_3[0x10] == 0)) ||
     (3 < (byte)(*(char *)((int)param_3 + 0x37) - 1U))) {
    param_2 = iVar19 * 0x1228 + param_2;
    iVar19 = *(int *)(param_2 + 0x11f8);
    if (iVar19 == -1) {
      return param_1;
    }
    *(int *)(param_2 + 0x11f8) = iVar19 + 1;
    return param_1;
  }
  if (((param_3[4] == 0x3fd) || (uVar23 = (uint)*(byte *)((int)param_3 + 0x35), uVar23 == 1)) ||
     (*(char *)((int)param_3 + 0x37) == '\x04')) {
    param_2 = iVar19 * 0x1228 + param_2;
    iVar19 = *(int *)(param_2 + 0x11f4);
    if (iVar19 == -1) {
      return param_1;
    }
    *(int *)(param_2 + 0x11f4) = iVar19 + 1;
    return param_1;
  }
  if ((((param_3[0xd] & 0xff00ff) != 0x1000e) || (((uint)param_3[10] >> 8 & 1) == 0)) &&
     ((uVar5 = FUN_ram_48040c40(param_3 + 4), uVar5 != 0 && (uVar23 != uVar5)))) {
    param_2 = iVar19 * 0x1228 + param_2;
    iVar19 = *(int *)(param_2 + 0x11fc);
    if (iVar19 == -1) {
      return param_1;
    }
    *(int *)(param_2 + 0x11fc) = iVar19 + 1;
    return param_1;
  }
  iVar15 = param_3[0x11];
  if ((iVar15 == 0) || (iVar20 = iVar19 * 0x1228 + param_2, iVar15 != *(int *)(iVar20 + 0x1218))) {
    param_2 = iVar19 * 0x1228 + param_2;
    iVar19 = *(int *)(param_2 + 0x1200);
    if (iVar19 == -1) {
      return param_1;
    }
    *(int *)(param_2 + 0x1200) = iVar19 + 1;
    return param_1;
  }
  if (*(int *)(iVar20 + 0x1214) != 0) {
    return param_1;
  }
  if (param_4 == 0) {
    if (*(char *)((int)param_3 + 0x51) != '\0') {
      return param_1;
    }
    if (*(char *)((int)param_3 + 0x52) != '\0') {
      return param_1;
    }
    uVar5 = 0xff;
    uVar23 = 0xff;
    uVar25 = 0;
    bVar26 = 0;
    do {
      if (*(char *)(iVar20 + 0xe6) == '\0') {
        if (uVar23 == 0xff) {
          uVar23 = uVar25;
        }
      }
      else if (*(char *)(iVar20 + 0xe6) == '\x01') {
        if (*(char *)(iVar20 + 0x38) == *(char *)(param_3 + 0xe)) {
          bVar26 = bVar26 + 1;
        }
        iVar15 = FUN_ram_480465d0(iVar20,param_3);
        if (iVar15 != 0) {
          uVar5 = uVar25;
        }
      }
      uVar25 = uVar25 + 1 & 0xff;
      iVar20 = iVar20 + 0xe8;
    } while (uVar25 != 0x10);
    if (uVar23 == 0xff) {
      param_2 = iVar19 * 0x1228 + param_2;
      iVar19 = *(int *)(param_2 + 0x1210);
      if (iVar19 == -1) {
        return param_1;
      }
      *(int *)(param_2 + 0x1210) = iVar19 + 1;
      return param_1;
    }
    if (uVar5 != 0xff) {
      puVar6 = (undefined4 *)FUN_ram_48046460(param_2,cVar14,uVar23);
      if ((puVar6[0x36] == -1) && (puVar6[0x37] == -1)) {
        return param_1;
      }
      uVar3 = 0x48046fea;
      iVar15 = FUN_ram_4804691a(param_2,cVar14,uVar5,1,8,0);
      if (iVar15 == 0) {
        return param_1;
      }
      goto LAB_ram_48046ff0;
    }
    if (7 < bVar26) {
      if (*(char *)(param_3 + 0xe) != '\x01') {
        return param_1;
      }
      param_2 = iVar19 * 0x1228 + param_2;
      iVar19 = *(int *)(param_2 + 0x1088);
      if (iVar19 == -1) {
        return param_1;
      }
      *(int *)(param_2 + 0x1088) = iVar19 + 1;
      return param_1;
    }
  }
  else {
    if (2 < (byte)(*(char *)((int)param_3 + 0x52) - 1U)) {
      return param_1;
    }
    cVar4 = '\0';
    pbVar10 = (byte *)(param_3 + 0x16);
    do {
      uVar5 = (uint)*pbVar10;
      iVar20 = *(int *)(pbVar10 + 8);
      iVar13 = *(int *)(pbVar10 + 0xc);
      if (7 < uVar5) {
        return param_1;
      }
      if (iVar20 == 0 && iVar13 == 0) {
        return param_1;
      }
      iVar17 = param_2 + uVar5 * 0x120;
      if (*(char *)(iVar17 + 0x3696) == '\0') {
        return param_1;
      }
      if (*(int *)(iVar17 + 0x3688) != iVar20) {
        return param_1;
      }
      if (*(int *)(iVar17 + 0x368c) != iVar13) {
        return param_1;
      }
      if (*(char *)(iVar17 + 0x3698) != '\0') {
        return param_1;
      }
      if (*(char *)(iVar17 + 0x3697) == '\0') {
        return param_1;
      }
      iVar17 = uVar5 * 0x120 + 0x3678 + param_2;
      if ((*(int *)(iVar17 + 0x30) != 0 || *(int *)(iVar17 + 0x34) != 0) &&
         (*(char *)(iVar17 + 0x29) != -1)) {
        return param_1;
      }
      iVar17 = uVar5 * 0x120 + param_2;
      if (*(int *)(pbVar10 + 0x10) != *(int *)(iVar17 + 0x3690)) {
        return param_1;
      }
      if (*(char *)(iVar17 + 0x3678) != cVar14) {
        return param_1;
      }
      if (iVar15 != *(int *)(iVar17 + 0x3684)) {
        return param_1;
      }
      if (*(short *)(iVar17 + 0x367c) != *(short *)(param_3 + 2)) {
        return param_1;
      }
      if (((uVar23 != 4) || (*(char *)(iVar17 + 0x367a) != '\x04')) &&
         ((*(uint *)(uVar5 * 0x120 + param_2 + 0x3678) & 0xffffff) >> 8 !=
          (uint)*(ushort *)(param_3 + 0xd))) {
        return param_1;
      }
      pbVar11 = (byte *)(param_3 + 0x16);
      for (cVar18 = '\0'; cVar18 != cVar4; cVar18 = cVar18 + '\x01') {
        if (((*pbVar11 == uVar5) && (*(int *)(pbVar11 + 8) == iVar20)) &&
           (*(int *)(pbVar11 + 0xc) == iVar13)) {
          return param_1;
        }
        pbVar11 = pbVar11 + 0x18;
      }
      cVar4 = cVar18 + '\x01';
      pbVar10 = pbVar10 + 0x18;
    } while (*(char *)((int)param_3 + 0x52) != cVar4);
    uVar23 = *(byte *)(param_3 + 0x16) + 0x10 & 0xff;
    iVar15 = FUN_ram_48046460(param_2,cVar14,uVar23);
    if (*(char *)(iVar15 + 0xe6) != '\0') {
      return param_1;
    }
  }
  uVar3 = 0x480471c4;
  puVar6 = (undefined4 *)FUN_ram_48046460(param_2,cVar14,uVar23);
  if ((puVar6[0x36] == -1) && (puVar6[0x37] == -1)) {
    return param_1;
  }
  uVar5 = 0xff;
LAB_ram_48046ff0:
  uVar25 = puVar6[0x36] + 1;
  iVar15 = (uint)(uVar25 < (uint)puVar6[0x36]) + puVar6[0x37];
  puVar6[0x36] = uVar25;
  puVar6[0x37] = iVar15;
  puVar16 = puVar6;
  puVar21 = param_3;
  do {
    puVar7 = (undefined4 *)puVar21[1];
    uVar8 = puVar21[2];
    uVar9 = puVar21[3];
    *puVar16 = *puVar21;
    puVar16[1] = puVar7;
    puVar16[2] = uVar8;
    puVar16[3] = uVar9;
    puVar21 = puVar21 + 4;
    puVar16 = puVar16 + 4;
  } while (puVar21 != param_3 + 0x28);
  if (*(char *)(param_3 + 0xd) != '\x0e') {
    uVar3 = 0x48047046;
    puVar7 = (undefined4 *)FUN_ram_4ff22e6a(param_3 + 4);
    if (puVar7 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puVar6 + 0x37) = 3;
    }
  }
  *(char *)((int)puVar6 + 0x51) = (char)param_4;
  *(undefined1 *)((int)puVar6 + 0xe6) = 1;
  iVar20 = iVar19 * 0x1228 + param_2;
  *(uint *)(iVar20 + 0x121c) = *(uint *)(iVar20 + 0x121c) | 1 << (uVar23 & 0x1f);
  iVar20 = *(int *)(param_2 + 0x3f80) + 1;
  if (iVar20 == 0) {
    iVar20 = 1;
  }
  *(int *)(param_2 + 0x3f80) = iVar20;
  puVar6[0x38] = iVar20;
  uVar1 = *(undefined1 *)((int)param_3 + 0x1d);
  *(char *)((int)param_1 + 9) = (char)uVar23;
  param_1[4] = uVar25;
  param_1[5] = iVar15;
  *(undefined1 *)(param_1 + 2) = uVar1;
  *(undefined2 *)param_1 = 1;
  if (param_4 != 0) {
    for (uVar25 = 0; uVar25 < *(byte *)((int)param_3 + 0x52); uVar25 = uVar25 + 1 & 0xff) {
      if ((((7 < *(byte *)(param_3 + uVar25 * 6 + 0x16)) ||
           (param_3[uVar25 * 6 + 0x18] == 0 && param_3[uVar25 * 6 + 0x19] == 0)) ||
          (iVar20 = (uint)*(byte *)(param_3 + uVar25 * 6 + 0x16) * 0x120 + param_2,
          *(char *)(iVar20 + 0x3696) == '\0')) ||
         ((*(int *)(iVar20 + 0x3688) != param_3[uVar25 * 6 + 0x18] ||
          (*(int *)(iVar20 + 0x368c) != param_3[uVar25 * 6 + 0x19])))) {
        uVar5 = param_1[2];
        uVar25 = param_1[3];
        iVar13 = param_1[4];
        iVar17 = param_1[5];
        ebreak();
        DAT_ram_00000120 = 0;
        iVar20 = 2;
        if (uVar5 == 2) {
          iVar20 = 1;
        }
        else if ((uVar5 != 4) && (iVar20 = 0, uVar5 != 1)) {
          uRam00000028 = uVar5;
          uRam0000002c = uVar25;
          iRam00000030 = iVar13;
          _DAT_ram_00000034 = iVar17;
          DAT_ram_00000120 = 0;
          return puVar7;
        }
        if (uVar25 < 0x18) {
          if (uVar25 < 0x10) {
            if (iVar13 == 0 && iVar17 == 0) {
              uRam00000028 = uVar5;
              uRam0000002c = uVar25;
              iRam00000030 = iVar13;
              _DAT_ram_00000034 = iVar17;
              DAT_ram_00000120 = 0;
              return puVar7;
            }
            iVar20 = iVar20 * 0x1228 + uVar25 * 0xe8;
          }
          else {
            iVar20 = (uVar25 - 0x10) * 0x120;
            if (*(char *)((int)puVar7 + iVar20 + 0x3696) == '\0') {
              uRam00000028 = uVar5;
              uRam0000002c = uVar25;
              iRam00000030 = iVar13;
              _DAT_ram_00000034 = iVar17;
              DAT_ram_00000120 = 0;
              return puVar7;
            }
            if (*(byte *)(puVar7 + (uVar25 - 0x10) * 0x48 + 0xd9e) != uVar5) {
              uRam00000028 = uVar5;
              uRam0000002c = uVar25;
              iRam00000030 = iVar13;
              _DAT_ram_00000034 = iVar17;
              DAT_ram_00000120 = 0;
              return puVar7;
            }
            if (iVar13 == 0 && iVar17 == 0) {
              uRam00000028 = uVar5;
              uRam0000002c = uVar25;
              iRam00000030 = iVar13;
              _DAT_ram_00000034 = iVar17;
              DAT_ram_00000120 = 0;
              return puVar7;
            }
            iVar20 = iVar20 + 14000;
          }
          iVar20 = iVar20 + (int)puVar7;
          if (((*(int *)(iVar20 + 0xd8) == iVar13) && (*(int *)(iVar20 + 0xdc) == iVar17)) &&
             ((*(uint *)(iVar20 + 0xe4) & 0xff00ff) == 0x100ff)) {
            iVar24 = 0;
            if (uVar5 != 1) {
              iVar24 = (uVar5 != 2) + 1;
            }
            iVar22 = *(int *)(iVar20 + 0x44);
            uRam00000028 = uVar5;
            uRam0000002c = uVar25;
            iRam00000030 = iVar13;
            _DAT_ram_00000034 = iVar17;
            uStack_64 = uVar23;
            puStack_60 = puVar6;
            iStack_5c = iVar15;
            iStack_58 = param_2;
            iStack_54 = param_4;
            iStack_50 = iVar19;
            puStack_4c = param_3;
            puStack_48 = param_1;
            uStack_44 = uVar3;
            if (iVar22 == puVar7[iVar24 * 0x48a + 0x486]) {
              cVar14 = *(char *)(iVar20 + 0x50);
              iVar19 = *(int *)(iVar20 + 0x3c);
              if (((cVar14 == '\0') && (iVar19 == 0)) || (-iVar19 < 1)) {
                if ((code *)puVar7[0xfde] != (code *)0x0) {
                  puVar6 = (undefined4 *)(*(code *)puVar7[0xfde])(puVar7[0xfdf],iVar20,0);
                  iVar19 = 1;
                  if (uVar5 != 2) {
                    iVar19 = (uint)(uVar5 == 4) << 1;
                  }
                  if (uVar25 < 0x10) {
                    iVar20 = iVar19 * 0x1228 + uVar25 * 0xe8;
                  }
                  else {
                    iVar20 = (uVar25 - 0x10) * 0x120;
                    if (*(char *)((int)puVar7 + iVar20 + 0x3696) == '\0') {
                      return puVar6;
                    }
                    if (*(byte *)(puVar7 + (uVar25 - 0x10) * 0x48 + 0xd9e) != uVar5) {
                      return puVar6;
                    }
                    iVar20 = iVar20 + 14000;
                  }
                  iVar20 = (int)puVar7 + iVar20;
                  if (*(int *)(iVar20 + 0xd8) != iVar13) {
                    return puVar6;
                  }
                  if (*(int *)(iVar20 + 0xdc) != iVar17) {
                    return puVar6;
                  }
                  if (*(char *)(iVar20 + 0xe6) != '\x01') {
                    return puVar6;
                  }
                  if (puVar6 != (undefined4 *)0x0) {
                    if (*(byte *)(iVar20 + 0xc) < 0x56) {
                      iVar19 = iVar24 * 0x48a + (uint)*(byte *)(iVar20 + 0xc);
                      if (puVar7[iVar19 + 0x426] != -1) {
                        puVar7[iVar19 + 0x426] = puVar7[iVar19 + 0x426] + 1;
                      }
                    }
                    if (puVar7[iVar24 * 0x48a + 0x425] != -1) {
                      puVar7[iVar24 * 0x48a + 0x425] = puVar7[iVar24 * 0x48a + 0x425] + 1;
                    }
                    iVar19 = 0;
                    cVar14 = '\b';
                    goto LAB_ram_4804731a;
                  }
                  iVar22 = *(int *)(iVar20 + 0x44);
                  iVar19 = *(int *)(iVar20 + 0x3c);
                  cVar14 = *(char *)(iVar20 + 0x50);
                }
                uStack_a8 = *(undefined4 *)(iVar20 + 0x18);
                uStack_a4 = *(undefined4 *)(iVar20 + 0x1c);
                uStack_a0 = *(undefined4 *)(iVar20 + 0x20);
                uStack_9c = *(undefined4 *)(iVar20 + 0x24);
                uStack_98 = *(undefined4 *)(iVar20 + 0x28);
                uStack_94 = *(undefined4 *)(iVar20 + 0x2c);
                uStack_90 = *(undefined4 *)(iVar20 + 0x30);
                uStack_b0 = *(undefined4 *)(iVar20 + 0x10);
                uStack_ac = *(undefined4 *)(iVar20 + 0x14);
                aiStack_74[0] = 0;
                cStack_75 = '\b';
                puVar6 = (undefined4 *)
                         FUN_ram_48046098(0x3000,&uStack_b0,*(undefined1 *)(iVar20 + 0x48),
                                          *(undefined1 *)(iVar20 + 0x37),
                                          *(undefined1 *)(iVar20 + 0x34),
                                          *(undefined1 *)(iVar20 + 0x35),iVar22,aiStack_74,
                                          &cStack_75,iVar19,cVar14,*(undefined1 *)(iVar20 + 0x36),0)
                ;
                if ((puVar6 == (undefined4 *)0x0) || (aiStack_74[0] == 0)) {
                  if ((byte)(cStack_75 - 3U) < 3) {
                    return puVar6;
                  }
                  if (cStack_75 == '\a') {
                    return puVar6;
                  }
                  if (puVar7[iVar24 * 0x48a + 0x425] != -1) {
                    puVar7[iVar24 * 0x48a + 0x425] = puVar7[iVar24 * 0x48a + 0x425] + 1;
                  }
                  if (cStack_75 == '\0') {
                    puVar6 = (undefined4 *)0x6;
                    cVar14 = '\b';
                  }
                  else {
                    puVar6 = (undefined4 *)0x3;
                    cVar14 = cStack_75;
                    if (cStack_75 != '\t') {
                      puVar6 = (undefined4 *)((cStack_75 != '\n') + 5);
                    }
                  }
                  iVar19 = 0;
                }
                else {
                  DAT_ram_00000120 = 1;
                  if (puVar7[iVar24 * 0x48a + 0x424] != -1) {
                    puVar7[iVar24 * 0x48a + 0x424] = puVar7[iVar24 * 0x48a + 0x424] + 1;
                  }
                  cVar14 = '\0';
                  puVar6 = (undefined4 *)0x7;
                  iVar19 = aiStack_74[0];
                }
              }
              else {
                if (puVar7[iVar24 * 0x48a + 0x423] != -1) {
                  puVar7[iVar24 * 0x48a + 0x423] = puVar7[iVar24 * 0x48a + 0x423] + 1;
                }
                iVar19 = 0;
                cVar14 = '\t';
                puVar6 = (undefined4 *)0x3;
              }
            }
            else {
              cVar14 = '\n';
              puVar6 = (undefined4 *)0x5;
              iVar19 = 0;
            }
LAB_ram_4804731a:
            puVar6 = (undefined4 *)FUN_ram_4804691a(puVar7,uVar5,uVar25,puVar6,cVar14,iVar19);
            return puVar6;
          }
        }
        uRam00000028 = uVar5;
        uRam0000002c = uVar25;
        iRam00000030 = iVar13;
        _DAT_ram_00000034 = iVar17;
        return puVar7;
      }
      puVar7 = (undefined4 *)param_1[2];
      uVar8 = param_1[3];
      uVar9 = param_1[4];
      uVar12 = param_1[5];
      *(undefined4 **)(iVar20 + 0x36a0) = puVar7;
      *(undefined4 *)(iVar20 + 0x36a4) = uVar8;
      *(undefined4 *)(iVar20 + 0x36a8) = uVar9;
      *(undefined4 *)(iVar20 + 0x36ac) = uVar12;
    }
    uVar1 = *(undefined1 *)((int)param_3 + 0x1d);
  }
  FUN_ram_48046718(param_2,uVar1,uVar23);
  if (uVar5 != 0xff) {
    param_2 = iVar19 * 0x1228 + param_2;
    iVar19 = *(int *)(param_2 + 0x1084);
    if (iVar19 != -1) {
      *(int *)(param_2 + 0x1084) = iVar19 + 1;
    }
  }
  return param_1;
}


