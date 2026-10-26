/* Firmware entry: 0x4ff4127c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff4127c(int param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                     uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 & 0xffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x54,
                     s_mmu_hal_map_region_ram_4ff586a8,
                     s_vaddr___page_size_in_bytes____0_ram_4ff54730);
  }
  if ((param_4 & 0xffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x55,
                     s_mmu_hal_map_region_ram_4ff586a8,
                     s_paddr___page_size_in_bytes____0_ram_4ff54770);
  }
  if (param_1 == 0) {
    uVar2 = 0x80000000;
  }
  else {
    uVar2 = 0x40000000;
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff41258();
    }
  }
  if (((uVar2 <= param_4) || (uVar2 <= param_5)) || (uVar2 <= (param_5 - 1) + param_4)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x56,
                     s_mmu_hal_map_region_ram_4ff586a8,
                     s_mmu_ll_check_valid_paddr_region__ram_4ff54790);
  }
  if (param_3 + 0xc0000000 < 0x4000000) {
    uVar2 = param_3 + param_5 + 0xbfffffff;
  }
  else {
    if (0x3ffffff < param_3 + 0xb8000000) goto LAB_ram_4ff41380;
    uVar2 = param_3 + param_5 + 0xb7ffffff;
  }
  if (uVar2 < 0x4000000) {
    *param_6 = param_5 + 0xffff & 0xffff0000;
    uVar2 = param_5 + 0xffff >> 0x10;
    param_4 = param_4 >> 0x10;
    if (uVar2 != 0) {
      uVar2 = uVar2 * 0x10000 + param_3;
      do {
        uVar4 = _DAT_ram_5012d034;
        if (param_1 == 0) {
          puVar5 = (uint *)&DAT_ram_5008c380;
          puVar3 = (uint *)&DAT_ram_5008c37c;
          uVar6 = param_4 | 0x1000;
          uVar1 = 0x2000;
        }
        else {
          puVar5 = (uint *)&DAT_ram_5008e380;
          puVar3 = (uint *)&DAT_ram_5008e37c;
          uVar6 = param_4 | 0xc00;
          uVar1 = 0x1000;
        }
        *puVar5 = param_3 >> 0x10 & 0x3ff;
        param_3 = param_3 + 0x10000;
        uVar4 = uVar4 >> 0x12 & 7;
        *puVar3 = -((uVar4 >> 1 ^ uVar4 >> 2 ^ uVar4) & 1) & uVar1 | uVar6;
        param_4 = param_4 + 1;
      } while (uVar2 != param_3);
    }
    return;
  }
LAB_ram_4ff41380:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x57,
                   s_mmu_hal_map_region_ram_4ff586a8,s_mmu_hal_check_valid_ext_vaddr_re_ram_4ff547c4
                  );
}


