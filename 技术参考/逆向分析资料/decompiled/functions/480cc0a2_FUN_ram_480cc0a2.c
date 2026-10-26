/* Firmware entry: 0x480cc0a2 */

void FUN_ram_480cc0a2(int *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte extraout_a1;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar13;
  char cVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined1 *puVar17;
  byte bVar18;
  uint *puVar19;
  bool bVar20;
  int iVar21;
  int iStack_110;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  byte bStack_10a;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  int iStack_ec;
  uint uStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  char cStack_ca;
  char acStack_c8 [4];
  undefined4 local_c4 [5];
  char cStack_ad;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined4 uStack_a4;
  undefined1 uStack_64;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar19 = (uint *)param_1[3];
  fence();
  uVar4 = *puVar19;
  do {
    uVar7 = uVar4 + 1;
    if ((int)uVar4 < 0) {
      return;
    }
    if ((uVar4 & 0xffff) == 0xffff) {
      return;
    }
    bVar20 = *puVar19 != uVar4;
    uVar4 = *puVar19;
  } while (bVar20);
  *puVar19 = uVar7;
  iVar3 = *param_1;
  FUN_ram_4ff3ec14(iVar3 + 0xb18,0xffffffff);
  puVar15 = (undefined4 *)(iVar3 + 0xb38);
  puVar11 = &local_d4;
  do {
    uVar6 = puVar15[1];
    uVar8 = puVar15[2];
    uVar9 = puVar15[3];
    *puVar11 = *puVar15;
    puVar11[1] = uVar6;
    puVar11[2] = uVar8;
    puVar11[3] = uVar9;
    puVar15 = puVar15 + 4;
    puVar11 = puVar11 + 4;
  } while (puVar15 != (undefined4 *)(iVar3 + 0xbd8));
  *puVar11 = *puVar15;
  FUN_ram_4ff3ee10(iVar3 + 0xb18);
  uVar4 = param_1[0x93];
  if (uVar4 == 0) {
    if ((char)param_1[0xa1] != '\0') goto LAB_ram_480cc162;
  }
  else {
    if ((uint)(param_2 - param_1[0x94]) < 300) goto LAB_ram_480cc162;
    iVar3 = *param_1;
    if (uVar4 == *(uint *)(iVar3 + 0x81e8)) {
      uStack_f8 = uStack_f8 & 0xffffff00;
      uStack_f0 = uStack_f0 & 0xffff0000;
      iStack_ec = 0;
      uStack_e8 = uStack_e8 & 0xffff0000;
      iStack_e4 = 0;
      iStack_e0 = 0;
      iStack_dc = 0;
      uStack_f4 = uVar4;
      FUN_ram_480cb520(iVar3 + 0x7cd0,&uStack_f8);
    }
    iVar21 = iVar3 + 0x2864;
    FUN_ram_4ff3ec14(iVar21,0xffffffff);
    iVar16 = (uVar4 & 0x7f) * 0x14;
    iVar12 = iVar3 + 0x2000 + iVar16;
    if ((*(char *)(iVar12 + -0x1cf) == '\0') || (uVar4 != *(uint *)(iVar12 + -0x1dc))) {
      FUN_ram_4ff3ee10(iVar21);
    }
    else {
      puVar17 = (undefined1 *)(iVar16 + 0x1e20 + iVar3);
      *puVar17 = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[7] = 0;
      puVar17[8] = 0;
      puVar17[9] = 0;
      puVar17[10] = 0;
      puVar17[0xb] = 0;
      puVar17[0xc] = 0;
      puVar17[0xd] = 0;
      puVar17[0xe] = 0;
      puVar17[0xf] = 0;
      puVar17[0x10] = 0;
      puVar17[0x11] = 0;
      puVar17[0x12] = 0;
      FUN_ram_4ff3ee10(iVar21);
      uStack_e8 = CONCAT22(uStack_e8._2_2_,1);
      uStack_f8 = uStack_f8 & 0xffffff00;
      uStack_f0 = uStack_f0 & 0xffff0000;
      iStack_ec = 0;
      iStack_e4 = 0;
      iStack_dc = 0;
      uStack_f4 = uVar4;
      iStack_e0 = FUN_ram_48025b94();
      FUN_ram_4805d48e(iVar3,&uStack_f8);
    }
    if (((char)param_1[0xa1] != '\0') || (param_1[0x93] != 0)) goto LAB_ram_480cc162;
  }
  bVar20 = false;
  if ((char)param_1[0x5d] != '\0') {
    bVar20 = false;
    if (param_1[0x5e] != 0) {
      bVar20 = (uint)(param_2 - param_1[0x5e]) < 0xfb;
    }
  }
  uStack_10c = 0;
  if ((cStack_ca != '\0') && (uStack_10c = 0, cStack_ad != '\0')) {
    uStack_10c = uStack_64;
  }
  iVar3 = *param_1;
  uVar4 = (uint)*(byte *)(iVar3 + 0x7c60);
  uStack_10b = 2 < uVar4;
  if ((local_d4._1_1_ == '\x0e') && (uStack_10b = true, 3 < (uVar4 - 3 & 0xff))) {
    uStack_10b = uVar4 - 9 < 2;
  }
  iStack_110 = param_2;
  if ((cStack_ca == '\0') || (acStack_c8[0] == '\0')) {
LAB_ram_480cc274:
    bStack_10a = 0;
  }
  else {
    iVar3 = FUN_ram_48045922(param_1[1],2,0);
    if ((iVar3 == 0) ||
       (((param_1[99] != 0 || (param_1[0x6e] != 0)) || ((char)param_1[0x79] != '\0')))) {
      iVar3 = *param_1;
      goto LAB_ram_480cc274;
    }
    iVar3 = *param_1;
    bStack_10a = *(byte *)((int)param_1 + 0x9e) ^ 1;
  }
  uStack_108 = false;
  if ((*(int *)(iVar3 + 0x7c64) != 0) && ((uint)(param_2 - *(int *)(iVar3 + 0x7c64)) < 0x28b)) {
    uStack_108 = *(byte *)(iVar3 + 0x7c58) - 3 < 4;
  }
  uStack_107 = uStack_a5;
  uStack_104 = uStack_a4;
  uStack_106 = uStack_a6;
  uStack_109 = bVar20;
  uStack_100 = FUN_ram_4ff2d260();
  uStack_fc = local_d4._1_1_ == '\x0e';
  iVar3 = FUN_ram_4805c396(*param_1,3,2,6);
  if (iVar3 == 0) goto LAB_ram_480cc162;
  if (*(char *)(*param_1 + 0xa72) != '\0') {
    *(byte *)(*param_1 + 0xa76) = bVar20 ^ 1;
  }
  cVar2 = *(char *)((int)param_1 + 0x285);
  if (cVar2 == '\0') {
    uVar4 = FUN_ram_48047f16(param_1 + 0x84,&iStack_110);
    iVar3 = (int)uVar4 >> 0x18;
    uVar10 = uVar4 >> 8 & 0xff;
    uVar7 = uVar4 >> 0x10 & 0xff;
    uVar4 = uVar4 & 0xff;
    bVar1 = extraout_a1;
  }
  else {
    uVar4 = (uint)*(byte *)((int)param_1 + 0x286);
    uVar10 = (uint)*(byte *)((int)param_1 + 0x287);
    uVar7 = (uint)*(byte *)(param_1 + 0xa2);
    iVar3 = (int)*(char *)((int)param_1 + 0x289);
    bVar1 = *(byte *)((int)param_1 + 0x28a);
  }
  bVar18 = (byte)iVar3;
  if (uVar4 == 2) {
    *(undefined1 *)((int)param_1 + 0x286) = 2;
    *(char *)((int)param_1 + 0x287) = (char)uVar10;
    *(char *)(param_1 + 0xa2) = (char)uVar7;
    *(byte *)((int)param_1 + 0x289) = bVar18;
    *(byte *)((int)param_1 + 0x28a) = bVar1;
    *(undefined1 *)((int)param_1 + 0x285) = 1;
    if ((char)param_1[0xad] == '\0') {
      *(undefined1 *)(param_1 + 0xad) = 1;
      if (bVar20 == false) {
        return;
      }
      if ((char)param_1[0x5d] == '\0') {
        return;
      }
      bVar20 = false;
LAB_ram_480cc3de:
      uStack_e8 = param_1[0x58];
      iStack_e4 = param_1[0x59];
      iStack_e0 = param_1[0x5a];
      iStack_dc = param_1[0x5b];
      iStack_ec = param_1[0x57];
      iStack_d8 = param_1[0x5c];
      iVar12 = (int)(char)bVar1;
      if (uVar10 == 1) {
        iVar12 = iVar3;
      }
      bVar5 = *(byte *)((int)param_1 + 0x15b) & 0xef;
      if (iVar12 == 0) {
        bVar5 = *(byte *)((int)param_1 + 0x15b) | 0x10;
      }
      if ((param_1[0x54] == 0x3c2) && ((char)param_1[0x55] == '\b')) {
        iVar3 = param_1[0x1c6] + 1;
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        uStack_f4 = CONCAT31((int3)((uint)param_1[0x55] >> 8),8);
        uStack_f4 = CONCAT13(bVar18,(undefined3)uStack_f4) & 0x3fffffff;
        uStack_f0._1_3_ = (undefined3)((uint)param_1[0x56] >> 8);
        uStack_f0 = CONCAT13(bVar5,(int3)CONCAT31(uStack_f0._1_3_,bVar1)) & 0xffffff3f;
        *(char *)(param_1 + 0xa3) = (char)uVar10;
        param_1[0x1c6] = iVar3;
        *(char *)((int)param_1 + 0x28b) = (char)uVar4;
        uStack_f8 = 0x3c2;
        param_1[0xa4] = 0x3c2;
        *(char *)((int)param_1 + 0x28d) = (char)uVar7;
        *(byte *)((int)param_1 + 0x28e) = bVar18;
        *(byte *)((int)param_1 + 0x28f) = bVar1;
        *(byte *)(param_1 + 0x140) = bVar18 & 0x3f;
        *(byte *)((int)param_1 + 0x501) = bVar1 & 0x3f;
        *(byte *)((int)param_1 + 0x502) = bVar5;
        param_1[0xa5] = uStack_f4;
        param_1[0xa6] = uStack_f0;
        param_1[0xa7] = iStack_ec;
        param_1[0xa8] = uStack_e8;
        param_1[0xa9] = iStack_e4;
        param_1[0xaa] = iStack_e0;
        param_1[0xab] = iStack_dc;
        param_1[0xac] = iStack_d8;
        *(undefined1 *)(param_1 + 0xa1) = 1;
        *(undefined1 *)((int)param_1 + 0x52d) = 1;
        if ((char)param_1[0xad] != '\0') {
          if (bVar20 == false) {
            return;
          }
          FUN_ram_480553f6(puVar19);
          return;
        }
        *(undefined1 *)(param_1 + 0xad) = 1;
        return;
      }
      goto LAB_ram_480cc324;
    }
    if (bVar20 == false) goto LAB_ram_480cc162;
    if ((char)param_1[0x5d] != '\0') goto LAB_ram_480cc3dc;
  }
  else {
    if (uVar4 == 0) {
      if (*(char *)((int)param_1 + 0x2b5) == '\0') {
        if (((char)param_1[0xad] == '\0') || (param_1[0x93] != 0)) goto LAB_ram_480cc162;
        cVar14 = (char)param_1[0xa1];
      }
      else {
        if (param_1[0x93] != 0) goto LAB_ram_480cc162;
        cVar14 = (char)param_1[0xa1];
        if ((cVar14 == '\0') && (*(char *)((int)param_1 + 0x215) == '\0')) {
          *(undefined1 *)((int)param_1 + 0x2b5) = 0;
        }
        if ((char)param_1[0xad] == '\0') goto LAB_ram_480cc162;
      }
      if (((cVar14 == '\0') && (*(char *)((int)param_1 + 0x2b5) == '\0')) && (cVar2 == '\0')) {
        puVar13 = (uint *)param_1[3];
        *(undefined1 *)(param_1 + 0xad) = 0;
        fence();
        uVar4 = *puVar13;
        do {
          uVar7 = uVar4 - 1;
          if (((int)uVar4 < 0) || ((uVar4 & 0xffff) == 0)) goto LAB_ram_480cc162;
          bVar20 = *puVar13 != uVar4;
          uVar4 = *puVar13;
        } while (bVar20);
        *puVar13 = uVar7;
      }
      goto LAB_ram_480cc162;
    }
    if (bVar20 == false) {
      if (((uVar4 == 1) && (*(char *)((int)param_1 + 0x215) != '\0')) &&
         ((*(byte *)((int)param_1 + 0x21b) == uVar7 &&
          (uVar10 == (*(char *)((int)param_1 + 0x21a) == '\x01') + 1)))) {
        param_1[0x87] = param_2 + 0xfa;
        *(undefined1 *)((int)param_1 + 0x217) = 1;
      }
      goto LAB_ram_480cc162;
    }
    bVar20 = true;
    if ((char)param_1[0x5d] != '\0') {
LAB_ram_480cc3dc:
      bVar20 = true;
      goto LAB_ram_480cc3de;
    }
LAB_ram_480cc324:
    if ((((uVar4 == 1) && (*(char *)((int)param_1 + 0x215) != '\0')) &&
        (*(byte *)((int)param_1 + 0x21b) == uVar7)) &&
       (uVar10 == (*(char *)((int)param_1 + 0x21a) == '\x01') + 1)) {
      param_1[0x87] = param_2 + 0xfa;
      *(undefined1 *)((int)param_1 + 0x217) = 1;
    }
  }
  if (bVar20 == false) {
    return;
  }
LAB_ram_480cc162:
  fence();
  uVar4 = *puVar19;
  while( true ) {
    uVar7 = uVar4 - 1;
    if ((int)uVar4 < 0) {
      return;
    }
    if ((uVar4 & 0xffff) == 0) break;
    bVar20 = *puVar19 == uVar4;
    uVar4 = *puVar19;
    if (bVar20) {
      *puVar19 = uVar7;
      return;
    }
  }
  return;
}


