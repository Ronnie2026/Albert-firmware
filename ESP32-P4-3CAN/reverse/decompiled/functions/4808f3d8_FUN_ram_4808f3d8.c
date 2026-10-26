/* Firmware entry: 0x4808f3d8 */

void FUN_ram_4808f3d8(uint *param_1,byte *param_2)

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
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  byte *pbVar13;
  size_t *psVar14;
  size_t local_24;
  size_t asStack_20 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = &DAT_ram_481f5510;
  uVar3 = 0;
  puVar8 = param_1;
  uVar12 = 0x61;
  do {
    do {
      uVar6 = *puVar11;
      puVar1 = puVar11 + 1;
      uVar5 = *puVar8 ^ uVar12;
      uVar9 = puVar8[1] ^ uVar3;
      uVar2 = uVar12 + 0x25;
      puVar11 = puVar11 + 2;
      uVar3 = uVar3 + (uVar2 < uVar12);
      puVar7 = puVar8 + 2;
      puVar8[1] = uVar6 * uVar9 + *puVar1 * uVar5 +
                  (int)((ulonglong)uVar6 * (ulonglong)uVar5 >> 0x20);
      *puVar8 = uVar6 * uVar5;
      puVar8 = puVar7;
      uVar12 = uVar2;
    } while (uVar2 != 0xf5);
  } while (uVar3 != 0);
  uVar3 = param_1[8];
  param_1[8] = uVar3 + 1;
  uVar12 = param_1[9] + 1;
  if (param_2 != (byte *)0x0) {
    local_24 = strlen((char *)param_2);
    psVar14 = &local_24;
    do {
      uVar5 = 0;
      uVar2 = (uint)(byte)*psVar14;
      puVar8 = param_1;
      puVar11 = &DAT_ram_481f5510;
      do {
        uVar9 = *puVar11;
        puVar1 = puVar11 + 1;
        uVar6 = *puVar8 ^ uVar2;
        uVar10 = puVar8[1] ^ uVar5;
        uVar5 = uVar5 + (uVar2 + 0x25 < uVar2);
        puVar7 = puVar8 + 2;
        puVar11 = puVar11 + 2;
        puVar8[1] = uVar9 * uVar10 + *puVar1 * uVar6 +
                    (int)((ulonglong)uVar9 * (ulonglong)uVar6 >> 0x20);
        *puVar8 = uVar9 * uVar6;
        uVar2 = uVar2 + 0x25;
        puVar8 = puVar7;
      } while (param_1 + 8 != puVar7);
      psVar14 = (size_t *)((int)psVar14 + 1);
    } while (asStack_20 != psVar14);
    uVar3 = uVar3 + 5;
    param_1[8] = uVar3;
    if (local_24 != 0) {
      pbVar13 = param_2;
      do {
        iVar4 = 0;
        puVar8 = param_1;
        puVar11 = &DAT_ram_481f5510;
        do {
          uVar5 = *puVar11;
          puVar1 = puVar11 + 1;
          uVar2 = *puVar8 ^ (uint)*pbVar13 + iVar4;
          iVar4 = iVar4 + 0x25;
          puVar11 = puVar11 + 2;
          puVar8[1] = uVar5 * puVar8[1] + *puVar1 * uVar2 +
                      (int)((ulonglong)uVar5 * (ulonglong)uVar2 >> 0x20);
          *puVar8 = uVar5 * uVar2;
          puVar8 = puVar8 + 2;
        } while (iVar4 != 0x94);
        pbVar13 = pbVar13 + 1;
      } while (param_2 + local_24 != pbVar13);
    }
    param_1[8] = local_24 + uVar3;
    param_1[9] = uVar12;
    iVar4 = FUN_ram_4ff453ae(param_2,"drivers");
    if (iVar4 == 0) {
      param_1[10] = uVar12;
    }
    return;
  }
  param_1[9] = uVar12;
  return;
}


