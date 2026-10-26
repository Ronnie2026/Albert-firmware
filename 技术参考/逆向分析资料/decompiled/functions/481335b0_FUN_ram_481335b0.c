/* Firmware entry: 0x481335b0 */

bool FUN_ram_481335b0(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x10) {
    return (&DAT_ram_4ff6c4c8)[param_1] != '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("io_mux.c",0x62,"io_mux_is_lp_io_in_use","rtc_io_num < SOC_RTCIO_PIN_COUNT");
}


