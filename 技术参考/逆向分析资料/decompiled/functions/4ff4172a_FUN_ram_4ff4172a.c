/* Firmware entry: 0x4ff4172a */

undefined4 FUN_ram_4ff4172a(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 + 0xc0000000U < 0x4000000) {
    return 0;
  }
  if (param_1 + 0xb8000000U < 0x4000000) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff546fc,0x68,
                   s_mmu_ll_vaddr_to_id_ram_4ff58610,
                   s_hw_mem_regions_i__region_size___C_ram_4ff56b08 + 0x38);
}


