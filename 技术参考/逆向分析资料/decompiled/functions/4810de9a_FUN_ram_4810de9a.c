/* Firmware entry: 0x4810de9a */

void FUN_ram_4810de9a(uint *param_1,byte *param_2,undefined2 param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined **ppuVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 local_24;
  byte abStack_20 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_2 != (byte *)0x0) && (param_1[0xb] != 0)) && (param_1[9] == param_1[0xb])) {
    ppuVar13 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      puVar5 = *ppuVar13;
      ppuVar13 = ppuVar13 + 1;
      iVar2 = FUN_ram_4ff453ae(param_2,puVar5);
      if (iVar2 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    } while (ppuVar13 != (undefined **)&DAT_ram_481f51dc);
  }
  puVar12 = &DAT_ram_481f5510;
  uVar6 = 0;
  uVar4 = 0x6e;
  puVar9 = param_1;
  do {
    do {
      uVar7 = *puVar12;
      puVar1 = puVar12 + 1;
      uVar11 = *puVar9 ^ uVar4;
      uVar10 = puVar9[1] ^ uVar6;
      uVar3 = uVar4 + 0x25;
      puVar12 = puVar12 + 2;
      uVar6 = uVar6 + (uVar3 < uVar4);
      puVar8 = puVar9 + 2;
      puVar9[1] = uVar7 * uVar10 + *puVar1 * uVar11 +
                  (int)((ulonglong)uVar7 * (ulonglong)uVar11 >> 0x20);
      *puVar9 = uVar7 * uVar11;
      uVar4 = uVar3;
      puVar9 = puVar8;
    } while (uVar3 != 0x102);
  } while (uVar6 != 0);
  uVar6 = param_1[8];
  uVar4 = uVar6 + 1;
  param_1[8] = uVar4;
  if (param_2 == (byte *)0x0) {
    pbVar14 = (byte *)&local_24;
    local_24 = CONCAT22(local_24._2_2_,param_3);
  }
  else {
    local_24 = strlen((char *)param_2);
    pbVar14 = (byte *)&local_24;
    pbVar15 = pbVar14;
    do {
      uVar3 = 0;
      uVar4 = (uint)*pbVar15;
      puVar9 = param_1;
      puVar12 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar12;
        puVar1 = puVar12 + 1;
        uVar7 = *puVar9 ^ uVar4;
        uVar11 = puVar9[1] ^ uVar3;
        uVar3 = uVar3 + (uVar4 + 0x25 < uVar4);
        puVar8 = puVar9 + 2;
        puVar12 = puVar12 + 2;
        puVar9[1] = uVar10 * uVar11 + *puVar1 * uVar7 +
                    (int)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x20);
        *puVar9 = uVar10 * uVar7;
        uVar4 = uVar4 + 0x25;
        puVar9 = puVar8;
      } while (param_1 + 8 != puVar8);
      pbVar15 = pbVar15 + 1;
    } while (abStack_20 != pbVar15);
    uVar6 = uVar6 + 5;
    param_1[8] = uVar6;
    if (local_24 != 0) {
      pbVar15 = param_2 + local_24;
      do {
        iVar2 = 0;
        puVar9 = param_1;
        puVar12 = &DAT_ram_481f5510;
        do {
          uVar3 = *puVar12;
          puVar1 = puVar12 + 1;
          uVar4 = *puVar9 ^ (uint)*param_2 + iVar2;
          iVar2 = iVar2 + 0x25;
          puVar12 = puVar12 + 2;
          puVar9[1] = uVar3 * puVar9[1] + *puVar1 * uVar4 +
                      (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20);
          *puVar9 = uVar3 * uVar4;
          puVar9 = puVar9 + 2;
        } while (iVar2 != 0x94);
        param_2 = param_2 + 1;
      } while (pbVar15 != param_2);
    }
    uVar4 = local_24 + uVar6;
    local_24._2_2_ = (undefined2)(local_24 >> 0x10);
    local_24 = CONCAT22(local_24._2_2_,param_3);
  }
  do {
    uVar3 = 0;
    uVar6 = (uint)*pbVar14;
    puVar9 = param_1;
    puVar12 = &DAT_ram_481f5510;
    do {
      uVar10 = *puVar12;
      puVar1 = puVar12 + 1;
      uVar7 = *puVar9 ^ uVar6;
      uVar11 = puVar9[1] ^ uVar3;
      uVar3 = uVar3 + (uVar6 + 0x25 < uVar6);
      puVar8 = puVar9 + 2;
      puVar12 = puVar12 + 2;
      puVar9[1] = uVar10 * uVar11 + *puVar1 * uVar7 +
                  (int)((ulonglong)uVar10 * (ulonglong)uVar7 >> 0x20);
      *puVar9 = uVar10 * uVar7;
      uVar6 = uVar6 + 0x25;
      puVar9 = puVar8;
    } while (param_1 + 8 != puVar8);
    pbVar14 = pbVar14 + 1;
  } while ((byte *)((int)&local_24 + 2) != pbVar14);
  param_1[8] = uVar4 + 2;
  return;
}


