/* Firmware entry: 0x480db9d4 */

void FUN_ram_480db9d4(int param_1,char *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  char cVar8;
  uint *puVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined4 uVar22;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar7 = FUN_ram_48025ba6();
  uVar10 = *(uint *)(param_2 + 4);
  uStack_50 = uVar10 >> 0x18;
  if (uStack_50 == 10) {
    if (uVar10 == *(uint *)(param_1 + 0xbbc)) {
      uVar2 = *(undefined1 *)(param_1 + 0xbe4);
      *(undefined4 *)(param_1 + 0xbc0) = 0;
      *(undefined4 *)(param_1 + 0xbc8) = 0;
      *(undefined4 *)(param_1 + 0xbcc) = 0;
      *(undefined4 *)(param_1 + 0xbd0) = 0;
      *(undefined4 *)(param_1 + 0xbd4) = 0;
      *(undefined4 *)(param_1 + 0xbdc) = 0;
      *(undefined4 *)(param_1 + 0xbe0) = 0;
      *(undefined4 *)(param_1 + 0xbc4) = 8;
      *(undefined4 *)(param_1 + 0xbd8) = 0x10000;
      *(undefined1 *)(param_1 + 0xbe4) = 0xff;
      cVar8 = param_2[0x14];
      *(undefined4 *)(param_1 + 0xbbc) = 0;
      if ((cVar8 == '\0') || (*(int *)(param_2 + 8) == 0)) {
        *(undefined1 *)(param_1 + 0xbec) = 0;
        *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0xbf8) + 1;
      }
      else {
        *(int *)(param_1 + 3000) = *(int *)(param_2 + 8);
        *(int *)(param_1 + 0xbe8) = iVar7;
        *(undefined1 *)(param_1 + 2999) = uVar2;
      }
    }
    return;
  }
  if (10 < uStack_50) {
    if (uStack_50 == 0xc) {
      if (uVar10 != *(uint *)(param_1 + 0xd78)) {
        return;
      }
      uVar22 = *(undefined4 *)(param_1 + 0xd7c);
      uStack_74 = *(undefined4 *)(param_1 + 0xd80);
      uStack_70 = *(undefined4 *)(param_1 + 0xd84);
      uStack_6c = *(undefined4 *)(param_1 + 0xd88);
      uStack_68 = *(undefined4 *)(param_1 + 0xd8c);
      uStack_64 = *(undefined4 *)(param_1 + 0xd90);
      uStack_60 = *(undefined4 *)(param_1 + 0xd94);
      uStack_5c = *(undefined4 *)(param_1 + 0xd98);
      uStack_58 = *(undefined4 *)(param_1 + 0xd9c);
      uStack_50 = 8;
      *(undefined4 *)(param_1 + 0xd80) = 8;
      uStack_3c = 0x10000;
      *(undefined4 *)(param_1 + 0xd78) = 0;
      uStack_54 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      *(undefined4 *)(param_1 + 0xd7c) = 0;
      *(undefined4 *)(param_1 + 0xd84) = 0;
      iVar16 = *(int *)(param_1 + 0xda0);
      *(undefined4 *)(param_1 + 0xd88) = 0;
      *(undefined4 *)(param_1 + 0xd94) = 0x10000;
      *(undefined4 *)(param_1 + 0xd8c) = 0;
      *(undefined4 *)(param_1 + 0xd90) = 0;
      *(undefined4 *)(param_1 + 0xd98) = 0;
      *(undefined4 *)(param_1 + 0xd9c) = 0;
      cVar8 = param_2[0x14];
      *(undefined4 *)(param_1 + 0xda0) = 0;
      if ((cVar8 != '\0') && (*(int *)(param_2 + 8) != 0)) {
        *(int *)(param_1 + 0xd6c) = *(int *)(param_2 + 8);
        *(int *)(param_1 + 0xd74) = iVar16;
        *(undefined4 *)(param_1 + 0xda4) = uVar22;
        *(undefined4 *)(param_1 + 0xda8) = uStack_74;
        *(undefined4 *)(param_1 + 0xdac) = uStack_70;
        *(undefined4 *)(param_1 + 0xdb0) = uStack_6c;
        *(undefined4 *)(param_1 + 0xdb4) = uStack_68;
        *(undefined4 *)(param_1 + 0xdb8) = uStack_64;
        *(undefined4 *)(param_1 + 0xdbc) = uStack_60;
        *(undefined4 *)(param_1 + 0xdc0) = uStack_5c;
        *(undefined4 *)(param_1 + 0xdc4) = uStack_58;
        *(int *)(param_1 + 0xdc8) = iVar7;
        *(undefined4 *)(param_1 + 0xd70) = *(undefined4 *)(param_1 + 0xdcc);
        return;
      }
      if (iVar16 == 0) {
        *(undefined1 *)(param_1 + 0xd68) = 1;
        return;
      }
      FUN_ram_480df148(param_1,1);
      return;
    }
    if (uStack_50 == 0x10) {
      if (uVar10 != *(uint *)(param_1 + 0x54)) {
        return;
      }
      iVar7 = *(int *)(param_1 + 0x58);
      if ((param_2[0x14] == '\0') || (iVar16 = *(int *)(param_2 + 8), iVar16 == 0)) {
        if (*(char *)(iVar7 + 0x3a5) != '\0') {
          *(undefined1 *)(iVar7 + 0x3a5) = 0;
        }
      }
      else if (*(char *)(iVar7 + 0x3a5) != '\0') {
        FUN_ram_4ff45158(iVar7 + 0x400,iVar7 + 0x3a8,0x52);
        *(int *)(iVar7 + 0x454) = iVar16;
        *(undefined1 *)(iVar7 + 0x3a5) = 0;
        *(undefined1 *)(iVar7 + 0x3fc) = 1;
        if (*(int *)(iVar7 + 0x440) == *(int *)(iVar7 + 0x39c)) {
          *(undefined1 *)(iVar7 + 0x21e) = 1;
        }
        *(int *)(iVar7 + 0x248) = *(int *)(iVar7 + 0x248) + 1;
        if (*(char *)(iVar7 + 0x451) == '\0') {
          *(undefined1 *)(iVar7 + 0x3a4) = 1;
        }
        FUN_ram_480439fa(iVar7 + 0x80);
        iVar7 = *(int *)(param_1 + 0x58);
      }
      *(undefined4 *)(param_1 + 0x54) = 0;
      FUN_ram_480599fe(iVar7,0);
      return;
    }
    if (uStack_50 != 0xb) {
      return;
    }
    if (uVar10 != *(uint *)(param_1 + 0xb38)) {
      return;
    }
    uVar22 = *(undefined4 *)(param_1 + 0xb3c);
    uStack_74 = *(undefined4 *)(param_1 + 0xb40);
    uStack_58 = *(undefined4 *)(param_1 + 0xb5c);
    uStack_70 = *(undefined4 *)(param_1 + 0xb44);
    uStack_6c = *(undefined4 *)(param_1 + 0xb48);
    uStack_68 = *(undefined4 *)(param_1 + 0xb4c);
    uStack_64 = *(undefined4 *)(param_1 + 0xb50);
    uStack_60 = *(undefined4 *)(param_1 + 0xb54);
    uStack_5c = *(undefined4 *)(param_1 + 0xb58);
    uStack_50 = 8;
    *(undefined4 *)(param_1 + 0xb40) = 8;
    uStack_3c = 0x10000;
    *(undefined4 *)(param_1 + 0xb38) = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    *(undefined4 *)(param_1 + 0xb3c) = 0;
    uVar2 = *(undefined1 *)(param_1 + 0xb60);
    *(undefined4 *)(param_1 + 0xb44) = 0;
    *(undefined4 *)(param_1 + 0xb54) = 0x10000;
    *(undefined4 *)(param_1 + 0xb48) = 0;
    *(undefined4 *)(param_1 + 0xb4c) = 0;
    *(undefined4 *)(param_1 + 0xb50) = 0;
    *(undefined4 *)(param_1 + 0xb58) = 0;
    *(undefined4 *)(param_1 + 0xb5c) = 0;
    *(undefined2 *)(param_1 + 0xb60) = 0;
    if (((param_2[0x14] != '\0') && (*(int *)(param_2 + 8) != 0)) &&
       (*(char *)(param_1 + 0xb36) != '\0')) {
      if (*(char *)(param_1 + 0xb61) != '\0') {
        iVar16 = *(int *)(param_1 + 0x58);
        *(undefined4 *)(iVar16 + 0x7df0) = uVar22;
        *(undefined4 *)(iVar16 + 0x7df4) = uStack_74;
        *(undefined4 *)(iVar16 + 0x7df8) = uStack_70;
        *(undefined4 *)(iVar16 + 0x7dfc) = uStack_6c;
        *(undefined4 *)(iVar16 + 0x7e00) = uStack_68;
        *(undefined4 *)(iVar16 + 0x7e04) = uStack_64;
        *(undefined4 *)(iVar16 + 0x7e08) = uStack_60;
        *(undefined4 *)(iVar16 + 0x7e0c) = uStack_5c;
        *(undefined4 *)(iVar16 + 0x7e10) = uStack_58;
        *(int *)(*(int *)(param_1 + 0x58) + 0x7e18) = iVar7;
      }
      cVar8 = *(char *)(param_1 + 0xb66);
      *(undefined1 *)(param_1 + 0xb64) = uVar2;
      *(int *)(param_1 + 0xba0) = *(int *)(param_1 + 0xba0) + 1;
      *(undefined1 *)(param_1 + 0xb36) = 0;
      cVar3 = *(char *)(param_1 + 0xb65);
      *(undefined1 *)(param_1 + 0xb63) = 0;
      *(undefined4 *)(param_1 + 0xb74) = 0;
      *(undefined2 *)(param_1 + 0xaec) = 0;
      *(undefined1 *)(param_1 + 0xaee) = 0;
      *(undefined4 *)(param_1 + 0xaf0) = 0;
      *(undefined4 *)(param_1 + 0xb7c) = *(undefined4 *)(param_1 + 0xb70);
      *(undefined4 *)(param_1 + 0xb70) = 0;
      *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(param_1 + 0xb78);
      *(undefined4 *)(param_1 + 0xb78) = 0;
      *(undefined1 *)(param_1 + 0xb65) = 0;
      if ((((byte)(cVar8 - 1U) < 4) && ((byte)(cVar3 - 1U) < 4)) && (cVar8 != cVar3)) {
        *(int *)(param_1 + 0xaf0) = iVar7 + 800;
        *(char *)(param_1 + 0xaed) = cVar8;
        *(char *)(param_1 + 0xaee) = cVar3;
        *(undefined1 *)(param_1 + 0xaec) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xb64) = 0;
        *(undefined4 *)(param_1 + 0xb7c) = 0;
        *(undefined4 *)(param_1 + 0xb80) = 0;
        FUN_ram_480db8da(param_1,2);
      }
      iVar7 = *(int *)(*(int *)(param_1 + 0x58) + 0x7cd0);
      if (*(char *)(iVar7 + 0x8fde) != '\0') {
        return;
      }
      if (*(char *)(iVar7 + 0x8f94) != '\0') {
        return;
      }
      puVar9 = *(uint **)(*(int *)(param_1 + 0x58) + 0x7cdc);
      fence();
      uVar10 = *puVar9;
      while( true ) {
        uVar14 = uVar10 & 0xfffcffff;
        if ((uVar10 >> 0x10 & 3) != 2) {
          return;
        }
        if ((uVar10 & 0xffff) == 0) break;
        bVar4 = *puVar9 == uVar10;
        uVar10 = *puVar9;
        if (bVar4) {
          *puVar9 = uVar14 - 1;
          return;
        }
      }
      return;
    }
    cVar8 = *(char *)(param_1 + 0xb35);
    if (cVar8 == '\0') {
      cVar8 = '\n';
    }
    FUN_ram_480db8da(param_1,cVar8);
    *(undefined1 *)(param_1 + 0xb35) = 0;
    return;
  }
  if (uStack_50 == 8) {
    if (uVar10 != *(uint *)(param_1 + 0x728)) {
      return;
    }
    uVar22 = *(undefined4 *)(param_1 + 0x72c);
    uStack_74 = *(undefined4 *)(param_1 + 0x730);
    uStack_70 = *(undefined4 *)(param_1 + 0x734);
    uStack_6c = *(undefined4 *)(param_1 + 0x738);
    uStack_68 = *(undefined4 *)(param_1 + 0x73c);
    uStack_64 = *(undefined4 *)(param_1 + 0x740);
    uStack_60 = *(undefined4 *)(param_1 + 0x744);
    uStack_5c = *(undefined4 *)(param_1 + 0x748);
    uStack_58 = *(undefined4 *)(param_1 + 0x74c);
    *(undefined4 *)(param_1 + 0x730) = 8;
    *(undefined4 *)(param_1 + 0x728) = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    *(undefined4 *)(param_1 + 0x72c) = 0;
    *(undefined4 *)(param_1 + 0x734) = 0;
    *(undefined4 *)(param_1 + 0x738) = 0;
    uStack_3c = 0x10000;
    *(undefined4 *)(param_1 + 0x73c) = 0;
    *(undefined4 *)(param_1 + 0x744) = 0x10000;
    *(undefined4 *)(param_1 + 0x740) = 0;
    *(undefined4 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x74c) = 0;
    if ((param_2[0x14] != '\0') && (*(int *)(param_2 + 8) != 0)) {
      *(int *)(param_1 + 0x7a0) = *(int *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x7a4) = uVar22;
      *(undefined4 *)(param_1 + 0x7a8) = uStack_74;
      *(undefined4 *)(param_1 + 0x7ac) = uStack_70;
      *(undefined4 *)(param_1 + 0x7b0) = uStack_6c;
      *(undefined4 *)(param_1 + 0x7b4) = uStack_68;
      *(undefined4 *)(param_1 + 0x7b8) = uStack_64;
      *(undefined4 *)(param_1 + 0x7bc) = uStack_60;
      *(undefined4 *)(param_1 + 0x7c0) = uStack_5c;
      *(undefined4 *)(param_1 + 0x7c4) = uStack_58;
      return;
    }
    FUN_ram_4ff3ec14(param_1 + 0x574,0xffffffff);
    if (*(char *)(param_1 + 0x6ce) != '\0') {
      cVar8 = *(char *)(param_1 + 0x718);
      *(undefined1 *)(param_1 + 0x6ce) = 0;
      *(int *)(param_1 + 0x6f0) = *(int *)(param_1 + 0x6f0) + 1;
      *(char *)(param_1 + 0x718) = cVar8 + '\x01';
      if (3 < (byte)(cVar8 + 1U)) {
        *(undefined1 *)(param_1 + 0x6c8) = 0;
        iVar16 = iVar7;
        if (iVar7 == 0) {
          iVar16 = 1;
        }
        if (((*(char *)(param_1 + 0x6c9) == '\0') && (*(char *)(param_1 + 0x6ca) == '\0')) &&
           (*(char *)(param_1 + 0x6bc) != '\x03')) {
          *(int *)(param_1 + 0x6c0) = iVar16;
          *(undefined1 *)(param_1 + 0x6bc) = 6;
        }
        else if (*(byte *)(param_1 + 0x6cc) < 3) {
          if ((*(int *)(param_1 + 0x6d4) == 0) || (600 < iVar7 - *(int *)(param_1 + 0x6d4))) {
            *(int *)(param_1 + 0x6c0) = iVar16;
            *(undefined1 *)(param_1 + 0x6cb) = 1;
            *(undefined1 *)(param_1 + 0x6bc) = 6;
          }
          else {
            *(byte *)(param_1 + 0x6cc) = *(byte *)(param_1 + 0x6cc) + 1;
            *(undefined1 *)(param_1 + 0x6cb) = 0;
            *(undefined1 *)(param_1 + 0x718) = 0;
            *(int *)(param_1 + 0x6c0) = iVar16;
            *(int *)(param_1 + 0x714) = *(int *)(param_1 + 0x714) + 1;
            *(undefined1 *)(param_1 + 0x6c8) = 4;
            *(undefined1 *)(param_1 + 0x6bc) = 3;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x6cb) = 0;
          *(int *)(param_1 + 0x6c0) = iVar16;
          *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x720) + 1;
          *(undefined1 *)(param_1 + 0x6bc) = 6;
        }
      }
    }
  }
  else {
    if (uStack_50 != 9) {
      if (uStack_50 != 3) {
        if (uStack_50 != 6) {
          return;
        }
        if (uVar10 != *(uint *)(param_1 + 0x340)) {
          return;
        }
        *(undefined4 *)(param_1 + 0x344) = 0;
        *(undefined4 *)(param_1 + 0x348) = 8;
        *(undefined4 *)(param_1 + 0x34c) = 0;
        *(undefined4 *)(param_1 + 0x350) = 0;
        *(undefined4 *)(param_1 + 0x354) = 0;
        *(undefined4 *)(param_1 + 0x358) = 0;
        *(undefined4 *)(param_1 + 0x360) = 0;
        *(undefined4 *)(param_1 + 0x364) = 0;
        *(undefined4 *)(param_1 + 0x35c) = 0x10000;
        cVar8 = param_2[0x14];
        *(undefined4 *)(param_1 + 0x340) = 0;
        if ((cVar8 != '\0') && (*(int *)(param_2 + 8) != 0)) {
          *(int *)(param_1 + 0x33c) = *(int *)(param_2 + 8);
          *(int *)(param_1 + 0x368) = iVar7;
          *(char *)(param_1 + 0x336) = *(char *)(param_1 + 0x336) + -1;
          *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x36c) + 1;
          *(undefined1 *)(param_1 + 0x337) = 2;
          return;
        }
        *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 1;
        *(undefined4 *)(param_1 + 0x338) = 1;
        *(undefined2 *)(param_1 + 0x336) = 0x400;
        return;
      }
      if (uVar10 != *(uint *)(param_1 + 0x520)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x548) = 0x10000;
      iVar21 = *(int *)(param_1 + 0x558);
      iVar19 = *(int *)(param_1 + 0x55c);
      iVar18 = *(int *)(param_1 + 0x560);
      *(undefined4 *)(param_1 + 0x520) = 0;
      *(undefined4 *)(param_1 + 0x530) = 0;
      *(undefined4 *)(param_1 + 0x534) = 8;
      *(undefined4 *)(param_1 + 0x538) = 0;
      *(undefined4 *)(param_1 + 0x53c) = 0;
      *(undefined4 *)(param_1 + 0x540) = 0;
      *(undefined4 *)(param_1 + 0x544) = 0;
      *(undefined4 *)(param_1 + 0x54c) = 0;
      *(undefined4 *)(param_1 + 0x550) = 0;
      *(undefined4 *)(param_1 + 0x564) = 0;
      *(undefined4 *)(param_1 + 0x558) = 0;
      *(undefined4 *)(param_1 + 0x55c) = 0;
      *(undefined4 *)(param_1 + 0x560) = 0;
      iVar16 = *(int *)(param_2 + 8);
      uStack_54 = 0;
      uStack_50 = 8;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_3c = 0x10000;
      cVar8 = *(char *)(param_1 + 0x554);
      bVar1 = param_2[0x14];
      iVar7 = *(int *)(param_1 + 0x568);
      iVar17 = *(int *)(param_1 + 0x56c);
      *(undefined4 *)(param_1 + 0x568) = 0;
      *(undefined1 *)(param_1 + 0x554) = 0;
      *(undefined4 *)(param_1 + 0x56c) = 0;
      if (cVar8 == '\0') {
        return;
      }
      iVar20 = param_1 + 0x378;
      FUN_ram_4ff3ec14(iVar20,0xffffffff);
      bVar4 = false;
      if ((iVar19 != 0) && (*(int *)(param_1 + 0x3bc) == iVar19)) {
        bVar4 = *(char *)(param_1 + 0x3b3) == '\x01';
      }
      bVar6 = false;
      if (((iVar18 != 0) && (*(int *)(param_1 + 900) == iVar18)) &&
         (*(int *)(param_1 + 0x388) == iVar21)) {
        bVar6 = *(char *)(param_1 + 0x390) == '\x01';
      }
      bVar5 = false;
      if (((cVar8 == '\x01') && (*(int *)(param_1 + 0x3b8) == iVar21)) &&
         (bVar5 = false, *(char *)(param_1 + 0x39d) != '\0')) {
        bVar5 = *(char *)(param_1 + 0x3b3) == '\0';
      }
      if (((iVar16 != 0 & bVar1) == 0) || (iVar16 == 0)) {
        for (puVar12 = (undefined4 *)(param_1 + 0x420); puVar12 != (undefined4 *)(param_1 + 0x520);
            puVar12 = puVar12 + 8) {
          if ((*(char *)((int)puVar12 + 0x15) != '\0') &&
             (puVar13 = puVar12, iVar7 != 0 || iVar17 != 0)) {
            do {
              if ((puVar13[6] == iVar7) && (puVar13[7] == iVar17)) {
                *puVar13 = 0;
                puVar13[1] = 0;
                *(undefined1 *)(puVar13 + 2) = 0;
                puVar13[3] = 0;
                puVar13[4] = 0;
                *(undefined2 *)(puVar13 + 5) = 0;
                puVar13[6] = 0;
                puVar13[7] = 0;
              }
              if ((undefined4 *)(param_1 + 0x520) == puVar13 + 8) goto LAB_ram_480dc28e;
              puVar12 = puVar13 + 8;
              pcVar11 = (char *)((int)puVar13 + 0x35);
              puVar13 = puVar12;
            } while (*pcVar11 != '\0');
          }
        }
LAB_ram_480dc28e:
        *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
        if (bVar6) {
          *(undefined1 *)(param_1 + 0x3b1) = 3;
          *(undefined1 *)(param_1 + 0x3ae) = 1;
          if (!bVar4) goto LAB_ram_480dc17c;
        }
        else {
          if (!bVar4) {
            if (bVar5) {
              *(undefined1 *)(param_1 + 0x3b1) = 3;
              *(undefined1 *)(param_1 + 0x3ae) = 1;
            }
            goto LAB_ram_480dc17c;
          }
          *(undefined1 *)(param_1 + 0x3b1) = 3;
          *(undefined1 *)(param_1 + 0x3ae) = 1;
        }
        *(undefined1 *)(param_1 + 0x3b3) = 3;
        *(undefined1 *)(param_1 + 0x3b4) = 1;
      }
      else {
        pcVar11 = (char *)(param_1 + 0x434);
        iVar15 = 0;
        do {
          if (*pcVar11 == '\0') {
            if (iVar7 == 0 && iVar17 == 0) {
              if (pcVar11[1] == '\0') goto LAB_ram_480dc40c;
            }
            else if (((pcVar11[1] != '\0') && (*(int *)(pcVar11 + 4) == iVar7)) &&
                    (*(int *)(pcVar11 + 8) == iVar17)) {
LAB_ram_480dc40c:
              iVar7 = param_1 + iVar15 * 0x20;
              *(int *)(iVar7 + 0x420) = iVar16;
              *(int *)(iVar7 + 0x424) = iVar21;
              *(char *)(iVar7 + 0x428) = cVar8;
              *(int *)(iVar7 + 0x42c) = iVar19;
              *(int *)(iVar7 + 0x430) = iVar18;
              *(undefined2 *)(iVar15 * 0x20 + iVar20 + 0xbc) = 1;
              *(char *)(param_1 + 0x3b0) = *(char *)(param_1 + 0x3b0) + '\x01';
              *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + 1;
              if (bVar6) {
                cVar8 = *(char *)(param_1 + 0x392);
                *(undefined1 *)(param_1 + 0x3b1) = 0;
                *(undefined1 *)(param_1 + 0x3ae) = 0;
                *(char *)(param_1 + 0x392) = cVar8 + '\x01';
                *(char *)(param_1 + 0x3af) = '\x03' - (cVar8 + '\x01');
              }
              else if (bVar4) {
                *(undefined1 *)(param_1 + 0x3b1) = 0;
                *(undefined1 *)(param_1 + 0x3ae) = 0;
                if (*(char *)(param_1 + 0x3af) != '\0') {
                  *(char *)(param_1 + 0x3af) = *(char *)(param_1 + 0x3af) + -1;
                }
              }
              else if (bVar5) {
                *(undefined1 *)(param_1 + 0x3b1) = 0;
                *(undefined1 *)(param_1 + 0x3ae) = 0;
              }
              goto LAB_ram_480dc17c;
            }
          }
          iVar15 = iVar15 + 1;
          pcVar11 = pcVar11 + 0x20;
        } while (iVar15 != 8);
        *(undefined1 *)(param_1 + 0x399) = 1;
        *(undefined1 *)(param_1 + 0x3b1) = 3;
        if (*(char *)(param_1 + 0x390) == '\x01') {
          *(undefined1 *)(param_1 + 0x3af) = 0;
          *(undefined1 *)(param_1 + 0x39d) = 0;
          *(undefined1 *)(param_1 + 0x3a0) = 0;
          *(undefined1 *)(param_1 + 0x396) = 0;
          *(undefined2 *)(param_1 + 0x390) = 0x203;
        }
      }
      goto LAB_ram_480dc17c;
    }
    if (uVar10 != *(uint *)(param_1 + 0x750)) {
      return;
    }
    iVar16 = *(int *)(param_1 + 0x754);
    uStack_74 = *(undefined4 *)(param_1 + 0x758);
    uStack_70 = *(undefined4 *)(param_1 + 0x75c);
    uStack_6c = *(undefined4 *)(param_1 + 0x760);
    uStack_68 = *(undefined4 *)(param_1 + 0x764);
    uStack_64 = *(undefined4 *)(param_1 + 0x768);
    uStack_60 = *(undefined4 *)(param_1 + 0x76c);
    uStack_5c = *(undefined4 *)(param_1 + 0x770);
    uStack_58 = *(undefined4 *)(param_1 + 0x774);
    uStack_3c = 0x10000;
    *(undefined4 *)(param_1 + 0x750) = 0;
    uStack_54 = 0;
    uStack_50 = 8;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    *(undefined4 *)(param_1 + 0x754) = 0;
    *(undefined4 *)(param_1 + 0x758) = 8;
    *(undefined4 *)(param_1 + 0x75c) = 0;
    *(undefined4 *)(param_1 + 0x760) = 0;
    *(undefined4 *)(param_1 + 0x764) = 0;
    *(undefined4 *)(param_1 + 0x76c) = 0x10000;
    *(undefined4 *)(param_1 + 0x768) = 0;
    *(undefined4 *)(param_1 + 0x770) = 0;
    *(undefined4 *)(param_1 + 0x774) = 0;
    if ((param_2[0x14] != '\0') && (*(int *)(param_2 + 8) != 0)) {
      *(int *)(param_1 + 0x778) = *(int *)(param_2 + 8);
      *(int *)(param_1 + 0x77c) = iVar16;
      *(undefined4 *)(param_1 + 0x780) = uStack_74;
      *(undefined4 *)(param_1 + 0x784) = uStack_70;
      *(undefined4 *)(param_1 + 0x788) = uStack_6c;
      *(undefined4 *)(param_1 + 0x78c) = uStack_68;
      *(undefined4 *)(param_1 + 0x790) = uStack_64;
      *(undefined4 *)(param_1 + 0x794) = uStack_60;
      *(undefined4 *)(param_1 + 0x798) = uStack_5c;
      *(undefined4 *)(param_1 + 0x79c) = uStack_58;
      return;
    }
    iVar20 = param_1 + 0x574;
    if (*param_2 == '\x04') {
      FUN_ram_4ff3ec14(iVar20,0xffffffff);
      if (((*(char *)(param_1 + 0x609) != '\0') && (iVar16 == *(int *)(param_1 + 0x5e4))) &&
         (iVar16 = FUN_ram_4ff4511a((int)&uStack_74 + 1,param_1 + 0x5e9,8), iVar16 == 0)) {
        *(undefined1 *)(param_1 + 0x609) = 0;
        *(undefined1 *)(param_1 + 0x5cb) = 0;
        *(undefined1 *)(param_1 + 0x634) = 0;
        *(undefined1 *)(param_1 + 0x632) = 0;
        *(undefined1 *)(param_1 + 0x649) = 0;
        if (*(char *)(param_1 + 0x608) != '\0') {
          *(int *)(param_1 + 0x658) = *(int *)(param_1 + 0x658) + 1;
        }
        *(int *)(param_1 + 0x60c) = iVar7;
        *(byte *)(param_1 + 0x648) = *(byte *)(param_1 + 0x648) | 2;
        *(undefined1 *)(param_1 + 0x608) = 1;
        *(undefined1 *)(param_1 + 0x631) = 1;
      }
    }
    else {
      FUN_ram_4ff3ec14();
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
        goto LAB_ram_480dc17c;
      }
    }
  }
  iVar20 = param_1 + 0x574;
LAB_ram_480dc17c:
  FUN_ram_4ff3ee10(iVar20);
  return;
}


