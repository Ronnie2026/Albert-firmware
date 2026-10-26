/* Firmware entry: 0x48104b22 */

void FUN_ram_48104b22(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined4 *puVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154 [2];
  char cStack_14b;
  undefined4 auStack_148 [14];
  char cStack_110;
  char cStack_10d;
  char cStack_f8;
  char cStack_d9;
  undefined4 uStack_58;
  undefined1 uStack_44;
  undefined4 auStack_24 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4805c396(*(undefined4 *)(param_1 + 0x58),5,2,0xf);
  uVar2 = FUN_ram_4805c396(*(undefined4 *)(param_1 + 0x58),6,2,9);
  iVar12 = param_1 + 0x574;
  FUN_ram_4ff3ec14(iVar12,0xffffffff);
  *(undefined1 *)(param_1 + 0x638) = uVar2;
  *(undefined1 *)(param_1 + 0x637) = uVar1;
  FUN_ram_4ff3ee10(iVar12);
  iVar8 = 0;
  if ((*(char *)(param_2 + 10) != '\0') && (iVar8 = 0, *(char *)(param_2 + 0xc) != '\0')) {
    iVar8 = FUN_ram_48045922(*(undefined4 *)(param_1 + 0x5c),2,0);
  }
  FUN_ram_4ff3ec14(iVar12,0xffffffff);
  *(char *)(param_1 + 0x584) = (char)iVar8;
  if (((*(int *)(param_1 + 0x6c4) != 0) && (*(char *)(param_1 + 0x65d) != '\x02')) &&
     (199 < param_3 - *(int *)(param_1 + 0x6c4))) {
    *(undefined4 *)(param_1 + 0x6c4) = 0;
    if ((*(byte *)(param_1 + 0x6bc) & 0xfb) != 0) {
      *(int *)(param_1 + 0x70c) = *(int *)(param_1 + 0x70c) + 1;
    }
    FUN_ram_480544e4(iVar12,param_3,0);
  }
  bVar6 = *(byte *)(param_1 + 0x6bc);
  if ((bVar6 & 0xfd) == 1) {
    if (*(int *)(param_1 + 0x6c0) == 0) goto LAB_ram_48104bfe;
    iVar11 = param_3 - *(int *)(param_1 + 0x6c0);
    if ((*(int *)(param_1 + 0x6d4) == 0) || (600 < param_3 - *(int *)(param_1 + 0x6d4))) {
      if (599 < iVar11) {
        *(int *)(param_1 + 0x704) = *(int *)(param_1 + 0x704) + 1;
        if (999 < iVar11) goto LAB_ram_48104d06;
        cVar10 = *(char *)(param_1 + 0x6ca);
        *(undefined1 *)(param_1 + 0x6c8) = 0;
        *(undefined1 *)(param_1 + 0x718) = 0;
        goto joined_r0x48104e2c;
      }
      goto LAB_ram_48104bfe;
    }
    if (iVar11 < 1000) goto LAB_ram_48104bfe;
LAB_ram_48104d06:
    *(undefined1 *)(param_1 + 0x6c8) = 0;
    *(undefined1 *)(param_1 + 0x718) = 0;
    *(int *)(param_1 + 0x708) = *(int *)(param_1 + 0x708) + 1;
    cVar10 = *(char *)(param_1 + 0x6ca);
joined_r0x48104e2c:
    if (((cVar10 != '\0') || (*(char *)(param_1 + 0x6c9) != '\0')) || (bVar6 == 3)) {
      *(undefined1 *)(param_1 + 0x6cb) = 1;
    }
    *(undefined1 *)(param_1 + 0x6bc) = 6;
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x6c0) = 1;
    }
    else {
      *(int *)(param_1 + 0x6c0) = param_3;
    }
    if (*(char *)(param_1 + 0x620) == '\0') goto LAB_ram_48104c06;
LAB_ram_48104d3e:
    uVar1 = 8;
LAB_ram_48104e34:
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    *(undefined1 *)(param_1 + 0x634) = 0;
    *(undefined1 *)(param_1 + 0x5d1) = 0;
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    *(undefined1 *)(param_1 + 0x5d3) = 0;
    *(undefined1 *)(param_1 + 0x5e0) = 0;
    *(undefined2 *)(param_1 + 0x628) = 0;
    *(undefined1 *)(param_1 + 0x62a) = 0;
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined2 *)(param_1 + 0x630) = 0;
    *(undefined2 *)(param_1 + 0x608) = 0;
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    *(undefined2 *)(param_1 + 0x5c0) = 0;
    *(undefined1 *)(param_1 + 0x5c2) = uVar1;
    FUN_ram_4ff3ee10(iVar12);
  }
  else {
    if (bVar6 == 2) {
      if ((*(char *)(param_1 + 0x6c9) != '\0') && (iVar11 = *(int *)(param_1 + 0x6d0), iVar11 != 0))
      {
LAB_ram_48104d4c:
        if (-1 < param_3 - iVar11) {
          *(undefined1 *)(param_1 + 0x6bc) = 3;
          if (param_3 == 0) {
            *(undefined4 *)(param_1 + 0x6c0) = 1;
            *(undefined1 *)(param_1 + 0x6cc) = 0;
            *(undefined1 *)(param_1 + 0x6c8) = 4;
          }
          else {
            *(int *)(param_1 + 0x6c0) = param_3;
            *(undefined1 *)(param_1 + 0x6cc) = 0;
            *(undefined1 *)(param_1 + 0x6c8) = 4;
          }
        }
      }
    }
    else if (bVar6 == 5) {
      iVar11 = *(int *)(param_1 + 0x6d0);
      goto LAB_ram_48104d4c;
    }
LAB_ram_48104bfe:
    if (*(char *)(param_1 + 0x620) != '\0') goto LAB_ram_48104d3e;
LAB_ram_48104c06:
    if (iVar8 == 0) {
      uVar1 = 2;
      goto LAB_ram_48104e34;
    }
    cVar10 = *(char *)(param_1 + 0x628);
    if (cVar10 == '\0') {
LAB_ram_48104d70:
      if (*(char *)(param_1 + 0x5bc) == '\0') {
        cVar10 = *(char *)(param_1 + 0x5bd);
        goto LAB_ram_48104c80;
      }
LAB_ram_48104d78:
      cVar10 = *(char *)(param_1 + 0x609);
      if (*(char *)(param_1 + 0x57c) == '\0') {
        if ((*(char *)(param_1 + 0x57d) != '\0') && (*(char *)(param_1 + 0x5c1) == '\x04'))
        goto LAB_ram_48104db4;
        *(undefined1 *)(param_1 + 0x5bd) = 1;
        if (*(char *)(param_1 + 0x5be) != '\0') {
          if (*(char *)(param_1 + 0x5c1) == '\x04') goto LAB_ram_48104c86;
          goto LAB_ram_48104d8e;
        }
        if (cVar10 != '\0') {
          if ((*(char *)(param_1 + 0x5c1) == '\x04') || (*(char *)(param_1 + 0x664) == '\0'))
          goto LAB_ram_48104cb4;
          goto LAB_ram_48104d96;
        }
LAB_ram_48104c90:
        *(undefined4 *)(param_1 + 0x5bc) = 0;
        *(undefined2 *)(param_1 + 0x5c0) = 0;
        *(undefined4 *)(param_1 + 0x5c4) = 0;
        *(undefined4 *)(param_1 + 0x5c8) = 0;
        *(undefined1 *)(param_1 + 0x634) = 0;
        *(undefined1 *)(param_1 + 0x5d1) = 0;
        *(undefined4 *)(param_1 + 0x5d4) = 0;
        *(undefined1 *)(param_1 + 0x5d3) = 0;
        *(undefined1 *)(param_1 + 0x5e0) = 0;
      }
      else {
        if (*(char *)(param_1 + 0x5c1) == '\x04') {
LAB_ram_48104db4:
          if (*(char *)(param_1 + 0x5bd) != '\0') goto LAB_ram_48104c86;
          if ((cVar10 != '\0') ||
             ((*(int *)(param_1 + 0x5c4) != 0 && (param_3 - *(int *)(param_1 + 0x5c4) < 0))))
          goto LAB_ram_48104cb4;
          *(undefined1 *)(param_1 + 0x5cb) = 0;
          *(byte *)(param_1 + 0x5ca) = *(byte *)(param_1 + 0x5be) ^ 1;
          *(undefined1 *)(param_1 + 0x634) = 1;
          if (*(char *)(param_1 + 0x608) != '\0') {
            *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
          }
          goto LAB_ram_48104dec;
        }
LAB_ram_48104d8e:
        if (*(char *)(param_1 + 0x664) != '\0') {
LAB_ram_48104d96:
          if (((*(int *)(param_1 + 0x668) != 0) && (param_3 - *(int *)(param_1 + 0x668) < 0x1f5)) &&
             (10 < *(ushort *)(param_1 + 0x662))) goto LAB_ram_48104db4;
        }
        *(undefined1 *)(param_1 + 0x5bd) = 1;
        if (*(char *)(param_1 + 0x5be) == '\0') {
          if (cVar10 == '\0') goto LAB_ram_48104c90;
        }
        else if (cVar10 == '\0') goto LAB_ram_481052b8;
      }
    }
    else {
      if (*(int *)(param_1 + 0x62c) == 0) {
        *(undefined1 *)(param_1 + 0x62a) = 0;
LAB_ram_48105206:
        iVar8 = 0x87;
      }
      else {
        if (param_3 - *(int *)(param_1 + 0x62c) < 0) goto LAB_ram_48104d70;
        bVar7 = *(char *)(param_1 + 0x62a) + 1;
        bVar6 = bVar7 & 3;
        *(byte *)(param_1 + 0x62a) = bVar6;
        if ((bVar7 & 1) == 0) goto LAB_ram_48105206;
        if (bVar6 == 3) {
          cVar10 = '\0';
          iVar8 = 0x5dc;
        }
        else {
          cVar10 = '\0';
          iVar8 = 0x87;
        }
      }
      *(int *)(param_1 + 0x62c) = iVar8 + param_3;
      *(char *)(param_1 + 0x629) = cVar10;
      if (*(char *)(param_1 + 0x5bc) != '\0') goto LAB_ram_48104d78;
      if (*(char *)(param_1 + 0x608) != '\0') {
        *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
      }
      *(int *)(param_1 + 0x60c) = param_3;
      *(byte *)(param_1 + 0x648) = *(byte *)(param_1 + 0x648) | 1;
      cVar10 = *(char *)(param_1 + 0x5bd);
      *(undefined1 *)(param_1 + 0x608) = 1;
      *(undefined1 *)(param_1 + 0x631) = 1;
LAB_ram_48104c80:
      if (cVar10 == '\0') goto LAB_ram_48104cb4;
      cVar10 = *(char *)(param_1 + 0x609);
LAB_ram_48104c86:
      if (cVar10 == '\0') {
        if (*(char *)(param_1 + 0x5be) == '\0') goto LAB_ram_48104c90;
LAB_ram_481052b8:
        *(undefined2 *)(param_1 + 0x5ca) = 0x100;
        *(undefined1 *)(param_1 + 0x634) = 1;
        if (*(char *)(param_1 + 0x608) != '\0') {
          *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
        }
LAB_ram_48104dec:
        *(int *)(param_1 + 0x60c) = param_3;
        *(byte *)(param_1 + 0x648) = *(byte *)(param_1 + 0x648) | 1;
        *(undefined1 *)(param_1 + 0x608) = 1;
        *(undefined1 *)(param_1 + 0x631) = 1;
      }
    }
LAB_ram_48104cb4:
    bVar6 = 0;
    if (((*(char *)(param_1 + 0x57c) == '\0') && (*(char *)(param_1 + 0x57d) == '\0')) &&
       (*(char *)(param_1 + 0x57e) == '\0')) {
      bVar6 = *(byte *)(param_1 + 0x57f) ^ 1;
    }
    *(byte *)(param_1 + 0x5c2) = bVar6;
    FUN_ram_4ff3ee10(iVar12);
  }
  FUN_ram_480cc884(param_1,param_3);
  FUN_ram_48053f2a(local_154,iVar12,param_3);
  cVar10 = '\x01';
  if ((((((*(int *)(param_1 + 0x778) == 0) && (*(int *)(param_1 + 0x7a0) == 0)) &&
        (*(int *)(param_1 + 0x750) == 0)) &&
       ((*(int *)(param_1 + 0x728) == 0 && (cVar10 = cStack_14b, cStack_14b == '\0')))) &&
      (cVar10 = cStack_f8, cStack_f8 == '\0')) &&
     ((cVar10 = cStack_d9, cStack_d9 == '\0' && (cVar10 = cStack_10d, cStack_10d == '\0')))) {
    cVar10 = cStack_110 != '\0';
  }
  fence();
  if ((*(char *)(param_1 + 0x7c8) != '\0') != (bool)cVar10) {
    fence();
    *(char *)(param_1 + 0x7c8) = cVar10;
    FUN_ram_480599fe(*(undefined4 *)(param_1 + 0x58),0);
  }
  FUN_ram_48104864(param_1,param_3);
  if (*(int *)(param_1 + 0x778) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x750) != 0) {
    return;
  }
  uStack_158 = DAT_ram_48222d68;
  uStack_178 = DAT_ram_48222d48;
  uStack_174 = DAT_ram_48222d4c;
  uStack_170 = DAT_ram_48222d50;
  uStack_16c = DAT_ram_48222d54;
  uStack_168 = DAT_ram_48222d58;
  uStack_164 = DAT_ram_48222d5c;
  uStack_160 = DAT_ram_48222d60;
  uStack_15c = DAT_ram_48222d64;
  FUN_ram_4ff3ec14(iVar12,0xffffffff);
  if (((((*(char *)(param_1 + 0x637) == '\0') || (*(char *)(param_1 + 0x635) != '\0')) ||
       (*(char *)(param_1 + 0x608) == '\0')) ||
      ((*(char *)(param_1 + 0x609) != '\0' || (*(char *)(param_1 + 0x620) != '\0')))) ||
     (*(char *)(param_1 + 0x584) == '\0')) goto LAB_ram_481051c4;
  iVar8 = *(int *)(param_1 + 0x588);
  if ((iVar8 == 0) || (0x2ee < (uint)(param_3 - iVar8))) {
    *(undefined1 *)(param_1 + 0x608) = 0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(char *)(param_1 + 0x636) != '\0') {
      *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
    }
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    *(undefined1 *)(param_1 + 0x634) = 0;
    *(undefined1 *)(param_1 + 0x5d1) = 0;
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    *(undefined1 *)(param_1 + 0x5d3) = 0;
    *(undefined1 *)(param_1 + 0x5e0) = 0;
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    *(undefined2 *)(param_1 + 0x5c0) = 0;
    *(undefined1 *)(param_1 + 0x5c2) = 3;
    goto LAB_ram_481051c4;
  }
  uStack_178 = *(undefined4 *)(param_1 + 0x58c);
  uStack_174 = *(undefined4 *)(param_1 + 0x590);
  uStack_170 = *(undefined4 *)(param_1 + 0x594);
  uVar15 = *(undefined4 *)(param_1 + 0x598);
  uStack_168 = *(undefined4 *)(param_1 + 0x59c);
  uStack_164 = *(undefined4 *)(param_1 + 0x5a0);
  uStack_160 = *(uint *)(param_1 + 0x5a4);
  uStack_15c = *(undefined4 *)(param_1 + 0x5a8);
  uStack_158 = *(undefined4 *)(param_1 + 0x5ac);
  bVar6 = *(byte *)(param_1 + 0x593);
  bVar7 = bVar6 >> 7;
  if (*(char *)(param_1 + 0x5bc) == '\0') {
    if (*(char *)(param_1 + 0x628) != '\0') {
      bVar7 = *(byte *)(param_1 + 0x629);
      goto LAB_ram_48104fc2;
    }
    if ((*(char *)(param_1 + 0x57f) == '\0') || (*(char *)(param_1 + 0x65d) != '\x02'))
    goto LAB_ram_48104fc2;
LAB_ram_48105402:
    bVar4 = bVar6 | 0x80;
    cVar10 = *(char *)(param_1 + 0x584);
  }
  else {
    if (*(char *)(param_1 + 0x634) == '\0') {
      bVar7 = *(byte *)(param_1 + 0x5be);
    }
    else {
      bVar7 = *(byte *)(param_1 + 0x5ca);
    }
LAB_ram_48104fc2:
    bVar4 = bVar6 & 0x7f;
    cVar10 = '\0';
    if (bVar7 != 0) goto LAB_ram_48105402;
  }
  if (((bVar4 == bVar6) && (*(char *)(param_1 + 0x631) == '\0')) &&
     (*(char *)(param_1 + 0x634) == '\0')) {
    *(undefined1 *)(param_1 + 0x608) = 0;
    *(undefined1 *)(param_1 + 0x648) = 0;
    *(int *)(param_1 + 0x654) = *(int *)(param_1 + 0x654) + 1;
    uStack_16c = uVar15;
    goto LAB_ram_481051c4;
  }
  uStack_160 = uStack_160 & 0xfffffeff;
  uStack_174 = CONCAT13(bVar4,(undefined3)uStack_174);
  uStack_174 = CONCAT31(uStack_174._1_3_,8);
  uStack_16c._2_2_ = (undefined2)((uint)uVar15 >> 0x10);
  uStack_16c._0_2_ = CONCAT11(2,(char)uVar15);
  *(int *)(param_1 + 0x610) = iVar8;
  *(uint *)(param_1 + 0x5fc) = uStack_160;
  *(undefined4 *)(param_1 + 0x5e4) = 0x273;
  *(undefined2 *)(param_1 + 0x608) = 0x100;
  *(char *)(param_1 + 0x633) = cVar10;
  *(char *)(param_1 + 0x632) = *(char *)(param_1 + 0x631);
  *(undefined4 *)(param_1 + 0x5e8) = uStack_174;
  *(undefined4 *)(param_1 + 0x5f0) = uStack_16c;
  *(undefined4 *)(param_1 + 0x5ec) = uStack_170;
  *(undefined4 *)(param_1 + 0x5f4) = uStack_168;
  *(undefined4 *)(param_1 + 0x604) = uStack_158;
  *(undefined1 *)(param_1 + 0x649) = *(undefined1 *)(param_1 + 0x648);
  *(undefined4 *)(param_1 + 0x5f8) = uStack_164;
  *(undefined4 *)(param_1 + 0x600) = uStack_15c;
  *(undefined1 *)(param_1 + 0x631) = 0;
  *(undefined1 *)(param_1 + 0x648) = 0;
  uStack_178 = 0x273;
  FUN_ram_4ff3ee10(iVar12);
  puVar14 = *(undefined4 **)(param_1 + 0x5c);
  puVar9 = puVar14 + 0x297;
  FUN_ram_4ff3ec14(puVar9,0xffffffff);
  piVar13 = (int *)*puVar14;
  FUN_ram_4ff3ee10(puVar9);
  memset(local_154,0,0x134);
  uStack_58 = 0xffffffff;
  uStack_44 = 1;
  if (((piVar13 != (int *)0x0) &&
      (iVar8 = (**(code **)(*piVar13 + 0x15c))(piVar13,2,local_154), iVar8 != 0)) &&
     ((char)local_154[0] != '\0')) {
    if (*(char *)(param_1 + 0x7c9) == '\0') {
      puVar14 = local_154;
      puVar9 = (undefined4 *)(param_1 + 2000);
      do {
        uVar15 = puVar14[1];
        uVar3 = puVar14[2];
        uVar5 = puVar14[3];
        *puVar9 = *puVar14;
        puVar9[1] = uVar15;
        puVar9[2] = uVar3;
        puVar9[3] = uVar5;
        puVar14 = puVar14 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar14 != auStack_24);
      *puVar9 = *puVar14;
      *(undefined1 *)(param_1 + 0x7c9) = 1;
    }
    *(int *)(param_1 + 0x7cc) = param_3 + 500;
  }
  local_154[0] = 0;
  iVar8 = FUN_ram_48025b94();
  FUN_ram_4ff3ec14(iVar12,0xffffffff);
  if (*(char *)(param_1 + 0x609) == '\0') {
    FUN_ram_4ff3ee10(iVar12);
LAB_ram_4810513a:
    uVar15 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x5cb) == '\0') && ((*(byte *)(param_1 + 0x649) & 4) == 0)) {
      FUN_ram_4ff3ee10();
      goto LAB_ram_4810513a;
    }
    FUN_ram_4ff3ee10(iVar12);
    uVar15 = 0x20;
  }
  iVar8 = FUN_ram_4805cb5e(*(undefined4 *)(param_1 + 0x58),&uStack_178,0,0xc,1,1,iVar8 + 100000,9,
                           local_154,0x20,uVar15,1,0,0);
  if (iVar8 != 0) {
    *(undefined4 *)(param_1 + 0x750) = local_154[0];
    *(undefined4 *)(param_1 + 0x754) = uStack_178;
    *(undefined4 *)(param_1 + 0x758) = uStack_174;
    *(undefined4 *)(param_1 + 0x75c) = uStack_170;
    *(undefined4 *)(param_1 + 0x760) = uStack_16c;
    *(undefined4 *)(param_1 + 0x764) = uStack_168;
    *(undefined4 *)(param_1 + 0x768) = uStack_164;
    *(uint *)(param_1 + 0x76c) = uStack_160;
    *(undefined4 *)(param_1 + 0x770) = uStack_15c;
    *(undefined4 *)(param_1 + 0x774) = uStack_158;
    return;
  }
  FUN_ram_4ff3ec14(iVar12,0xffffffff);
  if (*(char *)(param_1 + 0x609) != '\0') {
    *(undefined1 *)(param_1 + 0x609) = 0;
    *(undefined1 *)(param_1 + 0x5cb) = 0;
    *(undefined1 *)(param_1 + 0x634) = 0;
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + 1;
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    if ((*(byte *)(param_1 + 0x649) & 4) != 0) {
      *(int *)(param_1 + 0x640) = *(int *)(param_1 + 0x640) + 1;
    }
    *(undefined4 *)(param_1 + 0x5c4) = 0;
    *(undefined2 *)(param_1 + 0x5c8) = 0;
    *(undefined1 *)(param_1 + 0x5ca) = 0;
    *(undefined1 *)(param_1 + 0x5d1) = 0;
    *(undefined4 *)(param_1 + 0x5d4) = 0;
    *(undefined1 *)(param_1 + 0x5d3) = 0;
    *(undefined1 *)(param_1 + 0x5e0) = 0;
    *(undefined2 *)(param_1 + 0x628) = 0;
    *(undefined1 *)(param_1 + 0x62a) = 0;
    *(undefined4 *)(param_1 + 0x62c) = 0;
    *(undefined2 *)(param_1 + 0x630) = 0;
    *(undefined1 *)(param_1 + 0x636) = 0;
    *(undefined2 *)(param_1 + 0x648) = 0;
    *(undefined1 *)(param_1 + 0x608) = 0;
    *(undefined4 *)(param_1 + 0x5bc) = 0;
    *(undefined2 *)(param_1 + 0x5c0) = 0;
    *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
    *(undefined1 *)(param_1 + 0x620) = 1;
    *(undefined1 *)(param_1 + 0x5c2) = 8;
  }
LAB_ram_481051c4:
  FUN_ram_4ff3ee10(iVar12);
  return;
}


