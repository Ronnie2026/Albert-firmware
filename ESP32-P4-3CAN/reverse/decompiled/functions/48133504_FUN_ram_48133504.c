/* Firmware entry: 0x48133504 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48133504(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xf < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("io_mux.c",0x53,"io_mux_force_disable_lp_io_clock",
                     "rtc_io_num < SOC_RTCIO_PIN_COUNT");
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f48,0xffffffff);
  (&DAT_ram_4ff6c4c8)[param_1] = 0;
  if ((int)(param_1 - 0x20) < 0) {
    uVar2 = 1 << (param_1 & 0x1f);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = (uint)DAT_ram_4ff6c4d8;
  DAT_ram_4ff6c4d8 = (ushort)(~uVar2 & uVar1);
  if ((~uVar2 & uVar1) == 0) {
    FUN_ram_4ff3122a();
    _DAT_ram_5012a000 = _DAT_ram_5012a000 & 0xfffffffe;
    FUN_ram_4ff31240();
  }
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f48);
  return;
}


