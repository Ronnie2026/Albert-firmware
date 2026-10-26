/* Firmware entry: 0x4812c5a8 */

undefined4 FUN_ram_4812c5a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 0x37) && (cVar1 = (&DAT_ram_48235e10)[param_1], -1 < cVar1)) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
    FUN_ram_48131fc8((int)cVar1,param_2,param_3);
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): RTCIO number error\n",uVar2,"RTCIO",
                   "rtc_gpio_iomux_input",199);
  return 0x102;
}


