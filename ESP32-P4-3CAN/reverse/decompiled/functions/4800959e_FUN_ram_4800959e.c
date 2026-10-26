/* Firmware entry: 0x4800959e */

undefined4 FUN_ram_4800959e(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    if (param_2 < 4) {
      iVar2 = param_1 * 0x38 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar2,0xffffffff);
      FUN_ram_48131a36(&DAT_ram_4ff48228 + param_1 * 0x38,param_2);
      FUN_ram_4ff3ee10(iVar2);
      return 0;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): stop bit error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_set_stop_bits",0x153);
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_set_stop_bits",0x152);
  }
  return 0xffffffff;
}


