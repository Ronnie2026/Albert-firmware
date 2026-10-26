/* Firmware entry: 0x4ff2cffa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff2cffa(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10) {
    if (_DAT_ram_5011003c - 1 < 0xfffffffe) {
      if ((_DAT_ram_5011003c & 0xfffe) != 0) {
        return _DAT_ram_5011003c & 0xfffe;
      }
    }
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(2,"clk_hal","W (%lu) %s: invalid RTC_XTAL_FREQ_REG value, assume 40MHz\n",uVar1,
                   "clk_hal");
  return 0x28;
}


