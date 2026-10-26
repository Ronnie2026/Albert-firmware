/* Firmware entry: 0x481637ca */

void FUN_ram_481637ca(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar6 = 0;
  do {
    uVar3 = DAT_ram_4ff4bac8;
    uVar2 = DAT_ram_4ff4bac4;
    iVar5 = DAT_ram_4ff4bac0;
    if (DAT_ram_4ff4bac4 == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
    iVar7 = DAT_ram_4ff4bac8 * 0x40;
    iVar1 = DAT_ram_4ff4bac8 * 0x10;
    if ((int)(&DAT_ram_4ff533c0)[iVar1] < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdmmc_host.c",0x43c,"fill_dma_descriptors","!desc->owned_by_idmac");
    }
    uVar4 = DAT_ram_4ff4bac4;
    if (0x1000 < DAT_ram_4ff4bac4) {
      uVar4 = 0x1000;
    }
    (&DAT_ram_4ff533c0)[DAT_ram_4ff4bac8 * 0x10] =
         (uint)(DAT_ram_4ff4bac4 < 0x1001) << 2 | 0x80000010 |
         (&DAT_ram_4ff533c0)[DAT_ram_4ff4bac8 * 0x10] & 0x7fffffeb;
    *(int *)(&DAT_ram_4ff533c8 + iVar7) = iVar5;
    if (uVar2 < 0x1001) {
      *(undefined4 *)(&DAT_ram_4ff533cc + iVar7) = 0;
      if ((3 < uVar2) && ((uVar4 & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("sdmmc_host.c",0x446,"fill_dma_descriptors",
                         "size_to_fill < 4 || size_to_fill % 4 == 0");
      }
    }
    else {
      *(undefined4 **)(&DAT_ram_4ff533cc + iVar7) = &DAT_ram_4ff533c0 + (uVar3 + 1 & 3) * 0x10;
    }
    DAT_ram_4ff4bac8 = uVar3 + 1 & 3;
    *(uint *)(&DAT_ram_4ff533c4 + iVar7) =
         *(uint *)(&DAT_ram_4ff533c4 + iVar7) & 0xffffe000 | uVar4 + 3 & 0x1ffc;
    DAT_ram_4ff4bac4 = uVar2 - uVar4;
    DAT_ram_4ff4bac0 = iVar5 + uVar4;
    iVar5 = FUN_ram_4ff33956(&DAT_ram_4ff533c0 + iVar1,0x40,4);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdmmc_host.c",0x451,"fill_dma_descriptors","ret == ESP_OK");
    }
    iVar6 = iVar6 + 1;
  } while (param_1 != iVar6);
  return;
}


