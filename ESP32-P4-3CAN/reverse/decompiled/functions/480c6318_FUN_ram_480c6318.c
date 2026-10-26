/* Firmware entry: 0x480c6318 */

int FUN_ram_480c6318(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort uVar9;
  undefined4 uVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  bool bVar22;
  int *piVar23;
  char local_25c [4];
  undefined4 uStack_258;
  char cStack_252;
  char cStack_251;
  char cStack_250;
  char cStack_24f;
  undefined4 local_24c [5];
  char cStack_235;
  char cStack_1cd;
  ushort uStack_1cc;
  ushort uStack_1ca;
  byte local_1b8 [4];
  undefined4 uStack_1b4;
  char cStack_1ae;
  char acStack_1ac [4];
  undefined4 local_1a8 [23];
  char cStack_14a;
  char cStack_149;
  char cStack_12f;
  int iStack_114;
  undefined4 uStack_110;
  int iStack_10c;
  uint3 uStack_108;
  undefined1 uStack_105;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  char cStack_cc;
  char cStack_a4;
  char cStack_78;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  cVar6 = *(char *)((int)param_2 + 0x1d);
  iVar15 = 2;
  if (cVar6 == '\x02') {
    iVar15 = 1;
LAB_ram_480c6356:
    bVar11 = *(byte *)((int)param_2 + 10);
  }
  else {
    if (cVar6 != '\x04') {
      if (cVar6 != '\x01') {
        return 4;
      }
      iVar15 = 0;
      goto LAB_ram_480c6356;
    }
    bVar11 = *(byte *)((int)param_2 + 10);
  }
  uVar13 = (uint)bVar11;
  if (0x14 < (uVar13 - 1 & 0xff)) {
    return 4;
  }
  if (uVar13 == 0x11) {
    uVar9 = (short)param_2[2] - 1;
    if (0xb < uVar9) {
      return 4;
    }
    if (*(int *)((uVar9 + 0x1302) * 8 + param_1 + 0xc) != param_2[0x10]) {
      return 4;
    }
    if ((*(code **)(param_1 + 0x987c) != (code *)0x0) &&
       (iVar15 = (**(code **)(param_1 + 0x987c))(*(undefined4 *)(param_1 + 0x9880),uVar9 & 0xff),
       iVar15 == 0)) {
      return 4;
    }
    fence();
    if (*(char *)(param_1 + 0x9789) == '\0') {
      FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
      cVar6 = *(char *)(param_1 + 0xb42);
      FUN_ram_4ff3ee10(param_1 + 0xb18);
      if (cVar6 != '\0') {
        uVar13 = FUN_ram_48045922(param_1 + 0x1e08,*(undefined1 *)((int)param_2 + 0x1d),0);
        return ((uVar13 ^ 1) & 0x3f) << 2;
      }
    }
    return 4;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  if (*param_2 == 0) {
    return 4;
  }
  iVar16 = (iVar15 * 0x16 + uVar13) * 8 + param_1;
  if (*param_2 != *(int *)(iVar16 + 0x5a4)) {
    return 4;
  }
  if (param_2[0x10] != *(int *)(iVar16 + 0x5a8)) {
    return 4;
  }
  *(undefined1 *)(param_2 + 3) = 2;
  FUN_ram_48040862(&iStack_114,uVar13);
  if (((char)iStack_10c != '\0') || (uVar13 == 0x15)) {
    if (param_2[1] == 0) {
      return 4;
    }
    if (param_2[1] != *(int *)((iVar15 * 0x16 + uVar13) * 4 + param_1 + 0x7b4)) {
      return 4;
    }
  }
  FUN_ram_4ff3ec14(param_1 + 0xb18,0xffffffff);
  puVar20 = (undefined4 *)(param_1 + 0xb38);
  pcVar17 = local_25c;
  do {
    uVar7 = puVar20[1];
    uVar10 = puVar20[2];
    uVar12 = puVar20[3];
    *(undefined4 *)pcVar17 = *puVar20;
    *(undefined4 *)(pcVar17 + 4) = uVar7;
    *(undefined4 *)(pcVar17 + 8) = uVar10;
    *(undefined4 *)(pcVar17 + 0xc) = uVar12;
    puVar20 = puVar20 + 4;
    pcVar17 = pcVar17 + 0x10;
  } while (puVar20 != (undefined4 *)(param_1 + 0xbd8));
  *(undefined4 *)pcVar17 = *puVar20;
  FUN_ram_4ff3ee10(param_1 + 0xb18);
  *(undefined1 *)(param_2 + 3) = 3;
  fence();
  if (*(char *)(param_1 + 0x9789) != '\0') {
    return 4;
  }
  if (cStack_252 == '\0') {
    return 4;
  }
  cVar6 = cStack_251;
  if ((iVar15 != 0) && (cVar6 = cStack_24f, iVar15 == 1)) {
    cVar6 = cStack_250;
  }
  if (cVar6 == '\0') {
    return 4;
  }
  uVar8 = FUN_ram_48045922(param_1 + 0x1e08,*(undefined1 *)((int)param_2 + 0x1d),0);
  if (uVar8 == 0) {
    return 4;
  }
  *(byte *)(param_2 + 3) = bVar11 + 0x40;
  if (uVar13 == 4) {
    if (param_2[0x13] != 0) {
      fence();
      if (param_2[0x13] != *(int *)(param_1 + 0x7a48)) {
        return 4;
      }
      fence();
      if ((*(char *)(param_1 + 0x7a14) == '\0') && (fence(), *(char *)(param_1 + 0x7a15) == '\0')) {
        return 4;
      }
      fence();
      bVar11 = 6;
      if (*(char *)(param_1 + 0x7a14) == '\0') {
        bVar11 = *(byte *)(param_1 + 0x7a15);
        fence();
      }
      if ((*(byte *)((int)param_2 + 0x15) & 0xf) != bVar11) {
        return 4;
      }
    }
    if (cStack_235 != '\0') {
      return 0;
    }
    fence();
    if (*(char *)(param_1 + 0x7a14) == '\0') {
      fence();
      return (uint)(*(char *)(param_1 + 0x7a15) == '\0') << 2;
    }
    return 0;
  }
  if (uVar13 == 0x13) {
    iVar15 = FUN_ram_48025ba6();
    if (((((cStack_1cd != '\0') && (local_25c[0] != '\0')) && (cStack_251 != '\0')) &&
        ((*(char *)(param_1 + 0x7cb9) != '\0' && ((byte)(*(char *)(param_1 + 0x7cb8) - 1U) < 2))))
       && ((uint)(iVar15 - *(int *)(param_1 + 0x7cbc)) < 0x5dd)) {
      if (*(char *)(param_1 + 0x7cba) == '\0') {
        return 4;
      }
      uVar8 = iVar15 - *(int *)(param_1 + 0x7cc0);
      uVar13 = (uint)uStack_1cc;
      if (10000 < uStack_1cc) {
        uVar13 = 10000;
      }
      uVar21 = (uint)uStack_1ca;
      if (uVar21 < 1000) {
        uVar21 = 1000;
      }
      if (60000 < uVar21) {
        uVar21 = 60000;
      }
      if (uVar8 < uVar21 + uVar13) {
        if (uVar8 < uVar13) {
          return 4;
        }
        if (*(char *)(param_1 + 0x7cc4) == '\0') {
          return 4;
        }
        if (*(byte *)(param_1 + 0x7cc5) < 2) {
          return 4;
        }
        return (uint)(100 < (uint)(iVar15 - *(int *)(param_1 + 0x7cc8))) << 2;
      }
    }
    *(undefined1 *)(param_1 + 0x7cba) = 0;
    return 4;
  }
  if (uVar13 == 0x14) {
    iVar15 = FUN_ram_48025ba6();
    FUN_ram_4805883a(&iStack_114,*(undefined4 *)(param_1 + 0x9288));
    FUN_ram_4809e702(param_1 + 0x9288,&iStack_114,iVar15);
    if (param_2[0x10] != *(int *)(param_1 + 0x93c0)) {
      return 4;
    }
    if (*(char *)(param_1 + 0x93d6) == '\0') {
      return 4;
    }
    if (1000 < (uint)(iVar15 - *(int *)(param_1 + 0x93bc))) {
      return 4;
    }
    if (*(char *)(param_1 + 0x93d9) == '\0') {
      iVar15 = FUN_ram_4805784a(param_1 + 0x928c,param_1 + 0x930c,iVar15);
      if (iVar15 == 0) {
        return 4;
      }
      bVar11 = *(byte *)(param_1 + 0x930c);
    }
    else {
      if (*(char *)(param_1 + 0x93d8) == '\0') {
        return 4;
      }
      if (*(char *)(param_1 + 0x93dc) != '\0') {
        return 4;
      }
      bVar11 = 0;
    }
    uVar13 = *(uint *)(param_1 + 0x9320);
    iStack_10c = *(int *)(param_1 + 0x9328);
    uVar10 = *(undefined4 *)(param_1 + 0x932c);
    iStack_100 = *(int *)(param_1 + 0x9334);
    uVar7 = *(undefined4 *)(param_1 + 0x9338);
    iStack_f8 = *(int *)(param_1 + 0x933c);
    iStack_f4 = *(int *)(param_1 + 0x9340);
    _uStack_108 = uVar10;
    iStack_104 = *(undefined4 *)(param_1 + 0x9330);
    uStack_fc = uVar7;
    uVar8 = (uVar13 & 0xff) + (uVar13 >> 8) & 0xffff;
    uVar14 = (undefined1)uVar8;
    if (*(byte *)(param_1 + 0x9324) != 0) {
      uVar21 = 0;
      do {
        if (uVar21 != 1) {
          uVar8 = uVar8 + *(byte *)((int)&uStack_110 + uVar21 + 1) & 0xffff;
        }
        uVar14 = (undefined1)uVar8;
        uVar21 = uVar21 + 1;
      } while (uVar21 != *(byte *)(param_1 + 0x9324));
    }
    uStack_110._3_1_ = (undefined1)((uint)*(undefined4 *)(param_1 + 0x9324) >> 0x18);
    uStack_110._0_3_ =
         CONCAT12(uVar14,CONCAT11(bVar11 | (*(char *)(param_1 + 0x93d4) + '\x01') * '\x10' |
                                           *(byte *)(param_1 + 0x9325) & 8,
                                  (char)*(undefined4 *)(param_1 + 0x9324)));
    uStack_fc._3_1_ = (undefined1)((uint)uVar7 >> 0x18);
    uStack_fc._0_3_ = CONCAT12(2,(short)uVar7);
    uStack_105 = (undefined1)((uint)uVar10 >> 0x18);
    uStack_108 = (uint3)(ushort)uVar10;
    *(int *)(param_1 + 0x935c) = uStack_fc;
    *(undefined4 *)(param_1 + 0x9354) = 0;
    *(uint *)(param_1 + 0x9344) = uVar13;
    *(int *)(param_1 + 0x9348) = uStack_110;
    *(int *)(param_1 + 0x934c) = iStack_10c;
    *(int *)(param_1 + 0x9350) = _uStack_108;
    *(int *)(param_1 + 0x9358) = iStack_100;
    *(int *)(param_1 + 0x9360) = iStack_f8;
    *(int *)(param_1 + 0x9364) = iStack_f4;
    param_2[10] = uStack_fc;
    param_2[5] = uStack_110;
    param_2[7] = _uStack_108;
    param_2[4] = uVar13;
    param_2[6] = iStack_10c;
    param_2[9] = iStack_100;
    param_2[0xb] = iStack_f8;
    param_2[0xc] = iStack_f4;
    param_2[8] = 0;
    return 0;
  }
  if ((uVar13 == 6) || ((uVar13 - 0xb & 0xff) < 2)) {
    iVar15 = FUN_ram_480c5c90(param_1 + 0x7cd0,param_2,param_3);
    return iVar15;
  }
  iVar15 = *(int *)(param_1 + 0x8500);
  FUN_ram_4ff3ec14(iVar15 + 0xb18,0xffffffff);
  puVar20 = (undefined4 *)(iVar15 + 0xb38);
  pbVar4 = local_1b8;
  do {
    uVar7 = puVar20[1];
    uVar10 = puVar20[2];
    uVar12 = puVar20[3];
    *(undefined4 *)pbVar4 = *puVar20;
    *(undefined4 *)(pbVar4 + 4) = uVar7;
    *(undefined4 *)(pbVar4 + 8) = uVar10;
    *(undefined4 *)(pbVar4 + 0xc) = uVar12;
    puVar20 = puVar20 + 4;
    pbVar4 = pbVar4 + 0x10;
  } while (puVar20 != (undefined4 *)(iVar15 + 0xbd8));
  *(undefined4 *)pbVar4 = *puVar20;
  FUN_ram_4ff3ee10(iVar15 + 0xb18);
  iVar15 = FUN_ram_48025ba6();
  uVar13 = param_2[0x10];
  uVar21 = uVar13 >> 0x18;
  if (uVar21 == 10) {
    if ((uVar13 == *(uint *)(param_1 + 0x9064)) && (cStack_12f != '\0')) {
      return ((*(byte *)(param_1 + 0x905d) ^ 1) & 0x3f) << 2;
    }
    return 4;
  }
  if (uVar21 < 0xb) {
    if (uVar21 == 8) {
      FUN_ram_48053f2a(&iStack_114,param_1 + 0x8a1c,iVar15);
      if (param_2[0x10] != *(int *)(param_1 + 0x8bd0)) {
        return 4;
      }
      if (cStack_a4 != '\0') {
        return 4;
      }
      if (cStack_cc != '\0') {
        return 4;
      }
      if (cStack_78 == '\0') {
        return 4;
      }
      return 0;
    }
    if (uVar21 == 9) {
      if (uVar13 != *(uint *)(param_1 + 0x8bf8)) {
        return 4;
      }
      FUN_ram_4ff3ec14(param_1 + 0x8a1c,0xffffffff);
      iVar16 = 0;
      do {
        iVar18 = iVar16 + 0x8a39;
        iVar1 = iVar16 + 0x15;
        bVar22 = iVar16 == 2;
        iVar16 = iVar16 + 1;
        uVar8 = uVar8 & (byte)((*(byte *)(iVar18 + param_1) ^ *(byte *)((int)param_2 + iVar1)) &
                              ~(bVar22 << 7)) == 0;
      } while (iVar16 != 8);
      uVar13 = 0;
      if ((((uVar8 != 0) && (uVar13 = 0, *(char *)(param_1 + 0x8ab1) != '\0')) &&
          (uVar13 = 0, *(char *)(param_1 + 0x8add) == '\0')) &&
         (uVar13 = 0, *(char *)(param_1 + 0x8a2c) != '\0')) {
        if (*(char *)(param_1 + 0x8ac8) == '\0') {
          uVar13 = 0;
          if ((((*(int *)(param_1 + 0x8a30) != 0) &&
               ((uint)(iVar15 - *(int *)(param_1 + 0x8a30)) < 0x2ef)) &&
              ((param_2[4] == *(int *)(param_1 + 0x8a8c) &&
               ((*(char *)((int)param_2 + 0x1d) == *(char *)(param_1 + 0x8a99) &&
                ((char)param_2[5] == *(char *)(param_1 + 0x8a90))))))) &&
             (iVar15 = FUN_ram_4ff4511a((int)param_2 + 0x15,param_1 + 0x8a91,8), iVar15 == 0)) {
            if (*(char *)(param_1 + 0x8a64) == '\0') {
              if (*(char *)(param_1 + 0x8ad0) == '\0') {
                bVar11 = *(byte *)(param_1 + 0x8a3b) >> 7;
                if (*(char *)(param_1 + 0x8a27) != '\0') {
                  bVar11 = bVar11 | *(char *)(param_1 + 0x8b05) == '\x02';
                }
              }
              else {
                bVar11 = *(byte *)(param_1 + 0x8ad1);
              }
            }
            else if (*(char *)(param_1 + 0x8adc) == '\0') {
              bVar11 = *(byte *)(param_1 + 0x8a66);
            }
            else {
              bVar11 = *(byte *)(param_1 + 0x8a72);
            }
            uVar13 = (uint)(*(byte *)((int)param_2 + 0x17) >> 7 == bVar11);
          }
        }
        else {
          uVar13 = 0;
        }
      }
      FUN_ram_4ff3ee10(param_1 + 0x8a1c);
      return (uVar13 ^ 1) << 2;
    }
    if (uVar21 == 3) {
      if (uVar13 != *(uint *)(param_1 + 0x89c8)) {
        return 4;
      }
      iVar16 = param_1 + 0x8820;
      FUN_ram_4ff3ec14(iVar16,0xffffffff);
      uVar13 = FUN_ram_48053de0(iVar16,param_1 + 0x89d8,iVar15);
      FUN_ram_4ff3ee10(iVar16);
      return ((uVar13 ^ 1) & 0x3f) << 2;
    }
    if (uVar21 != 6) {
      return 4;
    }
    if (uVar13 != *(uint *)(param_1 + 0x87e8)) {
      return 4;
    }
    if (*(char *)(param_1 + 0x87de) == '\0') {
      return 4;
    }
    return (uint)((uint)*(byte *)(param_1 + 0x87dc) * 0x80 != (uint)*(byte *)((int)param_2 + 0x1a))
           << 2;
  }
  if (uVar21 == 0xc) {
    if (uVar13 != *(uint *)(param_1 + 0x9220)) {
      return 4;
    }
    if (*(char *)(param_1 + 0x9200) != '\0') {
      return 4;
    }
    if (*(int *)(param_1 + 0x91d8) != 0x4f3) {
      return 4;
    }
    cVar6 = '\x02';
    if (cStack_149 == '\x01') {
      cVar6 = '\x01';
    }
    if (*(char *)(param_1 + 0x91e5) != cVar6) {
      return 4;
    }
    if (*(int *)(param_1 + 0x91fc) == 0) {
      return 4;
    }
    if (500 < (uint)(iVar15 - *(int *)(param_1 + 0x91fc))) {
      return 4;
    }
    iVar16 = *(int *)(param_1 + 0x9248);
    if (iVar16 == 0) {
      uVar13 = (uint)*(byte *)(param_1 + 0x9210);
    }
    else {
      if (cStack_14a == '\0') {
        return 4;
      }
      uVar13 = 0;
      if (iVar16 == *(int *)(param_1 + 0x9204)) {
        uVar13 = (uint)((uint)(iVar15 - *(int *)(param_1 + 0x9208)) < 0x2ef);
      }
      if (*(char *)(param_1 + 0x91b0) != '\0') {
        if (iVar16 != *(int *)(param_1 + 0x91cc)) {
          return 4;
        }
        uVar13 = (uint)(*(char *)(param_1 + 0x91b1) != '\0');
        if (*(char *)(param_1 + 0x8000 + uVar13 + 0x1140) == '\0') {
          return 4;
        }
        iVar16 = *(int *)(param_1 + 0x8000 + (uVar13 + 0x324) * 4 + 0x4b4);
        if (iVar16 == 0) {
          return 4;
        }
        return (uint)(0x5dc < (uint)(iVar15 - iVar16)) << 2;
      }
    }
    goto LAB_ram_480c6da0;
  }
  if (uVar21 != 0x10) {
    if (uVar21 != 0xb) {
      return 4;
    }
    if (uVar13 != *(uint *)(param_1 + 0x8fe0)) {
      return 4;
    }
    iStack_f4 = DAT_ram_48222d68;
    iStack_114 = DAT_ram_48222d48;
    uStack_110 = DAT_ram_48222d4c;
    iStack_10c = DAT_ram_48222d50;
    _uStack_108 = DAT_ram_48222d54;
    iStack_104 = DAT_ram_48222d58;
    iStack_100 = DAT_ram_48222d5c;
    uStack_fc = DAT_ram_48222d60;
    iStack_f8 = DAT_ram_48222d64;
    cVar6 = FUN_ram_4809e23a(param_1 + 0x84a8,local_1b8,iVar15,&iStack_114);
    *(char *)(param_1 + 0x8fdd) = cVar6;
    *(char *)(param_2 + 3) = cVar6 + '\x10';
    if (*(char *)(param_1 + 0x8fdd) != '\0') {
      return 4;
    }
    param_2[4] = iStack_114;
    param_2[5] = uStack_110;
    param_2[6] = iStack_10c;
    param_2[7] = _uStack_108;
    param_2[8] = iStack_104;
    param_2[9] = iStack_100;
    param_2[10] = uStack_fc;
    param_2[0xb] = iStack_f8;
    param_2[0xc] = iStack_f4;
    *(int *)(param_1 + 0x8fe4) = iStack_114;
    *(int *)(param_1 + 0x8fe8) = uStack_110;
    *(int *)(param_1 + 0x8fec) = iStack_10c;
    *(int *)(param_1 + 0x8ff0) = _uStack_108;
    *(int *)(param_1 + 0x8ff4) = iStack_104;
    *(int *)(param_1 + 0x8ff8) = iStack_100;
    *(int *)(param_1 + 0x8ffc) = uStack_fc;
    *(int *)(param_1 + 0x9000) = iStack_f8;
    *(int *)(param_1 + 0x9004) = iStack_f4;
    return 0;
  }
  iVar16 = *(int *)(param_1 + 0x8500);
  bVar22 = false;
  if ((*(char *)(iVar16 + 1) != '\0') && (bVar22 = false, local_1b8[0] != 0)) {
    iVar1 = -0x448;
    if (*(char *)(iVar16 + 0x76) == '\x01') {
      iVar1 = 0x770;
    }
    bVar22 = (uint)(iVar15 - *(int *)(iVar16 + 0x78)) < iVar1 + 0x1000U &&
             *(char *)(iVar16 + 0x76) != '\0';
  }
  piVar23 = *(int **)(param_1 + 0x8504);
  piVar5 = piVar23 + 0x297;
  FUN_ram_4ff3ec14(piVar5,0xffffffff);
  piVar23 = (int *)*piVar23;
  FUN_ram_4ff3ee10(piVar5);
  if (piVar23 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*piVar23 + 0x154))(piVar23,2);
  }
  if ((((cStack_1ae == '\0') || (acStack_1ac[0] == '\0')) ||
      (fence(), *(char *)(*(int *)(param_1 + 0x8500) + 0x9789) != '\0')) ||
     (*(char *)(*(int *)(param_1 + 0x8500) + 0x21f) != '\0')) {
    bVar11 = 0;
  }
  else {
    bVar11 = *(byte *)(*(int *)(param_1 + 0x8500) + 0x222) ^ 1;
  }
  FUN_ram_4804304e(iVar16 + 0x80,iVar15,uVar7,bVar11,bVar22,
                   *(undefined1 *)(*(int *)(param_1 + 0x8500) + 0x5a1));
  if (param_2[0x10] != *(int *)(param_1 + 0x84fc)) {
    return 4;
  }
  iVar16 = *(int *)(param_1 + 0x8500);
  uVar7 = FUN_ram_4804556a(*(undefined4 *)(param_1 + 0x8504),2);
  iVar16 = FUN_ram_4804354e(iVar16 + 0x80,param_1 + 0x84a8,iVar15,uVar7);
  if (iVar16 == 0) {
    return 4;
  }
  pbVar4 = *(byte **)(param_1 + 0x8500);
  if ((pbVar4[1] == 0) || (uVar13 = (uint)local_1b8[0], uVar13 == 0)) {
LAB_ram_480c6db6:
    uVar13 = 0;
    if (pbVar4[0x5a1] == 0) {
LAB_ram_480c6dbe:
      uVar13 = (uint)*pbVar4;
      if (uVar13 == 0) {
        uVar13 = (uint)pbVar4[0x82];
        if (uVar13 != 0) {
          if ((pbVar4[0x1a4] == 0) || (0x5dc < (uint)(iVar15 - *(int *)(pbVar4 + 0x1a8)))) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
            if ((pbVar4[0x194] == 0) && (uVar8 = 0, pbVar4[0x195] != 0)) {
              uVar8 = (uint)((uint)(iVar15 - *(int *)(pbVar4 + 0x198)) <
                            (uint)*(ushort *)(pbVar4 + 0x86));
            }
            if ((pbVar4[0x19c] != 0) ||
               ((pbVar4[0x19d] != 0 &&
                ((uint)(iVar15 - *(int *)(pbVar4 + 0x1a0)) < (uint)*(ushort *)(pbVar4 + 0x86))))) {
              uVar8 = uVar8 | 2;
            }
          }
          uVar19 = 0;
          uVar21 = 0;
          do {
            uVar2 = uVar19 & 0x1f;
            uVar3 = uVar19 & 0xf;
            uVar19 = uVar19 + 1;
            if ((pbVar4[0x84] >> uVar2 & 1) != 0) {
              uVar21 = uVar21 | uVar8 << (uVar3 << 1) & 0xff;
            }
          } while (uVar19 != 3);
          if (uVar21 != 0) goto LAB_ram_480c6d8e;
        }
        uVar13 = (uint)pbVar4[0x88];
        if ((uVar13 == 0) || (iVar15 = FUN_ram_480319ac(pbVar4 + 0x80,iVar15), iVar15 == 0)) {
          uVar13 = (uint)(pbVar4[0x134] != 0);
        }
      }
    }
  }
  else {
    iVar16 = -0x448;
    if (pbVar4[0x76] == 1) {
      iVar16 = 0x770;
    }
    if (iVar16 + 0x1000U <= (uint)(iVar15 - *(int *)(pbVar4 + 0x78))) goto LAB_ram_480c6db6;
    if (pbVar4[0x5a1] == 0) {
      if (pbVar4[0x76] != 0) goto LAB_ram_480c6d8e;
      goto LAB_ram_480c6dbe;
    }
    uVar13 = 0;
  }
LAB_ram_480c6d8e:
  uVar13 = *(byte *)(param_1 + 0x84f9) ^ uVar13;
LAB_ram_480c6da0:
  return ((uVar13 ^ 1) & 0x3f) << 2;
}


