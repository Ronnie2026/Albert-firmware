/* Firmware entry: 0x4812c71c */

undefined4 FUN_ram_4812c71c(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): LP_IO number error\n",uVar1,"RTCIO",
                   "lp_gpio_connect_in_signal",0xde);
  return 0x102;
}


