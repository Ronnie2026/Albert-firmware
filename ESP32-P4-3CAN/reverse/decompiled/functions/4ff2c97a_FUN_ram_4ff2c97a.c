/* Firmware entry: 0x4ff2c97a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2c97a(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("crosscore_int.c",0x72,"esp_crosscore_int_send",
                     "core_id < CONFIG_FREERTOS_NUMBER_OF_CORES");
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f20,0xffffffff);
  *(uint *)(&DAT_ram_4ff6e0c0 + param_1 * 4) = *(uint *)(&DAT_ram_4ff6e0c0 + param_1 * 4) | param_2;
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f20);
  if (param_1 != 0) {
    _DAT_ram_500e5014 = 1;
    return;
  }
  _DAT_ram_500e5010 = 1;
  return;
}


