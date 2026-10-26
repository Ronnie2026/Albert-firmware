/* Firmware entry: 0x480dea48 */

void FUN_ram_480dea48(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  short sVar7;
  short sVar8;
  undefined4 uVar9;
  char cVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int *piVar14;
  char cVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  byte bVar22;
  byte bVar23;
  ushort uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  undefined4 local_d4 [42];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *param_1;
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar16 = (undefined4 *)(iVar2 + 0xb38);
  puVar17 = local_d4;
  do {
    uVar9 = puVar16[1];
    uVar11 = puVar16[2];
    uVar13 = puVar16[3];
    *puVar17 = *puVar16;
    puVar17[1] = uVar9;
    puVar17[2] = uVar11;
    puVar17[3] = uVar13;
    puVar16 = puVar16 + 4;
    puVar17 = puVar17 + 4;
  } while (puVar16 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar17 = *puVar16;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  uVar9 = FUN_ram_48025ba6();
  FUN_ram_4809e702(param_1,local_d4,uVar9);
  cVar15 = *(char *)((int)param_2 + 0xd);
  cVar10 = '\x01';
  if (cVar15 == '\x01') {
    if (*param_2 != 0x399) {
      if (*param_2 != 599) {
        return;
      }
      if (((char)param_2[1] == '\b') &&
         (iVar2 = (int)(short)((ushort)*(byte *)((int)param_2 + 0xb) << 5 |
                              (ushort)(*(byte *)((int)param_2 + 10) >> 3)),
         iVar4 = ((iVar2 + -500) * 0x10000 >> 0x10) << 3, iVar2 != 0x1fff)) {
        if (*(char *)((int)param_1 + 0x66) == '\0') {
          *(undefined1 *)((int)param_1 + 0x66) = 1;
        }
        else if (param_3 - param_1[0x15] < 0) {
          return;
        }
        param_1[0x15] = param_3;
        uVar12 = 1;
        if (-1 < iVar4) goto LAB_ram_480deb40;
      }
      else if (*(char *)((int)param_1 + 0x66) == '\0') {
        param_1[0x15] = param_3;
        *(undefined1 *)((int)param_1 + 0x66) = 1;
      }
      else {
        if (param_3 - param_1[0x15] < 0) {
          return;
        }
        param_1[0x15] = param_3;
      }
      iVar4 = 0;
      uVar12 = 0;
LAB_ram_480deb40:
      *(undefined1 *)((int)param_1 + 0x67) = uVar12;
      param_1[0x16] = iVar4;
      return;
    }
    iVar2 = param_1[0x13];
    iVar4 = param_1[10];
    bVar1 = false;
    if ((char)param_2[1] == '\b') {
      piVar14 = (int *)((int)param_2 + 5);
      cVar15 = -100;
      do {
        iVar5 = *piVar14;
        piVar14 = (int *)((int)piVar14 + 1);
        cVar15 = cVar15 + (char)iVar5;
      } while (param_2 + 3 != piVar14);
      bVar1 = cVar15 == (char)param_2[3];
    }
    iVar19 = *param_1;
    iVar5 = iVar19 + 0xb18;
    bVar22 = *(byte *)((int)param_2 + 6);
    FUN_ram_4ff3ec14(iVar5,0xffffffff);
    cVar15 = *(char *)(iVar19 + 0xbd8);
    FUN_ram_4ff3ee10(iVar5);
    uVar24 = bVar22 & 0x1f;
    bVar23 = *(byte *)((int)param_2 + 5) & 0xf;
    if (cVar15 == '\0') {
      sVar8 = *(short *)(*param_1 + 0x7c26);
      if (!bVar1) goto LAB_ram_480deea2;
      sVar7 = sVar8;
      if (((bVar22 & 0x1f) == 0) || (uVar24 == 0x1f)) goto LAB_ram_480dee24;
LAB_ram_480dedd8:
      FUN_ram_48056aec(param_1 + 1,bVar23,sVar8,1,param_3);
      if (((*(byte *)((int)param_2 + 5) & 0xf) == 6) && (param_1[10] != iVar4)) {
        iVar4 = param_2[4];
        if ((*(char *)((int)param_2 + 0xe) == '\0') && (iVar4 == 0)) {
          iVar4 = FUN_ram_48025b94();
        }
        param_1[0x4b] = iVar4;
        *(undefined1 *)((int)param_1 + 0x131) = 1;
      }
    }
    else {
      if ((uVar24 - 1 & 0xff) < 0x1e) {
        sVar8 = uVar24 * 5;
        if (!bVar1) {
LAB_ram_480deea2:
          FUN_ram_48056aec(param_1 + 1,bVar23,sVar8,0,param_3);
          iVar2 = *param_1;
          FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
          puVar17 = (undefined4 *)(iVar2 + 0xb38);
          puVar16 = local_d4;
          do {
            uVar9 = puVar17[1];
            uVar11 = puVar17[2];
            uVar13 = puVar17[3];
            *puVar16 = *puVar17;
            puVar16[1] = uVar9;
            puVar16[2] = uVar11;
            puVar16[3] = uVar13;
            puVar17 = puVar17 + 4;
            puVar16 = puVar16 + 4;
          } while (puVar17 != (undefined4 *)(iVar2 + 0xbd8));
          *puVar16 = *puVar17;
          FUN_ram_4ff3ee10(iVar2 + 0xb18);
          uVar9 = FUN_ram_48025ba6();
          FUN_ram_4809e702(param_1,local_d4,uVar9);
          return;
        }
        goto LAB_ram_480dedd8;
      }
      sVar8 = 0;
      sVar7 = 0;
      if (!bVar1) goto LAB_ram_480deea2;
LAB_ram_480dee24:
      FUN_ram_48056aec(param_1 + 1,bVar23,sVar7,0,param_3);
    }
    iVar4 = *param_1;
    FUN_ram_4ff3ec14(iVar4 + 0xb18,0xffffffff);
    puVar17 = (undefined4 *)(iVar4 + 0xb38);
    puVar16 = local_d4;
    do {
      uVar9 = puVar17[1];
      uVar11 = puVar17[2];
      uVar13 = puVar17[3];
      *puVar16 = *puVar17;
      puVar16[1] = uVar9;
      puVar16[2] = uVar11;
      puVar16[3] = uVar13;
      puVar17 = puVar17 + 4;
      puVar16 = puVar16 + 4;
    } while (puVar17 != (undefined4 *)(iVar4 + 0xbd8));
    *puVar16 = *puVar17;
    FUN_ram_4ff3ee10(iVar4 + 0xb18);
    uVar9 = FUN_ram_48025ba6();
    FUN_ram_4809e702(param_1,local_d4,uVar9);
    if (!bVar1) {
      return;
    }
    if ((short)param_1[0x13] == (short)iVar2) {
      return;
    }
    goto LAB_ram_480dece2;
  }
  if (cVar15 != '\x04') {
    if (cVar15 != '\x02') {
      return;
    }
    if (*param_2 == 0x3c2) {
      if ((char)param_2[1] != '\b') {
        return;
      }
      if ((*(byte *)((int)param_2 + 5) & 3) != 1) {
        return;
      }
      if ((*(byte *)(param_2 + 2) & 0x3f) == 0) {
        return;
      }
      if (((char)param_1[0x4c] != '\0') && ((uint)(param_3 - param_1[0x4a]) < 0x3e9)) {
        pcVar18 = (char *)((int)param_2 + 5);
        pcVar3 = (char *)((int)param_1 + 0x109);
        while( true ) {
          cVar15 = *pcVar18;
          cVar10 = *pcVar3;
          pcVar18 = pcVar18 + 1;
          pcVar3 = pcVar3 + 1;
          if (cVar15 != cVar10) break;
          if ((char *)((int)param_2 + 0xd) == pcVar18) {
            return;
          }
        }
      }
    }
    else {
      if (*param_2 != 0x213) {
        return;
      }
      if (((char)param_2[1] != '\x02') ||
         (bVar22 = *(byte *)((int)param_2 + 5), *(char *)((int)param_2 + 6) != (byte)(bVar22 + 0x15)
         )) {
        *(undefined1 *)((int)param_1 + 0x14e) = 0;
        return;
      }
      if (((*(char *)((int)param_1 + 0x14f) != '\0') && ((uint)(param_3 - param_1[0x51]) < 0x33)) &&
         (((param_2[1] ^ param_1[0x39]) & 0xffffffU) >> 8 == 0)) {
        return;
      }
      if ((bVar22 & 7) == 0) {
        iVar19 = param_2[8];
        iVar27 = *param_2;
        iVar26 = param_2[1];
        iVar2 = param_2[2];
        iVar21 = param_2[3];
        iVar20 = param_2[4];
        iVar4 = param_2[5];
        iVar5 = param_2[6];
        param_1[0x2d] = param_2[7];
        param_1[0x26] = iVar27;
        param_1[0x27] = iVar26;
        param_1[0x28] = iVar2;
        param_1[0x29] = iVar21;
        param_1[0x2a] = iVar20;
        param_1[0x2b] = iVar4;
        param_1[0x2c] = iVar5;
        param_1[0x2e] = iVar19;
        param_1[0x4d] = param_3;
        *(undefined1 *)((int)param_1 + 0x14e) = 1;
        *(byte *)(param_1 + 0x53) = *(byte *)((int)param_2 + 5) >> 4;
        if ((char)param_1[0x54] == '\0') {
          return;
        }
        if (*(char *)((int)param_1 + 0x152) == '\0') {
          return;
        }
        if (param_1[0x4f] != 0) {
          return;
        }
        if (param_1[0x4e] != 0) {
          return;
        }
        if (param_3 - param_1[0x50] < 0) {
          return;
        }
        uVar12 = 0;
        uVar6 = 2;
        if (*(char *)((int)param_1 + 0x156) == '\0') {
          uVar12 = *(undefined1 *)((int)param_1 + 0x153);
          uVar6 = 1;
        }
        FUN_ram_480c3f56(param_1,uVar12,uVar6);
        return;
      }
      if ((((bVar22 & 5) == 1) && ((char)param_1[0x20] != '\0')) &&
         ((uint)(param_3 - param_1[0x10]) < 0x3e9)) {
        return;
      }
    }
    iVar2 = FUN_ram_480574d6(param_1 + 1,param_3);
    if (iVar2 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x55) = 1;
    return;
  }
  if (*param_2 != 0x286) {
    return;
  }
  iVar2 = param_2[4];
  if ((char)param_2[1] == '\b') {
    pcVar3 = (char *)((int)param_2 + 6);
    cVar15 = -0x78;
    do {
      cVar10 = cVar10 + '\x01';
      cVar15 = cVar15 + *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar10 != '\b');
    if (*(char *)((int)param_2 + 5) != cVar15) goto LAB_ram_480df09e;
    uVar25 = (uint)*(byte *)((int)param_2 + 7) << 1 | (uint)(*(byte *)((int)param_2 + 6) >> 7);
    bVar22 = ~*(byte *)(param_2 + 2) & 1;
    if ((*(char *)((int)param_2 + 0xe) == '\0') && (iVar2 == 0)) {
      iVar2 = FUN_ram_48025b94();
      if (*(char *)((int)param_1 + 0x131) != '\0') {
        iVar2 = iVar2 - param_1[0x4b];
joined_r0x480df136:
        if (iVar2 < 0) {
          return;
        }
      }
    }
    else if (*(char *)((int)param_1 + 0x131) != '\0') {
      iVar2 = iVar2 - param_1[0x4b];
      goto joined_r0x480df136;
    }
    *(undefined1 *)((int)param_1 + 0x131) = 0;
    if (bVar22 == 0) {
      bVar22 = 1;
      goto LAB_ram_480defe6;
    }
    iVar2 = __udivdi3((short)uVar25 * 0x274a6 + 1000,0,2000,0);
    bVar23 = bVar22;
  }
  else {
LAB_ram_480df09e:
    if (*(char *)((int)param_2 + 0xe) == '\0') {
      if (iVar2 == 0) {
        iVar2 = FUN_ram_48025b94();
        if (*(char *)((int)param_1 + 0x131) != '\0') {
          iVar2 = iVar2 - param_1[0x4b];
          goto joined_r0x480df120;
        }
      }
      else {
        if (*(char *)((int)param_1 + 0x131) == '\0') goto LAB_ram_480df108;
        iVar2 = iVar2 - param_1[0x4b];
joined_r0x480df120:
        if (iVar2 < 0) {
          return;
        }
      }
      uVar25 = 0;
      bVar22 = 0;
LAB_ram_480defe6:
      iVar2 = uVar25 * 0x32;
      bVar23 = 0;
    }
    else {
      if (*(char *)((int)param_1 + 0x131) != '\0') {
        if (iVar2 - param_1[0x4b] < 0) {
          return;
        }
        iVar2 = 0;
        uVar25 = 0;
        bVar22 = 0;
        bVar23 = 0;
        goto LAB_ram_480dec00;
      }
LAB_ram_480df108:
      bVar22 = 0;
      iVar2 = 0;
      uVar25 = 0;
      bVar23 = 0;
    }
  }
LAB_ram_480dec00:
  iVar4 = *param_1;
  FUN_ram_4805662a(iVar4 + 0x7b8c,iVar2,bVar22,param_3,bVar23);
  iVar2 = *(int *)(iVar4 + 0x79cc);
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar17 = (undefined4 *)(iVar2 + 0xb38);
  puVar16 = local_d4;
  do {
    uVar9 = puVar17[1];
    uVar11 = puVar17[2];
    uVar13 = puVar17[3];
    *puVar16 = *puVar17;
    puVar16[1] = uVar9;
    puVar16[2] = uVar11;
    puVar16[3] = uVar13;
    puVar17 = puVar17 + 4;
    puVar16 = puVar16 + 4;
  } while (puVar17 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar16 = *puVar17;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  FUN_ram_480c7da6(iVar4 + 0x79cc,local_d4);
  iVar2 = *(int *)(iVar4 + 0x79cc);
  FUN_ram_4ff3ec14(iVar2 + 0xb18,0xffffffff);
  puVar17 = (undefined4 *)(iVar2 + 0xb38);
  puVar16 = local_d4;
  do {
    uVar9 = puVar17[1];
    uVar11 = puVar17[2];
    uVar13 = puVar17[3];
    *puVar16 = *puVar17;
    puVar16[1] = uVar9;
    puVar16[2] = uVar11;
    puVar16[3] = uVar13;
    puVar17 = puVar17 + 4;
    puVar16 = puVar16 + 4;
  } while (puVar17 != (undefined4 *)(iVar2 + 0xbd8));
  *puVar16 = *puVar17;
  FUN_ram_4ff3ee10(iVar2 + 0xb18);
  FUN_ram_4809ec88(iVar4 + 0x79cc,local_d4);
  FUN_ram_48056e82(param_1 + 1,uVar25,bVar23,bVar22,param_3);
  if ((char)param_1[0x54] != '\0') {
    return;
  }
LAB_ram_480dece2:
  uVar9 = FUN_ram_48025ba6();
  uVar11 = FUN_ram_48025b94();
  FUN_ram_480de46c(param_1,uVar9,uVar11);
  return;
}


