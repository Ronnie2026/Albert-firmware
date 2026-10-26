/* Firmware entry: 0x4ff3192e */

int FUN_ram_4ff3192e(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    return param_1 * 0x10 + 0x4ff53ca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff5519c + 0x2d,0x6c,
                   s_0pmu_hp_system_clock_param_defau_ram_4ff53ccf + 1,
                   s_mode_<_ARRAY_SIZE(hp_clock)_ram_4ff551d8);
}


