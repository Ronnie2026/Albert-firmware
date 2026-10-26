/* Firmware entry: 0x4ff38020 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff38020(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x8000) {
    _DAT_ram_50110044 = param_1 << 0x10 | param_1 | 0x80000000;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88(s___IDF_components_esp_system_port_ram_4ff570e8 + 0x2d,0x6d,
                   "esp_reset_reason_set_hint",s__hint_____RST_REASON_MASK______0_ram_4ff570c4);
}


