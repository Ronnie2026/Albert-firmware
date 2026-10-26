/* Firmware entry: 0x4ff308b2 */

int FUN_ram_4ff308b2(undefined4 param_1,uint param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54da4 + 0x46,0x82,
                     s_mspi_timing_psram_select_best_tu_ram_4ff537b8,
                     s_consecutive_length_<_5_ram_4ff54e00);
  }
  if (param_2 == 0) {
    if (1 < DAT_ram_4ff47dac) {
      ets_printf(s_W__s__tuning_fail__best_phase_id_ram_4ff4bcc8,s_MSPI_DQS_ram_4ff54e18,0);
    }
    return 0;
  }
  return (param_3 + 1) - param_2;
}


