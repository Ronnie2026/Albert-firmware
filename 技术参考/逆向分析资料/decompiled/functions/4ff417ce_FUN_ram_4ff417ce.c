/* Firmware entry: 0x4ff417ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff417ce(uint param_1,undefined4 param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_5008c340 = param_3 >> 5 & 3 | _DAT_ram_5008c340 & 0xfffffffc;
  _DAT_ram_5008c348 = _DAT_ram_5008c348 & 0xc0000000 | param_1 & 0x3fffffff;
  if (param_3 + (param_1 & 0x3f) < 0x41) {
    FUN_ram_4ff45158((param_1 & 0x3f) + 0x5008c300);
    _DAT_ram_5008c34c = _DAT_ram_5008c34c | 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s__IDF_components_hal_esp32p4_incl_ram_4ff57164,0x5c,
                   s_spi_flash_encrypt_ll_plaintext_s_ram_4ff586d8,
                   s_plaintext_offs___size_<__SOC_FLA_ram_4ff57124);
}


