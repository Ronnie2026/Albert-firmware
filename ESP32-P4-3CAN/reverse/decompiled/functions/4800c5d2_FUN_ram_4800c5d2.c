/* Firmware entry: 0x4800c5d2 */

undefined4 FUN_ram_4800c5d2(uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    uVar3 = 0x1f;
    if (param_1 != 5) {
      uVar3 = 0xff;
    }
    if ((param_2 < uVar3) && (param_2 != 0)) {
      if (*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) == 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: call uart_driver_install API first\n",
                         uVar2,&DAT_ram_481b4c88);
        uVar2 = 0x103;
      }
      else {
        iVar1 = param_1 * 0x38;
        FUN_ram_4ff3ec14(iVar1 + 0x4ff48230,0xffffffff);
        if ((*(uint *)(*(int *)(&DAT_ram_4ff48228 + iVar1) + 0xc) & 1) != 0) {
          FUN_ram_48131ba8(&DAT_ram_4ff48228 + iVar1,param_2);
        }
        FUN_ram_4ff3ee10(iVar1 + 0x4ff48230);
        uVar2 = 0;
      }
      return uVar2;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): rx fifo full threshold value error\n",
                     uVar2,&DAT_ram_481b4c88,"uart_set_rx_full_threshold",0x862);
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar2,
                     &DAT_ram_481b4c88,"uart_set_rx_full_threshold",0x861);
  }
  return 0x102;
}


