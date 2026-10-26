/* Firmware entry: 0x4812c6d8 */

undefined4 FUN_ram_4812c6d8(uint param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 & 0xffffffef) != 0x20) {
    if ((int)param_1 < 0x37) {
      param_1 = (uint)(char)(&DAT_ram_48235e10)[param_1];
      if (-1 < (int)param_1) goto LAB_ram_4812c6fe;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): LP_IO number error\n",uVar1,"RTCIO",
                     "lp_gpio_connect_in_signal",0xde);
    return 0x102;
  }
LAB_ram_4812c6fe:
  *(uint *)(param_2 * 4 + 0x5012a074) = (param_1 << 2 | param_3 | 2) & 0xff;
  return 0;
}


