/* Firmware entry: 0x4ff33cf6 */

/* WARNING: Removing unreachable block (ram,0x4ff34038) */
/* WARNING: Removing unreachable block (ram,0x4ff33f1c) */
/* WARNING: Removing unreachable block (ram,0x4ff34012) */
/* WARNING: Removing unreachable block (ram,0x4ff33ff0) */
/* WARNING: Removing unreachable block (ram,0x4ff33f44) */

void FUN_ram_4ff33cf6(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint auStack_10 [2];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar9 = &local_60;
  puVar10 = &local_60;
  puVar6 = &local_60;
  memset(&local_60,0,0x50);
  puVar8 = &DAT_ram_4ff53e18;
  do {
    uVar4 = puVar8[2];
    uVar3 = *puVar8;
    uVar14 = puVar8[1];
    uVar2 = puVar8[3];
    uVar13 = puVar8[5];
    uVar12 = puVar8[4];
    puVar9[3] = uVar4;
    puVar9[5] = uVar4;
    puVar9[1] = uVar3;
    puVar9[4] = uVar3;
    puVar9[2] = uVar14;
    *puVar9 = uVar2;
    puVar9[6] = uVar13;
    puVar9[7] = uVar12;
    if ((uVar4 & 0xffff) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s___IDF_components_esp_mm_esp_mmu__ram_4ff56b44 + 0x18,0xd3,
                       "esp_mmu_map_init",s_hw_mem_regions_i__region_size___C_ram_4ff56b08);
    }
    puVar9 = puVar9 + 10;
    puVar8 = puVar8 + 6;
  } while (puVar9 != auStack_10);
  uVar2 = 0x1b0000;
  do {
    if ((*puVar10 & 0x12) == 0x12) {
      if (uVar2 < puVar10[3]) {
        puVar10[4] = puVar10[4] + uVar2;
        puVar10[5] = puVar10[5] - uVar2;
      }
      else {
        puVar10[5] = 0;
        uVar2 = uVar2 - puVar10[3];
        puVar10[4] = puVar10[2];
      }
    }
    puVar10 = puVar10 + 10;
  } while (puVar10 != auStack_10);
  uVar2 = 0x90000;
  do {
    if ((*puVar6 & 0x12) == 0x12) {
      if (uVar2 < puVar6[3]) {
        puVar6[4] = puVar6[4] + uVar2;
        puVar6[5] = puVar6[5] - uVar2;
      }
      else {
        puVar6[5] = 0;
        uVar2 = uVar2 - puVar6[3];
        puVar6[4] = puVar6[2];
      }
    }
    puVar6 = puVar6 + 10;
  } while (puVar6 != auStack_10);
  bVar1 = false;
  iVar5 = 1;
  iVar7 = iStack_48;
  iVar11 = iStack_28;
  while (((iVar5 == 1 && (iStack_58 == iVar11)) && (iVar7 == iStack_20))) {
    iVar5 = 2;
    if (iStack_1c == iStack_44) {
      uStack_34 = uStack_5c;
      iStack_24 = iStack_24 + iStack_4c;
      uStack_38 = uStack_38 | local_60;
      iStack_2c = iStack_2c + iStack_54;
      iVar7 = -1;
      iStack_48 = -1;
      bVar1 = true;
      iVar5 = 2;
      iVar11 = iStack_50;
    }
  }
  if (bVar1) {
    iStack_28 = iVar11;
  }
  if (iVar7 == -1) {
    uStack_5c = uStack_34;
    iStack_50 = iStack_28;
    iStack_4c = iStack_24;
    iStack_48 = iStack_20;
    iStack_44 = iStack_1c;
    iStack_54 = iStack_2c;
    iStack_58 = iStack_30;
    local_60 = uStack_38;
    if (iStack_20 != -1) goto LAB_ram_4ff33f6a;
    DAT_ram_4ff6c3e4 = 0;
  }
  else {
    if (iStack_20 == -1) {
LAB_ram_4ff33f6a:
      DAT_ram_4ff6c3e8 = local_60;
      DAT_ram_4ff6c3ec = uStack_5c;
      DAT_ram_4ff6c3f0 = iStack_58;
      DAT_ram_4ff6c3f4 = iStack_54;
      DAT_ram_4ff6c3f8 = iStack_50;
      DAT_ram_4ff6c3fc = iStack_4c;
      DAT_ram_4ff6c400 = iStack_48;
      DAT_ram_4ff6c404 = iStack_44;
      DAT_ram_4ff6c408 = 0;
      DAT_ram_4ff6c3e4 = 1;
      DAT_ram_4ff6c40c = &DAT_ram_4ff6c408;
      return;
    }
    DAT_ram_4ff6c3e4 = 2;
    DAT_ram_4ff6c3ec = uStack_5c;
    DAT_ram_4ff6c3e8 = local_60;
    DAT_ram_4ff6c3f0 = iStack_58;
    DAT_ram_4ff6c3f4 = iStack_54;
    DAT_ram_4ff6c3f8 = iStack_50;
    DAT_ram_4ff6c3fc = iStack_4c;
    DAT_ram_4ff6c400 = iStack_48;
    DAT_ram_4ff6c404 = iStack_44;
    DAT_ram_4ff6c410 = uStack_38;
    DAT_ram_4ff6c414 = uStack_34;
    DAT_ram_4ff6c418 = iStack_30;
    DAT_ram_4ff6c41c = iStack_2c;
    DAT_ram_4ff6c420 = iStack_28;
    DAT_ram_4ff6c424 = iStack_24;
    DAT_ram_4ff6c428 = iStack_20;
    DAT_ram_4ff6c42c = iStack_1c;
    DAT_ram_4ff6c408 = 0;
    DAT_ram_4ff6c430 = 0;
    DAT_ram_4ff6c40c = &DAT_ram_4ff6c408;
    DAT_ram_4ff6c434 = &DAT_ram_4ff6c430;
  }
  return;
}


