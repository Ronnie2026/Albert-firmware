/* Firmware entry: 0x480d4a0c */

void FUN_ram_480d4a0c(uint *param_1,char *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined **ppuVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  uint uVar18;
  byte *pbVar19;
  undefined4 local_34;
  byte abStack_30 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4808f25a(param_1,param_3);
  uVar16 = param_1[0xb];
  if ((uVar16 == 0) || (param_1[9] != uVar16)) {
LAB_ram_480d4a3e:
    puVar14 = &DAT_ram_481f5510;
    uVar2 = 0;
    puVar5 = param_1 + 8;
    uVar7 = (-(uint)(*param_2 == '\0') & 0xfffffff2) + 0x74;
    puVar4 = param_1;
    do {
      uVar10 = *puVar14;
      puVar8 = puVar14 + 1;
      uVar6 = *puVar4 ^ uVar7;
      uVar12 = puVar4[1] ^ uVar2;
      uVar2 = uVar2 + (uVar7 + 0x25 < uVar7);
      puVar11 = puVar4 + 2;
      puVar14 = puVar14 + 2;
      puVar4[1] = uVar10 * uVar12 + *puVar8 * uVar6 +
                  (int)((ulonglong)uVar10 * (ulonglong)uVar6 >> 0x20);
      *puVar4 = uVar10 * uVar6;
      uVar7 = uVar7 + 0x25;
      puVar4 = puVar11;
    } while (puVar11 != puVar5);
    uVar7 = param_1[8];
    pbVar19 = (byte *)&local_34;
    local_34 = 0x12;
    do {
      uVar6 = 0;
      uVar2 = (uint)*pbVar19;
      puVar4 = param_1;
      puVar14 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar14;
        puVar8 = puVar14 + 1;
        uVar15 = *puVar4 ^ uVar2;
        uVar12 = puVar4[1] ^ uVar6;
        uVar6 = uVar6 + (uVar2 + 0x25 < uVar2);
        puVar11 = puVar4 + 2;
        puVar14 = puVar14 + 2;
        puVar4[1] = uVar10 * uVar12 + *puVar8 * uVar15 +
                    (int)((ulonglong)uVar10 * (ulonglong)uVar15 >> 0x20);
        *puVar4 = uVar10 * uVar15;
        uVar2 = uVar2 + 0x25;
        puVar4 = puVar11;
      } while (puVar11 != puVar5);
      pbVar19 = pbVar19 + 1;
    } while (abStack_30 != pbVar19);
    pcVar17 = "customSpeedEnabled";
    do {
      uVar6 = 0;
      uVar2 = (uint)(byte)*pcVar17;
      puVar4 = param_1;
      puVar14 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar14;
        puVar8 = puVar14 + 1;
        uVar15 = *puVar4 ^ uVar2;
        uVar12 = puVar4[1] ^ uVar6;
        uVar6 = uVar6 + (uVar2 + 0x25 < uVar2);
        puVar11 = puVar4 + 2;
        puVar14 = puVar14 + 2;
        puVar4[1] = uVar10 * uVar12 + *puVar8 * uVar15 +
                    (int)((ulonglong)uVar10 * (ulonglong)uVar15 >> 0x20);
        *puVar4 = uVar10 * uVar15;
        uVar2 = uVar2 + 0x25;
        puVar4 = puVar11;
      } while (puVar11 != puVar5);
      pcVar17 = pcVar17 + 1;
    } while ((byte *)pcVar17 != (byte *)0x481c4296);
    param_1[8] = uVar7 + 0x17;
  }
  else {
    ppuVar3 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      ppuVar3 = ppuVar3 + 1;
      if (ppuVar3 == (undefined **)&DAT_ram_481f51dc) goto LAB_ram_480d4a3e;
      iVar9 = FUN_ram_4ff453ae("customSpeedEnabled",*ppuVar3);
    } while (iVar9 != 0);
  }
  puVar4 = &DAT_ram_481f5510;
  FUN_ram_4808f560(param_1,"modeExplicit",param_2[1]);
  FUN_ram_4808f3d8(param_1,"targets");
  uVar7 = param_1[8];
  pcVar17 = param_2 + 2;
  do {
    uVar1 = *(undefined2 *)pcVar17;
    uVar6 = 0;
    puVar5 = param_1;
    uVar2 = 0x4e;
    puVar14 = puVar4;
    do {
      do {
        uVar12 = *puVar14;
        puVar8 = puVar14 + 1;
        uVar10 = *puVar5 ^ uVar2;
        uVar15 = puVar5[1] ^ uVar6;
        uVar18 = uVar2 + 0x25;
        puVar14 = puVar14 + 2;
        uVar6 = uVar6 + (uVar18 < uVar2);
        puVar11 = puVar5 + 2;
        puVar5[1] = uVar12 * uVar15 + *puVar8 * uVar10 +
                    (int)((ulonglong)uVar12 * (ulonglong)uVar10 >> 0x20);
        *puVar5 = uVar12 * uVar10;
        puVar5 = puVar11;
        uVar2 = uVar18;
      } while (uVar18 != 0xe2);
    } while (uVar6 != 0);
    local_34 = CONCAT22(local_34._2_2_,uVar1);
    pbVar19 = (byte *)&local_34;
    do {
      uVar6 = 0;
      uVar2 = (uint)*pbVar19;
      puVar5 = param_1;
      puVar14 = puVar4;
      do {
        uVar10 = *puVar14;
        puVar8 = puVar14 + 1;
        uVar15 = *puVar5 ^ uVar2;
        uVar12 = puVar5[1] ^ uVar6;
        uVar6 = uVar6 + (uVar2 + 0x25 < uVar2);
        puVar11 = puVar5 + 2;
        puVar14 = puVar14 + 2;
        puVar5[1] = uVar10 * uVar12 + *puVar8 * uVar15 +
                    (int)((ulonglong)uVar10 * (ulonglong)uVar15 >> 0x20);
        *puVar5 = uVar10 * uVar15;
        uVar2 = uVar2 + 0x25;
        puVar5 = puVar11;
      } while (param_1 + 8 != puVar11);
      pbVar19 = pbVar19 + 1;
    } while ((byte *)((int)&local_34 + 2) != pbVar19);
    pcVar17 = pcVar17 + 2;
  } while (param_2 + 0x3e != pcVar17);
  uVar6 = 0;
  puVar5 = puVar4;
  uVar2 = 0x5d;
  puVar14 = param_1;
  do {
    do {
      uVar12 = *puVar5;
      puVar8 = puVar5 + 1;
      uVar10 = *puVar14 ^ uVar2;
      uVar15 = puVar14[1] ^ uVar6;
      uVar18 = uVar2 + 0x25;
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 + (uVar18 < uVar2);
      puVar11 = puVar14 + 2;
      puVar14[1] = uVar12 * uVar15 + *puVar8 * uVar10 +
                   (int)((ulonglong)uVar12 * (ulonglong)uVar10 >> 0x20);
      *puVar14 = uVar12 * uVar10;
      uVar2 = uVar18;
      puVar14 = puVar11;
    } while (uVar18 != 0xf1);
  } while (uVar6 != 0);
  uVar2 = param_1[9];
  if (uVar2 == param_1[10]) {
    param_1[10] = 0;
  }
  uVar10 = 0;
  puVar5 = param_1;
  uVar6 = 0x7d;
  do {
    do {
      uVar18 = *puVar4;
      puVar14 = puVar4 + 1;
      uVar15 = *puVar5 ^ uVar6;
      uVar13 = puVar5[1] ^ uVar10;
      uVar12 = uVar6 + 0x25;
      puVar4 = puVar4 + 2;
      uVar10 = uVar10 + (uVar12 < uVar6);
      puVar8 = puVar5 + 2;
      puVar5[1] = uVar18 * uVar13 + *puVar14 * uVar15 +
                  (int)((ulonglong)uVar18 * (ulonglong)uVar15 >> 0x20);
      *puVar5 = uVar18 * uVar15;
      puVar5 = puVar8;
      uVar6 = uVar12;
    } while (uVar12 != 0x111);
  } while (uVar10 != 0);
  param_1[8] = uVar7 + 0x5c;
  if (uVar16 == uVar2 - 1) {
    param_1[0xb] = 0;
  }
  param_1[9] = uVar2 - 2;
  return;
}


