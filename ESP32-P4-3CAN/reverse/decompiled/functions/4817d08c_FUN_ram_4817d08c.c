/* Firmware entry: 0x4817d08c */

void FUN_ram_4817d08c(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = (uint)*param_1 << 0x18 | (uint)param_1[1] << 0x10 | (uint)param_1[3] |
          (uint)param_1[2] << 8;
  uVar4 = (uint)param_1[4] << 0x18 | (uint)param_1[5] << 0x10 | (uint)param_1[7] |
          (uint)param_1[6] << 8;
  uVar5 = (uint)param_1[8] << 0x18 | (uint)param_1[9] << 0x10 | (uint)param_1[0xb] |
          (uint)param_1[10] << 8;
  uVar7 = (uint)param_1[0xc] << 0x18 | (uint)param_1[0xd] << 0x10 | (uint)param_1[0xf] |
          (uint)param_1[0xe] << 8;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(uint *)(param_1 + 0xf4) = uVar3;
  *(uint *)(param_1 + 0xf0) = uVar4;
  *(uint *)(param_1 + 0x74) = uVar5;
  *(uint *)(param_1 + 0x70) = uVar7;
  iVar2 = 3;
  iVar11 = 4;
  do {
    uVar12 = uVar3 << 0x1f;
    uVar3 = -(uVar7 & 1) & 0xe1000000 ^ uVar3 >> 1;
    uVar7 = uVar5 << 0x1f | uVar7 >> 1;
    uVar5 = uVar4 << 0x1f | uVar5 >> 1;
    uVar4 = uVar12 | uVar4 >> 1;
    iVar2 = iVar2 + -1;
    *(uint *)(param_1 + iVar11 * 8 + 0xb4) = uVar3;
    *(uint *)(param_1 + iVar11 * 8 + 0x30) = uVar7;
    *(uint *)(param_1 + iVar11 * 8 + 0x34) = uVar5;
    *(uint *)(param_1 + iVar11 * 8 + 0xb0) = uVar4;
    iVar11 = iVar11 >> 1;
  } while (iVar2 != 0);
  iVar11 = 3;
  iVar2 = 2;
  do {
    puVar10 = (uint *)(param_1 + iVar2 * 8 + 0x30);
    puVar6 = (uint *)(param_1 + iVar2 * 8 + 0xb0);
    uVar4 = *puVar6;
    uVar3 = puVar6[1];
    uVar5 = *puVar10;
    uVar7 = puVar10[1];
    if (1 < iVar2) {
      puVar8 = (uint *)(param_1 + 0x38);
      puVar1 = puVar10;
      do {
        uVar12 = puVar8[0x21];
        puVar9 = puVar8 + 2;
        puVar6[2] = puVar8[0x20] ^ uVar4;
        puVar6[3] = uVar12 ^ uVar3;
        uVar12 = puVar8[1];
        puVar1[2] = *puVar8 ^ uVar5;
        puVar1[3] = uVar12 ^ uVar7;
        puVar8 = puVar9;
        puVar1 = puVar1 + 2;
        puVar6 = puVar6 + 2;
      } while (puVar10 != puVar9);
    }
    iVar11 = iVar11 + -1;
    iVar2 = iVar2 << 1;
  } while (iVar11 != 0);
  return;
}


