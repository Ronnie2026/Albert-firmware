/* Firmware entry: 0x481333ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481333ec(uint param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0xf < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("io_mux.c",0x39,"io_mux_enable_lp_io_clock","rtc_io_num < SOC_RTCIO_PIN_COUNT")
    ;
  }
  FUN_ram_4ff3ec14(&DAT_ram_4ff47f48,0xffffffff);
  cVar1 = (&DAT_ram_4ff6c4c8)[param_1];
  if (param_2 == 0) {
    if ((cVar1 != '\0') && ((&DAT_ram_4ff6c4c8)[param_1] = cVar1 + -1, cVar1 == '\x01')) {
      if ((int)(param_1 - 0x20) < 0) {
        uVar2 = (ushort)(1 << (param_1 & 0x1f));
      }
      else {
        uVar2 = 0;
      }
      DAT_ram_4ff6c4d8 = ~uVar2 & DAT_ram_4ff6c4d8;
      FUN_ram_4ff3122a();
      goto joined_r0x481334b6;
    }
  }
  else {
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((int)(param_1 - 0x20) < 0) {
        uVar2 = (ushort)(1 << (param_1 & 0x1f));
      }
      DAT_ram_4ff6c4d8 = DAT_ram_4ff6c4d8 | uVar2;
    }
    (&DAT_ram_4ff6c4c8)[param_1] = cVar1 + '\x01';
  }
  FUN_ram_4ff3122a();
joined_r0x481334b6:
  if (DAT_ram_4ff6c4d8 == 0) {
    _DAT_ram_5012a000 = _DAT_ram_5012a000 & 0xfffffffe;
  }
  else {
    _DAT_ram_5012a000 = _DAT_ram_5012a000 | 1;
  }
  FUN_ram_4ff31240();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47f48);
  return;
}


