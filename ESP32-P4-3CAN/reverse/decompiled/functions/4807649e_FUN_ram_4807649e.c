/* Firmware entry: 0x4807649e */

bool FUN_ram_4807649e(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  short sVar3;
  ushort *puVar4;
  short *psVar5;
  short *psVar6;
  ushort uVar7;
  uint uVar8;
  ushort *puVar9;
  int iVar10;
  uint uVar11;
  byte bVar12;
  ushort uVar13;
  undefined *puVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 auStack_3c [42];
  ushort auStack_12 [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < (byte)(*(char *)(param_1 + 1) - 0xcU)) {
    return false;
  }
  if (((((((*(byte *)(param_1 + 0x13) < 3) && (*(byte *)(param_1 + 0x29) < 3)) &&
         (*(byte *)(param_1 + 0x2e) < 2)) &&
        (((byte)(*(char *)(param_1 + 0x95) - 1U) < 3 && (*(char *)(param_1 + 0x8b) == '\0')))) &&
       (*(char *)(param_1 + 0x8a) != '\0')) &&
      ((*(char *)(param_1 + 0x6f) == '\x02' &&
       ((*(char *)(param_1 + 0x76) != '\0' || (*(char *)(param_1 + 0x78) == '\0')))))) &&
     ((*(byte *)(param_1 + 0x9c) < 0x3d &&
      (((((*(byte *)(param_1 + 0x9d) < 0x3d && (*(byte *)(param_1 + 0xf) < 0x15)) &&
         (*(short *)(param_1 + 0xa2) == 500)) &&
        ((((byte)(*(char *)(param_1 + 0x10) - 1U) < 10 &&
          ((ushort)(*(short *)(param_1 + 0x22) - 1U) < 0xff)) &&
         (((ushort)(*(short *)(param_1 + 0x5e) - 1U) < 0xff &&
          (((ushort)(*(short *)(param_1 + 0x60) - 1U) < 0xff &&
           ((ushort)(*(short *)(param_1 + 0x62) - 1U) < 0xff)))))))) &&
       (*(byte *)(param_1 + 0x11) < 0xf1)))))) {
    bVar1 = *(byte *)(param_1 + 0x24);
    bVar12 = bVar1;
    if (0xf0 < bVar1) {
      bVar12 = 0xf0;
    }
    if (bVar1 == (bVar12 & 0xfc)) {
      psVar6 = (short *)(param_1 + 0x34);
      puVar4 = (ushort *)FUN_ram_4ff45158(auStack_3c,psVar6,0x2a);
      puVar9 = puVar4;
      do {
        puVar15 = puVar9 + 7;
        do {
          uVar7 = *puVar9;
          if (0xff < uVar7) {
            uVar7 = 0xff;
          }
          *puVar9 = uVar7;
          puVar9 = puVar9 + 1;
        } while (puVar15 != puVar9);
        puVar9 = puVar15;
      } while (puVar15 != auStack_12);
      iVar16 = 0xe;
      do {
        iVar10 = iVar16 + -0xe;
        do {
          iVar18 = param_1 + iVar10;
          psVar5 = (short *)((int)puVar4 + iVar10);
          iVar10 = iVar10 + 2;
          if (*(short *)(iVar18 + 0x34) != *psVar5) {
            return false;
          }
        } while (iVar16 != iVar10);
        iVar16 = iVar16 + 0xe;
      } while (iVar16 != 0x38);
      if ((ushort)(*(short *)(param_1 + 6) - 1U) < 0x78) {
        bVar1 = *(byte *)(param_1 + 9);
        if (bVar1 < 0xb) {
          bVar12 = bVar1;
          if (bVar1 == 0) {
            bVar12 = 1;
          }
        }
        else {
          bVar12 = 10;
        }
        if (((((bVar12 == bVar1) && ((byte)(*(char *)(param_1 + 0x2d) - 3U) < 8)) &&
             (*(byte *)(param_1 + 0x26) < 5)) &&
            (((*(byte *)(param_1 + 0x77) < 9 && (*(byte *)(param_1 + 0x7b) < 5)) &&
             ((*(byte *)(param_1 + 0x7c) < 5 &&
              ((*(byte *)(param_1 + 0x7d) < 5 && (*(byte *)(param_1 + 0x7e) < 5)))))))) &&
           ((ushort)(*(short *)(param_1 + 0x80) - 100U) < 0x1325)) {
          uVar7 = *(ushort *)(param_1 + 0x82);
          uVar13 = uVar7;
          if (0xe10 < uVar7) {
            uVar13 = 0xe10;
          }
          if (uVar13 < 10) {
            uVar13 = 10;
          }
          if (uVar13 == uVar7) {
            uVar7 = *(ushort *)(param_1 + 0x84);
            uVar13 = uVar7;
            if (0xe10 < uVar7) {
              uVar13 = 0xe10;
            }
            if (uVar13 < 10) {
              uVar13 = 10;
            }
            if (uVar13 == uVar7) {
              uVar7 = *(ushort *)(param_1 + 0x86);
              uVar13 = uVar7;
              if (0xe10 < uVar7) {
                uVar13 = 0xe10;
              }
              if (uVar13 < 10) {
                uVar13 = 10;
              }
              if (uVar13 == uVar7) {
                puVar2 = *(undefined **)(param_1 + 0x92);
                puVar14 = puVar2;
                if (puVar2 < &pmpaddr56) {
                  puVar14 = &pmpaddr56;
                }
                if (60000 < puVar14) {
                  puVar14 = (undefined *)0xea60;
                }
                if ((*(ushort *)(param_1 + 0x90) < 0x2711) && (puVar2 == puVar14)) {
                  uVar7 = *(ushort *)(param_1 + 0x6a);
                  if (uVar7 < 0x65) {
                    uVar13 = uVar7;
                    if (uVar7 == 0) {
                      uVar13 = 1;
                    }
                  }
                  else {
                    uVar13 = 100;
                  }
                  if ((uVar7 == uVar13) && (*(ushort *)(param_1 + 0x6c) < 0x15)) {
                    while (psVar6 != (short *)(param_1 + 0x5e)) {
                      psVar5 = psVar6 + 7;
                      while (psVar6 != psVar5) {
                        sVar3 = *psVar6;
                        psVar6 = psVar6 + 1;
                        if (0xfe < (ushort)(sVar3 - 1U)) {
                          return false;
                        }
                      }
                    }
                    psVar6 = (short *)(param_1 + 0x14);
                    do {
                      if (psVar6 == (short *)(param_1 + 0x22)) {
                        uVar11 = (uint)*(ushort *)(param_1 + 0x30);
                        uVar17 = uVar11;
                        if (10000 < uVar11) {
                          uVar17 = 10000;
                        }
                        if (uVar17 < 1000) {
                          uVar17 = 1000;
                        }
                        uVar17 = uVar17 + 0x32 & 0xffff;
                        if (uVar11 != (uVar17 - uVar17 % 100 & 0xffff)) {
                          return false;
                        }
                        uVar8 = (uint)*(ushort *)(param_1 + 0x32);
                        uVar17 = uVar8;
                        if (10000 < uVar8) {
                          uVar17 = 10000;
                        }
                        if (uVar17 < 1000) {
                          uVar17 = 1000;
                        }
                        uVar17 = uVar17 + 0x32 & 0xffff;
                        return (uVar17 - uVar17 % 100 & 0xffff) == uVar8 && uVar11 <= uVar8;
                      }
                      sVar3 = *psVar6;
                      psVar6 = psVar6 + 1;
                    } while ((ushort)(sVar3 - 1U) < 0xff);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


