/* Firmware entry: 0x48046718 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_48046718(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  char cVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  uint uVar28;
  byte bVar29;
  undefined4 uVar30;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  char cStack_125;
  int aiStack_124 [4];
  uint uStack_114;
  undefined4 *puStack_110;
  int iStack_10c;
  undefined4 *puStack_108;
  uint uStack_104;
  int iStack_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  undefined4 uStack_f4;
  undefined4 auStack_98 [16];
  undefined1 auStack_34 [16];
  char cStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar20 = 2;
  if (param_2 == (undefined4 *)0x2) {
    iVar20 = 1;
LAB_ram_48046736:
    bVar29 = 0x17;
    if (param_3 < 0x18) {
      if (param_3 < 0x10) {
        puVar10 = param_1 + param_3 * 0x3a + iVar20 * 0x48a;
        cVar15 = *(char *)((int)puVar10 + 0x51);
joined_r0x48046842:
        if ((cVar15 == '\0') && (*(char *)(puVar10 + 0xe) != '\x01')) {
          if (*(char *)((int)puVar10 + 10) == '\0') {
            return param_1;
          }
          puVar7 = (undefined4 *)FUN_ram_48040862(auStack_34);
          if (cStack_24 != '\x02') {
            return puVar7;
          }
        }
        puVar7 = param_1 + 0x92c;
        iVar20 = 0;
        uVar21 = 0;
LAB_ram_480467a4:
        do {
          iVar4 = 1;
          if (param_2 != (undefined4 *)0x2) {
            iVar4 = (uint)(param_2 == (undefined4 *)0x4) << 1;
          }
          if (uVar21 < 0x10) {
            puVar16 = (undefined4 *)(iVar4 * 0x1228 + iVar20 + (int)param_1);
            if (param_3 == uVar21) {
              iVar20 = iVar20 + 0xe8;
              puVar7 = puVar7 + 0x48;
              uVar21 = param_3 + 1 & 0xff;
              goto LAB_ram_480467a4;
            }
            if ((puVar16[0x39] & 0xffff00) != 0x1ff00) {
              uVar21 = uVar21 + 1 & 0xff;
              iVar20 = iVar20 + 0xe8;
              puVar7 = puVar7 + 0x48;
              goto LAB_ram_480467a4;
            }
LAB_ram_480467d0:
            if (((((*(char *)((int)puVar16 + 0x51) != '\0') || (*(char *)(puVar16 + 0xe) == '\x01'))
                 || ((uVar12 = (uint)*(byte *)((int)puVar16 + 10), uVar12 != 0 &&
                     ((uVar12 < 0x14 && ((0x80240U >> (uVar12 & 0x1f) & 1) != 0)))))) &&
                (*(char *)((int)puVar16 + 0x1d) == *(char *)((int)puVar10 + 0x1d))) &&
               ((*(short *)(puVar16 + 2) == *(short *)(puVar10 + 2) &&
                (((*(char *)((int)puVar16 + 0x35) == '\x04' &&
                  (*(char *)((int)puVar10 + 0x35) == '\x04')) ||
                 (*(char *)(puVar16 + 0xd) == *(char *)(puVar10 + 0xd))))))) {
              *(char *)(puVar10 + 0x39) = (char)uVar21;
              *(char *)((int)puVar16 + 0xe5) = (char)param_3;
              return (undefined4 *)0x1ff00;
            }
          }
          else if ((((*(char *)((int)puVar7 + -0x1a) != '\0') &&
                    ((undefined4 *)(uint)*(byte *)(puVar7 + -0xe) == param_2)) &&
                   (param_3 != uVar21)) && (puVar16 = puVar7, (puVar7[0x39] & 0xffff00) == 0x1ff00))
          goto LAB_ram_480467d0;
          uVar21 = uVar21 + 1 & 0xff;
          iVar20 = iVar20 + 0xe8;
          puVar7 = puVar7 + 0x48;
          if (uVar21 == 0x18) {
            return (undefined4 *)0x1ff00;
          }
        } while( true );
      }
      puVar10 = param_1 + (param_3 - 0x10) * 0x48;
      bVar29 = (byte)puVar10;
      param_4 = (uint)*(byte *)((int)puVar10 + 0x3696);
      if ((param_4 != 0) &&
         (bVar29 = *(byte *)(puVar10 + 0xd9e), (undefined4 *)(uint)bVar29 == param_2)) {
        puVar10 = param_1 + (param_3 - 0x10) * 0x48 + 0xdac;
        cVar15 = *(char *)((int)puVar10 + 0x51);
        goto joined_r0x48046842;
      }
    }
  }
  else {
    bVar29 = 4;
    if (param_2 == (undefined4 *)0x4) goto LAB_ram_48046736;
    if (param_2 == (undefined4 *)0x1) {
      iVar20 = 0;
      goto LAB_ram_48046736;
    }
  }
  uVar21 = (uint)DAT_ram_00000051;
  ebreak();
  iVar20 = 2;
  if (param_2 == (undefined4 *)0x2) {
    iVar20 = 1;
    puVar10 = param_1 + 0x48a;
  }
  else if (param_2 == (undefined4 *)0x4) {
    puVar10 = param_1 + 0x914;
  }
  else {
    if (param_2 != (undefined4 *)0x1) {
      return (undefined4 *)0x0;
    }
    iVar20 = 0;
    puVar10 = param_1;
  }
  if (0x17 < param_3) {
    return (undefined4 *)0x0;
  }
  if (param_3 < 0x10) {
    iVar4 = param_3 * 0xe8 + iVar20 * 0x1228;
  }
  else {
    iVar4 = (param_3 - 0x10) * 0x120;
    if (*(char *)((int)param_1 + iVar4 + 0x3696) == '\0') {
      return (undefined4 *)0x0;
    }
    if ((undefined4 *)(uint)*(byte *)(param_1 + (param_3 - 0x10) * 0x48 + 0xd9e) != param_2) {
      return (undefined4 *)0x0;
    }
    iVar4 = iVar4 + 14000;
  }
  puVar5 = (undefined1 *)(iVar4 + (int)param_1);
  if (puVar5[0xe6] != '\x01') {
    return (undefined4 *)0x0;
  }
  if (0x1f < *(byte *)((int)param_1 + iVar20 * 0x1228 + 0x1221)) {
    if (puVar10[0x485] == -1) {
      return (undefined4 *)0x0;
    }
    puVar10[0x485] = puVar10[0x485] + 1;
    return (undefined4 *)0x0;
  }
  puVar10 = (undefined4 *)(uint)(byte)puVar5[0xe4];
  if (puVar10 != (undefined4 *)0xff) {
    if (param_2 == (undefined4 *)0x2) {
      puVar7 = (undefined4 *)0x1;
      if (puVar10 < (undefined4 *)0x18) goto LAB_ram_48046a1e;
      puVar7 = (undefined4 *)0x1;
    }
    else {
      if (param_2 == (undefined4 *)0x4) {
        puVar7 = (undefined4 *)0x2;
      }
      else {
        puVar7 = (undefined4 *)0x0;
      }
      if (puVar10 < (undefined4 *)0x18) {
LAB_ram_48046a1e:
        if (puVar10 < (undefined4 *)0x10) {
          puVar7 = (undefined4 *)((int)puVar7 * 0x1228 + (int)puVar10 * 0xe8);
        }
        else {
          puVar7 = (undefined4 *)((int)(puVar10 + -4) * 0x120);
          puVar16 = param_1 + (int)(puVar10 + -4) * 0x48;
          puVar10 = puVar16 + 0xc00;
          if ((*(char *)((int)puVar16 + 0x3696) == '\0') ||
             (puVar10 = (undefined4 *)(uint)*(byte *)(puVar16 + 0xd9e), puVar10 != param_2))
          goto LAB_ram_48046c44;
          puVar7 = puVar7 + 0xdac;
        }
        *(undefined1 *)((int)puVar7 + (int)param_1 + 0xe5) = puVar5[0xe5];
        goto LAB_ram_48046a58;
      }
    }
LAB_ram_48046c44:
    DAT_ram_000000e5 = 0;
    ebreak();
LAB_ram_48046c4a:
    puVar7 = (undefined4 *)((int)puVar7 * 0x1228 + (int)puVar10 * 0xe8);
LAB_ram_48046aae:
    *(undefined1 *)((int)puVar7 + (int)param_1 + 0xe4) = puVar5[0xe4];
LAB_ram_48046ab6:
    *(undefined2 *)(puVar5 + 0xe4) = 0xffff;
    puVar10 = &DAT_ram_48222eb8;
    puVar7 = auStack_98;
    do {
      puVar17 = puVar7;
      puVar16 = puVar10;
      uVar3 = puVar16[1];
      uVar26 = puVar16[2];
      uVar8 = puVar16[3];
      *puVar17 = *puVar16;
      puVar17[1] = uVar3;
      puVar17[2] = uVar26;
      puVar17[3] = uVar8;
      puVar10 = puVar16 + 4;
      puVar7 = puVar17 + 4;
    } while (puVar16 + 4 != &DAT_ram_48222ee8);
    uVar3 = puVar16[5];
    puVar17[4] = DAT_ram_48222ee8;
    puVar17[5] = uVar3;
    FUN_ram_4ff45158(puVar5 + 0xa0,auStack_98,0x35);
    puVar5[0xa0] = (char)param_4;
    puVar5[0xac] = bVar29;
    *(uint *)(puVar5 + 0xa8) = uVar21;
    puVar5[0xb4] = uVar21 != 0;
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
    puVar5[0xcf] = puVar5[7];
    puVar5[0xd0] = puVar5[8];
    puVar5[0xd1] = puVar5[9];
    puVar5[0xd2] = puVar5[10];
    puVar5[0xd4] = puVar5[0x51];
    puVar5[0xe6] = 2;
    bVar29 = *(byte *)((int)param_1 + iVar20 * 0x1228 + 0x1221);
    uVar30 = *(undefined4 *)(puVar5 + 0xb8);
    uVar26 = *(undefined4 *)(puVar5 + 0xbc);
    uVar3 = *(undefined4 *)(puVar5 + 0xc0);
    uVar8 = *(undefined4 *)(puVar5 + 0xc4);
    puVar10 = param_1 + iVar20 * 0x48a +
                        (((uint)*(byte *)(param_1 + iVar20 * 0x48a + 0x488) + (uint)bVar29 & 0x1f) +
                        0xe8) * 4;
    param_1[iVar20 * 0x48a + 0x487] = ~(1 << (param_3 & 0x1f)) & param_1[iVar20 * 0x48a + 0x487];
    *puVar10 = uVar30;
    puVar10[1] = uVar26;
    puVar10[2] = uVar3;
    puVar10[3] = uVar8;
    *(byte *)((int)param_1 + iVar20 * 0x1228 + 0x1221) = bVar29 + 1;
    return (undefined4 *)0x1;
  }
LAB_ram_48046a58:
  uVar2 = DAT_ram_48222f9c;
  uVar30 = DAT_ram_48222f98;
  uVar26 = DAT_ram_48222f94;
  uVar8 = DAT_ram_48222f90;
  uVar3 = DAT_ram_48222f8c;
  puVar10 = (undefined4 *)(uint)(byte)puVar5[0xe5];
  if (puVar10 == (undefined4 *)0xff) goto LAB_ram_48046ab6;
  puVar7 = (undefined4 *)0x1;
  if (param_2 != (undefined4 *)0x2) {
    puVar7 = (undefined4 *)((uint)(param_2 == (undefined4 *)0x4) << 1);
  }
  puVar16 = (undefined4 *)&DAT_ram_00000017;
  if (puVar10 < (undefined4 *)0x18) {
    if (puVar10 < (undefined4 *)0x10) goto LAB_ram_48046c4a;
    puVar7 = (undefined4 *)((int)(puVar10 + -4) * 0x120);
    puVar17 = param_1 + (int)(puVar10 + -4) * 0x48;
    puVar10 = puVar17 + 0xc00;
    puVar16 = (undefined4 *)(uint)*(byte *)((int)puVar17 + 0x3696);
    if ((puVar16 != (undefined4 *)0x0) &&
       (puVar10 = (undefined4 *)(uint)*(byte *)(puVar17 + 0xd9e), puVar10 == param_2)) {
      puVar7 = puVar7 + 0xdac;
      goto LAB_ram_48046aae;
    }
  }
  DAT_ram_000000e4 = 0;
  ebreak();
  cVar15 = *(char *)((int)puVar7 + 0x1d);
  *puVar16 = DAT_ram_48222f88;
  puVar16[5] = uVar2;
  puVar16[1] = uVar3;
  puVar16[2] = uVar8;
  puVar16[3] = uVar26;
  puVar16[4] = uVar30;
  iVar20 = 2;
  if (cVar15 == '\x02') {
    iVar20 = 1;
  }
  else if ((cVar15 != '\x04') && (iVar20 = 0, cVar15 != '\x01')) {
    return puVar16;
  }
  if ((((8 < *(byte *)(puVar7 + 5)) || (0x7ff < (uint)puVar7[4])) || (puVar7[0x10] == 0)) ||
     (3 < (byte)(*(char *)((int)puVar7 + 0x37) - 1U))) {
    if (puVar10[iVar20 * 0x48a + 0x47e] != -1) {
      puVar10[iVar20 * 0x48a + 0x47e] = puVar10[iVar20 * 0x48a + 0x47e] + 1;
      return puVar16;
    }
    return puVar16;
  }
  if (((puVar7[4] == 0x3fd) || (uVar21 = (uint)*(byte *)((int)puVar7 + 0x35), uVar21 == 1)) ||
     (*(char *)((int)puVar7 + 0x37) == '\x04')) {
    if (puVar10[iVar20 * 0x48a + 0x47d] != -1) {
      puVar10[iVar20 * 0x48a + 0x47d] = puVar10[iVar20 * 0x48a + 0x47d] + 1;
      return puVar16;
    }
    return puVar16;
  }
  if ((((puVar7[0xd] & 0xff00ff) != 0x1000e) || (((uint)puVar7[10] >> 8 & 1) == 0)) &&
     ((uVar12 = FUN_ram_48040c40(puVar7 + 4), uVar12 != 0 && (uVar21 != uVar12)))) {
    if (puVar10[iVar20 * 0x48a + 0x47f] != -1) {
      puVar10[iVar20 * 0x48a + 0x47f] = puVar10[iVar20 * 0x48a + 0x47f] + 1;
      return puVar16;
    }
    return puVar16;
  }
  iVar4 = puVar7[0x11];
  if ((iVar4 == 0) || (puVar17 = puVar10 + iVar20 * 0x48a, iVar4 != puVar17[0x486])) {
    if (puVar10[iVar20 * 0x48a + 0x480] != -1) {
      puVar10[iVar20 * 0x48a + 0x480] = puVar10[iVar20 * 0x48a + 0x480] + 1;
      return puVar16;
    }
    return puVar16;
  }
  if (puVar17[0x485] != 0) {
    return puVar16;
  }
  if (param_4 == 0) {
    if (*(char *)((int)puVar7 + 0x51) != '\0') {
      return puVar16;
    }
    if (*(char *)((int)puVar7 + 0x52) != '\0') {
      return puVar16;
    }
    uVar12 = 0xff;
    uVar21 = 0xff;
    uVar28 = 0;
    bVar29 = 0;
    do {
      if (*(char *)((int)puVar17 + 0xe6) == '\0') {
        if (uVar21 == 0xff) {
          uVar21 = uVar28;
        }
      }
      else if (*(char *)((int)puVar17 + 0xe6) == '\x01') {
        if (*(char *)(puVar17 + 0xe) == *(char *)(puVar7 + 0xe)) {
          bVar29 = bVar29 + 1;
        }
        iVar4 = FUN_ram_480465d0(puVar17,puVar7);
        if (iVar4 != 0) {
          uVar12 = uVar28;
        }
      }
      uVar28 = uVar28 + 1 & 0xff;
      puVar17 = puVar17 + 0x3a;
    } while (uVar28 != 0x10);
    if (uVar21 == 0xff) {
      if (puVar10[iVar20 * 0x48a + 0x484] != -1) {
        puVar10[iVar20 * 0x48a + 0x484] = puVar10[iVar20 * 0x48a + 0x484] + 1;
        return puVar16;
      }
      return puVar16;
    }
    if (uVar12 != 0xff) {
      puStack_110 = (undefined4 *)FUN_ram_48046460(puVar10,cVar15,uVar21);
      if ((puStack_110[0x36] == -1) && (puStack_110[0x37] == -1)) {
        return puVar16;
      }
      uVar3 = 0x48046fea;
      iVar4 = FUN_ram_4804691a(puVar10,cVar15,uVar12,1,8,0);
      if (iVar4 == 0) {
        return puVar16;
      }
      goto LAB_ram_48046ff0;
    }
    if (7 < bVar29) {
      if (*(char *)(puVar7 + 0xe) != '\x01') {
        return puVar16;
      }
      if (puVar10[iVar20 * 0x48a + 0x422] != -1) {
        puVar10[iVar20 * 0x48a + 0x422] = puVar10[iVar20 * 0x48a + 0x422] + 1;
        return puVar16;
      }
      return puVar16;
    }
  }
  else {
    if (2 < (byte)(*(char *)((int)puVar7 + 0x52) - 1U)) {
      return puVar16;
    }
    cVar6 = '\0';
    pbVar11 = (byte *)(puVar7 + 0x16);
    do {
      uVar12 = (uint)*pbVar11;
      iVar23 = *(int *)(pbVar11 + 8);
      iVar14 = *(int *)(pbVar11 + 0xc);
      if (7 < uVar12) {
        return puVar16;
      }
      if (iVar23 == 0 && iVar14 == 0) {
        return puVar16;
      }
      iVar18 = uVar12 * 0x120;
      if (*(char *)((int)puVar10 + iVar18 + 0x3696) == '\0') {
        return puVar16;
      }
      if (puVar10[uVar12 * 0x48 + 0xda2] != iVar23) {
        return puVar16;
      }
      if (puVar10[uVar12 * 0x48 + 0xda3] != iVar14) {
        return puVar16;
      }
      if (*(char *)(puVar10 + uVar12 * 0x48 + 0xda6) != '\0') {
        return puVar16;
      }
      if (*(char *)((int)puVar10 + iVar18 + 0x3697) == '\0') {
        return puVar16;
      }
      if ((puVar10[uVar12 * 0x48 + 0xdaa] != 0 || puVar10[uVar12 * 0x48 + 0xdab] != 0) &&
         (*(char *)((int)puVar10 + iVar18 + 0x36a1) != -1)) {
        return puVar16;
      }
      if (*(int *)(pbVar11 + 0x10) != puVar10[uVar12 * 0x48 + 0xda4]) {
        return puVar16;
      }
      if (*(char *)(puVar10 + uVar12 * 0x48 + 0xd9e) != cVar15) {
        return puVar16;
      }
      if (iVar4 != puVar10[uVar12 * 0x48 + 0xda1]) {
        return puVar16;
      }
      if (*(short *)(puVar10 + uVar12 * 0x48 + 0xd9f) != *(short *)(puVar7 + 2)) {
        return puVar16;
      }
      if (((uVar21 != 4) || (*(char *)((int)puVar10 + uVar12 * 0x120 + 0x367a) != '\x04')) &&
         ((puVar10[uVar12 * 0x48 + 0xd9e] & 0xffffff) >> 8 != (uint)*(ushort *)(puVar7 + 0xd))) {
        return puVar16;
      }
      pbVar13 = (byte *)(puVar7 + 0x16);
      for (cVar19 = '\0'; cVar19 != cVar6; cVar19 = cVar19 + '\x01') {
        if (((*pbVar13 == uVar12) && (*(int *)(pbVar13 + 8) == iVar23)) &&
           (*(int *)(pbVar13 + 0xc) == iVar14)) {
          return puVar16;
        }
        pbVar13 = pbVar13 + 0x18;
      }
      cVar6 = cVar19 + '\x01';
      pbVar11 = pbVar11 + 0x18;
    } while (*(char *)((int)puVar7 + 0x52) != cVar6);
    uVar21 = *(byte *)(puVar7 + 0x16) + 0x10 & 0xff;
    iVar4 = FUN_ram_48046460(puVar10,cVar15,uVar21);
    if (*(char *)(iVar4 + 0xe6) != '\0') {
      return puVar16;
    }
  }
  uVar3 = 0x480471c4;
  puStack_110 = (undefined4 *)FUN_ram_48046460(puVar10,cVar15,uVar21);
  if ((puStack_110[0x36] == -1) && (puStack_110[0x37] == -1)) {
    return puVar16;
  }
  uVar12 = 0xff;
LAB_ram_48046ff0:
  uVar28 = puStack_110[0x36] + 1;
  iVar4 = (uint)(uVar28 < (uint)puStack_110[0x36]) + puStack_110[0x37];
  puStack_110[0x36] = uVar28;
  puStack_110[0x37] = iVar4;
  puVar17 = puStack_110;
  puVar22 = puVar7;
  do {
    puVar9 = (undefined4 *)puVar22[1];
    uVar8 = puVar22[2];
    uVar26 = puVar22[3];
    *puVar17 = *puVar22;
    puVar17[1] = puVar9;
    puVar17[2] = uVar8;
    puVar17[3] = uVar26;
    puVar22 = puVar22 + 4;
    puVar17 = puVar17 + 4;
  } while (puVar22 != puVar7 + 0x28);
  if (*(char *)(puVar7 + 0xd) != '\x0e') {
    uVar3 = 0x48047046;
    puVar9 = (undefined4 *)FUN_ram_4ff22e6a(puVar7 + 4);
    if (puVar9 != (undefined4 *)0x0) {
      *(undefined1 *)((int)puStack_110 + 0x37) = 3;
    }
  }
  *(char *)((int)puStack_110 + 0x51) = (char)param_4;
  *(undefined1 *)((int)puStack_110 + 0xe6) = 1;
  puVar10[iVar20 * 0x48a + 0x487] = puVar10[iVar20 * 0x48a + 0x487] | 1 << (uVar21 & 0x1f);
  iVar23 = puVar10[0xfe0] + 1;
  if (iVar23 == 0) {
    iVar23 = 1;
  }
  puVar10[0xfe0] = iVar23;
  puStack_110[0x38] = iVar23;
  uVar1 = *(undefined1 *)((int)puVar7 + 0x1d);
  *(char *)((int)puVar16 + 9) = (char)uVar21;
  puVar16[4] = uVar28;
  puVar16[5] = iVar4;
  *(undefined1 *)(puVar16 + 2) = uVar1;
  *(undefined2 *)puVar16 = 1;
  if (param_4 != 0) {
    for (uVar28 = 0; uVar28 < *(byte *)((int)puVar7 + 0x52); uVar28 = uVar28 + 1 & 0xff) {
      uVar24 = (uint)*(byte *)(puVar7 + uVar28 * 6 + 0x16);
      if ((((7 < uVar24) || (puVar7[uVar28 * 6 + 0x18] == 0 && puVar7[uVar28 * 6 + 0x19] == 0)) ||
          (*(char *)((int)puVar10 + uVar24 * 0x120 + 0x3696) == '\0')) ||
         ((puVar10[uVar24 * 0x48 + 0xda2] != puVar7[uVar28 * 6 + 0x18] ||
          (puVar10[uVar24 * 0x48 + 0xda3] != puVar7[uVar28 * 6 + 0x19])))) {
        uVar12 = puVar16[2];
        uVar28 = puVar16[3];
        iVar14 = puVar16[4];
        iVar18 = puVar16[5];
        ebreak();
        DAT_ram_00000120 = 0;
        iVar23 = 2;
        if (uVar12 == 2) {
          iVar23 = 1;
        }
        else if ((uVar12 != 4) && (iVar23 = 0, uVar12 != 1)) {
          uRam00000028 = uVar12;
          uRam0000002c = uVar28;
          iRam00000030 = iVar14;
          _DAT_ram_00000034 = iVar18;
          DAT_ram_00000120 = 0;
          return puVar9;
        }
        if (uVar28 < 0x18) {
          if (uVar28 < 0x10) {
            if (iVar14 == 0 && iVar18 == 0) {
              uRam00000028 = uVar12;
              uRam0000002c = uVar28;
              iRam00000030 = iVar14;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar9;
            }
            iVar23 = iVar23 * 0x1228 + uVar28 * 0xe8;
          }
          else {
            iVar23 = (uVar28 - 0x10) * 0x120;
            if (*(char *)((int)puVar9 + iVar23 + 0x3696) == '\0') {
              uRam00000028 = uVar12;
              uRam0000002c = uVar28;
              iRam00000030 = iVar14;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar9;
            }
            if (*(byte *)(puVar9 + (uVar28 - 0x10) * 0x48 + 0xd9e) != uVar12) {
              uRam00000028 = uVar12;
              uRam0000002c = uVar28;
              iRam00000030 = iVar14;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar9;
            }
            if (iVar14 == 0 && iVar18 == 0) {
              uRam00000028 = uVar12;
              uRam0000002c = uVar28;
              iRam00000030 = iVar14;
              _DAT_ram_00000034 = iVar18;
              DAT_ram_00000120 = 0;
              return puVar9;
            }
            iVar23 = iVar23 + 14000;
          }
          iVar23 = iVar23 + (int)puVar9;
          if (((*(int *)(iVar23 + 0xd8) == iVar14) && (*(int *)(iVar23 + 0xdc) == iVar18)) &&
             ((*(uint *)(iVar23 + 0xe4) & 0xff00ff) == 0x100ff)) {
            iVar27 = 0;
            if (uVar12 != 1) {
              iVar27 = (uVar12 != 2) + 1;
            }
            iVar25 = *(int *)(iVar23 + 0x44);
            uRam00000028 = uVar12;
            uRam0000002c = uVar28;
            iRam00000030 = iVar14;
            _DAT_ram_00000034 = iVar18;
            uStack_114 = uVar21;
            iStack_10c = iVar4;
            puStack_108 = puVar10;
            uStack_104 = param_4;
            iStack_100 = iVar20;
            puStack_fc = puVar7;
            puStack_f8 = puVar16;
            uStack_f4 = uVar3;
            if (iVar25 == puVar9[iVar27 * 0x48a + 0x486]) {
              cVar15 = *(char *)(iVar23 + 0x50);
              iVar20 = *(int *)(iVar23 + 0x3c);
              if (((cVar15 == '\0') && (iVar20 == 0)) || (-iVar20 < 1)) {
                if ((code *)puVar9[0xfde] != (code *)0x0) {
                  puVar10 = (undefined4 *)(*(code *)puVar9[0xfde])(puVar9[0xfdf],iVar23,0);
                  iVar20 = 1;
                  if (uVar12 != 2) {
                    iVar20 = (uint)(uVar12 == 4) << 1;
                  }
                  if (uVar28 < 0x10) {
                    iVar23 = iVar20 * 0x1228 + uVar28 * 0xe8;
                  }
                  else {
                    iVar23 = (uVar28 - 0x10) * 0x120;
                    if (*(char *)((int)puVar9 + iVar23 + 0x3696) == '\0') {
                      return puVar10;
                    }
                    if (*(byte *)(puVar9 + (uVar28 - 0x10) * 0x48 + 0xd9e) != uVar12) {
                      return puVar10;
                    }
                    iVar23 = iVar23 + 14000;
                  }
                  iVar23 = (int)puVar9 + iVar23;
                  if (*(int *)(iVar23 + 0xd8) != iVar14) {
                    return puVar10;
                  }
                  if (*(int *)(iVar23 + 0xdc) != iVar18) {
                    return puVar10;
                  }
                  if (*(char *)(iVar23 + 0xe6) != '\x01') {
                    return puVar10;
                  }
                  if (puVar10 != (undefined4 *)0x0) {
                    if (*(byte *)(iVar23 + 0xc) < 0x56) {
                      iVar20 = iVar27 * 0x48a + (uint)*(byte *)(iVar23 + 0xc);
                      if (puVar9[iVar20 + 0x426] != -1) {
                        puVar9[iVar20 + 0x426] = puVar9[iVar20 + 0x426] + 1;
                      }
                    }
                    if (puVar9[iVar27 * 0x48a + 0x425] != -1) {
                      puVar9[iVar27 * 0x48a + 0x425] = puVar9[iVar27 * 0x48a + 0x425] + 1;
                    }
                    iVar20 = 0;
                    cVar15 = '\b';
                    goto LAB_ram_4804731a;
                  }
                  iVar25 = *(int *)(iVar23 + 0x44);
                  iVar20 = *(int *)(iVar23 + 0x3c);
                  cVar15 = *(char *)(iVar23 + 0x50);
                }
                uStack_158 = *(undefined4 *)(iVar23 + 0x18);
                uStack_154 = *(undefined4 *)(iVar23 + 0x1c);
                uStack_150 = *(undefined4 *)(iVar23 + 0x20);
                uStack_14c = *(undefined4 *)(iVar23 + 0x24);
                uStack_148 = *(undefined4 *)(iVar23 + 0x28);
                uStack_144 = *(undefined4 *)(iVar23 + 0x2c);
                uStack_140 = *(undefined4 *)(iVar23 + 0x30);
                uStack_160 = *(undefined4 *)(iVar23 + 0x10);
                uStack_15c = *(undefined4 *)(iVar23 + 0x14);
                aiStack_124[0] = 0;
                cStack_125 = '\b';
                puVar10 = (undefined4 *)
                          FUN_ram_48046098(0x3000,&uStack_160,*(undefined1 *)(iVar23 + 0x48),
                                           *(undefined1 *)(iVar23 + 0x37),
                                           *(undefined1 *)(iVar23 + 0x34),
                                           *(undefined1 *)(iVar23 + 0x35),iVar25,aiStack_124,
                                           &cStack_125,iVar20,cVar15,*(undefined1 *)(iVar23 + 0x36),
                                           0);
                if ((puVar10 == (undefined4 *)0x0) || (aiStack_124[0] == 0)) {
                  if ((byte)(cStack_125 - 3U) < 3) {
                    return puVar10;
                  }
                  if (cStack_125 == '\a') {
                    return puVar10;
                  }
                  if (puVar9[iVar27 * 0x48a + 0x425] != -1) {
                    puVar9[iVar27 * 0x48a + 0x425] = puVar9[iVar27 * 0x48a + 0x425] + 1;
                  }
                  if (cStack_125 == '\0') {
                    puVar10 = (undefined4 *)0x6;
                    cVar15 = '\b';
                  }
                  else {
                    puVar10 = (undefined4 *)0x3;
                    cVar15 = cStack_125;
                    if (cStack_125 != '\t') {
                      puVar10 = (undefined4 *)((cStack_125 != '\n') + 5);
                    }
                  }
                  iVar20 = 0;
                }
                else {
                  DAT_ram_00000120 = 1;
                  if (puVar9[iVar27 * 0x48a + 0x424] != -1) {
                    puVar9[iVar27 * 0x48a + 0x424] = puVar9[iVar27 * 0x48a + 0x424] + 1;
                  }
                  cVar15 = '\0';
                  puVar10 = (undefined4 *)0x7;
                  iVar20 = aiStack_124[0];
                }
              }
              else {
                if (puVar9[iVar27 * 0x48a + 0x423] != -1) {
                  puVar9[iVar27 * 0x48a + 0x423] = puVar9[iVar27 * 0x48a + 0x423] + 1;
                }
                iVar20 = 0;
                cVar15 = '\t';
                puVar10 = (undefined4 *)0x3;
              }
            }
            else {
              cVar15 = '\n';
              puVar10 = (undefined4 *)0x5;
              iVar20 = 0;
            }
LAB_ram_4804731a:
            puVar10 = (undefined4 *)FUN_ram_4804691a(puVar9,uVar12,uVar28,puVar10,cVar15,iVar20);
            return puVar10;
          }
        }
        uRam00000028 = uVar12;
        uRam0000002c = uVar28;
        iRam00000030 = iVar14;
        _DAT_ram_00000034 = iVar18;
        return puVar9;
      }
      puVar9 = (undefined4 *)puVar16[2];
      uVar8 = puVar16[3];
      uVar26 = puVar16[4];
      uVar30 = puVar16[5];
      puVar10[uVar24 * 0x48 + 0xda8] = puVar9;
      puVar10[uVar24 * 0x48 + 0xda9] = uVar8;
      puVar10[uVar24 * 0x48 + 0xdaa] = uVar26;
      puVar10[uVar24 * 0x48 + 0xdab] = uVar30;
    }
    uVar1 = *(undefined1 *)((int)puVar7 + 0x1d);
  }
  FUN_ram_48046718(puVar10,uVar1,uVar21);
  if ((uVar12 != 0xff) && (puVar10[iVar20 * 0x48a + 0x421] != -1)) {
    puVar10[iVar20 * 0x48a + 0x421] = puVar10[iVar20 * 0x48a + 0x421] + 1;
  }
  return puVar16;
}


