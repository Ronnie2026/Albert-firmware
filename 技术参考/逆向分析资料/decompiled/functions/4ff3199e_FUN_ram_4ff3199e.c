/* Firmware entry: 0x4ff3199e */

int FUN_ram_4ff3199e(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    return param_1 * 0xc + 0x4ff53c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff5519c + 0x2d,0xc4,
                   s_pmu_hp_system_analog_param_defau_ram_4ff53c4c,
                   s_mode_<_ARRAY_SIZE(hp_analog)_ram_4ff55214);
}


