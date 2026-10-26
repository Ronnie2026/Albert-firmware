/* Firmware entry: 0x480dd0e4 */

void FUN_ram_480dd0e4(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  uint *puVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48025ba6();
  if (param_1[400] != 0) {
    FUN_ram_480dce8c(*param_1);
  }
  param_1[400] = 0;
  uStack_90 = 0x10000;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = (uint)uStack_84._2_2_ << 0x10;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_a4 = 8;
  FUN_ram_4ff45158(param_1 + 0x191,&uStack_a8,0x3e);
  memset(&uStack_a8,0,0x88);
  uStack_a8 = CONCAT31(uStack_a8._1_3_,8);
  uStack_98 = CONCAT31(uStack_98._1_3_,8);
  uStack_88 = CONCAT31(uStack_88._1_3_,8);
  FUN_ram_4ff45158(param_1 + 0x1a2,&uStack_a8,0x82);
  if ((param_1[0x18c] != 0 || param_1[0x18d] != 0) &&
     (uVar4 = (uint)*(byte *)((int)param_1 + 0x629), uVar4 != 0xff)) {
    cVar7 = *(char *)(param_1 + 0x18a);
    iVar6 = 2;
    if (cVar7 == '\x02') {
      iVar6 = 1;
    }
    else if ((cVar7 != '\x04') && (iVar6 = 0, cVar7 != '\x01')) goto LAB_ram_480dd1f8;
    if (uVar4 < 0x18) {
      iVar3 = param_1[2];
      if (uVar4 < 0x10) {
        iVar3 = uVar4 * 0xe8 + iVar6 * 0x1228 + iVar3;
        if (iVar3 != 0) goto LAB_ram_480dd1de;
      }
      else {
        iVar6 = (uVar4 - 0x10) * 0x120;
        iVar11 = iVar3 + iVar6;
        if ((*(char *)(iVar11 + 0x3696) != '\0') && (*(char *)(iVar11 + 0x3678) == cVar7)) {
          iVar3 = iVar6 + 14000 + iVar3;
LAB_ram_480dd1de:
          if (((*(int *)(iVar3 + 0xd8) == param_1[0x18c]) &&
              (*(int *)(iVar3 + 0xdc) == param_1[0x18d])) && (*(char *)(iVar3 + 0xe6) == '\x01')) {
            FUN_ram_4804691a();
          }
        }
      }
    }
  }
LAB_ram_480dd1f8:
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  *(undefined2 *)(param_1 + 0x18a) = 0xff00;
  if (param_1[0x6e] != 0) {
    FUN_ram_480dce8c(*param_1);
  }
  if (param_1[0x1cf] != 0) {
    FUN_ram_480dce8c(*param_1);
  }
  param_1[0x1e7] = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)((int)param_1 + 0x7a1) = 0;
  *(undefined1 *)((int)param_1 + 0x7a2) = 0;
  *(undefined1 *)((int)param_1 + 0x7a3) = 0;
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  *(undefined1 *)((int)param_1 + 0x7a5) = 0;
  *(undefined1 *)((int)param_1 + 0x7a6) = 0;
  *(undefined1 *)((int)param_1 + 0x7a7) = 0;
  *(undefined1 *)(param_1 + 0x1ea) = 0;
  *(undefined1 *)((int)param_1 + 0x7a9) = 0;
  *(undefined1 *)((int)param_1 + 0x7aa) = 0;
  *(undefined1 *)((int)param_1 + 0x7ab) = 0;
  *(undefined1 *)(param_1 + 0x1eb) = 0;
  *(undefined1 *)((int)param_1 + 0x7ad) = 0;
  param_1[0x1ec] = 0;
  *(undefined1 *)(param_1 + 0x1ed) = 0;
  *(undefined1 *)((int)param_1 + 0x7b5) = 0;
  *(undefined1 *)((int)param_1 + 0x7b6) = 0;
  *(undefined1 *)((int)param_1 + 0x7b7) = 0;
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  *(undefined1 *)((int)param_1 + 0x7b9) = 0;
  *(undefined1 *)((int)param_1 + 0x7ba) = 0;
  *(undefined1 *)((int)param_1 + 0x7bb) = 0;
  *(undefined1 *)(param_1 + 0x1ef) = 0;
  *(undefined1 *)((int)param_1 + 0x7bd) = 0;
  *(undefined1 *)((int)param_1 + 0x7be) = 0;
  *(undefined1 *)((int)param_1 + 0x7bf) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)((int)param_1 + 0x7c1) = 0;
  param_1[0x1cf] = 0;
  param_1[0x1d0] = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d8] = 0;
  if (*(char *)(param_1 + 0x79) != '\0') {
    if (((*(char *)(param_1 + 0x19) == '\x04') &&
        (cVar7 = *(char *)((int)param_1 + 0x67), cVar7 == *(char *)((int)param_1 + 0x1e7))) &&
       ((*(char *)(param_1 + 0x7a) == *(char *)(param_1 + 0x1a) &&
        (*(char *)((int)param_1 + 0x1e9) == *(char *)((int)param_1 + 0x69))))) {
      *(undefined1 *)((int)param_1 + 0x67) = 0;
      *(undefined2 *)(param_1 + 0x1a) = 0;
      param_1[0x24] = param_1[0x24] + 1;
      *(undefined1 *)((int)param_1 + 0x95) = 0;
      *(undefined1 *)((int)param_1 + 0x96) = 0;
      if (cVar7 == '\x02') {
        *(undefined1 *)((int)param_1 + 0x66) = 0;
        *(undefined1 *)(param_1 + 0x25) = 0;
        param_1[0x26] = 0;
        *(undefined2 *)((int)param_1 + 0x9e) = 0;
        *(undefined2 *)(param_1 + 0x28) = 0;
        *(undefined1 *)((int)param_1 + 0xa2) = 0;
        param_1[0x21] = 0;
        *(undefined1 *)((int)param_1 + 0x7d) = 0;
        *(undefined2 *)(param_1 + 0x19) = 0xb09;
        param_1[0x1e] = param_1[0x1d];
        *(undefined1 *)((int)param_1 + 0x9d) = 1;
      }
      else {
        cVar7 = *(char *)((int)param_1 + 0x9f);
        if (cVar7 == '\0') {
          if (*(char *)((int)param_1 + 0x97) == '\0') {
            *(undefined1 *)((int)param_1 + 0x66) = 0;
            *(undefined1 *)(param_1 + 0x28) = 0;
            *(undefined1 *)((int)param_1 + 0x7d) = 0;
            *(undefined1 *)(param_1 + 0x25) = 0;
            param_1[0x21] = iVar2 + 3000;
            *(undefined2 *)(param_1 + 0x19) = 0x806;
            *(undefined1 *)((int)param_1 + 0x9e) = 1;
          }
          else if ((*(char *)(param_1 + 0x28) == '\0') || (*(char *)((int)param_1 + 0x66) == '\0'))
          {
            *(undefined1 *)((int)param_1 + 0x66) = 0;
            *(undefined1 *)(param_1 + 0x28) = 0;
            *(undefined1 *)((int)param_1 + 0x7d) = 0;
            *(undefined1 *)(param_1 + 0x25) = 0;
            *(undefined2 *)(param_1 + 0x19) = 0x803;
            *(undefined1 *)((int)param_1 + 0x9e) = 1;
          }
          else {
            FUN_ram_48048e8a(param_1 + 0x19);
          }
        }
        else {
          uVar9 = 8;
          *(undefined1 *)((int)param_1 + 0x65) = 8;
          if (*(char *)((int)param_1 + 0x97) == '\0') {
            *(undefined1 *)((int)param_1 + 0x96) = 1;
          }
          else {
            *(undefined1 *)((int)param_1 + 0x9b) = 1;
            cVar7 = '\0';
            uVar9 = 0;
          }
          *(char *)(param_1 + 0x28) = cVar7;
          *(undefined1 *)((int)param_1 + 0x66) = uVar9;
          *(undefined1 *)(param_1 + 0x19) = 7;
          *(undefined1 *)((int)param_1 + 0x9e) = 1;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x79) = 0;
    *(undefined1 *)((int)param_1 + 0x1e7) = 0;
    *(undefined2 *)(param_1 + 0x7a) = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    param_1[0x7b] = 0;
    param_1[0x7d] = 0;
    param_1[0x7e] = 0;
    param_1[0x7f] = 0;
    param_1[0x80] = 0;
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    uStack_a4 = 8;
    param_1[0x7c] = 8;
    uStack_90 = 0x10000;
    param_1[0x81] = 0x10000;
    if (((param_1[99] == 0) && (param_1[0x6e] == 0)) && (*(char *)((int)param_1 + 0x9e) == '\0')) {
      *(undefined1 *)((int)param_1 + 0x1e5) = 0;
      FUN_ram_48025ba6();
      if (*(char *)((int)param_1 + 0x65) == '\v') {
        FUN_ram_4805c6b0(*param_1,2,2,7);
      }
      puVar8 = (uint *)param_1[3];
      fence();
      uVar4 = *puVar8;
      do {
        uVar5 = uVar4 & 0xfffcffff;
        if (((uVar4 >> 0x10 & 3) != 1) || ((uVar4 & 0xffff) == 0)) goto LAB_ram_480dd2cc;
        bVar1 = *puVar8 != uVar4;
        uVar4 = *puVar8;
      } while (bVar1);
      *puVar8 = uVar5 - 1;
      cVar7 = *(char *)(param_1 + 0xa1);
      goto joined_r0x480dd512;
    }
  }
LAB_ram_480dd2cc:
  cVar7 = *(char *)(param_1 + 0xa1);
joined_r0x480dd512:
  if (cVar7 != '\0') {
    if (((*(char *)((int)param_1 + 0x28b) == '\x01') && (*(char *)((int)param_1 + 0x215) != '\0'))
       && ((*(char *)((int)param_1 + 0x28d) == *(char *)((int)param_1 + 0x21b) &&
           (*(char *)(param_1 + 0xa3) ==
            (char)((*(char *)((int)param_1 + 0x21a) == '\x01') + '\x01'))))) {
      param_1[0x87] = iVar2 + 0xfa;
      *(undefined1 *)((int)param_1 + 0x217) = 1;
    }
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined1 *)((int)param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0xa3) = 0;
    *(undefined1 *)((int)param_1 + 0x28d) = 0;
    *(undefined1 *)((int)param_1 + 0x28e) = 0;
    *(undefined1 *)((int)param_1 + 0x28f) = 0;
    param_1[0xa4] = 0;
    param_1[0xa6] = 0;
    param_1[0xa7] = 0;
    param_1[0xa8] = 0;
    param_1[0xa9] = 0;
    param_1[0xab] = 0;
    param_1[0xac] = 0;
    param_1[0xa5] = 8;
    param_1[0xaa] = 0x10000;
  }
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  param_1[0x1da] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  *(undefined1 *)(param_1 + 0x1e3) = 0;
  *(undefined1 *)((int)param_1 + 0x78d) = 0;
  *(undefined1 *)((int)param_1 + 0x78e) = 0;
  *(undefined1 *)((int)param_1 + 0x78f) = 0;
  *(undefined1 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)((int)param_1 + 0x791) = 0;
  *(undefined1 *)((int)param_1 + 0x792) = 0;
  *(undefined1 *)((int)param_1 + 0x793) = 0;
  *(undefined1 *)(param_1 + 0x1e5) = 0;
  *(undefined1 *)((int)param_1 + 0x795) = 0;
  *(undefined1 *)((int)param_1 + 0x796) = 0;
  *(undefined1 *)((int)param_1 + 0x797) = 0;
  *(undefined1 *)(param_1 + 0x1e6) = 0;
  *(undefined1 *)((int)param_1 + 0x799) = 0;
  *(undefined1 *)(param_1 + 0x1c9) = 0;
  *(undefined1 *)((int)param_1 + 0x725) = 0;
  *(undefined1 *)((int)param_1 + 0x726) = 0;
  *(undefined1 *)((int)param_1 + 0x727) = 0;
  *(undefined1 *)(param_1 + 0x1ca) = 0;
  *(undefined1 *)((int)param_1 + 0x729) = 0;
  *(undefined1 *)((int)param_1 + 0x72a) = 0;
  *(undefined1 *)((int)param_1 + 0x72b) = 0;
  *(undefined1 *)(param_1 + 0x1cb) = 0;
  puVar10 = param_1 + 0x113;
  *(undefined1 *)((int)param_1 + 0x72d) = 0;
  *(undefined1 *)((int)param_1 + 0x72e) = 0;
  *(undefined1 *)((int)param_1 + 0x72f) = 0;
  *(undefined1 *)(param_1 + 0x1cc) = 0;
  *(undefined1 *)((int)param_1 + 0x731) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1ce] = 0;
  param_1[0x109] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x146] = 0;
  param_1[0x14b] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x10a] = 8;
  param_1[0x10f] = 0x10000;
  do {
    uStack_a8 = 0;
    uStack_a4 = 8;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0x10000;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    uStack_80 = uStack_80 & 0xffffff00;
    iVar2 = FUN_ram_4ff45158(puVar10,&uStack_a8,0x29);
    puVar10 = (undefined4 *)(iVar2 + 0x2c);
  } while (param_1 + 0x13f != puVar10);
  iVar2 = param_1[0x145] + 1;
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  param_1[0x145] = iVar2;
  *(undefined1 *)((int)param_1 + 0x2b5) = 0;
  if ((((*(char *)(param_1 + 0xad) != '\0') && (param_1[0x93] == 0)) &&
      (*(char *)(param_1 + 0xa1) == '\0')) && (*(char *)((int)param_1 + 0x285) == '\0')) {
    *(undefined1 *)(param_1 + 0xad) = 0;
    FUN_ram_480553f6(param_1[3]);
  }
  if (*(char *)(param_1 + 499) != '\0') {
    puVar8 = (uint *)param_1[3];
    *(undefined1 *)(param_1 + 499) = 0;
    fence();
    uVar4 = *puVar8;
    do {
      uVar5 = uVar4 - 1;
      if (((int)uVar4 < 0) || ((uVar4 & 0xffff) == 0)) goto LAB_ram_480dd42c;
      bVar1 = *puVar8 != uVar4;
      uVar4 = *puVar8;
    } while (bVar1);
    *puVar8 = uVar5;
  }
LAB_ram_480dd42c:
  FUN_ram_480c3830(param_1);
  return;
}


