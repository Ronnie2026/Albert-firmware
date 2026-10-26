/* Firmware entry: 0x48163c20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48163c20(int param_1,uint param_2)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff2ff60(param_1,1);
  FUN_ram_4ff3122a();
  if (param_2 < 2) {
    _DAT_ram_500e6034 = _DAT_ram_500e6034 | 0x400000;
    _DAT_ram_500e6038 = _DAT_ram_500e6038 & 0xffe001ff;
  }
  else {
    uVar1 = param_2 - 1 & 0xf;
    _DAT_ram_500e6038 =
         ((param_2 >> 1) - 1 & 0xf) << 0xd | _DAT_ram_500e6038 & 0xffe000ff | uVar1 << 0x11 |
         uVar1 << 9;
  }
  if (param_1 == 10) {
    _DAT_ram_500e6034 = _DAT_ram_500e6034 & 0xff7fffff | 0x1000000;
  }
  else {
    if (param_1 != 0xf) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/hal/esp32p4/include/hal/sdmmc_ll.h",0xb6,
                       "sdmmc_ll_select_clk_source","false");
    }
    _DAT_ram_500e6034 = _DAT_ram_500e6034 | 0x1800000;
    _DAT_ram_5011515c = _DAT_ram_5011515c | 0x2000000;
    _DAT_ram_501150cc = _DAT_ram_501150cc | 0x44100000;
    _DAT_ram_50111040 = _DAT_ram_50111040 | 0xe00000;
  }
  _DAT_ram_500e6038 = _DAT_ram_500e6038 & 0xf81ffeff | 0x38800000;
  FUN_ram_4ff31240();
  ets_delay_us(10);
  return;
}


