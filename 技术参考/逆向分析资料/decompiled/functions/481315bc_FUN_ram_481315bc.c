/* Firmware entry: 0x481315bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481315bc(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((_DAT_ram_50111000 & 3) == 0) {
    return 0x21340;
  }
  if ((_DAT_ram_50111000 & 3) != 3) {
    return 0x8000;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/clk_tree_hal.c",0x45,"clk_hal_lp_slow_get_freq_hz",
                   "false");
}


