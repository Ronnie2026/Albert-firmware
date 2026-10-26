/* Firmware entry: 0x4ff306da */

void FUN_ram_4ff306da(undefined4 param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0x80) {
    FUN_ram_4ff45158(param_1,&DAT_ram_4ff538cc,0x80);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54da4 + 0x46,0x45,
                   s_mspi_timing_config_psram_prepare_ram_4ff537e4,
                   s_len____MSPI_TIMING_TEST_DATA_LEN_ram_4ff54d80);
}


