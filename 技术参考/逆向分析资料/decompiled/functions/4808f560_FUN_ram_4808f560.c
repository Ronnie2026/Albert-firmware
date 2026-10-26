/* Firmware entry: 0x4808f560 */

void FUN_ram_4808f560(uint *param_1,byte *param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined **ppuVar12;
  uint uVar13;
  size_t *psVar14;
  byte *pbVar15;
  size_t local_24;
  size_t asStack_20 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_2 != (byte *)0x0) && (param_1[0xb] != 0)) && (param_1[9] == param_1[0xb])) {
    ppuVar12 = &PTR_s_stalkControlVersion_ram_481cbb2c_ram_481f51bc;
    do {
      puVar3 = *ppuVar12;
      ppuVar12 = ppuVar12 + 1;
      iVar2 = FUN_ram_4ff453ae(param_2,puVar3);
      if (iVar2 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
    } while (ppuVar12 != (undefined **)&DAT_ram_481f51dc);
  }
  puVar4 = &DAT_ram_481f5510;
  uVar11 = 0;
  uVar13 = (-(uint)(param_3 == 0) & 0xfffffff2) + 0x74;
  puVar7 = param_1;
  do {
    uVar5 = *puVar4;
    puVar1 = puVar4 + 1;
    uVar10 = *puVar7 ^ uVar13;
    uVar8 = puVar7[1] ^ uVar11;
    uVar11 = uVar11 + (uVar13 + 0x25 < uVar13);
    puVar6 = puVar7 + 2;
    puVar4 = puVar4 + 2;
    puVar7[1] = uVar5 * uVar8 + *puVar1 * uVar10 +
                (int)((ulonglong)uVar5 * (ulonglong)uVar10 >> 0x20);
    *puVar7 = uVar5 * uVar10;
    uVar13 = uVar13 + 0x25;
    puVar7 = puVar6;
  } while (puVar6 != param_1 + 8);
  uVar13 = param_1[8];
  param_1[8] = uVar13 + 1;
  if (param_2 != (byte *)0x0) {
    local_24 = strlen((char *)param_2);
    psVar14 = &local_24;
    do {
      uVar5 = 0;
      uVar11 = (uint)(byte)*psVar14;
      puVar7 = param_1;
      puVar4 = &DAT_ram_481f5510;
      do {
        uVar10 = *puVar4;
        puVar1 = puVar4 + 1;
        uVar8 = *puVar7 ^ uVar11;
        uVar9 = puVar7[1] ^ uVar5;
        uVar5 = uVar5 + (uVar11 + 0x25 < uVar11);
        puVar6 = puVar7 + 2;
        puVar4 = puVar4 + 2;
        puVar7[1] = uVar10 * uVar9 + *puVar1 * uVar8 +
                    (int)((ulonglong)uVar10 * (ulonglong)uVar8 >> 0x20);
        *puVar7 = uVar10 * uVar8;
        uVar11 = uVar11 + 0x25;
        puVar7 = puVar6;
      } while (puVar6 != param_1 + 8);
      psVar14 = (size_t *)((int)psVar14 + 1);
    } while (asStack_20 != psVar14);
    uVar13 = uVar13 + 5;
    param_1[8] = uVar13;
    if (local_24 != 0) {
      pbVar15 = param_2 + local_24;
      do {
        iVar2 = 0;
        puVar7 = param_1;
        puVar4 = &DAT_ram_481f5510;
        do {
          uVar5 = *puVar4;
          puVar1 = puVar4 + 1;
          uVar11 = *puVar7 ^ (uint)*param_2 + iVar2;
          iVar2 = iVar2 + 0x25;
          puVar4 = puVar4 + 2;
          puVar7[1] = uVar5 * puVar7[1] + *puVar1 * uVar11 +
                      (int)((ulonglong)uVar5 * (ulonglong)uVar11 >> 0x20);
          *puVar7 = uVar5 * uVar11;
          puVar7 = puVar7 + 2;
        } while (iVar2 != 0x94);
        param_2 = param_2 + 1;
      } while (pbVar15 != param_2);
    }
    param_1[8] = local_24 + uVar13;
  }
  return;
}


