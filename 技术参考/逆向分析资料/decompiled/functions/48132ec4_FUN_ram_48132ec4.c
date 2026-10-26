/* Firmware entry: 0x48132ec4 */

void FUN_ram_48132ec4(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f38,0xffffffff);
  if (DAT_ram_4ff6e14c == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("clk_ctrl_os.c",0x46,"periph_rtc_dig_clk8m_disable","s_periph_ref_counts > 0");
  }
  if (DAT_ram_4ff6e14c != '\x01') {
    DAT_ram_4ff6e14c = DAT_ram_4ff6e14c + -1;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47f38);
    return;
  }
  DAT_ram_4ff6e148 = 0;
  DAT_ram_4ff6e14c = DAT_ram_4ff6e14c + -1;
  FUN_ram_4ff32c66();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f38);
  return;
}


