/* Firmware entry: 0x4ff41406 */

void FUN_ram_4ff41406(uint param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 & 0xffff) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x84,
                     s_mmu_hal_unmap_region_ram_4ff58670,
                     s_vaddr___page_size_in_bytes____0_ram_4ff54730);
  }
  if (param_2 + 0xc0000000 < 0x4000000) {
    uVar3 = param_2 + param_3 + 0xbfffffff;
  }
  else {
    if (0x3ffffff < param_2 + 0xb8000000) goto LAB_ram_4ff41430;
    uVar3 = param_2 + param_3 + 0xb7ffffff;
  }
  if (uVar3 < 0x4000000) {
    uVar3 = param_3 + 0xffffU >> 0x10;
    if (uVar3 != 0) {
      if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff546fc,0x16d,
                         s_mmu_ll_set_entry_invalid_ram_4ff586bc,s_false_ram_4ff546f4);
      }
      puVar2 = (uint *)&DAT_ram_5008e380;
      if (param_1 == 0) {
        puVar2 = (uint *)&DAT_ram_5008c380;
      }
      puVar1 = (undefined4 *)&DAT_ram_5008e37c;
      if (param_1 == 0) {
        puVar1 = (undefined4 *)&DAT_ram_5008c37c;
      }
      uVar3 = uVar3 * 0x10000 + param_2;
      do {
        *puVar2 = param_2 >> 0x10 & 0x3ff;
        *puVar1 = 0;
        param_2 = param_2 + 0x10000;
      } while (uVar3 != param_2);
    }
    return;
  }
LAB_ram_4ff41430:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x85,
                   s_mmu_hal_unmap_region_ram_4ff58670,
                   s_mmu_hal_check_valid_ext_vaddr_re_ram_4ff547c4);
}


