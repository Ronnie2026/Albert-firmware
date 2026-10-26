/* Firmware entry: 0x4ff319dc */

int FUN_ram_4ff319dc(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    return param_1 * 8 + 0x4ff53be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff5519c + 0x2d,0xf3,
                   s_pmu_hp_system_retention_param_de_ram_4ff53c00,
                   s_mode_<_ARRAY_SIZE(hp_retention)_ram_4ff55234);
}


