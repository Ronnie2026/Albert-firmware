/* Firmware entry: 0x48137f52 */

void FUN_ram_48137f52(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/apps/sntp/sntp.c",0x2eb,"sntp_setoperatingmode",
                     "Invalid operating mode");
  }
  if (DAT_ram_4ff6e198 == 0) {
    DAT_ram_4ff6e19c = (char)param_1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/apps/sntp/sntp.c",0x2ec,"sntp_setoperatingmode",
                   "Operating mode must not be set while SNTP client is running");
}


