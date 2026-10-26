/* Firmware entry: 0x4ff21206 */

undefined4 FUN_ram_4ff21206(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  ets_printf(s_W___lu___s__invalid_RTC_XTAL_FRE_ram_4ff54eec,uVar1,s_rtc_clk_ram_4ff54ee4);
  return 0x28;
}


