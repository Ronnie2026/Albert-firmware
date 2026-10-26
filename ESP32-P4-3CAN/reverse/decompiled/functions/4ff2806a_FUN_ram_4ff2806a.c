/* Firmware entry: 0x4ff2806a */

/* WARNING: Type propagation algorithm not settling */

bool FUN_ram_4ff2806a(int param_1,uint *param_2,int *param_3,undefined1 *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  char *pcVar23;
  byte bVar24;
  uint uVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  longlong lVar30;
  uint uStack_b8;
  int iStack_b4;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  int iStack_9c;
  uint uStack_98;
  int *piStack_90;
  undefined4 *puStack_8c;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 8;
  }
  uVar29 = *(undefined4 *)(param_1 + 0x18c70);
  fence();
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if ((0x7ff < *param_2) || (8 < (byte)param_2[1])) {
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    fence();
    if (*(char *)(param_1 + 0x18c6e) == '\0') {
      return false;
    }
    uStack_60 = param_2[5];
    uStack_58 = param_2[7];
    uStack_54 = param_2[8];
    uStack_74 = *param_2;
    uStack_70 = param_2[1];
    uStack_6c = param_2[2];
    uStack_68 = param_2[3];
    uStack_64 = param_2[4];
    uStack_5c = param_2[6];
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_50 = 0;
    uStack_4c = FUN_ram_4ff21a0a();
    uVar25 = uStack_48 >> 0x10;
    uStack_48._0_2_ = CONCAT11(1,(undefined1)uStack_48);
    uStack_48 = CONCAT22((short)uVar25,(undefined2)uStack_48) & 0xff00ffff;
    FUN_ram_48094000(param_1,&uStack_74,uVar29);
    return false;
  }
  pcVar26 = (char *)(param_1 + 0x18d90);
  fence();
  if (3 < (byte)(*(char *)((int)param_2 + 0x1a) - 1U)) goto LAB_ram_4ff2822e;
  bVar24 = *(byte *)((int)param_2 + 0xd);
  if (*(char *)((int)param_2 + 0x1a) != '\x04') goto LAB_ram_4ff28180;
  if (bVar24 == 2) {
    uVar25 = *param_2;
    if (uVar25 != 0x3c2) {
      if (*pcVar26 == '\0') goto LAB_ram_4ff2822e;
      goto LAB_ram_4ff28338;
    }
    if (((((char)param_2[1] != '\b') || ((*(byte *)((int)param_2 + 5) & 3) != 1)) ||
        ((param_2[6] >> 9 & 1) == 0)) || (*(char *)((int)param_2 + 0x1b) != '\x16'))
    goto LAB_ram_4ff2822e;
    if (*(char *)(param_1 + 0x2c) == '\x02') {
      iVar2 = param_1 + 0x18;
      iVar3 = 0;
      bVar24 = 2;
    }
    else if (*(char *)(param_1 + 0x35a4) == '\x02') {
      iVar2 = param_1 + 0x3590;
      iVar3 = 1;
      bVar24 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x6b1c) != '\x02') goto LAB_ram_4ff281a0;
      iVar2 = param_1 + 0x6b08;
      iVar3 = 2;
      bVar24 = 2;
    }
  }
  else {
    if (bVar24 != 1) goto LAB_ram_4ff2822e;
    uVar25 = *param_2;
LAB_ram_4ff28338:
    if (((uVar25 != 0x3fd) || ((char)param_2[1] != '\b')) ||
       ((*(byte *)((int)param_2 + 5) & 7) != 0)) goto LAB_ram_4ff2822e;
    cVar9 = *(char *)((int)param_2 + 0x1b);
    if ((char)param_2[6] == '\0') {
      if (((param_2[6] >> 8 & 1) == 0) || (cVar9 != '\x1d')) {
LAB_ram_4ff2836c:
        if ((cVar9 != '\x1b') || (iVar2 = FUN_ram_4ff22da0(&DAT_ram_4ff4b8c8,param_2), iVar2 == 0))
        {
LAB_ram_4ff2822e:
          if (param_4 != (undefined1 *)0x0) {
            *param_4 = 0xc;
          }
          FUN_ram_4809418a(param_1,param_2,0,uVar29,0,0,0,0,0);
          return false;
        }
        bVar24 = *(byte *)((int)param_2 + 0xd);
      }
    }
    else if (cVar9 != '\x10') goto LAB_ram_4ff2836c;
LAB_ram_4ff28180:
    if (bVar24 == *(byte *)(param_1 + 0x2c)) {
      iVar2 = 0x18;
      iVar3 = 0;
    }
    else if (*(byte *)(param_1 + 0x35a4) == bVar24) {
      iVar2 = 0x3590;
      iVar3 = 1;
    }
    else {
      if (*(byte *)(param_1 + 0x6b1c) != bVar24) {
LAB_ram_4ff281a0:
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 2;
        }
        fence();
        if (*(char *)(param_1 + 0x18c6e) == '\0') {
          return false;
        }
        uStack_74 = *param_2;
        uStack_70 = param_2[1];
        uStack_6c = param_2[2];
        uStack_60 = param_2[5];
        uStack_5c = param_2[6];
        uStack_58 = param_2[7];
        uStack_54 = param_2[8];
        uStack_68 = param_2[3];
        uStack_64 = param_2[4];
        uStack_4c = 0;
        uStack_48 = 0;
        uStack_44 = 0;
        uStack_50 = 0;
        uStack_4c = FUN_ram_4ff21a0a();
        uVar25 = uStack_48 >> 0x10;
        uStack_48._0_2_ = CONCAT11(1,(undefined1)uStack_48);
        uStack_48 = CONCAT22((short)uVar25,(undefined2)uStack_48) & 0xff00ffff;
        FUN_ram_48094000(param_1,&uStack_74,uVar29);
        return false;
      }
      iVar2 = 0x6b08;
      iVar3 = 2;
    }
    iVar2 = iVar2 + param_1;
    if ((1 < (byte)(bVar24 - 1)) && (bVar24 != 4)) goto LAB_ram_4ff282ec;
  }
  fence();
  if ((*(byte *)(param_1 + 0x10) & bVar24) == 0) {
LAB_ram_4ff282ec:
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 2;
    }
    FUN_ram_4809418a(param_1,param_2,0,uVar29,0,0,0,0,0);
    return false;
  }
  cVar9 = *(char *)((int)param_2 + 0x1b);
  if (cVar9 == '\x11') {
    iVar5 = 1;
    uStack_b8 = 1;
LAB_ram_4ff2839c:
    iVar16 = iVar3 * 0x3578 + 0x88c + param_1;
    FUN_ram_4ff3ec14(iVar16,0xffffffff);
    iVar5 = iVar5 * 0x40 + iVar3 * 0x3578 + param_1;
    *(int *)(iVar5 + 0x2f1c) = *(int *)(iVar5 + 0x2f1c) + 1;
    FUN_ram_4ff3ee10(iVar16);
    iStack_b4 = 1;
  }
  else {
    if (cVar9 == '\x12') {
      iVar5 = 2;
      uStack_b8 = 2;
      goto LAB_ram_4ff2839c;
    }
    if (cVar9 == '\x10') {
      iVar5 = 0;
      uStack_b8 = 0;
      goto LAB_ram_4ff2839c;
    }
    uStack_b8 = 0xff;
    iStack_b4 = 0;
  }
  uVar25 = (uint)*(byte *)(param_1 + 0x18c67);
  if (uVar25 == 0) {
LAB_ram_4ff282ca:
    FUN_ram_4809a470(param_1,param_2,iVar2,iStack_b4,uStack_b8,uVar29,param_4);
    return false;
  }
  pcVar23 = (char *)(param_1 + 0x18c6b);
  fence();
  if (*pcVar23 == '\0') goto LAB_ram_4ff282ca;
  iVar5 = FUN_ram_4ff3d9a8();
  if (*(char *)((int)param_2 + 0x1a) == '\x04') {
    uStack_a4 = FUN_ram_4ff22e6a(param_2);
    if ((uStack_a4 != 0) && (uStack_a4 = param_2[6] >> 9 & 1, uStack_a4 != 0)) {
      iVar16 = FUN_ram_4ff3c3f4(0);
      uStack_a4 = (uint)(iVar16 == 0x18);
    }
  }
  else {
    uStack_a4 = 0;
  }
  iVar16 = iVar3 * 0x3578;
  iVar17 = param_1 + iVar16 + 0x88c;
  FUN_ram_4ff3ec14(iVar17,0xffffffff);
  fence();
  cVar9 = *(char *)((int)param_2 + 0xd);
  uVar27 = uVar25;
  if (cVar9 == '\x01') {
    if (((*param_2 != 0x3fd) || ((char)param_2[1] != '\b')) ||
       ((*(byte *)((int)param_2 + 5) & 7) != 0)) goto LAB_ram_4ff28446;
    cVar9 = *(char *)((int)param_2 + 0x1a);
    if (((cVar9 != '\x04') || (iVar21 = *(int *)(iVar16 + param_1 + 0x580), iVar21 == 0)) ||
       (iVar5 != iVar21)) goto LAB_ram_4ff2844a;
LAB_ram_4ff2844c:
    uStack_a0 = FUN_ram_4ff22e6a(param_2);
    if (uStack_a0 == 0) {
LAB_ram_4ff28472:
      uStack_ac = 0;
      if ((byte)(cVar9 - 2U) < 2) goto LAB_ram_4ff28890;
    }
    else {
      if (cVar9 != '\x03') {
        uStack_a0 = 0;
        if ((param_2[6] & 0xffff0000) == 0x16040000) {
LAB_ram_4ff289d8:
          uStack_a0 = 0;
          if ((uStack_a4 != 0) && (iVar21 = *(int *)(iVar3 * 0x3578 + param_1 + 0x584), iVar21 != 0)
             ) goto LAB_ram_4ff289c4;
        }
        goto LAB_ram_4ff28472;
      }
      iVar21 = *(int *)(iVar3 * 0x3578 + param_1 + 0x584);
      if (iVar21 != 0) {
LAB_ram_4ff289c4:
        uStack_a0 = (uint)(iVar5 == iVar21);
        goto LAB_ram_4ff28472;
      }
      uStack_a0 = 0;
LAB_ram_4ff28890:
      iVar21 = *(int *)(iVar3 * 0x3578 + param_1 + 0x588);
      uStack_ac = (uint)(iVar21 != 0 && iVar21 == iVar5);
    }
    FUN_ram_4ff3ee10(iVar17);
    bVar24 = *(byte *)((int)param_2 + 0x1a);
    if (uVar27 != 0) goto LAB_ram_4ff2848e;
    if (uStack_a0 != 0) {
      if (bVar24 != 4) {
        uStack_ac = uStack_a0;
        goto LAB_ram_4ff2882a;
      }
      FUN_ram_4ff3ec14(iVar17,0xffffffff);
      lVar30 = FUN_ram_4ff21a0a();
      iStack_b4 = FUN_ram_4ff21a0a();
      iStack_9c = *(int *)(iVar2 + 0x2e7c);
      goto LAB_ram_4ff284bc;
    }
LAB_ram_4ff28936:
    if (bVar24 == 4) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 0xc;
      }
      FUN_ram_4809418a(param_1,param_2,0,uVar29,0,0,0,0,0);
      return false;
    }
    if ((uStack_ac == 0) &&
       ((iVar5 = *(int *)(iVar3 * 0x3578 + param_1 + 0x58c), iVar5 == 0 ||
        (iVar5 = FUN_ram_4ff3b5f0(iVar5,0), iVar5 != 1)))) {
      FUN_ram_4809a2c4(param_1,param_2,iVar2,iStack_b4,uStack_b8,bVar24,bVar24 == 1,uVar29,param_4);
      return false;
    }
    uStack_a0 = 0;
LAB_ram_4ff2882a:
    FUN_ram_4ff3ec14(iVar17,0xffffffff);
    lVar30 = FUN_ram_4ff21a0a();
    iStack_b4 = FUN_ram_4ff21a0a();
    iStack_9c = *(int *)(iVar2 + 0x2e7c);
LAB_ram_4ff2884e:
    uVar27 = 0;
    uStack_a8 = FUN_ram_48093896(iVar2,iStack_b4);
    if (((*(char *)((int)param_2 + 0xd) == '\x02') && (*param_2 == 0x3c2)) &&
       (iVar5 = *(int *)(iVar3 * 0x3578 + param_1 + 0x10c), iVar5 != 0)) {
LAB_ram_4ff28a26:
      uVar27 = (uint)(*(char *)(iVar5 + 0x602) != '\0') & (uStack_a0 ^ 1);
    }
    if (bVar24 == 3) {
      iVar5 = FUN_ram_48040830(param_2);
      uStack_a4 = 0;
      if (iVar5 == 0) {
        uStack_a4 = FUN_ram_48093e38(iVar2,iStack_b4);
      }
    }
    else {
      uStack_a4 = 0;
    }
  }
  else {
    if (*pcVar26 == '\0') {
      if (cVar9 == '\x02') {
        uVar28 = *param_2;
LAB_ram_4ff28804:
        if (uVar28 == 0x3fd) {
          cVar9 = (char)param_2[1];
LAB_ram_4ff28810:
          if (cVar9 == '\b') {
            bVar24 = *(byte *)((int)param_2 + 5);
            goto LAB_ram_4ff2872e;
          }
        }
      }
LAB_ram_4ff28446:
      cVar9 = *(char *)((int)param_2 + 0x1a);
LAB_ram_4ff2844a:
      uVar27 = 0;
      goto LAB_ram_4ff2844c;
    }
    if (((cVar9 != '\x02') || (*param_2 != 0x3fd)) || ((char)param_2[1] != '\b'))
    goto LAB_ram_4ff28446;
    bVar24 = *(byte *)((int)param_2 + 5);
    if (((bVar24 & 7) == 0) && (*(char *)((int)param_2 + 0x1a) == '\x04')) {
      iVar21 = *(int *)(iVar16 + param_1 + 0x580);
      cVar9 = '\b';
      if (iVar21 != 0) {
        uVar28 = 0x3fd;
        if (iVar5 == iVar21) {
          cVar9 = '\x04';
          goto LAB_ram_4ff2844c;
        }
        goto LAB_ram_4ff28804;
      }
      goto LAB_ram_4ff28810;
    }
LAB_ram_4ff2872e:
    if (((bVar24 & 7) != 0) || (fence(), *pcVar26 == '\0')) goto LAB_ram_4ff28446;
    cVar9 = *(char *)((int)param_2 + 0x1a);
    if (cVar9 != '\x04') goto LAB_ram_4ff2844a;
    iVar21 = FUN_ram_4ff22e6a(param_2);
    iVar8 = *(int *)(iVar3 * 0x3578 + param_1 + 0x588);
    uVar27 = (uint)(iVar8 != 0 && iVar8 == iVar5);
    uStack_ac = uVar27;
    if (iVar21 != 0) {
      if ((param_2[6] & 0xffff0000) != 0x16040000) {
        FUN_ram_4ff3ee10(iVar17);
        bVar24 = *(byte *)((int)param_2 + 0x1a);
        if (uVar27 != 0) {
          uStack_a0 = 0;
          goto LAB_ram_4ff2848e;
        }
        goto LAB_ram_4ff28936;
      }
      goto LAB_ram_4ff289d8;
    }
    FUN_ram_4ff3ee10(iVar17);
    bVar24 = *(byte *)((int)param_2 + 0x1a);
    uStack_a0 = 0;
    if (uVar27 == 0) goto LAB_ram_4ff28936;
LAB_ram_4ff2848e:
    FUN_ram_4ff3ec14(iVar17,0xffffffff);
    lVar30 = FUN_ram_4ff21a0a();
    iStack_b4 = FUN_ram_4ff21a0a();
    iStack_9c = *(int *)(iVar2 + 0x2e7c);
    uStack_ac = uVar25;
    if (bVar24 != 4) goto LAB_ram_4ff2884e;
LAB_ram_4ff284bc:
    if (((*(char *)((int)param_2 + 0xd) == '\x02') && (*param_2 == 0x3c2)) &&
       (iVar5 = *(int *)(iVar3 * 0x3578 + param_1 + 0x10c), iVar5 != 0)) {
      bVar24 = 4;
      uStack_a8 = 0;
      uStack_ac = uVar25;
      goto LAB_ram_4ff28a26;
    }
    bVar24 = 4;
    uVar27 = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_ac = uVar25;
  }
  puStack_8c = (undefined4 *)(iVar2 + 0x2e7c);
  fence();
  if ((((((*pcVar23 == '\0') || (fence(), *(char *)(param_1 + 0x18c68) == '\0')) ||
        (iVar5 = FUN_ram_4ff2bcc4(), iVar5 != 0)) ||
       ((fence(), *(char *)(param_1 + 0x18c6c) != '\0' ||
        (iVar5 = FUN_ram_48092f5a(iVar2,param_2,param_5), iVar5 == 0)))) ||
      (iVar5 = iVar3 * 0x3578 + param_1, *(char *)(iVar5 + 0x895) == '\0')) ||
     (((*(char *)(iVar5 + 0x896) != '\0' || (*(char *)(iVar5 + 0x89a) != '\0')) ||
      ((*(char *)(iVar5 + 0x89b) != '\0' || (*(char *)(iVar5 + 0x40) != '\0')))))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(iVar3 * 0x3578 + param_1 + 0x44) != 0;
  }
  uStack_98 = FUN_ram_48093828(iVar2,param_2,param_5);
  if (uStack_98 == 0) {
    uStack_a8 = 8;
LAB_ram_4ff28540:
    iVar5 = FUN_ram_48092f0a(uStack_a8);
    if (iVar5 == 9) {
      iStack_b4 = 0x107;
    }
    else {
      iStack_b4 = 0x103;
    }
    FUN_ram_4ff3ee10(iVar17);
    uVar6 = FUN_ram_4ff3c5de();
    uVar27 = uStack_a8;
    uStack_a8 = iVar5;
    uStack_a4 = uVar25;
  }
  else if ((uVar27 == 0) &&
          (((2 < bVar24 || (iVar5 = FUN_ram_48093ece(iVar2,iStack_b4), iVar5 == 0)) &&
           (uStack_a4 == 0)))) {
    iVar5 = param_1 + iVar3 * 0x3578;
    uStack_a8 = FUN_ram_48040e7a(*(undefined1 *)((int)param_2 + 0xd),bVar24,uStack_a8,
                                 *(undefined1 *)(iVar5 + 0x59a),bVar1,1,param_5,iStack_9c,iStack_b4)
    ;
    if ((uStack_a8 - 6 & 0xff) < 3) goto LAB_ram_4ff28540;
    if (uStack_a8 != 0) goto LAB_ram_4ff28996;
    if (*(byte *)(iVar5 + 0x594) != 0) {
      piStack_90 = *(int **)(iVar5 + 0x590);
      piVar19 = piStack_90 + (uint)*(byte *)(iVar5 + 0x594) * 0x32;
      do {
        if (*(char *)((int)piStack_90 + 0xc1) == '\0') {
          uVar14 = param_2[7];
          uVar20 = param_2[8];
          uVar27 = param_2[1];
          uVar22 = param_2[2];
          uVar28 = param_2[3];
          uVar11 = param_2[4];
          uVar10 = param_2[5];
          uVar18 = param_2[6];
          piStack_90[10] = *param_2;
          piStack_90[0xb] = uVar27;
          piStack_90[0xc] = uVar22;
          piStack_90[0xd] = uVar28;
          piStack_90[0xe] = uVar11;
          piStack_90[0xf] = uVar10;
          piStack_90[0x10] = uVar18;
          piStack_90[0x11] = uVar14;
          piStack_90[0x12] = uVar20;
          *(undefined1 *)((int)piStack_90 + 0xb9) = 0;
          *(undefined2 *)((int)piStack_90 + 0xba) = 0;
          *(undefined1 *)(piStack_90 + 0x2f) = 0;
          piStack_90[0x13] = 0;
          piStack_90[0x15] = 0;
          uVar28 = param_2[4];
          cVar9 = *(char *)(param_5 + 8);
          piStack_90[0x19] = uVar28;
          uVar27 = 0;
          if (cVar9 != '\0') {
            uVar27 = *(int *)(param_5 + 4) - iStack_b4;
          }
          bVar12 = *(byte *)((int)param_2 + 0xe);
          piVar19 = piStack_90 + 0x1c;
          *(ulonglong *)(piStack_90 + 0x1a) = lVar30 + (ulonglong)uVar27;
          *(byte *)(piStack_90 + 0x2e) = uVar28 != 0 | bVar12;
          FUN_ram_4ff45158(piVar19,param_5,0x41);
          if (piStack_90[0x1c] == 0) {
            piStack_90[0x1c] = iStack_9c;
          }
          *(undefined1 *)((int)piStack_90 + 0xbd) = 0;
          *(undefined2 *)((int)piStack_90 + 0xbe) = 0;
          iVar5 = *(int *)(iVar3 * 0x3578 + param_1 + 0x59c) + 1;
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          iVar21 = -1;
          *(int *)(iVar3 * 0x3578 + param_1 + 0x59c) = iVar5;
          piStack_90[0x16] = iVar5;
          piStack_90[0x17] = iVar5;
          if (((*(char *)((int)param_2 + 0xd) == '\x01') && (*param_2 == 0x3fd)) &&
             ((*(char *)((int)param_2 + 0xe) != '\0' || (param_2[4] != 0)))) {
            iVar21 = -1;
            iVar5 = iVar3 * 0x3578 + param_1;
            if (*(uint *)(iVar5 + 0x8d0) == param_2[4]) {
              iVar21 = *(int *)(iVar5 + 0x8dc);
            }
          }
          piStack_90[0x18] = iVar21;
          *(undefined1 *)(piStack_90 + 0x30) = 1;
          memset(piStack_90 + 2,0,0x20);
          piStack_90[2] = *param_2;
          uVar27 = param_2[1];
          piStack_90[8] = (int)piStack_90 + 0x2d;
          *(ushort *)(piStack_90 + 3) = (ushort)(byte)uVar27;
          uVar27 = param_2[1];
          *(undefined1 *)((int)piStack_90 + 0xc1) = 1;
          piStack_90[9] = (uint)(byte)uVar27;
          iVar5 = iVar3 * 0x3578 + param_1;
          bVar12 = *(char *)(iVar5 + 0x59a) + 1;
          uVar27 = (uint)bVar12;
          *(byte *)(iVar5 + 0x59a) = bVar12;
          *(uint *)(iVar5 + 0x3080) = uVar27;
          if (*(uint *)(iVar5 + 0x3088) < uVar27) {
            *(uint *)(iVar5 + 0x3088) = uVar27;
          }
          iVar21 = param_1 + iVar3 * 0x3578;
          *(uint *)(iVar21 + 0x30b4) = *param_2;
          uVar27 = *param_2;
          uVar20 = param_2[1];
          uVar28 = param_2[2];
          uVar11 = param_2[3];
          uVar10 = param_2[4];
          uVar18 = param_2[5];
          uVar14 = param_2[6];
          uVar22 = param_2[8];
          *(uint *)(iVar21 + 0x2eb4) = param_2[7];
          *(uint *)(iVar21 + 0x2e98) = uVar27;
          *(uint *)(iVar21 + 0x2e9c) = uVar20;
          *(uint *)(iVar21 + 0x2ea0) = uVar28;
          *(uint *)(iVar21 + 0x2ea4) = uVar11;
          *(uint *)(iVar21 + 0x2ea8) = uVar10;
          *(uint *)(iVar21 + 0x2eac) = uVar18;
          *(uint *)(iVar21 + 0x2eb0) = uVar14;
          *(uint *)(iVar21 + 0x2eb8) = uVar22;
          uVar6 = FUN_ram_4ff3c5de();
          iVar5 = *(int *)(iVar21 + 0x44);
          *(undefined4 *)(iVar21 + 0x2ebc) = uVar6;
          if ((uStack_ac != 0) && (*(char *)(iVar21 + 0x5a0) != -1)) {
            *(char *)(iVar21 + 0x5a0) = *(char *)(iVar21 + 0x5a0) + '\x01';
          }
          iStack_9c = FUN_ram_4ff21a0a();
          uVar6 = *puStack_8c;
          fence();
          if ((((((*pcVar23 == '\0') || (fence(), *(char *)(param_1 + 0x18c68) == '\0')) ||
                (iVar21 = FUN_ram_4ff2bcc4(), iVar21 != 0)) ||
               (((fence(), *(char *)(param_1 + 0x18c6c) != '\0' ||
                 (iVar21 = FUN_ram_48040ff0(param_1,*(undefined1 *)((int)param_2 + 0xd)),
                 iVar21 == 0)) ||
                ((iVar21 = FUN_ram_48092f5a(iVar2,param_2,piVar19), iVar21 == 0 ||
                 ((iVar21 = iVar3 * 0x3578 + param_1, *(char *)(iVar21 + 0x895) == '\0' ||
                  (*(char *)(iVar21 + 0x896) != '\0')))))))) || (*(char *)(iVar21 + 0x89a) != '\0'))
             || ((*(char *)(iVar21 + 0x89b) != '\0' ||
                 (iVar21 = iVar3 * 0x3578 + param_1, *(char *)(iVar21 + 0x40) != '\0')))) {
            bVar1 = false;
          }
          else {
            bVar1 = *(int *)(iVar21 + 0x44) == iVar5;
          }
          uStack_a4 = 0;
          if (((*(char *)((int)param_2 + 0xd) == '\x02') && (*param_2 == 0x3c2)) &&
             (iVar21 = *(int *)(iVar3 * 0x3578 + param_1 + 0x10c), iVar21 != 0)) {
            uStack_a4 = (uint)(*(char *)(iVar21 + 0x602) != '\0') & (uStack_a0 ^ 1);
          }
          iVar21 = 0;
          if ((bVar24 == 3) && (iVar8 = FUN_ram_48040830(param_2), iVar8 == 0)) {
            iVar21 = FUN_ram_48093e38(iVar2,iStack_9c);
          }
          uVar28 = FUN_ram_48093828(iVar2,param_2,piVar19);
          if (uVar28 == 0) {
            uVar27 = 8;
LAB_ram_4ff29126:
            bVar1 = uVar27 == 8;
LAB_ram_4ff29130:
            uStack_a4 = (uint)bVar1;
            uStack_a8 = FUN_ram_48092f0a(uVar27);
            if (uStack_a8 == 9) {
              iStack_b4 = 0x107;
            }
            else {
              iStack_b4 = 0x103;
            }
            piStack_90[0x13] = iStack_9c;
            piStack_90[0x14] = iStack_9c;
            if (param_3 != (int *)0x0) {
              *param_3 = iStack_9c;
            }
            uVar28 = 0;
            FUN_ram_4ff3ee10(iVar17);
            uVar6 = FUN_ram_4ff3c5de();
            uStack_a0 = 0;
          }
          else {
            if (uStack_a4 != 0) {
LAB_ram_4ff291c2:
              uVar27 = 5;
              goto LAB_ram_4ff29126;
            }
            if (bVar24 < 3) {
              iVar8 = FUN_ram_48093ece(iVar2,iStack_9c);
              if ((iVar8 != 0) || (iVar21 != 0)) goto LAB_ram_4ff291c2;
              uVar4 = *(undefined1 *)((int)param_2 + 0xd);
LAB_ram_4ff29324:
              uVar7 = FUN_ram_48093896(iVar2,iStack_9c);
            }
            else {
              if (iVar21 != 0) goto LAB_ram_4ff291c2;
              uVar4 = *(undefined1 *)((int)param_2 + 0xd);
              uVar7 = 0;
              if (bVar24 != 4) goto LAB_ram_4ff29324;
            }
            bVar15 = false;
            if ((*(char *)((int)piStack_90 + 0xc1) != '\0') &&
               (bVar15 = false, (char)piStack_90[0x30] != '\0')) {
              bVar15 = *piStack_90 == iVar2;
            }
            uVar27 = FUN_ram_48040e7a(uVar4,bVar24,uVar7,
                                      *(char *)(iVar3 * 0x3578 + param_1 + 0x59a) + -1,bVar1,bVar15,
                                      piVar19,uVar6,iStack_9c);
            if (uVar27 != 0) {
              bVar1 = (uVar27 - 6 & 0xff) < 3;
              goto LAB_ram_4ff29130;
            }
            piStack_90[0x13] = iStack_9c;
            piStack_90[0x14] = iStack_9c;
            if (param_3 != (int *)0x0) {
              *param_3 = iStack_9c;
            }
            iStack_b4 = FUN_ram_4ff2dbf2(iVar5,piStack_90 + 2,0);
            uStack_a0 = FUN_ram_4ff21a0a();
            if (iStack_b4 != 0) goto LAB_ram_4ff29236;
            *(undefined1 *)(piStack_90 + 0x2f) = 1;
            uVar11 = param_2[6] >> 9 & 1;
            if (uVar11 == 0) {
              FUN_ram_4ff3ee10(iVar17);
              uVar6 = FUN_ram_4ff3c5de();
              uStack_a8 = 0;
              uStack_a4 = 0;
            }
            else {
              uVar28 = FUN_ram_4ff22e6a(param_2);
              if (uVar28 == 0) {
                FUN_ram_4ff3ee10(iVar17);
                uVar6 = FUN_ram_4ff3c5de();
                uStack_a8 = 0;
                uStack_a4 = 0;
                uVar28 = uVar11;
              }
              else if (*(char *)((int)param_2 + 0x1b) == '\x16') {
                if (bVar24 == 4) {
                  iVar5 = iVar3 * 0x3578 + param_1;
                  *(int *)(iVar5 + 0x3008) = *(int *)(iVar5 + 0x3008) + 1;
                  FUN_ram_4ff3ee10(iVar17);
                  uVar6 = FUN_ram_4ff3c5de();
                  uStack_a8 = 0;
                }
                else {
                  if (bVar24 != 3) goto LAB_ram_4ff29236;
                  iVar5 = iVar3 * 0x3578 + param_1;
                  *(int *)(iVar5 + 0x300c) = *(int *)(iVar5 + 0x300c) + 1;
                  FUN_ram_4ff3ee10(iVar17);
                  uVar6 = FUN_ram_4ff3c5de();
                  uStack_a8 = 0;
                }
              }
              else {
LAB_ram_4ff29236:
                FUN_ram_4ff3ee10(iVar17);
                uVar6 = FUN_ram_4ff3c5de();
                uStack_a8 = 0;
              }
            }
          }
          FUN_ram_4ff3ec14(iVar17,0xffffffff);
          if (uStack_b8 < 3) goto LAB_ram_4ff28aa8;
          if (uStack_ac != 0) {
            uStack_98 = uStack_ac;
            goto LAB_ram_4ff28bba;
          }
          if (iStack_b4 != 0) goto LAB_ram_4ff28c28;
          iVar2 = iVar3 * 0x3578 + param_1;
          *(int *)(iVar2 + 0x2ed4) = *(int *)(iVar2 + 0x2ed4) + 1;
          if (uVar28 == 0) goto LAB_ram_4ff28cf2;
          FUN_ram_4ff3ee10(iVar17);
          uStack_98 = uVar28;
          goto LAB_ram_4ff28cf8;
        }
        piStack_90 = piStack_90 + 0x32;
      } while (piStack_90 != piVar19);
    }
    uVar27 = 5;
    FUN_ram_4ff3ee10(iVar17);
    uVar6 = FUN_ram_4ff3c5de();
    iStack_b4 = 0x107;
    uStack_a8 = 0;
  }
  else {
    uStack_a8 = 5;
LAB_ram_4ff28996:
    uVar27 = uStack_a8;
    FUN_ram_4ff3ee10(iVar17);
    uVar6 = FUN_ram_4ff3c5de();
    uStack_a8 = 0;
    uStack_a4 = 0;
    iStack_b4 = 0x107;
  }
  if (uStack_b8 < 3) {
    iStack_9c = FUN_ram_4ff21a0a();
    uVar28 = 0;
    FUN_ram_4ff3ec14(iVar17,0xffffffff);
    uStack_98 = 0;
    uStack_a0 = 0;
    piStack_90 = (int *)0x0;
LAB_ram_4ff28aa8:
    if ((*(char *)((int)param_2 + 0xe) == '\0') && (param_2[4] == 0)) {
      *(undefined4 *)(iVar3 * 0x3578 + uStack_b8 * 0x40 + param_1 + 0x2f48) = 0;
LAB_ram_4ff28ad0:
      if (uStack_ac != 0) goto LAB_ram_4ff28bb4;
      if (iStack_b4 != 0) {
LAB_ram_4ff28c22:
        if (piStack_90 == (int *)0x0) goto LAB_ram_4ff292aa;
LAB_ram_4ff28c28:
        if (*(char *)((int)piStack_90 + 0xc1) != '\0') {
          *(undefined2 *)(piStack_90 + 0x30) = 0;
          iVar2 = iVar3 * 0x3578 + param_1;
          cVar9 = *(char *)(iVar2 + 0x59a);
          uVar11 = 0;
          if (cVar9 != '\0') {
            bVar12 = cVar9 - 1;
            uVar11 = (uint)bVar12;
            *(byte *)(iVar2 + 0x59a) = bVar12;
          }
          *(uint *)(iVar3 * 0x3578 + param_1 + 0x3080) = uVar11;
        }
        if (uVar28 == 0) goto LAB_ram_4ff28586;
LAB_ram_4ff28c68:
        iVar2 = iVar3 * 0x3578 + param_1;
        *(int *)(iVar2 + 0x3098) = iStack_b4;
        *(int *)(iVar2 + 0x2ee4) = *(int *)(iVar2 + 0x2ee4) + 1;
        uVar11 = *param_2;
        *(uint *)(iVar2 + 0x30c0) = uVar11;
        uVar7 = FUN_ram_4ff3c5de();
        bVar12 = *(byte *)(iVar2 + 0x30e6);
        uVar10 = (uint)bVar12;
        uVar28 = uVar25;
        if (uVar10 != 0) {
          puVar13 = (uint *)(iVar16 + 0x3240 + param_1);
          uVar25 = 0;
          do {
            uVar18 = *puVar13;
            puVar13 = puVar13 + 3;
            if (uVar11 == uVar18) {
              iVar2 = uVar25 * 0xc + iVar3 * 0x3578 + param_1;
              *(undefined4 *)(iVar2 + 0x3248) = uVar7;
              *(int *)(iVar2 + 0x3244) = *(int *)(iVar2 + 0x3244) + 1;
              goto LAB_ram_4ff28588;
            }
            uVar25 = uVar25 + 1;
          } while (uVar25 != uVar10);
          if (uVar25 == 8) {
            iVar2 = iVar3 * 0x3578 + param_1;
            *(int *)(iVar2 + 0x30dc) = *(int *)(iVar2 + 0x30dc) + 1;
            goto LAB_ram_4ff28588;
          }
        }
        iVar2 = uVar10 * 0xc + iVar3 * 0x3578 + param_1;
        *(uint *)(iVar2 + 0x3240) = uVar11;
        *(undefined4 *)(iVar2 + 0x3248) = uVar7;
        *(undefined4 *)(iVar2 + 0x3244) = 1;
        *(byte *)(param_1 + iVar3 * 0x3578 + 0x30e6) = bVar12 + 1;
        goto LAB_ram_4ff28588;
      }
      iVar2 = *(int *)(iVar3 * 0x3578 + param_1 + 0x2ed4);
LAB_ram_4ff28af0:
      iVar5 = uStack_b8 * 0x40 + iVar3 * 0x3578 + param_1;
      *(int *)(iVar3 * 0x3578 + param_1 + 0x2ed4) = iVar2 + 1;
      *(int *)(iVar5 + 0x2f20) = *(int *)(iVar5 + 0x2f20) + 1;
      if (uVar28 == 0) goto LAB_ram_4ff28b1a;
LAB_ram_4ff28cf2:
      FUN_ram_4ff3ee10(iVar17);
LAB_ram_4ff28cf8:
      FUN_ram_4ff3afa2(*(undefined4 *)(iVar3 * 0x3578 + param_1 + 0x58c),0,0,0);
      uVar25 = uVar28;
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 0;
        iStack_b4 = 0;
        goto LAB_ram_4ff285fa;
      }
    }
    else {
      uVar11 = iStack_9c - param_2[4];
      iVar5 = iVar3 * 0x3578 + uStack_b8 * 0x40 + param_1;
      *(uint *)(iVar5 + 0x2f48) = uVar11;
      if (*(uint *)(iVar5 + 0x2f4c) < uVar11) {
        *(uint *)(iVar5 + 0x2f4c) = uVar11;
      }
      if (uVar11 < 0x3e9) goto LAB_ram_4ff28ad0;
      iVar21 = uStack_b8 * 0x40 + iVar3 * 0x3578 + param_1;
      iVar5 = iVar3 * 0x3578 + param_1;
      *(int *)(iVar21 + 0x2f50) = *(int *)(iVar21 + 0x2f50) + 1;
      FUN_ram_48099146(iVar2,2,param_2,uVar11,*(undefined4 *)(iVar5 + 0x2fec));
      if (uStack_ac == 0) {
        if (iStack_b4 != 0) goto LAB_ram_4ff28c22;
        iVar2 = *(int *)(iVar5 + 0x2ed4);
        goto LAB_ram_4ff28af0;
      }
LAB_ram_4ff28bb4:
      if (piStack_90 == (int *)0x0) {
        if (iStack_b4 != 0) {
LAB_ram_4ff292aa:
          if (uVar28 != 0) goto LAB_ram_4ff28c68;
          goto LAB_ram_4ff28588;
        }
      }
      else {
LAB_ram_4ff28bba:
        iVar2 = iVar3 * 0x3578 + param_1;
        cVar9 = *(char *)(iVar2 + 0x5a0);
        if (cVar9 != '\0') {
          *(char *)(iVar2 + 0x5a0) = cVar9 + -1;
        }
        if (iStack_b4 != 0) goto LAB_ram_4ff28c28;
      }
      iVar2 = param_1 + iVar3 * 0x3578;
      *(int *)(iVar2 + 0x2ed4) = *(int *)(iVar2 + 0x2ed4) + 1;
      if (uStack_b8 < 3) {
        iVar2 = iVar3 * 0x3578 + uStack_b8 * 0x40 + param_1;
        *(int *)(iVar2 + 0x2f20) = *(int *)(iVar2 + 0x2f20) + 1;
        if (uVar28 == 0) goto LAB_ram_4ff28b1a;
LAB_ram_4ff28c12:
        FUN_ram_4ff3ee10(iVar17);
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
        }
      }
      else {
        if (uVar28 != 0) goto LAB_ram_4ff28c12;
LAB_ram_4ff28b1a:
        FUN_ram_4ff3ee10(iVar17);
        if (uStack_ac == 0) {
          uVar28 = 0;
          goto LAB_ram_4ff28cf8;
        }
        uVar25 = 0;
        if (param_4 != (undefined1 *)0x0) {
          *param_4 = 0;
          uVar25 = 0;
        }
      }
    }
    iStack_b4 = 0;
    uVar28 = uVar25;
    goto LAB_ram_4ff285fa;
  }
  FUN_ram_4ff3ec14(iVar17,0xffffffff);
  uStack_98 = 0;
  if (uStack_ac == 0) {
    uVar28 = 0;
    iStack_9c = 0;
    uStack_a0 = 0;
LAB_ram_4ff286b6:
    FUN_ram_4ff3ee10(iVar17);
  }
  else {
    iStack_9c = 0;
    uStack_a0 = 0;
LAB_ram_4ff28586:
    uVar28 = 0;
LAB_ram_4ff28588:
    if (2 < uStack_b8) goto LAB_ram_4ff286b6;
    if (uVar27 == 0) {
      iVar5 = uStack_b8 * 0x40;
      iVar2 = iVar3 * 0x3578 + iVar5 + param_1;
      *(int *)(iVar2 + 0x2f40) = *(int *)(iVar2 + 0x2f40) + 1;
      uVar27 = 9;
LAB_ram_4ff285b6:
      iVar2 = iVar3 * 0x3578 + iVar5 + param_1;
      *(int *)(iVar2 + 0x2f58) = iStack_b4;
      *(undefined4 *)(iVar2 + 0x2f54) = uVar6;
      FUN_ram_4ff3ee10(iVar17);
    }
    else {
      if (uVar27 == 5) {
        iVar5 = uStack_b8 << 6;
        iVar2 = (uStack_b8 + 0xbc) * 0x40 + iVar3 * 0x3578 + param_1;
        *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
        goto LAB_ram_4ff285b6;
      }
      if (uVar27 < 6) {
        if (uVar27 == 3) {
          iVar5 = uStack_b8 << 6;
          iVar2 = (uStack_b8 + 0xbc) * 0x40 + iVar3 * 0x3578 + param_1;
          *(int *)(iVar2 + 0x2c) = *(int *)(iVar2 + 0x2c) + 1;
        }
        else if (uVar27 == 4) {
          iVar5 = uStack_b8 << 6;
          iVar2 = (uStack_b8 + 0xbc) * 0x40 + iVar3 * 0x3578 + param_1;
          *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + 1;
        }
        else {
          iVar5 = uStack_b8 * 0x40;
          iVar2 = iVar3 * 0x3578 + iVar5 + param_1;
          *(int *)(iVar2 + 0x2f28) = *(int *)(iVar2 + 0x2f28) + 1;
          uVar27 = 2;
        }
        goto LAB_ram_4ff285b6;
      }
      if (uVar27 == 6) {
        iVar5 = uStack_b8 << 6;
        iVar2 = (uStack_b8 + 0xbc) * 0x40 + iVar3 * 0x3578 + param_1;
        *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
        goto LAB_ram_4ff285b6;
      }
      if (uVar27 == 7) {
        iVar5 = uStack_b8 * 0x40;
        iVar2 = iVar3 * 0x3578 + iVar5 + param_1;
        *(int *)(iVar2 + 0x2f3c) = *(int *)(iVar2 + 0x2f3c) + 1;
        goto LAB_ram_4ff285b6;
      }
      uVar27 = 8;
      FUN_ram_4ff3ee10(iVar17);
    }
  }
  if (uStack_ac == 0) {
    FUN_ram_4ff3afa2(*(undefined4 *)(iVar3 * 0x3578 + param_1 + 0x58c),0,0,0);
  }
  if (param_4 != (undefined1 *)0x0) {
    if (uStack_a4 == 0) {
      uVar4 = FUN_ram_48092f0a(uVar27);
      *param_4 = uVar4;
    }
    else {
      *param_4 = (undefined1)uStack_a8;
    }
  }
  if (bVar24 == 1) {
    FUN_ram_4ff3ec14(iVar17,0xffffffff);
    iVar2 = iVar3 * 0x3578 + param_1;
    *(int *)(iVar2 + 0x2ef0) = *(int *)(iVar2 + 0x2ef0) + 1;
    FUN_ram_4ff3ee10(iVar17);
  }
LAB_ram_4ff285fa:
  FUN_ram_4809418a(param_1,param_2,iStack_b4 == 0,uVar29,iStack_9c,uStack_98,uStack_a0,uVar28,uVar28
                  );
  return iStack_b4 == 0;
}


