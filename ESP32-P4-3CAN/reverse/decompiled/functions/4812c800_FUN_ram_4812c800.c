/* Firmware entry: 0x4812c800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812c800(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 0x37) && (cVar1 = (&DAT_ram_48235e10)[param_1], -1 < cVar1)) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
    _DAT_ram_501101c4 = 1 << ((int)cVar1 & 0x1fU) | _DAT_ram_501101c4;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): RTCIO number error\n",uVar2,"RTCIO",
                   "rtc_gpio_hold_en",0xf3);
  return 0x102;
}


