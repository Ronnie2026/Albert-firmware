/* Firmware entry: 0x4812c2ca */

undefined4 FUN_ram_4812c2ca(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 0x37) && (cVar1 = (&DAT_ram_48235e10)[param_1], -1 < cVar1)) {
    FUN_ram_4ff3ec14(&DAT_ram_4ff47dd8,0xffffffff);
    iVar2 = cVar1 * 4;
    *(uint *)(iVar2 + 0x5012b008) = *(uint *)(iVar2 + 0x5012b008) & 0xfffffff7;
    FUN_ram_4ff3ee10(&DAT_ram_4ff47dd8);
    return 0;
  }
  uVar3 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): RTCIO number error\n",uVar3,"RTCIO",
                   "rtc_gpio_pullup_dis",0x9f);
  return 0x102;
}


