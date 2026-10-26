/* Firmware entry: 0x4812c15c */

undefined4 FUN_ram_4812c15c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 0x37) && (iVar1 = (int)(char)(&DAT_ram_48235e10)[param_1], -1 < iVar1)) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
    FUN_ram_481333ec(param_1,1);
    iVar3 = iVar1 * 4;
    *(uint *)(iVar3 + 0x5012b008) = *(uint *)(iVar3 + 0x5012b008) | 0x10;
    *(uint *)(iVar3 + 0x5012b008) = *(uint *)(iVar3 + 0x5012b008) & 0xffffff9f | 0x20;
    *(uint *)(iVar1 * 4 + 0x5012a0f4) = *(uint *)(iVar1 * 4 + 0x5012a0f4) & 0xfffffe07 | 0x100;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    return 0;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): RTCIO number error\n",uVar2,"RTCIO",
                   "rtc_gpio_init",0x31);
  return 0x102;
}


