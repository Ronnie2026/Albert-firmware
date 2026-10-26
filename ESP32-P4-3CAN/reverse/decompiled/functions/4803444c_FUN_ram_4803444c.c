/* Firmware entry: 0x4803444c */

void FUN_ram_4803444c(uint *param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  size_t *psVar13;
  byte *pbVar14;
  size_t local_24;
  size_t sStack_20;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar11 = &DAT_ram_481f5510;
  puVar10 = &DAT_ram_481f5510;
  uVar4 = 0;
  uVar3 = 0x6e;
  puVar1 = param_1;
  do {
    do {
      uVar5 = *puVar10;
      puVar2 = puVar10 + 1;
      uVar8 = *puVar1 ^ uVar3;
      uVar7 = puVar1[1] ^ uVar4;
      uVar12 = uVar3 + 0x25;
      puVar10 = puVar10 + 2;
      uVar4 = uVar4 + (uVar12 < uVar3);
      puVar6 = puVar1 + 2;
      puVar1[1] = uVar5 * uVar7 + *puVar2 * uVar8 +
                  (int)((ulonglong)uVar5 * (ulonglong)uVar8 >> 0x20);
      *puVar1 = uVar5 * uVar8;
      uVar3 = uVar12;
      puVar1 = puVar6;
    } while (uVar12 != 0x102);
  } while (uVar4 != 0);
  uVar4 = param_1[8];
  uVar3 = uVar4 + 1;
  param_1[8] = uVar3;
  if (param_2 != (byte *)0x0) {
    local_24 = strlen((char *)param_2);
    psVar13 = &local_24;
    do {
      uVar5 = 0;
      uVar3 = (uint)(byte)*psVar13;
      puVar1 = param_1;
      puVar10 = puVar11;
      do {
        uVar7 = *puVar10;
        puVar2 = puVar10 + 1;
        uVar12 = *puVar1 ^ uVar3;
        uVar8 = puVar1[1] ^ uVar5;
        uVar5 = uVar5 + (uVar3 + 0x25 < uVar3);
        puVar6 = puVar1 + 2;
        puVar10 = puVar10 + 2;
        puVar1[1] = uVar7 * uVar8 + *puVar2 * uVar12 +
                    (int)((ulonglong)uVar7 * (ulonglong)uVar12 >> 0x20);
        *puVar1 = uVar7 * uVar12;
        uVar3 = uVar3 + 0x25;
        puVar1 = puVar6;
      } while (param_1 + 8 != puVar6);
      psVar13 = (size_t *)((int)psVar13 + 1);
    } while (&sStack_20 != psVar13);
    uVar4 = uVar4 + 5;
    param_1[8] = uVar4;
    if (local_24 != 0) {
      pbVar14 = param_2 + local_24;
      do {
        iVar9 = 0;
        puVar1 = param_1;
        puVar10 = puVar11;
        do {
          uVar5 = *puVar10;
          puVar2 = puVar10 + 1;
          uVar3 = *puVar1 ^ (uint)*param_2 + iVar9;
          iVar9 = iVar9 + 0x25;
          puVar10 = puVar10 + 2;
          puVar1[1] = uVar5 * puVar1[1] + *puVar2 * uVar3 +
                      (int)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x20);
          *puVar1 = uVar5 * uVar3;
          puVar1 = puVar1 + 2;
        } while (iVar9 != 0x94);
        param_2 = param_2 + 1;
      } while (pbVar14 != param_2);
    }
    uVar3 = local_24 + uVar4;
  }
  uVar4 = 0;
  puVar1 = param_1;
  do {
    uVar7 = *puVar11;
    puVar10 = puVar11 + 1;
    uVar5 = *puVar1 ^ param_3;
    uVar8 = puVar1[1] ^ uVar4;
    uVar4 = uVar4 + (param_3 + 0x25 < param_3);
    puVar2 = puVar1 + 2;
    puVar11 = puVar11 + 2;
    puVar1[1] = uVar7 * uVar8 + *puVar10 * uVar5 +
                (int)((ulonglong)uVar7 * (ulonglong)uVar5 >> 0x20);
    *puVar1 = uVar7 * uVar5;
    puVar1 = puVar2;
    param_3 = param_3 + 0x25;
  } while (param_1 + 8 != puVar2);
  param_1[8] = uVar3 + 1;
  return;
}


