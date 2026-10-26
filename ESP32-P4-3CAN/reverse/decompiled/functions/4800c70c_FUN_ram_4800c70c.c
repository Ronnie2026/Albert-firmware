/* Firmware entry: 0x4800c70c */

undefined4 FUN_ram_4800c70c(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    uVar2 = FUN_ram_48131e16(&DAT_ram_4ff48228 + param_1 * 0x38);
    if (param_2 <= uVar2) {
      iVar1 = param_1 * 0x38 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      FUN_ram_48131dae(&DAT_ram_4ff48228 + param_1 * 0x38,param_2);
      FUN_ram_4ff3ee10(iVar1);
      return 0;
    }
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: tout_thresh = %d > maximum value = %d\n",uVar3
                     ,&DAT_ram_481b4c88,param_2,uVar2);
  }
  else {
    uVar3 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar3,
                     &DAT_ram_481b4c88,"uart_set_rx_timeout",0x883);
  }
  return 0x102;
}


