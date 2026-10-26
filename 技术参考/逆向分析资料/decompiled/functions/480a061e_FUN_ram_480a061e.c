/* Firmware entry: 0x480a061e */

int FUN_ram_480a061e(int *param_1,uint *param_2,int param_3,uint *param_4,uint param_5,uint param_6)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_1f8 [13];
  char cStack_1eb;
  int iStack_1e8;
  int iStack_1d4;
  uint uStack_1d0;
  undefined1 auStack_1cc [4];
  short sStack_1c8;
  undefined1 uStack_1c6;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined1 uStack_19c;
  undefined1 uStack_19a;
  char cStack_199;
  undefined1 uStack_198;
  int iStack_194;
  uint uStack_190;
  int *piStack_18c;
  undefined1 uStack_180;
  undefined1 uStack_178;
  undefined1 uStack_160;
  undefined1 uStack_148;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined1 auStack_128 [5];
  undefined1 uStack_123;
  undefined2 uStack_122;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  byte bStack_117;
  undefined2 uStack_116;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined1 auStack_10c [28];
  undefined1 uStack_f0;
  undefined1 uStack_c8;
  undefined1 uStack_9e;
  undefined1 uStack_97;
  undefined1 uStack_7c;
  undefined1 uStack_6f;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  FUN_ram_4ff3ec14(*param_1 + 0xb20,0xffffffff);
  iVar12 = *param_1;
  *(int *)(iVar12 + 0x10ac) = *(int *)(iVar12 + 0x10ac) + 1;
  *(int *)(iVar12 + 0x10b4) = *(int *)(iVar12 + 0x10b4) + 1;
  uVar4 = FUN_ram_48025b94();
  iVar9 = *param_1;
  *(undefined4 *)(iVar12 + 0x10dc) = uVar4;
  *(undefined4 *)(iVar12 + 0x10d8) = uVar4;
  FUN_ram_4ff3ee10(iVar9 + 0xb20);
  iVar9 = *param_1;
  if ((0xb < param_5) || (*(int *)((param_5 + 0x1302) * 8 + iVar9 + 0xc) != 0)) {
LAB_ram_480a06c2:
    FUN_ram_4ff3ec14(iVar9 + 0xb20,0xffffffff);
    iVar9 = *param_1;
    *(int *)(iVar12 + 0x10c0) = *(int *)(iVar12 + 0x10c0) + 1;
    FUN_ram_4ff3ee10(iVar9 + 0xb20);
    return 0;
  }
  fence();
  if (*(char *)(iVar9 + 0x9789) != '\0') {
    iVar9 = *param_1;
    goto LAB_ram_480a06c2;
  }
  if ((int)param_6 < 0) {
    FUN_ram_4ff3ec14(*param_1 + 0xb20,0xffffffff);
    iVar9 = *param_1;
    *(int *)(iVar12 + 0x10c0) = *(int *)(iVar12 + 0x10c0) + 1;
    FUN_ram_4ff3ee10(iVar9 + 0xb20);
    return 0;
  }
  uVar17 = *param_2;
  if (uVar17 == 0x370) {
LAB_ram_480a07ee:
    uVar13 = 5000;
  }
  else {
    if ((uVar17 != 0x3fd) && (uVar17 != 0x30a)) {
      if (uVar17 != 0x3c2) goto LAB_ram_480a0764;
      goto LAB_ram_480a07ee;
    }
    uVar13 = 2000;
  }
  if (uVar13 < param_6) {
    param_6 = uVar13;
  }
LAB_ram_480a0764:
  uVar4 = FUN_ram_480409ae(param_2,0,0);
  FUN_ram_48040862(&piStack_130,uVar4);
  if ((uStack_12c != 0) && (uStack_12c < param_6)) {
    param_6 = uStack_12c;
  }
  cVar1 = *(char *)((int)param_2 + 0x1a);
  if (((byte)(cVar1 - 1U) < 4) &&
     ((cVar1 != '\x04' ||
      (((((*(char *)((int)param_2 + 0xd) == '\x01' && (uVar17 == 0x3fd)) &&
         ((char)param_2[1] == '\b')) &&
        (((*(byte *)((int)param_2 + 5) & 7) == 0 && (param_2[8] != 0)))) && (param_3 == 2)))))) {
    iVar9 = FUN_ram_48025b94();
    uVar13 = param_2[4];
    if (((*(char *)((int)param_2 + 0xe) != '\0') || (uVar13 != 0)) &&
       ((-1 < (int)(iVar9 - uVar13) && (iVar9 - uVar13 <= param_6)))) {
      if (param_3 == 1) {
        *(byte *)((int)param_2 + 0x19) = *(byte *)((int)param_2 + 0x19) | 1;
      }
      iVar9 = FUN_ram_48040cd4(param_2,param_3,1);
      iVar15 = *param_1;
      if (iVar9 == 0) {
        iVar3 = iVar15 + 0x2864;
        FUN_ram_4ff3ec14(iVar3,0xffffffff);
        *(int *)(iVar15 + 0x2860) = *(int *)(iVar15 + 0x2860) + 1;
      }
      else {
        FUN_ram_4ff230e8(auStack_1f8,iVar15 + 0x79f4);
        iVar9 = FUN_ram_48040830(param_2);
        if (iVar9 != 0) {
          bVar8 = false;
          if (cStack_1eb != '\0') {
            iVar9 = FUN_ram_48025ba6();
            bVar8 = (uint)(iVar9 - iStack_1e8) < 0x3e9;
          }
          FUN_ram_4ff2325e(param_2,auStack_1f8,bVar8);
        }
        memset(auStack_1cc,0,0x9c);
        uStack_1c0 = *param_2;
        uStack_1bc = param_2[1];
        uStack_1b8 = param_2[2];
        uStack_1b4 = param_2[3];
        uStack_1b0 = param_2[4];
        cVar2 = *(char *)((int)param_2 + 0xd);
        uStack_1ac = param_2[5];
        uStack_1a8 = param_2[6];
        uStack_1a4 = param_2[7];
        uStack_1a0 = param_2[8];
        uStack_19c = 0xe;
        uStack_178 = 8;
        uStack_160 = 8;
        uStack_148 = 8;
        piVar5 = (int *)FUN_ram_4804556a(*param_1 + 0x1e08,cVar2);
        iVar15 = *param_1;
        iVar9 = uVar13 + param_6;
        uVar13 = *(int *)(iVar15 + 0x93f0) + 1;
        uStack_180 = 1;
        uStack_198 = 1;
        uVar14 = uVar13 & 0xffffff;
        if ((uVar13 & 0xffffff) == 0) {
          uVar14 = 1;
        }
        iVar3 = iVar15 + 0xb28;
        *(uint *)(iVar15 + 0x93f0) = uVar14;
        uVar14 = uVar14 | 0xe000000;
        sStack_1c8 = (short)param_5 + 1;
        uStack_1c6 = 0x11;
        uStack_1d0 = uVar14;
        uStack_19a = (char)param_3;
        cStack_199 = cVar1;
        iStack_194 = iVar9;
        uStack_190 = uVar14;
        piStack_18c = piVar5;
        FUN_ram_4ff3ec14(iVar3,0xffffffff);
        if (((int)((*(byte *)(iVar15 + 0x9b04) + 0x20) - (uint)*(byte *)(iVar15 + 0x9b05)) % 0x20 &
            0xffU) + (uint)*(byte *)(iVar15 + 0x9b06) + 2 < 0x20) {
          *(byte *)(iVar15 + 0x9b06) = *(byte *)(iVar15 + 0x9b06) + 2;
          FUN_ram_4ff3ee10(iVar3);
          iVar15 = FUN_ram_4805c8d2(*param_1,&uStack_1d0,0x11,0);
          if (iVar15 != 0) {
            if ((((((param_1[0x2d6] != 0) && (uVar17 < 0x800)) &&
                  (((uStack_1bc & 0xff) - 1 & 0xff) < 8)) &&
                 (((byte)(cVar2 - 1U) < 2 || (cVar2 == '\x04')))) &&
                ((uStack_1b4._2_1_ != '\0' || (uStack_1b0 != 0)))) &&
               (iVar3 = FUN_ram_48040cd4(&uStack_1c0,param_3,1), iVar3 != 0)) {
              iVar6 = FUN_ram_48025b94();
              iVar7 = FUN_ram_48025ba6();
              uVar17 = uStack_1b0;
              if ((iVar6 - iVar9 < 1) && (iVar18 = iVar9 - uStack_1b0, -1 < iVar18)) {
                piVar10 = param_1 + 0x2d4;
                FUN_ram_4ff3ec14(piVar10,0xffffffff);
                if (((char)param_1[param_5 * 0x3c + 0x3e] == '\0') &&
                   ((param_1[0x2d8] != -1 || (param_1[0x2d9] != 0)))) {
                  memset(auStack_10c,0,0xcc);
                  uStack_12c = CONCAT31(uStack_12c._1_3_,8);
                  piStack_130 = (int *)0x0;
                  memset((void *)((int)&uStack_12c + 1),0,8);
                  bStack_117 = bStack_117 & 0xfc;
                  uStack_c8 = 0xff;
                  uStack_97 = 0xff;
                  uStack_6f = 0xff;
                  uStack_7c = 8;
                  uStack_116 = 1;
                  uStack_9e = 1;
                  uStack_123 = 0;
                  uStack_122 = 0;
                  uStack_120 = 0;
                  uStack_11c = 0;
                  uStack_118 = 0;
                  uStack_114 = 0;
                  uStack_110 = 0;
                  FUN_ram_4ff45158(param_1 + param_5 * 0x3c + 4,&piStack_130,0xea);
                  uVar13 = uStack_1a0;
                  param_1[param_5 * 0x3c + 4] = uStack_1c0;
                  param_1[param_5 * 0x3c + 7] = uStack_1b4;
                  param_1[param_5 * 0x3c + 8] = uStack_1b0;
                  param_1[param_5 * 0x3c + 10] = uStack_1a8;
                  param_1[param_5 * 0x3c + 9] = uStack_1ac;
                  param_1[param_5 * 0x3c + 0xb] = uStack_1a4;
                  param_1[param_5 * 0x3c + 5] = uStack_1bc;
                  param_1[param_5 * 0x3c + 6] = uStack_1b8;
                  uVar11 = param_1[0x2d8] + 1;
                  iVar19 = (uint)(uVar11 < (uint)param_1[0x2d8]) + param_1[0x2d9];
                  *(undefined1 *)(param_1 + param_5 * 0x3c + 0x3e) = 1;
                  param_1[param_5 * 0x3c + 0xc] = 0;
                  *(undefined1 *)(param_1 + param_5 * 0x3c + 10) = 0;
                  param_1[0x2d8] = uVar11;
                  param_1[0x2d9] = iVar19;
                  *(char *)(param_1 + param_5 * 0x3c + 0x2a) = cVar2;
                  *(char *)(param_1 + param_5 * 0x3c + 0x20) = cVar2;
                  param_1[param_5 * 0x3c + 0x2c] = uVar11;
                  *(undefined1 *)((int)param_1 + param_5 * 0xf0 + 0x81) = 1;
                  param_1[param_5 * 0x3c + 0x2d] = iVar19;
                  bVar16 = (byte)param_5;
                  *(byte *)((int)param_1 + param_5 * 0xf0 + 0x82) = bVar16;
                  param_1[param_5 * 0x3c + 0x3c] = iVar7 - (iVar6 - uVar17) / 1000;
                  *(char *)((int)param_1 + param_5 * 0xf0 + 0xa1) = (char)param_3;
                  *(byte *)((int)param_1 + param_5 * 0xf0 + 0xa9) = bVar16 ^ 0x80;
                  param_1[param_5 * 0x3c + 0x24] = uVar11;
                  *(byte *)((int)param_1 + param_5 * 0xf0 + 0x9d) = (byte)(uStack_1a8 >> 8) & 1;
                  param_1[param_5 * 0x3c + 0x25] = (int)piVar5;
                  *(undefined1 *)(param_1 + param_5 * 0x3c + 0x27) = 1;
                  param_1[param_5 * 0x3c + 0x22] = uStack_1a0;
                  param_1[param_5 * 0x3c + 0x3d] = (iVar18 + 999U) / 1000;
                  *(undefined1 *)(param_1 + param_5 * 0x3c + 0x28) = 0x11;
                  param_1[param_5 * 0x3c + 0x21] = uVar14;
                  param_1[param_5 * 0x3c + 0x26] = iVar9;
                  *(char *)((int)param_1 + param_5 * 0xf0 + 0xa2) = cVar1;
                  param_1[param_5 * 0x3c + 0x23] = iStack_1d4;
                  memset(auStack_128,0,0x40);
                  uStack_f0 = 0xff;
                  auStack_128[0] = 1;
                  piStack_130 = piVar5;
                  uStack_12c = iVar9;
                  FUN_ram_4ff45158(param_1 + param_5 * 0x3c + 4 + 10,&piStack_130,0x41);
                  param_1[param_5 * 0x3c + 0x1d] = uVar11;
                  param_1[param_5 * 0x3c + 0x16] = uVar13;
                  param_1[param_5 * 0x3c + 0x1c] = uVar14;
                  *(byte *)(param_1 + param_5 * 0x3c + 0x1e) = bVar16;
                  param_1[param_5 * 0x3c + 0x17] = iStack_1d4;
                  FUN_ram_4ff3ee10(piVar10);
                  *(char *)(iVar15 + 0x18) = cVar2;
                  *(byte *)(iVar15 + 0x19) = bVar16 ^ 0x80;
                  iVar9 = *param_1;
                  iVar12 = param_5 * 8 + iVar9;
                  *(uint *)(iVar15 + 0x20) = uVar11;
                  *(int *)(iVar15 + 0x24) = iVar19;
                  *(uint *)(iVar12 + 0x981c) = uVar14;
                  *(undefined4 *)(iVar12 + 0x9820) = 0;
                  iVar12 = FUN_ram_48040c40(param_2);
                  if (iVar12 != 0) {
                    FUN_ram_4ff3ec14(iVar9 + 0x2864,0xffffffff);
                    *(int *)(iVar9 + 0x285c) = *(int *)(iVar9 + 0x285c) + 1;
                    FUN_ram_4ff3ee10(iVar9 + 0x2864);
                  }
                  if (param_4 != (uint *)0x0) {
                    *param_4 = uVar14;
                    return iVar3;
                  }
                  return iVar3;
                }
                FUN_ram_4ff3ee10(piVar10);
              }
            }
            FUN_ram_4805c7fc(*param_1,iVar15);
          }
          iVar9 = *param_1;
          iVar3 = iVar9 + 0xb28;
          FUN_ram_4ff3ec14(iVar3,0xffffffff);
          *(char *)(iVar9 + 0x9b06) = *(char *)(iVar9 + 0x9b06) + -2;
        }
      }
      FUN_ram_4ff3ee10(iVar3);
      piStack_130 = param_1;
      uStack_12c = iVar12 + 0x10a8;
      FUN_ram_480308c6(&piStack_130);
      return 0;
    }
  }
  FUN_ram_4ff3ec14(*param_1 + 0xb20,0xffffffff);
  iVar9 = *param_1;
  *(int *)(iVar12 + 0x10c0) = *(int *)(iVar12 + 0x10c0) + 1;
  FUN_ram_4ff3ee10(iVar9 + 0xb20);
  return 0;
}


