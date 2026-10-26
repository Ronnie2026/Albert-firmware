/* Firmware entry: 0x4ff2fb52 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2fb52(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88(s___IDF_components_esp_hw_support__ram_4ff54d24 + 0x20,0x30,"esp_cpu_reset",
                     s_core_id_>__0____core_id_<_SOC_CP_ram_4ff54cf8);
  }
  if (param_1 == 0) {
    _DAT_ram_50111014 = _DAT_ram_50111014 | 0x2000;
    return;
  }
  _DAT_ram_50111014 = _DAT_ram_50111014 | 0x20000000;
  return;
}


