/* Firmware entry: 0x4812c75e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4812c75e(int param_1,uint param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 0x37) {
    uVar1 = (uint)(char)(&DAT_ram_48235e10)[param_1];
    if (-1 < (int)uVar1) {
      *(uint *)(uVar1 * 4 + 0x5012a0f4) = (param_2 & 0x3f) << 3 | (param_4 | param_3 << 2) & 0x1ff;
      _DAT_ram_5012a018 = _DAT_ram_5012a018 & 0xffff0000 | 1 << (uVar1 & 0x1f) & 0xffffU;
      return 0;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"RTCIO","E (%lu) %s: %s(%d): LP_IO number error\n",uVar2,"RTCIO",
                   "lp_gpio_connect_out_signal",0xe7);
  return 0x102;
}


