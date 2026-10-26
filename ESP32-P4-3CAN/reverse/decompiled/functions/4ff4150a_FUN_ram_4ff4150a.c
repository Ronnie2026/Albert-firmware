/* Firmware entry: 0x4ff4150a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff4150a(int param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 & 0xf4000000) != 0x40000000) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s__IDF_components_hal_mmu_hal_c_ram_4ff54750,0x93,
                     s_mmu_hal_vaddr_to_paddr_ram_4ff58658,
                     s_mmu_hal_check_valid_ext_vaddr_re_ram_4ff54828);
  }
  uVar2 = param_2 >> 0x10 & 0x3ff;
  if (param_1 == 0) {
    if (-1 < (int)(_DAT_ram_5008c37c << 0x13)) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      _DAT_ram_5008c380 = uVar2;
      return 0;
    }
    *param_4 = 1;
    uVar1 = _DAT_ram_5008c37c & 0x7ff;
    _DAT_ram_5008c380 = uVar2;
  }
  else {
    if (param_1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff546fc,0x199,
                       s_mmu_ll_check_entry_valid_ram_4ff5863c,s_false_ram_4ff546f4);
    }
    if (-1 < (int)(_DAT_ram_5008e37c << 0x14)) {
      _DAT_ram_5008e380 = uVar2;
      return 0;
    }
    *param_4 = 2;
    uVar1 = _DAT_ram_5008e37c & 0x3ff;
    _DAT_ram_5008e380 = uVar2;
  }
  *param_3 = param_2 & 0xffff | uVar1 << 0x10;
  return 1;
}


