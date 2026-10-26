/* Firmware entry: 0x4804691a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_ram_4804691a(int param_1,uint param_2,uint param_3,int param_4,undefined1 param_5,int param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  byte *pbVar15;
  char cVar16;
  undefined4 *puVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  undefined4 *puVar21;
  int iVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  byte bVar28;
  undefined4 uVar29;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  char cStack_e5;
  int aiStack_e4 [4];
  uint uStack_d4;
  undefined4 *puStack_d0;
  int iStack_cc;
  uint uStack_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 local_58 [16];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar23 = 2;
  if (param_2 == 2) {
    iVar23 = 1;
    iVar20 = param_1 + 0x1228;
  }
  else if (param_2 == 4) {
    iVar20 = param_1 + 0x2450;
  }
  else {
    if (param_2 != 1) {
      return (undefined4 *)0x0;
    }
    iVar23 = 0;
    iVar20 = param_1;
  }
  if (0x17 < param_3) {
    return (undefined4 *)0x0;
  }
  if (param_3 < 0x10) {
    iVar4 = param_3 * 0xe8 + iVar23 * 0x1228;
  }
  else {
    iVar4 = (param_3 - 0x10) * 0x120;
    iVar11 = param_1 + iVar4;
    if (*(char *)(iVar11 + 0x3696) == '\0') {
      return (undefined4 *)0x0;
    }
    if (*(byte *)(iVar11 + 0x3678) != param_2) {
      return (undefined4 *)0x0;
    }
    iVar4 = iVar4 + 14000;
  }
  puVar5 = (undefined1 *)(iVar4 + param_1);
  if (puVar5[0xe6] != '\x01') {
    return (undefined4 *)0x0;
  }
  if (0x1f < *(byte *)(iVar23 * 0x1228 + param_1 + 0x1221)) {
    if (*(int *)(iVar20 + 0x1214) == -1) {
      return (undefined4 *)0x0;
    }
    *(int *)(iVar20 + 0x1214) = *(int *)(iVar20 + 0x1214) + 1;
    return (undefined4 *)0x0;
  }
  uVar12 = (uint)(byte)puVar5[0xe4];
  if (uVar12 != 0xff) {
    if (param_2 == 2) {
      puVar13 = (undefined4 *)0x1;
      if (uVar12 < 0x18) goto LAB_ram_48046a1e;
      puVar13 = (undefined4 *)0x1;
    }
    else {
      if (param_2 == 4) {
        puVar13 = (undefined4 *)0x2;
      }
      else {
        puVar13 = (undefined4 *)0x0;
      }
      if (uVar12 < 0x18) {
LAB_ram_48046a1e:
        if (uVar12 < 0x10) {
          puVar13 = (undefined4 *)((int)puVar13 * 0x1228 + uVar12 * 0xe8);
        }
        else {
          puVar13 = (undefined4 *)((uVar12 - 0x10) * 0x120);
          uVar12 = (int)puVar13 + param_1 + 0x3000;
          if ((*(char *)((int)puVar13 + param_1 + 0x3696) == '\0') ||
             (uVar12 = (uint)*(byte *)((int)puVar13 + param_1 + 0x3678), uVar12 != param_2))
          goto LAB_ram_48046c44;
          puVar13 = puVar13 + 0xdac;
        }
        *(undefined1 *)((int)puVar13 + param_1 + 0xe5) = puVar5[0xe5];
        goto LAB_ram_48046a58;
      }
    }
LAB_ram_48046c44:
    DAT_ram_000000e5 = 0;
    ebreak();
LAB_ram_48046c4a:
    puVar13 = (undefined4 *)((int)puVar13 * 0x1228 + uVar12 * 0xe8);
LAB_ram_48046aae:
    *(undefined1 *)((int)puVar13 + param_1 + 0xe4) = puVar5[0xe4];
LAB_ram_48046ab6:
    *(undefined2 *)(puVar5 + 0xe4) = 0xffff;
    puVar13 = &DAT_ram_48222eb8;
    puVar7 = local_58;
    do {
      puVar21 = puVar7;
      puVar17 = puVar13;
      uVar3 = puVar17[1];
      uVar24 = puVar17[2];
      uVar8 = puVar17[3];
      *puVar21 = *puVar17;
      puVar21[1] = uVar3;
      puVar21[2] = uVar24;
      puVar21[3] = uVar8;
      puVar13 = puVar17 + 4;
      puVar7 = puVar21 + 4;
    } while (puVar17 + 4 != &DAT_ram_48222ee8);
    uVar3 = puVar17[5];
    puVar21[4] = DAT_ram_48222ee8;
    puVar21[5] = uVar3;
    FUN_ram_4ff45158(puVar5 + 0xa0,local_58,0x35);
    puVar5[0xa0] = (char)param_4;
    puVar5[0xac] = param_5;
    *(int *)(puVar5 + 0xa8) = param_6;
    puVar5[0xb4] = param_6 != 0;
    *(undefined4 *)(puVar5 + 0xb0) = *(undefined4 *)(puVar5 + 0x44);
    *(undefined4 *)(puVar5 + 0xc0) = *(undefined4 *)(puVar5 + 0xd8);
    *(undefined4 *)(puVar5 + 0xc4) = *(undefined4 *)(puVar5 + 0xdc);
    puVar5[200] = *puVar5;
    puVar5[0xc9] = puVar5[1];
    puVar5[0xca] = puVar5[2];
    puVar5[0xcb] = puVar5[3];
    puVar5[0xcc] = puVar5[4];
    puVar5[0xad] = (char)param_2;
    puVar5[0xb8] = (char)param_2;
    puVar5[0xb9] = (char)param_3;
    puVar5[0xa1] = puVar5[0xc];
    *(undefined4 *)(puVar5 + 0xa4) = *(undefined4 *)(puVar5 + 0x40);
    puVar5[0xcd] = puVar5[5];
    puVar5[0xce] = puVar5[6];
    iVar20 = param_1 + iVar23 * 0x1228;
    puVar5[0xcf] = puVar5[7];
    puVar5[0xd0] = puVar5[8];
    puVar5[0xd1] = puVar5[9];
    puVar5[0xd2] = puVar5[10];
    puVar5[0xd4] = puVar5[0x51];
    puVar5[0xe6] = 2;
    bVar28 = *(byte *)(iVar20 + 0x1221);
    uVar29 = *(undefined4 *)(puVar5 + 0xb8);
    uVar24 = *(undefined4 *)(puVar5 + 0xbc);
    uVar3 = *(undefined4 *)(puVar5 + 0xc0);
    uVar8 = *(undefined4 *)(puVar5 + 0xc4);
    puVar13 = (undefined4 *)
              (param_1 +
              (((uint)*(byte *)(iVar20 + 0x1220) + (uint)bVar28 & 0x1f) + 0xe8) * 0x10 +
              iVar23 * 0x1228);
    *(uint *)(iVar20 + 0x121c) = ~(1 << (param_3 & 0x1f)) & *(uint *)(iVar20 + 0x121c);
    *puVar13 = uVar29;
    puVar13[1] = uVar24;
    puVar13[2] = uVar3;
    puVar13[3] = uVar8;
    *(byte *)(iVar20 + 0x1221) = bVar28 + 1;
    return (undefined4 *)0x1;
  }
LAB_ram_48046a58:
  uVar2 = DAT_ram_48222f9c;
  uVar29 = DAT_ram_48222f98;
  uVar24 = DAT_ram_48222f94;
  uVar8 = DAT_ram_48222f90;
  uVar3 = DAT_ram_48222f8c;
  uVar12 = (uint)(byte)puVar5[0xe5];
  if (uVar12 == 0xff) goto LAB_ram_48046ab6;
  puVar13 = (undefined4 *)0x1;
  if (param_2 != 2) {
    puVar13 = (undefined4 *)((uint)(param_2 == 4) << 1);
  }
  puVar7 = (undefined4 *)&DAT_ram_00000017;
  if (uVar12 < 0x18) {
    if (uVar12 < 0x10) goto LAB_ram_48046c4a;
    puVar13 = (undefined4 *)((uVar12 - 0x10) * 0x120);
    uVar12 = (int)puVar13 + param_1 + 0x3000;
    puVar7 = (undefined4 *)(uint)*(byte *)((int)puVar13 + param_1 + 0x3696);
    if ((puVar7 != (undefined4 *)0x0) &&
       (uVar12 = (uint)*(byte *)((int)puVar13 + param_1 + 0x3678), uVar12 == param_2)) {
      puVar13 = puVar13 + 0xdac;
      goto LAB_ram_48046aae;
    }
  }
  DAT_ram_000000e4 = 0;
  ebreak();
  cVar16 = *(char *)((int)puVar13 + 0x1d);
  *puVar7 = DAT_ram_48222f88;
  puVar7[5] = uVar2;
  puVar7[1] = uVar3;
  puVar7[2] = uVar8;
  puVar7[3] = uVar24;
  puVar7[4] = uVar29;
  iVar23 = 2;
  if (cVar16 == '\x02') {
    iVar23 = 1;
  }
  else if ((cVar16 != '\x04') && (iVar23 = 0, cVar16 != '\x01')) {
    return puVar7;
  }
  if ((((8 < *(byte *)(puVar13 + 5)) || (0x7ff < (uint)puVar13[4])) || (puVar13[0x10] == 0)) ||
     (3 < (byte)(*(char *)((int)puVar13 + 0x37) - 1U))) {
    iVar20 = iVar23 * 0x1228 + uVar12;
    iVar23 = *(int *)(iVar20 + 0x11f8);
    if (iVar23 != -1) {
      *(int *)(iVar20 + 0x11f8) = iVar23 + 1;
      return puVar7;
    }
    return puVar7;
  }
  if (((puVar13[4] == 0x3fd) || (uVar25 = (uint)*(byte *)((int)puVar13 + 0x35), uVar25 == 1)) ||
     (*(char *)((int)puVar13 + 0x37) == '\x04')) {
    iVar20 = iVar23 * 0x1228 + uVar12;
    iVar23 = *(int *)(iVar20 + 0x11f4);
    if (iVar23 != -1) {
      *(int *)(iVar20 + 0x11f4) = iVar23 + 1;
      return puVar7;
    }
    return puVar7;
  }
  if ((((puVar13[0xd] & 0xff00ff) != 0x1000e) || (((uint)puVar13[10] >> 8 & 1) == 0)) &&
     ((uVar9 = FUN_ram_48040c40(puVar13 + 4), uVar9 != 0 && (uVar25 != uVar9)))) {
    iVar20 = iVar23 * 0x1228 + uVar12;
    iVar23 = *(int *)(iVar20 + 0x11fc);
    if (iVar23 != -1) {
      *(int *)(iVar20 + 0x11fc) = iVar23 + 1;
      return puVar7;
    }
    return puVar7;
  }
  iVar20 = puVar13[0x11];
  if ((iVar20 == 0) || (iVar4 = iVar23 * 0x1228 + uVar12, iVar20 != *(int *)(iVar4 + 0x1218))) {
    iVar20 = iVar23 * 0x1228 + uVar12;
    iVar23 = *(int *)(iVar20 + 0x1200);
    if (iVar23 != -1) {
      *(int *)(iVar20 + 0x1200) = iVar23 + 1;
      return puVar7;
    }
    return puVar7;
  }
  if (*(int *)(iVar4 + 0x1214) != 0) {
    return puVar7;
  }
  if (param_4 == 0) {
    if (*(char *)((int)puVar13 + 0x51) != '\0') {
      return puVar7;
    }
    if (*(char *)((int)puVar13 + 0x52) != '\0') {
      return puVar7;
    }
    uVar9 = 0xff;
    uVar25 = 0xff;
    uVar27 = 0;
    bVar28 = 0;
    do {
      if (*(char *)(iVar4 + 0xe6) == '\0') {
        if (uVar25 == 0xff) {
          uVar25 = uVar27;
        }
      }
      else if (*(char *)(iVar4 + 0xe6) == '\x01') {
        if (*(char *)(iVar4 + 0x38) == *(char *)(puVar13 + 0xe)) {
          bVar28 = bVar28 + 1;
        }
        iVar20 = FUN_ram_480465d0(iVar4,puVar13);
        if (iVar20 != 0) {
          uVar9 = uVar27;
        }
      }
      uVar27 = uVar27 + 1 & 0xff;
      iVar4 = iVar4 + 0xe8;
    } while (uVar27 != 0x10);
    if (uVar25 == 0xff) {
      iVar20 = iVar23 * 0x1228 + uVar12;
      iVar23 = *(int *)(iVar20 + 0x1210);
      if (iVar23 != -1) {
        *(int *)(iVar20 + 0x1210) = iVar23 + 1;
        return puVar7;
      }
      return puVar7;
    }
    if (uVar9 != 0xff) {
      puStack_d0 = (undefined4 *)FUN_ram_48046460(uVar12,cVar16,uVar25);
      if ((puStack_d0[0x36] == -1) && (puStack_d0[0x37] == -1)) {
        return puVar7;
      }
      uVar3 = 0x48046fea;
      iVar20 = FUN_ram_4804691a(uVar12,cVar16,uVar9,1,8,0);
      if (iVar20 == 0) {
        return puVar7;
      }
      goto LAB_ram_48046ff0;
    }
    if (7 < bVar28) {
      if (*(char *)(puVar13 + 0xe) != '\x01') {
        return puVar7;
      }
      iVar20 = iVar23 * 0x1228 + uVar12;
      iVar23 = *(int *)(iVar20 + 0x1088);
      if (iVar23 != -1) {
        *(int *)(iVar20 + 0x1088) = iVar23 + 1;
        return puVar7;
      }
      return puVar7;
    }
  }
  else {
    if (2 < (byte)(*(char *)((int)puVar13 + 0x52) - 1U)) {
      return puVar7;
    }
    cVar6 = '\0';
    pbVar14 = (byte *)(puVar13 + 0x16);
    do {
      uVar9 = (uint)*pbVar14;
      iVar4 = *(int *)(pbVar14 + 8);
      iVar11 = *(int *)(pbVar14 + 0xc);
      if (7 < uVar9) {
        return puVar7;
      }
      if (iVar4 == 0 && iVar11 == 0) {
        return puVar7;
      }
      iVar18 = uVar12 + uVar9 * 0x120;
      if (*(char *)(iVar18 + 0x3696) == '\0') {
        return puVar7;
      }
      if (*(int *)(iVar18 + 0x3688) != iVar4) {
        return puVar7;
      }
      if (*(int *)(iVar18 + 0x368c) != iVar11) {
        return puVar7;
      }
      if (*(char *)(iVar18 + 0x3698) != '\0') {
        return puVar7;
      }
      if (*(char *)(iVar18 + 0x3697) == '\0') {
        return puVar7;
      }
      iVar18 = uVar9 * 0x120 + 0x3678 + uVar12;
      if ((*(int *)(iVar18 + 0x30) != 0 || *(int *)(iVar18 + 0x34) != 0) &&
         (*(char *)(iVar18 + 0x29) != -1)) {
        return puVar7;
      }
      iVar18 = uVar9 * 0x120 + uVar12;
      if (*(int *)(pbVar14 + 0x10) != *(int *)(iVar18 + 0x3690)) {
        return puVar7;
      }
      if (*(char *)(iVar18 + 0x3678) != cVar16) {
        return puVar7;
      }
      if (iVar20 != *(int *)(iVar18 + 0x3684)) {
        return puVar7;
      }
      if (*(short *)(iVar18 + 0x367c) != *(short *)(puVar13 + 2)) {
        return puVar7;
      }
      if (((uVar25 != 4) || (*(char *)(iVar18 + 0x367a) != '\x04')) &&
         ((*(uint *)(uVar9 * 0x120 + uVar12 + 0x3678) & 0xffffff) >> 8 !=
          (uint)*(ushort *)(puVar13 + 0xd))) {
        return puVar7;
      }
      pbVar15 = (byte *)(puVar13 + 0x16);
      for (cVar19 = '\0'; cVar19 != cVar6; cVar19 = cVar19 + '\x01') {
        if (((*pbVar15 == uVar9) && (*(int *)(pbVar15 + 8) == iVar4)) &&
           (*(int *)(pbVar15 + 0xc) == iVar11)) {
          return puVar7;
        }
        pbVar15 = pbVar15 + 0x18;
      }
      cVar6 = cVar19 + '\x01';
      pbVar14 = pbVar14 + 0x18;
    } while (*(char *)((int)puVar13 + 0x52) != cVar6);
    uVar25 = *(byte *)(puVar13 + 0x16) + 0x10 & 0xff;
    iVar20 = FUN_ram_48046460(uVar12,cVar16,uVar25);
    if (*(char *)(iVar20 + 0xe6) != '\0') {
      return puVar7;
    }
  }
  uVar3 = 0x480471c4;
  puStack_d0 = (undefined4 *)FUN_ram_48046460(uVar12,cVar16,uVar25);
  if ((puStack_d0[0x36] == -1) && (puStack_d0[0x37] == -1)) {
    return puVar7;
  }
  uVar9 = 0xff;
LAB_ram_48046ff0:
  uVar27 = puStack_d0[0x36] + 1;
  iVar20 = (uint)(uVar27 < (uint)puStack_d0[0x36]) + puStack_d0[0x37];
  puStack_d0[0x36] = uVar27;
  puStack_d0[0x37] = iVar20;
  puVar17 = puStack_d0;
  puVar21 = puVar13;
  do {
    puVar10 = (undefined4 *)puVar21[1];
    uVar8 = puVar21[2];
    uVar24 = puVar21[3];
    *puVar17 = *puVar21;
    puVar17[1] = puVar10;
    puVar17[2] = uVar8;
    puVar17[3] = uVar24;
    puVar21 = puVar21 + 4;
    puVar17 = puVar17 + 4;
  } while (puVar21 != puVar13 + 0x28);
  if (*(char *)(puVar13 + 0xd) != '\x0e') {
    uVar3 = 0x48047046;
    puVar10 = (undefined4 *)FUN_ram_4ff22e6a(puVar13 + 4);
    if (puVar10 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puStack_d0 + 0x37) = 3;
    }
  }
  *(char *)((int)puStack_d0 + 0x51) = (char)param_4;
  *(undefined1 *)((int)puStack_d0 + 0xe6) = 1;
  iVar4 = iVar23 * 0x1228 + uVar12;
  *(uint *)(iVar4 + 0x121c) = *(uint *)(iVar4 + 0x121c) | 1 << (uVar25 & 0x1f);
  iVar4 = *(int *)(uVar12 + 0x3f80) + 1;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(uVar12 + 0x3f80) = iVar4;
  puStack_d0[0x38] = iVar4;
  uVar1 = *(undefined1 *)((int)puVar13 + 0x1d);
  *(char *)((int)puVar7 + 9) = (char)uVar25;
  puVar7[4] = uVar27;
  puVar7[5] = iVar20;
  *(undefined1 *)(puVar7 + 2) = uVar1;
  *(undefined2 *)puVar7 = 1;
  if (param_4 != 0) {
    for (uVar27 = 0; uVar27 < *(byte *)((int)puVar13 + 0x52); uVar27 = uVar27 + 1 & 0xff) {
      if ((((7 < *(byte *)(puVar13 + uVar27 * 6 + 0x16)) ||
           (puVar13[uVar27 * 6 + 0x18] == 0 && puVar13[uVar27 * 6 + 0x19] == 0)) ||
          (iVar4 = (uint)*(byte *)(puVar13 + uVar27 * 6 + 0x16) * 0x120 + uVar12,
          *(char *)(iVar4 + 0x3696) == '\0')) ||
         ((*(int *)(iVar4 + 0x3688) != puVar13[uVar27 * 6 + 0x18] ||
          (*(int *)(iVar4 + 0x368c) != puVar13[uVar27 * 6 + 0x19])))) {
        uVar9 = puVar7[2];
        uVar27 = puVar7[3];
        iVar11 = puVar7[4];
        iVar18 = puVar7[5];
        ebreak();
        DAT_ram_00000120 = 0;
        iVar4 = 2;
        if (uVar9 == 2) {
          iVar4 = 1;
        }
        else if ((uVar9 != 4) && (iVar4 = 0, uVar9 != 1)) {
          uRam00000028 = uVar9;
          uRam0000002c = uVar27;
          iRam00000030 = iVar11;
          _DAT_ram_00000034 = iVar18;
          DAT_ram_00000120 = 0;
          return puVar10;
        }
        if (uVar27 < 0x18) {
          if (uVar27 < 0x10) {
            if (iVar11 == 0 && iVar18 == 0) {
              uRam00000028 = uVar9;
              uRam0000002c = uVar27;
              iRam00000030 = iVar11;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar10;
            }
            iVar4 = iVar4 * 0x1228 + uVar27 * 0xe8;
          }
          else {
            iVar4 = (uVar27 - 0x10) * 0x120;
            if (*(char *)((int)puVar10 + iVar4 + 0x3696) == '\0') {
              uRam00000028 = uVar9;
              uRam0000002c = uVar27;
              iRam00000030 = iVar11;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar10;
            }
            if (*(byte *)(puVar10 + (uVar27 - 0x10) * 0x48 + 0xd9e) != uVar9) {
              uRam00000028 = uVar9;
              uRam0000002c = uVar27;
              iRam00000030 = iVar11;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar10;
            }
            if (iVar11 == 0 && iVar18 == 0) {
              uRam00000028 = uVar9;
              uRam0000002c = uVar27;
              iRam00000030 = iVar11;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar10;
            }
            iVar4 = iVar4 + 14000;
          }
          iVar4 = iVar4 + (int)puVar10;
          if (((*(int *)(iVar4 + 0xd8) == iVar11) && (*(int *)(iVar4 + 0xdc) == iVar18)) &&
             ((*(uint *)(iVar4 + 0xe4) & 0xff00ff) == 0x100ff)) {
            iVar26 = 0;
            if (uVar9 != 1) {
              iVar26 = (uVar9 != 2) + 1;
            }
            iVar22 = *(int *)(iVar4 + 0x44);
            uRam00000028 = uVar9;
            uRam0000002c = uVar27;
            iRam00000030 = iVar11;
            _DAT_ram_00000034 = iVar18;
            uStack_d4 = uVar25;
            iStack_cc = iVar20;
            uStack_c8 = uVar12;
            iStack_c4 = param_4;
            iStack_c0 = iVar23;
            puStack_bc = puVar13;
            puStack_b8 = puVar7;
            uStack_b4 = uVar3;
            if (iVar22 == puVar10[iVar26 * 0x48a + 0x486]) {
              cVar16 = *(char *)(iVar4 + 0x50);
              iVar23 = *(int *)(iVar4 + 0x3c);
              if (((cVar16 == '\0') && (iVar23 == 0)) || (-iVar23 < 1)) {
                if ((code *)puVar10[0xfde] != (code *)0x0) {
                  puVar13 = (undefined4 *)(*(code *)puVar10[0xfde])(puVar10[0xfdf],iVar4,0);
                  iVar23 = 1;
                  if (uVar9 != 2) {
                    iVar23 = (uint)(uVar9 == 4) << 1;
                  }
                  if (uVar27 < 0x10) {
                    iVar4 = iVar23 * 0x1228 + uVar27 * 0xe8;
                  }
                  else {
                    iVar4 = (uVar27 - 0x10) * 0x120;
                    if (*(char *)((int)puVar10 + iVar4 + 0x3696) == '\0') {
                      return puVar13;
                    }
                    if (*(byte *)(puVar10 + (uVar27 - 0x10) * 0x48 + 0xd9e) != uVar9) {
                      return puVar13;
                    }
                    iVar4 = iVar4 + 14000;
                  }
                  iVar4 = (int)puVar10 + iVar4;
                  if (*(int *)(iVar4 + 0xd8) != iVar11) {
                    return puVar13;
                  }
                  if (*(int *)(iVar4 + 0xdc) != iVar18) {
                    return puVar13;
                  }
                  if (*(char *)(iVar4 + 0xe6) != '\x01') {
                    return puVar13;
                  }
                  if (puVar13 != (undefined4 *)0x0) {
                    if (*(byte *)(iVar4 + 0xc) < 0x56) {
                      iVar23 = iVar26 * 0x48a + (uint)*(byte *)(iVar4 + 0xc);
                      if (puVar10[iVar23 + 0x426] != -1) {
                        puVar10[iVar23 + 0x426] = puVar10[iVar23 + 0x426] + 1;
                      }
                    }
                    if (puVar10[iVar26 * 0x48a + 0x425] != -1) {
                      puVar10[iVar26 * 0x48a + 0x425] = puVar10[iVar26 * 0x48a + 0x425] + 1;
                    }
                    iVar23 = 0;
                    cVar16 = '\b';
                    goto LAB_ram_4804731a;
                  }
                  iVar22 = *(int *)(iVar4 + 0x44);
                  iVar23 = *(int *)(iVar4 + 0x3c);
                  cVar16 = *(char *)(iVar4 + 0x50);
                }
                uStack_118 = *(undefined4 *)(iVar4 + 0x18);
                uStack_114 = *(undefined4 *)(iVar4 + 0x1c);
                uStack_110 = *(undefined4 *)(iVar4 + 0x20);
                uStack_10c = *(undefined4 *)(iVar4 + 0x24);
                uStack_108 = *(undefined4 *)(iVar4 + 0x28);
                uStack_104 = *(undefined4 *)(iVar4 + 0x2c);
                uStack_100 = *(undefined4 *)(iVar4 + 0x30);
                uStack_120 = *(undefined4 *)(iVar4 + 0x10);
                uStack_11c = *(undefined4 *)(iVar4 + 0x14);
                aiStack_e4[0] = 0;
                cStack_e5 = '\b';
                puVar13 = (undefined4 *)
                          FUN_ram_48046098(0x3000,&uStack_120,*(undefined1 *)(iVar4 + 0x48),
                                           *(undefined1 *)(iVar4 + 0x37),
                                           *(undefined1 *)(iVar4 + 0x34),
                                           *(undefined1 *)(iVar4 + 0x35),iVar22,aiStack_e4,
                                           &cStack_e5,iVar23,cVar16,*(undefined1 *)(iVar4 + 0x36),0)
                ;
                if ((puVar13 == (undefined4 *)0x0) || (aiStack_e4[0] == 0)) {
                  if ((byte)(cStack_e5 - 3U) < 3) {
                    return puVar13;
                  }
                  if (cStack_e5 == '\a') {
                    return puVar13;
                  }
                  if (puVar10[iVar26 * 0x48a + 0x425] != -1) {
                    puVar10[iVar26 * 0x48a + 0x425] = puVar10[iVar26 * 0x48a + 0x425] + 1;
                  }
                  if (cStack_e5 == '\0') {
                    puVar13 = (undefined4 *)0x6;
                    cVar16 = '\b';
                  }
                  else {
                    puVar13 = (undefined4 *)0x3;
                    cVar16 = cStack_e5;
                    if (cStack_e5 != '\t') {
                      puVar13 = (undefined4 *)((cStack_e5 != '\n') + 5);
                    }
                  }
                  iVar23 = 0;
                }
                else {
                  DAT_ram_00000120 = 1;
                  if (puVar10[iVar26 * 0x48a + 0x424] != -1) {
                    puVar10[iVar26 * 0x48a + 0x424] = puVar10[iVar26 * 0x48a + 0x424] + 1;
                  }
                  cVar16 = '\0';
                  puVar13 = (undefined4 *)0x7;
                  iVar23 = aiStack_e4[0];
                }
              }
              else {
                if (puVar10[iVar26 * 0x48a + 0x423] != -1) {
                  puVar10[iVar26 * 0x48a + 0x423] = puVar10[iVar26 * 0x48a + 0x423] + 1;
                }
                iVar23 = 0;
                cVar16 = '\t';
                puVar13 = (undefined4 *)0x3;
              }
            }
            else {
              cVar16 = '\n';
              puVar13 = (undefined4 *)0x5;
              iVar23 = 0;
            }
LAB_ram_4804731a:
            puVar13 = (undefined4 *)FUN_ram_4804691a(puVar10,uVar9,uVar27,puVar13,cVar16,iVar23);
            return puVar13;
          }
        }
        uRam00000028 = uVar9;
        uRam0000002c = uVar27;
        iRam00000030 = iVar11;
        _DAT_ram_00000034 = iVar18;
        return puVar10;
      }
      puVar10 = (undefined4 *)puVar7[2];
      uVar8 = puVar7[3];
      uVar24 = puVar7[4];
      uVar29 = puVar7[5];
      *(undefined4 **)(iVar4 + 0x36a0) = puVar10;
      *(undefined4 *)(iVar4 + 0x36a4) = uVar8;
      *(undefined4 *)(iVar4 + 0x36a8) = uVar24;
      *(undefined4 *)(iVar4 + 0x36ac) = uVar29;
    }
    uVar1 = *(undefined1 *)((int)puVar13 + 0x1d);
  }
  FUN_ram_48046718(uVar12,uVar1,uVar25);
  if (uVar9 != 0xff) {
    iVar20 = iVar23 * 0x1228 + uVar12;
    iVar23 = *(int *)(iVar20 + 0x1084);
    if (iVar23 != -1) {
      *(int *)(iVar20 + 0x1084) = iVar23 + 1;
    }
  }
  return puVar7;
}


