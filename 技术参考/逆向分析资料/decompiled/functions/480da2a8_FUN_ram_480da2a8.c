/* Firmware entry: 0x480da2a8 */

void FUN_ram_480da2a8(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  int *piVar15;
  byte bVar16;
  ushort uVar17;
  uint *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  uint local_c4 [8];
  int iStack_a4;
  char cStack_30;
  char cStack_2e;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar16 = *(byte *)(param_2 + 1);
  cVar3 = *(char *)((int)param_2 + 0xd);
  if (bVar16 < 4) {
    if (cVar3 != '\x01') {
      return;
    }
    iVar2 = *param_2;
    if (iVar2 == 0x346) {
      if (bVar16 == 0) {
        return;
      }
LAB_ram_480da4c2:
      bVar16 = *(byte *)((int)param_2 + 5);
      FUN_ram_4ff3ec14(param_1[2],0xffffffff);
      *(byte *)(param_1[1] + 0x7f4) = bVar16 >> 4 & 7;
      iVar2 = param_1[2];
      *(int *)(param_1[1] + 0x7f8) = param_3;
      goto LAB_ram_480da750;
    }
    if (iVar2 == 0x118) {
      if (bVar16 != 3) {
        return;
      }
LAB_ram_480da3fe:
      iVar2 = *param_1;
      bVar16 = *(byte *)((int)param_2 + 7) >> 5;
      *(byte *)((int)param_1 + 0x28d) = bVar16;
      *(byte *)((int)param_1 + 0x2c5) = bVar16;
      param_1[0xa4] = param_3;
      param_1[0xb3] = param_3;
      *(undefined1 *)((int)param_1 + 0x2c7) = 1;
      FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
      puVar18 = (uint *)(iVar2 + 0xb38);
      puVar13 = local_c4;
      do {
        uVar6 = puVar18[1];
        uVar8 = puVar18[2];
        uVar11 = puVar18[3];
        *puVar13 = *puVar18;
        puVar13[1] = uVar6;
        puVar13[2] = uVar8;
        puVar13[3] = uVar11;
        puVar18 = puVar18 + 4;
        puVar13 = puVar13 + 4;
      } while (puVar18 != (uint *)(iVar2 + 0xbd8));
      *puVar13 = *puVar18;
      FUN_ram_4ff3ee10(iVar2 + 0xb18);
      FUN_ram_4809ec88(param_1,local_c4);
      return;
    }
  }
  else {
    if (cVar3 == '\x02') {
      if (*param_2 != 0x678) {
        return;
      }
      param_1[0xba] = param_3;
      *(undefined1 *)((int)param_1 + 0x2d2) = 1;
      bVar16 = *(byte *)(param_2 + 2);
      *(byte *)((int)param_1 + 0x2d5) = bVar16 & 0xf;
      if ((bVar16 & 0xf) == 1) {
        bVar16 = *(byte *)((int)param_1 + 0x2da);
        if (bVar16 < 3) {
          bVar16 = bVar16 + 1;
        }
        *(byte *)((int)param_1 + 0x2da) = bVar16;
        *(undefined1 *)(param_1 + 0xb7) = 0;
      }
      else {
        bVar16 = *(byte *)(param_1 + 0xb7);
        *(undefined1 *)((int)param_1 + 0x2da) = 0;
        if (bVar16 < 3) {
          bVar16 = bVar16 + 1;
        }
        *(byte *)(param_1 + 0xb7) = bVar16;
      }
LAB_ram_480da596:
      iVar2 = *param_1;
      FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
      puVar18 = (uint *)(iVar2 + 0xb38);
      puVar13 = local_c4;
      do {
        uVar6 = puVar18[1];
        uVar8 = puVar18[2];
        uVar11 = puVar18[3];
        *puVar13 = *puVar18;
        puVar13[1] = uVar6;
        puVar13[2] = uVar8;
        puVar13[3] = uVar11;
        puVar18 = puVar18 + 4;
        puVar13 = puVar13 + 4;
      } while (puVar18 != (uint *)(iVar2 + 0xbd8));
      *puVar13 = *puVar18;
      FUN_ram_4ff3ee10(iVar2 + 0xb18);
      FUN_ram_4809ec88(param_1,local_c4);
      return;
    }
    if (cVar3 == '\x04') {
      if (*param_2 == 0x255) {
        param_1[0xb8] = param_3;
        *(undefined1 *)(param_1 + 0xb4) = 1;
        *(byte *)((int)param_1 + 0x2d3) = *(byte *)(param_2 + 2) & 3;
        bVar16 = *(byte *)(param_2 + 2) >> 2 & 0x1f;
        *(byte *)(param_1 + 0xb5) = bVar16;
        if (bVar16 == 1) {
          bVar16 = *(byte *)((int)param_1 + 0x2db);
          if (bVar16 < 3) {
            bVar16 = bVar16 + 1;
          }
          *(byte *)((int)param_1 + 0x2db) = bVar16;
          bVar16 = 0;
        }
        else {
          bVar16 = *(byte *)((int)param_1 + 0x2dd);
          *(undefined1 *)((int)param_1 + 0x2db) = 0;
          if (bVar16 < 3) {
            bVar16 = bVar16 + 1;
          }
        }
        *(byte *)((int)param_1 + 0x2dd) = bVar16;
        *(byte *)((int)param_1 + 0x2d6) = *(byte *)((int)param_2 + 7) & 1;
        *(byte *)((int)param_1 + 0x2d7) = *(byte *)((int)param_2 + 7) >> 1 & 1;
      }
      else {
        if (*param_2 != 299) {
          return;
        }
        param_1[0xb9] = param_3;
        *(undefined1 *)((int)param_1 + 0x2d1) = 1;
        *(byte *)(param_1 + 0xb6) = *(byte *)((int)param_2 + 7) >> 6;
        *(byte *)((int)param_1 + 0x2d9) = *(byte *)(param_2 + 2) & 1;
      }
      goto LAB_ram_480da596;
    }
    if (cVar3 != '\x01') {
      return;
    }
    iVar2 = *param_2;
    if (iVar2 == 0x346) goto LAB_ram_480da4c2;
    if (iVar2 == 0x118) goto LAB_ram_480da3fe;
  }
  if (iVar2 == 0x399) {
    FUN_ram_480d8f08(param_1,param_2,param_3);
    FUN_ram_480d9a80(param_1,param_2,param_3,0);
    if ((char)param_2[1] == '\0') {
      return;
    }
    iVar2 = *param_1;
    uVar4 = FUN_ram_48025ba6();
    uVar5 = FUN_ram_48025b94();
    FUN_ram_480c6116(iVar2,uVar4,uVar5);
    return;
  }
  if (iVar2 == 0x449) {
    iVar2 = *param_1;
    FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
    puVar18 = (uint *)(iVar2 + 0xb38);
    puVar13 = local_c4;
    do {
      uVar6 = puVar18[1];
      uVar8 = puVar18[2];
      uVar11 = puVar18[3];
      *puVar13 = *puVar18;
      puVar13[1] = uVar6;
      puVar13[2] = uVar8;
      puVar13[3] = uVar11;
      puVar18 = puVar18 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar18 != (uint *)(iVar2 + 0xbd8));
    *puVar13 = *puVar18;
    FUN_ram_4ff3ee10(iVar2 + 0xb18);
    cVar3 = '\0';
    if ((local_c4[0] & 0xff) != 0) {
      cVar3 = cStack_30;
    }
    if ((char)param_2[1] == '\b') {
      cVar10 = *(char *)((int)param_1 + 0xaf);
      bVar16 = *(byte *)((int)param_2 + 5) >> 3;
      if (cVar10 == '\0') {
        cVar10 = '\x01';
      }
      else if ((char)param_1[0x2c] == cVar3) {
        cVar10 = 0x9c4 < (uint)(param_3 - param_1[0x25]);
      }
      bVar1 = false;
      if ((bVar16 & 1) != 0) {
        bVar1 = (char)param_1[0x22] == '\0';
      }
      *(byte *)(param_1 + 0x22) = bVar16 & 1;
      param_1[0x25] = param_3;
      *(char *)(param_1 + 0x2c) = cVar3;
      *(undefined1 *)((int)param_1 + 0xaf) = 1;
      if ((((*(char *)((int)param_1 + 0xb3) != '\0') && (cVar10 == '\0')) && (cVar3 != '\0')) &&
         (((bVar1 && ((uint)(param_3 - param_1[0x24]) < 0x2ef)) &&
          ((3 < (byte)((char)param_1[0x2d] - 3U) && ((char)param_1[0x2b] == '\0')))))) {
        param_1[0x2f] = param_3;
        param_1[0x2e] = param_1[0x2e] + 1;
      }
    }
  }
  else {
    if (iVar2 != 0x259) {
      if (iVar2 == 0x293) {
        if (bVar16 == 8) {
          bVar16 = *(byte *)((int)param_2 + 10);
          param_1[0x27] = param_3;
          *(byte *)((int)param_1 + 0x8b) = bVar16 & 3;
          *(byte *)((int)param_1 + 0x8e) = *(byte *)((int)param_2 + 9) >> 2 & 3;
          bVar16 = *(byte *)((int)param_2 + 9);
          param_1[0x28] = param_3;
          *(byte *)((int)param_1 + 0x8f) = bVar16 >> 4 & 3;
        }
        FUN_ram_4ff3ec14(param_1[2],0xffffffff);
        local_c4[6] = param_1[0x27];
        local_c4[7] = param_1[0x28];
        local_c4[0] = param_1[0x21];
        local_c4[1] = param_1[0x22];
        local_c4[2] = param_1[0x23];
        local_c4[3] = param_1[0x24];
        local_c4[4] = param_1[0x25];
        local_c4[5] = param_1[0x26];
        iStack_a4 = param_1[0x29];
        iVar20 = param_1[1];
        iVar2 = param_1[2];
        *(uint *)(iVar20 + 0x7e8) = local_c4[6];
        *(uint *)(iVar20 + 0x7ec) = local_c4[7];
        *(uint *)(iVar20 + 2000) = local_c4[0];
        *(uint *)(iVar20 + 0x7d4) = local_c4[1];
        *(uint *)(iVar20 + 0x7d8) = local_c4[2];
        *(uint *)(iVar20 + 0x7dc) = local_c4[3];
        *(uint *)(iVar20 + 0x7e0) = local_c4[4];
        *(uint *)(iVar20 + 0x7e4) = local_c4[5];
        *(int *)(iVar20 + 0x7f0) = iStack_a4;
        FUN_ram_4ff3ee10(iVar2);
        FUN_ram_480c76a2(param_1,param_2,param_3,param_4);
        return;
      }
      if (iVar2 != 599) {
        if (iVar2 == 0x3fd) {
          FUN_ram_480ca012(param_1,param_2,param_3);
          return;
        }
        if (iVar2 != 0x3f8) {
          return;
        }
        if (bVar16 == 8) {
          *(byte *)((int)param_1 + 0x8a) = *(byte *)((int)param_2 + 5) >> 7;
          *(byte *)((int)param_1 + 0x89) = *(byte *)((int)param_2 + 6) & 1;
          bVar16 = *(byte *)((int)param_2 + 7);
          param_1[0x26] = param_3;
          *(byte *)(param_1 + 0x23) = bVar16 >> 7;
        }
        FUN_ram_4ff3ec14(param_1[2],0xffffffff);
        local_c4[5] = param_1[0x26];
        local_c4[0] = param_1[0x21];
        local_c4[1] = param_1[0x22];
        local_c4[2] = param_1[0x23];
        local_c4[3] = param_1[0x24];
        local_c4[4] = param_1[0x25];
        local_c4[6] = param_1[0x27];
        local_c4[7] = param_1[0x28];
        iStack_a4 = param_1[0x29];
        iVar20 = param_1[1];
        iVar2 = param_1[2];
        *(uint *)(iVar20 + 0x7e4) = local_c4[5];
        *(uint *)(iVar20 + 2000) = local_c4[0];
        *(uint *)(iVar20 + 0x7d4) = local_c4[1];
        *(uint *)(iVar20 + 0x7d8) = local_c4[2];
        *(uint *)(iVar20 + 0x7dc) = local_c4[3];
        *(uint *)(iVar20 + 0x7e0) = local_c4[4];
        *(uint *)(iVar20 + 0x7e8) = local_c4[6];
        *(uint *)(iVar20 + 0x7ec) = local_c4[7];
        *(int *)(iVar20 + 0x7f0) = iStack_a4;
        FUN_ram_4ff3ee10(iVar2);
        FUN_ram_480ca6fa(param_1,param_2);
        return;
      }
      if ((bVar16 == 8) &&
         (iVar2 = (int)(short)((ushort)*(byte *)((int)param_2 + 0xb) << 5 |
                              (ushort)(*(byte *)((int)param_2 + 10) >> 3)),
         uVar6 = ((iVar2 + -500) * 0x10000 >> 0x10) << 3, iVar2 != 0x1fff)) {
        if ((char)param_1[0x93] == '\0') {
          *(undefined1 *)(param_1 + 0x93) = 1;
LAB_ram_480da7bc:
          if ((int)uVar6 < 0) goto LAB_ram_480da388;
          bVar1 = true;
          param_1[0x80] = param_3;
          param_1[0x7f] = uVar6;
          *(undefined1 *)((int)param_1 + 0x24d) = 1;
          if (*(char *)((int)param_1 + 0x24b) != '\0') {
            FUN_ram_480565b2(param_1 + 0x70,param_3);
            goto LAB_ram_480da7e0;
          }
          goto LAB_ram_480da398;
        }
        if (-1 < param_3 - param_1[0x80]) goto LAB_ram_480da7bc;
      }
      else {
        if ((char)param_1[0x93] == '\0') {
          *(undefined1 *)(param_1 + 0x93) = 1;
        }
        else if (param_3 - param_1[0x80] < 0) goto LAB_ram_480da7e0;
LAB_ram_480da388:
        *(undefined1 *)((int)param_1 + 0x24d) = 0;
        param_1[0x80] = param_3;
        param_1[0x7f] = 0;
        uVar6 = 0;
        bVar1 = false;
LAB_ram_480da398:
        if ((((*(char *)((int)param_1 + 0x246) != '\0') && (*(char *)((int)param_1 + 0x24f) != '\0')
             ) && (*(char *)((int)param_1 + 0x253) == '\0')) &&
           ((bVar1 && ((uint)param_1[0x84] < uVar6)))) {
          uVar8 = param_1[0x83];
          if ((uint)param_1[0x83] < uVar6) {
            uVar8 = uVar6;
          }
          if (param_1[0x84] != uVar8) {
            param_1[0x84] = uVar8;
            *(undefined1 *)((int)param_1 + 0x247) = 0;
            iVar2 = param_1[0x7e] + 1;
            if (iVar2 == 0) {
              iVar2 = 1;
            }
            param_1[0x7e] = iVar2;
          }
          param_1[0x86] = param_3;
        }
      }
LAB_ram_480da7e0:
      iVar2 = *param_1;
      FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
      puVar18 = (uint *)(iVar2 + 0xb38);
      puVar13 = local_c4;
      do {
        uVar6 = puVar18[1];
        uVar8 = puVar18[2];
        uVar11 = puVar18[3];
        *puVar13 = *puVar18;
        puVar13[1] = uVar6;
        puVar13[2] = uVar8;
        puVar13[3] = uVar11;
        puVar18 = puVar18 + 4;
        puVar13 = puVar13 + 4;
      } while (puVar18 != (uint *)(iVar2 + 0xbd8));
      *puVar13 = *puVar18;
      FUN_ram_4ff3ee10(iVar2 + 0xb18);
      FUN_ram_480c7da6(param_1,local_c4);
      iVar2 = *param_1;
      FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
      puVar18 = (uint *)(iVar2 + 0xb38);
      puVar13 = local_c4;
      do {
        uVar6 = puVar18[1];
        uVar8 = puVar18[2];
        uVar11 = puVar18[3];
        *puVar13 = *puVar18;
        puVar13[1] = uVar6;
        puVar13[2] = uVar8;
        puVar13[3] = uVar11;
        puVar18 = puVar18 + 4;
        puVar13 = puVar13 + 4;
      } while (puVar18 != (uint *)(iVar2 + 0xbd8));
      *puVar13 = *puVar18;
      FUN_ram_4ff3ee10(iVar2 + 0xb18);
      FUN_ram_4809ec88(param_1,local_c4);
      cVar3 = (char)param_1[0xbe];
      if (((cVar3 == '\0') || (bVar16 = *(byte *)((int)param_1 + 0x2f9), bVar16 < 2)) ||
         (100 < (uint)(param_3 - param_1[0xbf]))) {
        if (*(char *)((int)param_2 + 0xd) != '\x01') {
          return;
        }
        if (*param_2 != 599) {
          return;
        }
        if ((char)param_2[1] != '\b') {
          *(undefined2 *)(param_1 + 0xbe) = 0;
          return;
        }
        uVar17 = (ushort)*(byte *)((int)param_2 + 0xb) << 5 |
                 (ushort)(*(byte *)((int)param_2 + 10) >> 3);
        if ((cVar3 == '\0') || (100 < (uint)(param_3 - param_1[0xbf]))) {
          *(bool *)((int)param_1 + 0x2f9) = uVar17 == 500;
          param_1[0xbf] = param_3;
          *(undefined1 *)(param_1 + 0xbe) = 1;
          return;
        }
        if (uVar17 != 500) {
          *(undefined2 *)(param_1 + 0xbe) = 1;
          param_1[0xbf] = param_3;
          return;
        }
        bVar16 = *(byte *)((int)param_1 + 0x2f9);
        cVar3 = '\0';
      }
      else {
        if (*(char *)((int)param_2 + 0xd) != '\x01') {
          return;
        }
        if (*param_2 != 599) {
          return;
        }
        if ((char)param_2[1] != '\b') {
          *(undefined2 *)(param_1 + 0xbe) = 0;
          goto LAB_ram_480da8d4;
        }
        if ((ushort)((ushort)*(byte *)((int)param_2 + 0xb) << 5 |
                    (ushort)(*(byte *)((int)param_2 + 10) >> 3)) != 500) {
          param_1[0xbf] = param_3;
          *(undefined2 *)(param_1 + 0xbe) = 1;
          goto LAB_ram_480da8d4;
        }
      }
      if (bVar16 == 0) {
        param_1[0xbf] = param_3;
        *(undefined **)(param_1 + 0xbe) = &sedeleg;
        if (cVar3 != '\0') {
LAB_ram_480da8d4:
          FUN_ram_4805932a(*param_1,0x13);
          return;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0xbe) = 0x201;
        param_1[0xbf] = param_3;
      }
      return;
    }
    iVar2 = *param_1;
    FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
    puVar18 = (uint *)(iVar2 + 0xb38);
    puVar13 = local_c4;
    do {
      uVar6 = puVar18[1];
      uVar8 = puVar18[2];
      uVar11 = puVar18[3];
      *puVar13 = *puVar18;
      puVar13[1] = uVar6;
      puVar13[2] = uVar8;
      puVar13[3] = uVar11;
      puVar18 = puVar18 + 4;
      puVar13 = puVar13 + 4;
    } while (puVar18 != (uint *)(iVar2 + 0xbd8));
    *puVar13 = *puVar18;
    FUN_ram_4ff3ee10(iVar2 + 0xb18);
    cVar3 = '\0';
    if ((local_c4[0] & 0xff) != 0) {
      cVar3 = cStack_2e;
    }
    if ((char)param_2[1] == '\b') {
      piVar15 = (int *)((int)param_2 + 5);
      cVar10 = '[';
      do {
        iVar2 = *piVar15;
        piVar15 = (int *)((int)piVar15 + 1);
        cVar10 = cVar10 + (char)iVar2;
      } while (param_2 + 3 != piVar15);
      if ((char)param_2[3] == cVar10) {
        cVar10 = *(char *)((int)param_1 + 0xb1);
        bVar16 = (*(byte *)((int)param_2 + 10) & 1) << 2 | *(byte *)((int)param_2 + 9) >> 6;
        if (cVar10 == '\0') {
          cVar10 = '\x01';
        }
        else if (*(char *)((int)param_1 + 0xb2) == cVar3) {
          cVar10 = 0x9c4 < (uint)(param_3 - param_1[0x29]);
        }
        bVar1 = false;
        if (bVar16 == 1) {
          bVar1 = *(char *)((int)param_1 + 0x8d) != '\x01';
        }
        *(byte *)((int)param_1 + 0x8d) = bVar16;
        param_1[0x29] = param_3;
        *(char *)((int)param_1 + 0xb2) = cVar3;
        *(undefined1 *)((int)param_1 + 0xb1) = 1;
        if ((((*(char *)((int)param_1 + 0xb3) != '\0') && (cVar10 == '\0')) && (cVar3 != '\0')) &&
           (((bVar1 && ((uint)(param_3 - param_1[0x24]) < 0x2ef)) && (*(byte *)(param_1 + 0x2d) < 3)
            ))) {
          param_1[0x2f] = param_3;
          param_1[0x2e] = param_1[0x2e] + 1;
        }
      }
    }
  }
  FUN_ram_4ff3ec14(param_1[2],0xffffffff);
  iVar23 = param_1[0x22];
  iVar20 = param_1[0x23];
  iVar22 = param_1[0x24];
  iVar21 = param_1[0x25];
  iVar7 = param_1[0x26];
  iVar9 = param_1[0x27];
  iVar12 = param_1[0x28];
  iVar14 = param_1[0x29];
  iVar19 = param_1[1];
  iVar2 = param_1[2];
  *(int *)(iVar19 + 2000) = param_1[0x21];
  *(int *)(iVar19 + 0x7d4) = iVar23;
  *(int *)(iVar19 + 0x7d8) = iVar20;
  *(int *)(iVar19 + 0x7dc) = iVar22;
  *(int *)(iVar19 + 0x7e0) = iVar21;
  *(int *)(iVar19 + 0x7e4) = iVar7;
  *(int *)(iVar19 + 0x7e8) = iVar9;
  *(int *)(iVar19 + 0x7ec) = iVar12;
  *(int *)(iVar19 + 0x7f0) = iVar14;
LAB_ram_480da750:
  FUN_ram_4ff3ee10(iVar2);
  return;
}


