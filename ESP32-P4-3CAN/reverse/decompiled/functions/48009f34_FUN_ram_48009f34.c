/* Firmware entry: 0x48009f34 */

undefined4 FUN_ram_48009f34(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    iVar2 = 0x10;
    if (param_1 != 5) {
      iVar2 = 0x80;
    }
    if (param_3 < iVar2) {
      iVar2 = param_1 * 0x38;
      *(undefined4 *)(*(int *)(&DAT_ram_4ff48228 + iVar2) + 0x10) = 2;
      FUN_ram_4ff3ec14(iVar2 + 0x4ff48230,0xffffffff);
      if (param_3 != -1) {
        FUN_ram_48131bda(&DAT_ram_4ff48228 + iVar2,param_3);
      }
      *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1 * 0x38) + 0xc) =
           *(uint *)(*(int *)(&DAT_ram_4ff48228 + param_1 * 0x38) + 0xc) | 2;
      FUN_ram_4ff3ee10(iVar2 + 0x4ff48230);
      return 0;
    }
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): empty intr threshold error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_enable_tx_intr",0x2b8);
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_enable_tx_intr",0x2b7);
  }
  return 0xffffffff;
}


