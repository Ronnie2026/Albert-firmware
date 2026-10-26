/* Firmware entry: 0x480df834 */

void FUN_ram_480df834(int param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  int iVar15;
  undefined1 auStack_1e8 [184];
  uint uStack_130;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char cStack_8c;
  char cStack_8b;
  char cStack_89;
  char cStack_7b;
  uint uStack_4c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = FUN_ram_48025ba6();
  cVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x80) = 1;
  if (cVar1 == '\x0f') {
    uStack_e8 = *(undefined4 *)(param_2 + 0x18);
    uStack_ec = *(undefined4 *)(param_2 + 0x14);
    uStack_104 = *(undefined4 *)(param_2 + 4);
    uStack_100 = *(undefined4 *)(param_2 + 0xc);
    uStack_f4 = *(undefined4 *)(param_2 + 0x1c);
    uStack_fc._0_2_ = CONCAT11(param_2[0x10],param_2[8]);
    uStack_f0 = CONCAT31(uStack_f0._1_3_,param_2[0x11]);
    iStack_f8 = iVar6;
    FUN_ram_48043ab4(*(int *)(param_1 + 0x58) + 0x80,&uStack_104);
    iVar6 = *(int *)(param_1 + 0x58);
    if (*(int *)(iVar6 + 0x224) != *(int *)(iVar6 + 0x59c)) {
      FUN_ram_4ff3ec14(iVar6 + 0xb20,0xffffffff);
      puVar13 = (undefined4 *)(iVar6 + 0x224);
      puVar10 = (undefined4 *)(iVar6 + 0x458);
      do {
        uVar7 = puVar13[1];
        uVar8 = puVar13[2];
        uVar9 = puVar13[3];
        *puVar10 = *puVar13;
        puVar10[1] = uVar7;
        puVar10[2] = uVar8;
        puVar10[3] = uVar9;
        puVar13 = puVar13 + 4;
        puVar10 = puVar10 + 4;
      } while (puVar13 != (undefined4 *)(iVar6 + 0x364));
      *puVar10 = *puVar13;
      FUN_ram_4ff3ee10(iVar6 + 0xb20);
      *(undefined4 *)(iVar6 + 0x59c) = *(undefined4 *)(iVar6 + 0x224);
      iVar6 = *(int *)(param_1 + 0x58);
    }
    uVar12 = 1;
    if (*(char *)(iVar6 + 0x21f) == '\0') {
      uVar12 = *(undefined1 *)(iVar6 + 0x222);
    }
    fence();
    *(undefined1 *)(iVar6 + 0x5a0) = uVar12;
    FUN_ram_480599fe(*(undefined4 *)(param_1 + 0x58),0);
    return;
  }
  if (cVar1 == '\r') {
    FUN_ram_4805277e(param_1 + 0x378,*(undefined4 *)(param_2 + 4),param_2[8],
                     *(undefined4 *)(param_2 + 0x1c),iVar6,param_2[0x10] ^ 1);
    return;
  }
  if (cVar1 == '\n') {
    FUN_ram_480c4cc4(param_1,param_2,iVar6);
    return;
  }
  if (cVar1 != '\f') {
    if (cVar1 == '\x06') {
      if (*(int *)(param_2 + 4) == *(int *)(param_1 + 0x33c)) {
        cVar1 = param_2[8];
        *(undefined4 *)(param_1 + 0x33c) = 0;
        if (cVar1 == '\0') {
          *(undefined4 *)(param_1 + 0x338) = 1;
          *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 1;
          *(undefined2 *)(param_1 + 0x336) = 0x400;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 1;
        if (*(char *)(param_1 + 0x336) != '\0') {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        *(undefined4 *)(param_1 + 0x338) = 0;
        *(undefined1 *)(param_1 + 0x335) = *(undefined1 *)(param_1 + 0x334);
        *(undefined1 *)(param_1 + 0x337) = 3;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
LAB_ram_480df896:
      *(undefined1 *)(param_1 + 0x80) = 0;
      return;
    }
    if (cVar1 != '\t') {
      if ((cVar1 == '\v') && (*(int *)(param_2 + 4) == *(int *)(param_1 + 3000))) {
        *(char *)(param_1 + 0xbec) = param_2[8];
        *(undefined4 *)(param_1 + 3000) = 0;
        *(undefined4 *)(param_1 + 0xbe8) = 0;
        FUN_ram_4805883a(&uStack_104,*(undefined4 *)(param_1 + 0x58));
        if (cStack_7b == '\0') {
          *(undefined1 *)(param_1 + 0xbec) = 0;
        }
        if (param_2[8] != '\0') {
          *(int *)(param_1 + 0xbfc) = iVar6;
          *(int *)(param_1 + 0xbf4) = *(int *)(param_1 + 0xbf4) + 1;
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return;
        }
        *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xbf8) + 1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      goto LAB_ram_480df896;
    }
    if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0xd6c)) goto LAB_ram_480df896;
    *(undefined4 *)(param_1 + 0xd6c) = 0;
    if (*(int *)(param_1 + 0xd70) != *(int *)(param_1 + 0xdcc)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    if (*(int *)(param_1 + 0xd74) == 0) {
      if (*(char *)(param_1 + 0xd58) == '\0') {
        *(byte *)(param_1 + 0xd68) = param_2[8] ^ 1;
      }
      if (param_2[8] == '\0') {
        *(undefined2 *)(param_1 + 0xdd0) = 1;
        *(int *)(param_1 + 0xdd8) = *(int *)(param_1 + 0xdd8) + 1;
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      if (param_2[0x10] != '\0') goto LAB_ram_480dfe72;
      FUN_ram_4805c6b0(*(undefined4 *)(param_1 + 0x58),0,1,0);
    }
    if (param_2[8] == '\0') {
      *(int *)(param_1 + 0xdd8) = *(int *)(param_1 + 0xdd8) + 1;
      *(undefined2 *)(param_1 + 0xdd0) = 1;
      if (*(int *)(param_1 + 0xd74) == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      FUN_ram_480df148(param_1);
      return;
    }
LAB_ram_480dfe72:
    *(int *)(param_1 + 0xdd4) = *(int *)(param_1 + 0xdd4) + 1;
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return;
  }
  if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x778)) {
    if (*(int *)(param_2 + 4) != *(int *)(param_1 + 0x7a0)) goto LAB_ram_480df896;
    iVar15 = param_1 + 0x574;
    FUN_ram_48053f2a(auStack_1e8,iVar15,iVar6);
    cVar1 = param_2[8];
    FUN_ram_4ff3ec14(iVar15,0xffffffff);
    if (*(char *)(param_1 + 0x6ce) != '\0') {
      *(undefined1 *)(param_1 + 0x6ce) = 0;
      if (cVar1 == '\0') {
        cVar1 = *(char *)(param_1 + 0x718);
        *(char *)(param_1 + 0x718) = cVar1 + '\x01';
        *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x6f0) + 1;
        if (3 < (byte)(cVar1 + 1U)) {
          *(undefined1 *)(param_1 + 0x6c8) = 0;
          iVar11 = iVar6;
          if (iVar6 == 0) {
            iVar11 = 1;
          }
          if (((*(char *)(param_1 + 0x6c9) == '\0') && (*(char *)(param_1 + 0x6ca) == '\0')) &&
             (*(char *)(param_1 + 0x6bc) != '\x03')) {
            *(int *)(param_1 + 0x6c0) = iVar11;
            *(undefined1 *)(param_1 + 0x6bc) = 6;
          }
          else if (*(byte *)(param_1 + 0x6cc) < 3) {
            if ((*(int *)(param_1 + 0x6d4) == 0) || (600 < iVar6 - *(int *)(param_1 + 0x6d4))) {
              *(int *)(param_1 + 0x6c0) = iVar11;
              *(undefined1 *)(param_1 + 0x6cb) = 1;
              *(undefined1 *)(param_1 + 0x6bc) = 6;
            }
            else {
              *(byte *)(param_1 + 0x6cc) = *(byte *)(param_1 + 0x6cc) + 1;
              *(undefined1 *)(param_1 + 0x6cb) = 0;
              *(undefined1 *)(param_1 + 0x718) = 0;
              *(int *)(param_1 + 0x6c0) = iVar11;
              *(int *)(param_1 + 0x714) = *(int *)(param_1 + 0x714) + 1;
              *(undefined1 *)(param_1 + 0x6c8) = 4;
              *(undefined1 *)(param_1 + 0x6bc) = 3;
            }
          }
          else {
            *(undefined1 *)(param_1 + 0x6cb) = 0;
            *(int *)(param_1 + 0x6c0) = iVar11;
            *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + 1;
            *(undefined1 *)(param_1 + 0x6bc) = 6;
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x718) = 0;
        *(int *)(param_1 + 0x6ec) = *(int *)(param_1 + 0x6ec) + 1;
        if (*(char *)(param_1 + 0x6bc) == '\x01') {
          *(undefined1 *)(param_1 + 0x6ca) = 1;
          *(int *)(param_1 + 0x6f4) = *(int *)(param_1 + 0x6f4) + 1;
        }
        else if (*(char *)(param_1 + 0x6bc) == '\x03') {
          *(int *)(param_1 + 0x6f8) = *(int *)(param_1 + 0x6f8) + 1;
        }
        *(undefined1 *)(param_1 + 0x6e7) = *(undefined1 *)(param_1 + 0x7b0);
        *(undefined1 *)(param_1 + 0x6e0) = *(undefined1 *)(param_1 + 0x7a9);
        *(undefined1 *)(param_1 + 0x6e1) = *(undefined1 *)(param_1 + 0x7aa);
        *(undefined1 *)(param_1 + 0x6e2) = *(undefined1 *)(param_1 + 0x7ab);
        *(undefined1 *)(param_1 + 0x6e3) = *(undefined1 *)(param_1 + 0x7ac);
        *(undefined1 *)(param_1 + 0x6e4) = *(undefined1 *)(param_1 + 0x7ad);
        *(undefined1 *)(param_1 + 0x6e5) = *(undefined1 *)(param_1 + 0x7ae);
        *(undefined1 *)(param_1 + 0x6e6) = *(undefined1 *)(param_1 + 0x7af);
        iVar11 = iVar6;
        if (iVar6 == 0) {
          iVar11 = 1;
        }
        *(int *)(param_1 + 0x6e8) = iVar11;
        if (*(char *)(param_1 + 0x6c8) != '\0') {
          *(char *)(param_1 + 0x6c8) = *(char *)(param_1 + 0x6c8) + -1;
        }
      }
    }
    FUN_ram_4ff3ee10(iVar15);
    *(undefined4 *)(param_1 + 0x7bc) = 0x10000;
    *(undefined4 *)(param_1 + 0x7a0) = 0;
    *(undefined4 *)(param_1 + 0x7a4) = 0;
    *(undefined4 *)(param_1 + 0x7ac) = 0;
    *(undefined4 *)(param_1 + 0x7b0) = 0;
    *(undefined4 *)(param_1 + 0x7b4) = 0;
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    *(undefined4 *)(param_1 + 0x7c4) = 0;
    *(undefined4 *)(param_1 + 0x7a8) = 8;
    uStack_ec = 0x10000;
    uStack_104 = 0;
    uStack_fc = 0;
    iStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_100 = 8;
    FUN_ram_48053f2a(&uStack_104,iVar15,iVar6);
    if (((param_2[8] != '\0') && (param_2[0x10] == '\0')) && (uStack_130 < uStack_4c)) {
      FUN_ram_4805c6b0(*(undefined4 *)(param_1 + 0x58),6,1,0);
    }
    goto LAB_ram_480dfaba;
  }
  iVar15 = param_1 + 0x574;
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  bVar14 = 0;
  if ((*(char *)(param_1 + 0x609) != '\0') && (bVar14 = *(byte *)(param_1 + 0x5cb), bVar14 == 0)) {
    bVar14 = *(byte *)(param_1 + 0x649) >> 2 & 1;
  }
  FUN_ram_4ff3ee10(iVar15);
  cVar1 = param_2[8];
  FUN_ram_4ff3ec14(iVar15,0xffffffff);
  if (*(char *)(param_1 + 0x609) == '\0') {
LAB_ram_480dfdbe:
    FUN_ram_4ff3ee10(iVar15);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x649);
    cVar3 = *(char *)(param_1 + 0x5cb);
    cVar4 = *(char *)(param_1 + 0x634);
    *(undefined1 *)(param_1 + 0x609) = 0;
    *(undefined1 *)(param_1 + 0x632) = 0;
    *(undefined1 *)(param_1 + 0x5cb) = 0;
    *(undefined1 *)(param_1 + 0x634) = 0;
    cVar5 = *(char *)(param_1 + 0x633);
    if (cVar1 != '\0') {
      *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + 1;
      *(int *)(param_1 + 0x614) = *(int *)(param_1 + 0x614) + 1;
      if ((bVar2 & 1) != 0) {
        *(int *)(param_1 + 0x64c) = *(int *)(param_1 + 0x64c) + 1;
      }
      if ((bVar2 & 2) != 0) {
        *(int *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + 1;
      }
      if ((bVar2 & 4) != 0) {
        *(undefined1 *)(param_1 + 0x636) = 0;
        *(int *)(param_1 + 0x63c) = *(int *)(param_1 + 0x63c) + 1;
      }
      *(undefined1 *)(param_1 + 0x5b0) = *(undefined1 *)(param_1 + 0x781);
      *(undefined1 *)(param_1 + 0x649) = 0;
      *(undefined1 *)(param_1 + 0x5b1) = *(undefined1 *)(param_1 + 0x782);
      *(undefined1 *)(param_1 + 0x5b2) = *(undefined1 *)(param_1 + 0x783);
      *(undefined1 *)(param_1 + 0x5b3) = *(undefined1 *)(param_1 + 0x784);
      *(undefined1 *)(param_1 + 0x5b4) = *(undefined1 *)(param_1 + 0x785);
      *(undefined1 *)(param_1 + 0x5b5) = *(undefined1 *)(param_1 + 0x786);
      *(undefined1 *)(param_1 + 0x5b6) = *(undefined1 *)(param_1 + 0x787);
      *(undefined1 *)(param_1 + 0x5b7) = *(undefined1 *)(param_1 + 0x788);
      iVar11 = iVar6;
      if (iVar6 == 0) {
        iVar11 = 1;
      }
      *(int *)(param_1 + 0x5b8) = iVar11;
      *(char *)(param_1 + 0x630) = cVar5;
      *(char *)(param_1 + 0x5d2) = cVar5;
      *(undefined1 *)(param_1 + 0x5c2) = 0;
      if (cVar4 != '\0') {
        *(char *)(param_1 + 0x5be) = cVar5;
        *(int *)(param_1 + 0x5c4) = iVar6 + 0x87;
        if ((cVar5 == '\0') &&
           (((cVar1 = *(char *)(param_1 + 0x5bf), cVar1 == '\0' ||
             (*(char *)(param_1 + 0x5bf) = cVar1 + -1, cVar1 == '\x01')) || (cVar3 != '\0')))) {
          *(undefined4 *)(param_1 + 0x5bc) = 0;
          *(undefined2 *)(param_1 + 0x5c0) = 0;
          *(undefined4 *)(param_1 + 0x5c4) = 0;
          *(undefined2 *)(param_1 + 0x5c8) = 0;
          *(undefined1 *)(param_1 + 0x5ca) = 0;
          *(undefined1 *)(param_1 + 0x5d1) = 0;
          *(undefined4 *)(param_1 + 0x5d4) = 0;
          *(undefined1 *)(param_1 + 0x5d3) = 0;
          *(undefined1 *)(param_1 + 0x5e0) = 0;
          *(undefined1 *)(param_1 + 0x636) = 1;
          *(undefined1 *)(param_1 + 0x639) = 5;
          if (*(char *)(param_1 + 0x608) != '\0') {
            *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
          }
          *(int *)(param_1 + 0x60c) = iVar6;
          *(byte *)(param_1 + 0x648) = *(byte *)(param_1 + 0x648) | 4;
          *(undefined1 *)(param_1 + 0x608) = 1;
          *(undefined1 *)(param_1 + 0x631) = 1;
        }
      }
      goto LAB_ram_480dfdbe;
    }
    *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + 1;
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    if ((bVar2 & 4) != 0) {
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
    FUN_ram_4ff3ee10(iVar15);
  }
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x77c) = 0;
  *(undefined4 *)(param_1 + 0x784) = 0;
  *(undefined4 *)(param_1 + 0x788) = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  *(undefined4 *)(param_1 + 0x790) = 0;
  *(undefined4 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x79c) = 0;
  *(undefined4 *)(param_1 + 0x780) = 8;
  *(undefined4 *)(param_1 + 0x794) = 0x10000;
  uStack_104 = 0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_100 = 8;
  uStack_ec = 0x10000;
  FUN_ram_48053f2a(&uStack_104,iVar15,iVar6);
  if (((((bVar14 != 0) && (param_2[8] != '\0')) &&
       ((param_2[0x10] == '\0' && ((cStack_89 == '\0' && (uStack_fc._1_1_ == '\0')))))) &&
      (cStack_8c == '\0')) && (cStack_8b == '\0')) {
    FUN_ram_4805c6b0(*(undefined4 *)(param_1 + 0x58),5,1,0);
  }
LAB_ram_480dfaba:
  FUN_ram_480cc884(param_1,iVar6);
  return;
}


