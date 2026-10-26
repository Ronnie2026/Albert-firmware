/* Firmware entry: 0x4ff211de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff211de(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10) &&
      (_DAT_ram_5011003c - 1 < 0xfffffffe)) && ((_DAT_ram_5011003c & 0xfffe) != 0)) {
    return _DAT_ram_5011003c & 0xfffe;
  }
  if (DAT_ram_4ff47dac < 2) {
    return 0x28;
  }
  uVar1 = FUN_ram_4ff44d14(0x28);
  ets_printf(s_W___lu___s__invalid_RTC_XTAL_FRE_ram_4ff54eec,uVar1,s_rtc_clk_ram_4ff54ee4);
  return 0x28;
}


