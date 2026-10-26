/* Firmware entry: 0x4804ea2a */

/* WARNING: Type propagation algorithm not settling */

uint FUN_ram_4804ea2a(int param_1,uint *param_2,int param_3,int param_4,char *param_5,
                     undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined1 uStack_3e;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_50 = 0x10000;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_40 = 0;
  uStack_3e = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  auStack_64 = (undefined1  [4])0x8;
  FUN_ram_4ff45158(param_6,&uStack_68,0x35);
  cVar9 = *param_5;
  *(char *)(param_1 + 0x1f9) = cVar9;
  if ((((cVar9 == '\0') || (param_5[1] == '\0')) || (param_5[2] == '\0')) ||
     ((param_5[3] == '\0' || (cVar9 = param_5[4], cVar9 == '\0')))) {
    if (*(char *)(param_1 + 0x1fa) != '\0') {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      *(undefined2 *)(param_1 + 0xa6) = 0;
      *(undefined1 *)(param_1 + 0xc4) = 0;
      *(undefined2 *)(param_1 + 0xf8) = 0;
      *(undefined1 *)(param_1 + 0xfa) = 0;
      *(undefined2 *)(param_1 + 0xaa) = 0;
      *(undefined1 *)(param_1 + 0xd0) = 0;
      *(undefined2 *)(param_1 + 0xd2) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined1 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 0x9c) = 0x1000000;
      *(undefined4 *)(param_1 + 0xac) = 1;
    }
    cVar9 = '\0';
LAB_ram_4804ecfe:
    uVar15 = *param_2;
    *(char *)(param_1 + 0x1fa) = cVar9;
  }
  else {
    if (*(char *)(param_1 + 0x1fa) != '\0') goto LAB_ram_4804ecfe;
    *(undefined1 *)(param_1 + 0x9c) = 1;
    uVar15 = *param_2;
    *(char *)(param_1 + 0x1fa) = cVar9;
  }
  if (uVar15 != 0x39b) {
    if (uVar15 != 0x370) {
      return 0;
    }
    uVar15 = param_2[1];
    if ((byte)uVar15 < 8) {
      return 0;
    }
    iVar5 = param_1 + 0x14d;
    puVar20 = (uint *)((int)param_2 + 5);
    do {
      if (((*(char *)(iVar5 + 0x23) != '\0') && ((uint)(param_3 - *(int *)(iVar5 + 0x1f)) < 0x65))
         && ((*(int *)(iVar5 + -5) == 0x370 &&
             ((*(byte *)(iVar5 + -1) == (byte)uVar15 &&
              (iVar6 = FUN_ram_4ff4511a(iVar5,puVar20,8), iVar6 == 0)))))) {
        *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + 1;
        return 0;
      }
      iVar5 = iVar5 + 0x2c;
    } while (param_1 + 0x1fd != iVar5);
    cVar9 = '\0';
    puVar11 = puVar20;
    do {
      uVar15 = *puVar11;
      puVar11 = (uint *)((int)puVar11 + 1);
      cVar9 = cVar9 + (byte)uVar15;
    } while (param_2 + 3 != puVar11);
    if ((char)param_2[3] != (char)(cVar9 + 's')) {
      *(int *)(param_1 + 0x248) = *(int *)(param_1 + 0x248) + 1;
      return 0;
    }
    uVar15 = (*(byte *)((int)param_2 + 7) & 0xf) << 8 | (uint)(byte)param_2[2];
    if (0xffc < (uVar15 - 1 & 0xffff)) {
      *(int *)(param_1 + 0x24c) = *(int *)(param_1 + 0x24c) + 1;
      return 0;
    }
    *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
    if (*(char *)(param_1 + 0x200) != '\0') {
      if ((*(byte *)(param_1 + 0x1fb) == (*(byte *)((int)param_2 + 0xb) & 0xf)) &&
         (iVar5 = param_4 - *(int *)(param_1 + 0x1fc), iVar5 - 1U < 100000)) {
        *(int *)(param_1 + 0x254) = iVar5;
        *(undefined1 *)(param_1 + 0x200) = 0;
        *(int *)(param_1 + 0x250) = *(int *)(param_1 + 0x250) + 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x200) = 0;
      }
    }
    if ((*(char *)((int)param_2 + 0xe) == '\0') && (param_2[4] == 0)) {
      *(undefined4 *)(param_1 + 0x21c) = 0xffffffff;
      *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
      return 0;
    }
    uVar12 = param_4 - param_2[4];
    *(uint *)(param_1 + 0x21c) = uVar12;
    if (5000 < uVar12) {
      *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + 1;
      return 0;
    }
    if (*param_5 == '\0') {
      return 0;
    }
    if (param_5[1] == '\0') {
      return 0;
    }
    if (param_5[2] == '\0') {
      return 0;
    }
    if (param_5[3] == '\0') {
      return 0;
    }
    if (param_5[4] == '\0') {
      return 0;
    }
    if (*(char *)(param_1 + 0x104) != '\0') {
      *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
      return 0;
    }
    uVar12 = *param_2 ^ 0x811c9dc5;
    do {
      uVar16 = *puVar20;
      puVar20 = (uint *)((int)puVar20 + 1);
      uVar12 = (uVar12 ^ (byte)uVar16) * 0x1000193;
    } while (puVar20 != (uint *)((int)param_2 + 0xd));
    FUN_ram_4804cfd2(&uStack_74,param_1 + 0x48,param_3,
                     (int)((((*(byte *)((int)param_2 + 9) & 0x3f) << 8 |
                            (uint)*(byte *)((int)param_2 + 10)) - 0x2000) * 0x10000) >> 0x10,
                     uVar15 - 0x802,uVar12);
    if ((uStack_74 & 0xff) == 0) {
      return 0;
    }
    uVar16 = (uint)uStack_74._2_2_;
    uVar12 = param_2[8];
    uVar19 = param_2[4];
    uVar18 = param_2[5];
    uVar15 = param_2[7];
    if (0xfa < (short)uStack_74._2_2_) {
      uVar16 = 0xfa;
    }
    if ((short)uVar16 < -0xfa) {
      uVar16 = 0xffffff06;
    }
    auStack_64[3] = (byte)(param_2[1] >> 0x18);
    uVar14 = (undefined1)((uVar16 + 0x802) * 0x10000 >> 0x10);
    uStack_60 = CONCAT31((int3)(param_2[2] >> 8),uVar14);
    uStack_60 = CONCAT13(*(byte *)((int)param_2 + 0xb) + 1 & 0xf |
                         *(byte *)((int)param_2 + 0xb) & 0xf0,(undefined3)uStack_60);
    puVar13 = &uStack_68;
    auStack_64._0_3_ = (undefined3)param_2[1];
    auStack_64[3] = (byte)(uVar16 + 0x802 >> 8) | auStack_64[3] & 0xf0;
    uStack_60 = CONCAT22(uStack_60._2_2_,CONCAT11(*(undefined1 *)((int)param_2 + 9),uVar14)) &
                0xffff3fff | 0x4000;
    uVar16 = 0;
    do {
      pbVar1 = (byte *)((int)puVar13 + 5);
      puVar13 = (undefined4 *)((int)puVar13 + 1);
      uVar17 = uVar16 + *pbVar1;
      uVar16 = uVar17 & 0xffff;
    } while (puVar13 != (undefined4 *)(auStack_64 + 3));
    uStack_5c = CONCAT31((int3)(param_2[3] >> 8),(char)(uVar17 * 0x10000 >> 0x10) + 's');
    uStack_50 = param_2[6] | 0x100;
    auStack_64[0] = 8;
    param_6[6] = uStack_50;
    param_6[3] = uStack_5c;
    param_6[1] = auStack_64;
    param_6[2] = uStack_60;
    param_6[4] = uVar19;
    param_6[5] = uVar18;
    param_6[7] = uVar15;
    param_6[8] = uVar12;
    *param_6 = 0x370;
    param_6[0xb] = uStack_6c;
    param_6[9] = uStack_74;
    param_6[10] = uStack_70;
    uVar15 = param_2[4];
    *(undefined1 *)(param_6 + 0xd) = 1;
    param_6[0xc] = uVar15;
    return uStack_74 & 0xff;
  }
  if ((byte)param_2[1] < 8) {
    return 0;
  }
  *(int *)(param_1 + 0x224) = *(int *)(param_1 + 0x224) + 1;
  if (*(char *)(param_1 + 0x9c) != '\0') {
    *(undefined1 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x91) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(undefined1 *)(param_1 + 0x95) = 0;
    *(undefined1 *)(param_1 + 0x96) = 0;
    *(undefined1 *)(param_1 + 0x97) = 0;
    *(undefined1 *)(param_1 + 0xa0) = 0;
    *(int *)(param_1 + 0xb4) = param_3;
    *(int *)(param_1 + 0xb8) = param_3;
    *(undefined2 *)(param_1 + 0xa2) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined2 *)(param_1 + 0xd2) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined2 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0xfa) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x2010100;
    *(undefined1 *)(param_1 + 0x92) = 0xf;
    *(undefined1 *)(param_1 + 0x98) = 2;
    *(undefined4 *)(param_1 + 0xac) = 1;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  bVar3 = false;
  if ((((*(char *)(param_1 + 0xf0) != '\0') && (bVar3 = false, *(char *)(param_1 + 0x90) != '\0'))
      && (bVar3 = false, *(byte *)(param_1 + 0x92) < 3)) &&
     (bVar3 = false, *(char *)(param_1 + 0x91) != '\0')) {
    bVar3 = (uint)(param_3 - *(int *)(param_1 + 0x94)) <= *(uint *)(param_1 + 0x8c);
  }
  if (*param_2 != 0x39b) {
    if (*(char *)(param_1 + 0x9e) != '\b') {
      return 0;
    }
    goto LAB_ram_4804f03e;
  }
  if ((byte)param_2[1] < 8) {
    if (*(char *)(param_1 + 0x9e) != '\b') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
    bVar4 = false;
  }
  else {
    bVar2 = *(byte *)((int)param_2 + 10);
    *(undefined1 *)(param_1 + 0x90) = 1;
    bVar8 = bVar2 >> 2 & 0xf;
    *(int *)(param_1 + 0x94) = param_3;
    *(byte *)(param_1 + 0x92) = bVar8;
    *(bool *)(param_1 + 0x91) = bVar8 < 9;
    if (bVar8 == 0xf) {
      uVar15 = *param_2;
      *(undefined1 *)(param_1 + 0x98) = 2;
LAB_ram_4804f0f0:
      if (*(char *)(param_1 + 0x9e) == '\b') {
        *(undefined1 *)(param_1 + 0xf0) = 0;
        bVar4 = false;
      }
      else {
        bVar4 = false;
      }
    }
    else {
      bVar10 = bVar2 & 0x38;
      if ((bVar2 & 0x38) != 0) {
        bVar10 = ((bVar2 >> 2 & 8) != 0) + 1;
      }
      *(byte *)(param_1 + 0x98) = bVar10;
      uVar15 = *param_2;
      bVar4 = true;
      if (8 < bVar8) goto LAB_ram_4804f0f0;
    }
    if (uVar15 != 0x39b) {
      return 0;
    }
  }
  if ((byte)param_2[1] < 8) {
    return 0;
  }
  bVar2 = *(byte *)(param_1 + 0x92);
  if (5 < bVar2) {
    *(undefined2 *)(param_1 + 0xa6) = 0;
    *(undefined1 *)(param_1 + 0xc4) = 0;
    *(undefined2 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)(param_1 + 0xfa) = 0;
    *(undefined1 *)(param_1 + 0xf0) = 0;
    *(undefined2 *)(param_1 + 0xaa) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    *(undefined2 *)(param_1 + 0xd2) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined2 *)(param_1 + 0x9e) = 0x808;
    *(undefined2 *)(param_1 + 0xac) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x9d) == '\0') {
    return 0;
  }
  cVar9 = *(char *)(param_1 + 0x9e);
  iVar5 = param_1 + 0x48;
  if (cVar9 != '\b') {
    if ((byte)(bVar2 - 3) < 3) {
      *(undefined1 *)(param_1 + 0xf8) = 0;
      if (*(char *)(param_1 + 0xc4) != '\0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0xf9) = 0;
      *(undefined1 *)(param_1 + 0xfa) = 0;
      *(undefined2 *)(param_1 + 0xa6) = 0;
      *(undefined1 *)(param_1 + 0xd0) = 0;
      *(undefined2 *)(param_1 + 0xd2) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0x100) = 0;
      *(undefined4 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xcc) = 0;
      *(undefined2 *)(param_1 + 0xaa) = 0;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
      *(undefined1 *)(param_1 + 0xc4) = 1;
      *(undefined2 *)(param_1 + 0xac) = 1;
      if (*(int *)(param_1 + 0x74) != 0) {
        *(int *)(param_1 + 0xb8) = param_3;
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x74);
        *(undefined2 *)(param_1 + 0x9e) = 0x70b;
        return 0;
      }
      FUN_ram_4804cb48(iVar5,param_3);
      return 0;
    }
    if (*(char *)(param_1 + 0xc4) == '\0') {
      if (cVar9 == '\x01') {
        *(undefined2 *)(param_1 + 0xa6) = 0;
        *(undefined1 *)(param_1 + 0xaf) = 0;
        *(undefined2 *)(param_1 + 0x9e) = 0x402;
      }
      if (*(char *)(param_1 + 0x49) == '\0') {
        *(undefined1 *)(param_1 + 0xfa) = 0;
        *(undefined4 *)(param_1 + 0xfc) = 0;
        return 0;
      }
      if (bVar2 == 2) {
        if (*(char *)(param_1 + 0xfa) == '\0') {
          *(int *)(param_1 + 0xfc) = param_3;
          *(undefined1 *)(param_1 + 0xfa) = 1;
          if (*(int *)(param_1 + 0x70) != 0) {
            return 0;
          }
        }
        else if ((*(uint *)(param_1 + 0x70) != 0) &&
                ((uint)(param_3 - *(int *)(param_1 + 0xfc)) < *(uint *)(param_1 + 0x70))) {
          return 0;
        }
        FUN_ram_4804cd2c(iVar5,param_3);
        return 0;
      }
      *(undefined1 *)(param_1 + 0xfa) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      if (*(char *)(param_1 + 0x9e) != '\f') {
        return 0;
      }
      if (*(uint *)(param_1 + 0xbc) == 0) {
        return 0;
      }
      if ((uint)(param_3 - *(int *)(param_1 + 0xb8)) < *(uint *)(param_1 + 0xbc)) {
        return 0;
      }
      uVar7 = *(undefined4 *)(param_1 + 0xc0);
    }
    else {
      if ((cVar9 == '\v') || (bVar2 == 2)) {
        *(undefined1 *)(param_1 + 0xf8) = 0;
        return 0;
      }
      bVar2 = *(byte *)(param_1 + 0xf8);
      if ((bVar2 < 2) && (*(byte *)(param_1 + 0xf8) = bVar2 + 1, bVar2 != 1)) {
        return 0;
      }
      if (*(char *)(param_1 + 0xd8) != '\0') {
        uVar15 = param_3 - *(int *)(param_1 + 0xdc);
        *(uint *)(param_1 + 0xe8) = uVar15;
        *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
        if (*(uint *)(param_1 + 0xec) < uVar15) {
          *(uint *)(param_1 + 0xec) = uVar15;
        }
      }
      *(undefined1 *)(param_1 + 0xc4) = 0;
      *(undefined1 *)(param_1 + 0xd8) = 0;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      *(undefined2 *)(param_1 + 0xf8) = 0;
      *(undefined1 *)(param_1 + 0xfa) = 0;
      if (*(char *)(param_1 + 0x49) == '\0') {
        *(undefined4 *)(param_1 + 0xbc) = 0;
        *(undefined2 *)(param_1 + 0xa6) = 0;
        *(undefined1 *)(param_1 + 0xd0) = 0;
        *(undefined2 *)(param_1 + 0xd2) = 0;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined2 *)(param_1 + 0xaa) = 0;
        *(undefined1 *)(param_1 + 0xc5) = 0;
        *(undefined4 *)(param_1 + 200) = 0;
        *(undefined4 *)(param_1 + 0xcc) = 0;
        *(undefined2 *)(param_1 + 0x9e) = 0xb09;
        *(undefined2 *)(param_1 + 0xac) = 1;
        return 0;
      }
      uVar7 = *(undefined4 *)(param_1 + 0xc0);
      if (*(int *)(param_1 + 0x88) != 0) {
        *(int *)(param_1 + 0xb8) = param_3;
        *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x88);
        *(undefined1 *)(param_1 + 0xd0) = 0;
        *(undefined2 *)(param_1 + 0xd2) = 0;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x100) = 0;
        *(undefined2 *)(param_1 + 0xa6) = 0;
        *(undefined2 *)(param_1 + 0xaa) = 0;
        *(undefined2 *)(param_1 + 0x9e) = 0xc;
        *(undefined1 *)(param_1 + 0xf9) = 1;
        *(undefined2 *)(param_1 + 0xac) = 1;
        FUN_ram_4804cd8e(iVar5,uVar7);
        return 0;
      }
    }
    FUN_ram_4804c858(iVar5,param_3,uVar7);
    return 0;
  }
  if ((bVar4) && (bVar2 < 3)) {
    if (!bVar3) {
      *(int *)(param_1 + 0xf4) = param_3;
      *(undefined1 *)(param_1 + 0xf0) = 1;
      return 0;
    }
    if ((uint)(param_3 - *(int *)(param_1 + 0xf4)) < 2000) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xf0) = 0;
    FUN_ram_4804c858(iVar5,param_3,*(undefined4 *)(param_1 + 0xc0));
    return 0;
  }
LAB_ram_4804f03e:
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return 0;
}


