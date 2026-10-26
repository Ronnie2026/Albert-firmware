/* Firmware entry: 0x4805f01a */

byte FUN_ram_4805f01a(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  undefined *puVar23;
  undefined4 *puVar24;
  undefined *puVar25;
  uint uVar26;
  uint uVar27;
  byte bVar28;
  int iVar29;
  undefined4 uStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2b0;
  undefined1 auStack_2a4 [26];
  byte abStack_28a [54];
  undefined1 auStack_254 [173];
  byte abStack_1a7 [71];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1,0xffffffff);
  if ((*(char *)(param_1 + 0x128c) != '\x03') || (*(byte *)(param_1 + 0x1298) <= param_2)) {
    FUN_ram_4ff3ee10(param_1);
    return 0;
  }
  if (*(int *)(param_1 + param_2 * 0xf4 + 0x7a0) != param_3) {
    FUN_ram_4ff3ee10(param_1);
    return 0;
  }
  pbVar16 = (byte *)(param_2 * 0xf4 + 0x718 + param_1);
  FUN_ram_4ff45158(auStack_254,pbVar16,0xf3);
  iVar19 = *(int *)(pbVar16 + 0xe4);
  bVar2 = *pbVar16;
  uVar26 = (uint)pbVar16[0xac];
  bVar3 = pbVar16[0xb5];
  iVar13 = *(int *)(pbVar16 + 0xa8);
  iVar14 = *(int *)(pbVar16 + 0xcc);
  iVar15 = *(int *)(pbVar16 + 0xd4);
  bVar28 = pbVar16[0xd0];
  iVar29 = param_1 + (uint)bVar2 * 0x50 + 0x158;
  FUN_ram_4ff45158(auStack_2a4,iVar29,0x4d);
  uVar12 = *(ushort *)(iVar29 + 0x2e);
  cVar4 = *(char *)(iVar29 + 0x30);
  bVar5 = *(byte *)(iVar29 + 9);
  cVar6 = *(char *)(iVar29 + 0x31);
  bVar7 = *(byte *)(iVar29 + 0x33);
  bVar8 = *(byte *)(iVar29 + 0x32);
  cVar9 = *(char *)(iVar29 + 0x3a);
  uVar27 = (uint)*(byte *)(iVar29 + 0x34);
  bVar10 = *(byte *)(iVar29 + 0x3c);
  cVar11 = *(char *)(iVar29 + 0x44);
  FUN_ram_4ff3ee10(param_1);
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  iVar29 = FUN_ram_48025ba6();
  uVar18 = iVar29 - iVar15;
  uVar17 = (uint)uVar12;
  if (uVar12 == 0) {
    if (iVar19 == 0) {
      if (1000 < uVar18) {
        return 0;
      }
      iVar19 = FUN_ram_48025b94();
      uVar17 = 1000000;
      goto LAB_ram_4805f236;
    }
    uVar17 = iVar19 * 3;
    if (uVar17 < 100) {
      if (100 < uVar18) {
        return 0;
      }
      iVar19 = FUN_ram_48025b94();
      uVar17 = 100000;
      goto LAB_ram_4805f236;
    }
    if (5000 < uVar17) {
      uVar17 = 5000;
    }
  }
  if (uVar17 < uVar18) {
    return 0;
  }
  iVar19 = FUN_ram_48025b94();
  uVar17 = uVar17 * 1000;
LAB_ram_4805f236:
  if (((bVar28 == 0) || (iVar19 - iVar14 < 0)) || (uVar17 < (uint)(iVar19 - iVar14))) {
    return 0;
  }
  if (cVar4 != '\0') {
    uVar21 = FUN_ram_48025ba6();
    iVar19 = FUN_ram_4805eda8(param_1,(uint)bVar2,uVar21,*(undefined4 *)(param_1 + 8));
    if (iVar19 == 0) {
      return 0;
    }
  }
  if (cVar11 == '\0') {
    puVar20 = memset(&uStack_160,0,0x120);
    uStack_2c8 = CONCAT22((short)((uint)DAT_ram_482230c0 >> 0x10),&sedeleg);
    uStack_2c0 = CONCAT22((short)((uint)DAT_ram_482230c8 >> 0x10),0x708);
    uStack_2b0 = CONCAT22(0xffff,CONCAT11(0xff,(char)DAT_ram_482230d8));
    uStack_160 = uStack_2c8;
    uStack_158 = uStack_2c0;
    uStack_15c = 0x3fd;
    uStack_154 = DAT_ram_482230cc;
    uStack_140 = 0xff;
    uStack_148 = uStack_2b0;
    uStack_144 = 0xffffffff;
    uStack_150 = DAT_ram_482230d0;
    uStack_14c = DAT_ram_482230d4;
    if (((bVar3 == 1) && (iVar13 == 0x3fd)) && (uVar26 == 8)) {
      puVar22 = auStack_254;
      puVar24 = puVar20;
      do {
        pbVar16 = (byte *)((int)puVar24 + 0x11);
        pbVar1 = (byte *)((int)puVar24 + 9);
        puVar24 = (undefined4 *)((int)puVar24 + 1);
        if (((puVar22[0xad] ^ *pbVar16) & *pbVar1) != 0) {
          return bVar28;
        }
        puVar22 = puVar22 + 1;
      } while (puVar24 != &uStack_158);
      uVar26 = 0;
      if (bVar5 != 0) {
        do {
          uVar17 = (uint)abStack_28a[uVar26];
          if (((cVar6 != '\0') && ((uint)bVar8 == (uVar26 & 0xff))) &&
             (((uVar27 - 1 & 0xff) < 8 && (bVar7 + uVar27 < 9)))) {
            uVar18 = 0xff;
            if (uVar27 != 8) {
              uVar18 = (1 << (uVar27 & 0x1f)) - 1U & 0xffff;
            }
            uVar17 = uVar17 | uVar18 << (bVar7 & 0x1f) & 0xff;
          }
          if ((cVar9 != '\0') && ((uVar26 & 0xff) == (uint)bVar10)) {
            uVar17 = 0xff;
          }
          if ((uVar17 & *(byte *)((int)puVar20 + uVar26 + 0x19)) != 0) {
            return 0;
          }
          uVar26 = uVar26 + 1;
        } while (bVar5 != uVar26);
      }
    }
  }
  else {
    fence();
    if (DAT_ram_4ff4b8d0 == '\0') {
      return 0;
    }
    FUN_ram_4ff3ec14(&DAT_ram_4ff4b8c8,0xffffffff);
    bVar28 = DAT_ram_4ff4b935;
    if (DAT_ram_4ff4b935 != 0) {
      if (DAT_ram_4ff4b934 != 0) {
        puVar25 = &DAT_ram_4ff4b8c8;
        do {
          if (((*(int *)(puVar25 + 0xc) == iVar13) && ((puVar25[0x10] & bVar3) != 0)) &&
             ((byte)puVar25[0x11] == uVar26)) {
            bVar28 = DAT_ram_4ff4b935;
            if (uVar26 == 0) goto LAB_ram_4805f2f0;
            puVar22 = auStack_254;
            puVar23 = puVar25;
            do {
              pbVar16 = puVar22 + 0xad;
              puVar22 = puVar22 + 1;
              bVar28 = bVar28 & ((*pbVar16 ^ puVar23[0x1a]) & puVar23[0x12]) == 0;
              puVar23 = puVar23 + 1;
            } while (auStack_254 + uVar26 != puVar22);
            if (bVar28 != 0) goto LAB_ram_4805f2f0;
          }
          puVar25 = puVar25 + 0x18;
        } while (&DAT_ram_4ff4b8c8 + (uint)DAT_ram_4ff4b934 * 0x18 != puVar25);
      }
      bVar28 = 0;
    }
LAB_ram_4805f2f0:
    FUN_ram_4ff3ee10(&DAT_ram_4ff4b8c8);
  }
  return bVar28;
}


