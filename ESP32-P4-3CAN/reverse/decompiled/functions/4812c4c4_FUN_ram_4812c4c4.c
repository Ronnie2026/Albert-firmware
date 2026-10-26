/* Firmware entry: 0x4812c4c4 */

undefined4 FUN_ram_4812c4c4(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 0x37) && (iVar1 = (int)(char)(&DAT_ram_48235e10)[param_1], -1 < iVar1)) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
    *(uint *)(iVar1 * 4 + 0x5012b008) =
         *(uint *)(iVar1 * 4 + 0x5012b008) & 0xffffff9f | (param_2 & 3) << 5;
    if (param_2 == 1) {
      *(uint *)(iVar1 * 4 + 0x5012a0f4) = *(uint *)(iVar1 * 4 + 0x5012a0f4) & 0xfffffe07 | 0x100;
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    }
    else {
      FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    }
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): RTCIO number error\n",uVar2,"RTCIO",
                   "rtc_gpio_iomux_func_sel",0xbd);
  return 0x102;
}


