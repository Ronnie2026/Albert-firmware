/* Firmware entry: 0x4803428c */

void FUN_ram_4803428c(uint *param_1,byte *param_2,undefined2 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined4 local_24;
  byte abStack_20 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = &DAT_ram_481f5510;
  uVar4 = 0;
  uVar3 = 0x6e;
  puVar8 = param_1;
  do {
    do {
      uVar6 = *puVar11;
      puVar1 = puVar11 + 1;
      uVar10 = *puVar8 ^ uVar3;
      uVar9 = puVar8[1] ^ uVar4;
      uVar2 = uVar3 + 0x25;
      puVar11 = puVar11 + 2;
      uVar4 = uVar4 + (uVar2 < uVar3);
      puVar7 = puVar8 + 2;
      puVar8[1] = uVar6 * uVar9 + *puVar1 * uVar10 +
                  (int)((ulonglong)uVar6 * (ulonglong)uVar10 >> 0x20);
      *puVar8 = uVar6 * uVar10;
      uVar3 = uVar2;
      puVar8 = puVar7;
    } while (uVar2 != 0x102);
  } while (uVar4 != 0);
  uVar4 = param_1[8];
  uVar3 = uVar4 + 1;
  param_1[8] = uVar3;
  if (param_2 != (byte *)0x0) {
    local_24 = strlen((char *)param_2);
    pbVar12 = (byte *)&local_24;
    do {
      uVar2 = 0;
      uVar3 = (uint)*pbVar12;
      puVar8 = param_1;
      puVar11 = &DAT_ram_481f5510;
      do {
        uVar9 = *puVar11;
        puVar1 = puVar11 + 1;
        uVar6 = *puVar8 ^ uVar3;
        uVar10 = puVar8[1] ^ uVar2;
        uVar2 = uVar2 + (uVar3 + 0x25 < uVar3);
        puVar7 = puVar8 + 2;
        puVar11 = puVar11 + 2;
        puVar8[1] = uVar9 * uVar10 + *puVar1 * uVar6 +
                    (int)((ulonglong)uVar9 * (ulonglong)uVar6 >> 0x20);
        *puVar8 = uVar9 * uVar6;
        uVar3 = uVar3 + 0x25;
        puVar8 = puVar7;
      } while (param_1 + 8 != puVar7);
      pbVar12 = pbVar12 + 1;
    } while (abStack_20 != pbVar12);
    uVar4 = uVar4 + 5;
    param_1[8] = uVar4;
    if (local_24 != 0) {
      pbVar12 = param_2 + local_24;
      do {
        iVar5 = 0;
        puVar8 = param_1;
        puVar11 = &DAT_ram_481f5510;
        do {
          uVar2 = *puVar11;
          puVar1 = puVar11 + 1;
          uVar3 = *puVar8 ^ (uint)*param_2 + iVar5;
          iVar5 = iVar5 + 0x25;
          puVar11 = puVar11 + 2;
          puVar8[1] = uVar2 * puVar8[1] + *puVar1 * uVar3 +
                      (int)((ulonglong)uVar2 * (ulonglong)uVar3 >> 0x20);
          *puVar8 = uVar2 * uVar3;
          puVar8 = puVar8 + 2;
        } while (iVar5 != 0x94);
        param_2 = param_2 + 1;
      } while (pbVar12 != param_2);
    }
    uVar3 = local_24 + uVar4;
  }
  pbVar12 = (byte *)&local_24;
  local_24 = CONCAT22(local_24._2_2_,param_3);
  do {
    uVar2 = 0;
    uVar4 = (uint)*pbVar12;
    puVar8 = param_1;
    puVar11 = &DAT_ram_481f5510;
    do {
      uVar9 = *puVar11;
      puVar1 = puVar11 + 1;
      uVar6 = *puVar8 ^ uVar4;
      uVar10 = puVar8[1] ^ uVar2;
      uVar2 = uVar2 + (uVar4 + 0x25 < uVar4);
      puVar7 = puVar8 + 2;
      puVar11 = puVar11 + 2;
      puVar8[1] = uVar9 * uVar10 + *puVar1 * uVar6 +
                  (int)((ulonglong)uVar9 * (ulonglong)uVar6 >> 0x20);
      *puVar8 = uVar9 * uVar6;
      uVar4 = uVar4 + 0x25;
      puVar8 = puVar7;
    } while (param_1 + 8 != puVar7);
    pbVar12 = pbVar12 + 1;
  } while ((byte *)((int)&local_24 + 2) != pbVar12);
  param_1[8] = uVar3 + 2;
  return;
}


