/* Firmware entry: 0x4ff31966 */

int FUN_ram_4ff31966(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 3) {
    return param_1 * 4 + 0x4ff53c70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff5519c + 0x2d,0x8d,
                   s_1pmu_hp_system_digital_param_def_ram_4ff53c7b + 1,
                   s_mode_<_ARRAY_SIZE(hp_digital)_ram_4ff551f4);
}


