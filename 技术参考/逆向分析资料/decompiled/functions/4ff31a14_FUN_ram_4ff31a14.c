/* Firmware entry: 0x4ff31a14 */

int FUN_ram_4ff31a14(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 2) {
    return param_1 * 0xc + 0x4ff53bac;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff5519c + 0x2d,0x124,
                   s_pmu_lp_system_power_param_defaul_ram_4ff53bc4,
                   s_mode_<_ARRAY_SIZE(lp_power)_ram_4ff55254);
}


