/* Firmware entry: 0x4ff30e22 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff30e22(uint param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 400 / param_1;
  if (400 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff550f8 + 0x40,0x1b,
                     s_mspi_timing_config_set_psram_clo_ram_4ff53acc,s_freqdiv_>_0_ram_4ff550ec);
  }
  FUN_ram_4ff3122a();
  _DAT_ram_500e6030 = _DAT_ram_500e6030 & 0xff00ffff | 0x8000;
  if (uVar1 != 1) {
    _DAT_ram_5008e050 = ((uVar1 >> 1) - 1) * 0x100 | (uVar1 - 1) * 0x10001;
    _DAT_ram_5008f014 = _DAT_ram_5008e050;
    FUN_ram_4ff31240();
    return;
  }
  _DAT_ram_5008f014 = 0x80000000;
  _DAT_ram_5008e050 = 0x80000000;
  FUN_ram_4ff31240();
  return;
}


