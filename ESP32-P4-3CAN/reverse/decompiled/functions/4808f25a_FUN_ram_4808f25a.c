/* Firmware entry: 0x4808f25a */

void FUN_ram_4808f25a(uint *param_1,byte *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  byte *pbVar12;
  size_t *psVar13;
  size_t local_24;
  size_t asStack_20 [3];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar10 = &DAT_ram_481f5510;
  uVar3 = 0;
  puVar8 = param_1;
  uVar11 = 0x6f;
  do {
    do {
      uVar6 = *puVar10;
      puVar1 = puVar10 + 1;
      uVar5 = *puVar8 ^ uVar11;
      uVar9 = puVar8[1] ^ uVar3;
      uVar2 = uVar11 + 0x25;
      puVar10 = puVar10 + 2;
      uVar3 = uVar3 + (uVar2 < uVar11);
      puVar7 = puVar8 + 2;
      puVar8[1] = uVar6 * uVar9 + *puVar1 * uVar5 +
                  (int)((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20);
      *puVar8 = uVar6 * uVar5;
      puVar8 = puVar7;
      uVar11 = uVar2;
    } while (uVar2 != 0x103);
  } while (uVar3 != 0);
  uVar11 = param_1[8];
  param_1[8] = uVar11 + 1;
  if (param_2 != (byte *)0x0) {
    local_24 = strlen((char *)param_2);
    psVar13 = &local_24;
    do {
      uVar2 = 0;
      uVar3 = (uint)(byte)*psVar13;
      puVar8 = param_1;
      puVar10 = &DAT_ram_481f5510;
      do {
        uVar6 = *puVar10;
        puVar1 = puVar10 + 1;
        uVar5 = *puVar8 ^ uVar3;
        uVar9 = puVar8[1] ^ uVar2;
        uVar2 = uVar2 + (uVar3 + 0x25 < uVar3);
        puVar7 = puVar8 + 2;
        puVar10 = puVar10 + 2;
        puVar8[1] = uVar6 * uVar9 + *puVar1 * uVar5 +
                    (int)((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20);
        *puVar8 = uVar6 * uVar5;
        uVar3 = uVar3 + 0x25;
        puVar8 = puVar7;
      } while (param_1 + 8 != puVar7);
      psVar13 = (size_t *)((int)psVar13 + 1);
    } while (asStack_20 != psVar13);
    uVar11 = uVar11 + 5;
    param_1[8] = uVar11;
    if (local_24 != 0) {
      pbVar12 = param_2;
      do {
        iVar4 = 0;
        puVar8 = param_1;
        puVar10 = &DAT_ram_481f5510;
        do {
          uVar2 = *puVar10;
          puVar1 = puVar10 + 1;
          uVar3 = *puVar8 ^ (uint)*pbVar12 + iVar4;
          iVar4 = iVar4 + 0x25;
          puVar10 = puVar10 + 2;
          puVar8[1] = uVar2 * puVar8[1] + *puVar1 * uVar3 +
                      (int)((ulonglong)uVar2 * (ulonglong)uVar3 >> 0x20);
          *puVar8 = uVar2 * uVar3;
          puVar8 = puVar8 + 2;
        } while (iVar4 != 0x94);
        pbVar12 = pbVar12 + 1;
      } while (param_2 + local_24 != pbVar12);
    }
    param_1[8] = local_24 + uVar11;
  }
  uVar11 = param_1[9] + 1;
  param_1[9] = uVar11;
  if ((((param_1[10] != 0) && (uVar11 == param_1[10] + 2)) && (param_2 != (byte *)0x0)) &&
     (iVar4 = FUN_ram_4ff453ae(param_2,"config"), iVar4 == 0)) {
    param_1[0xb] = uVar11;
  }
  return;
}


