/* Firmware entry: 0x4800b920 */

undefined4 FUN_ram_4800b920(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    if (*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) != 0) {
      iVar1 = param_1 * 0x38 + 0x4ff48230;
      FUN_ram_4ff3ec14(iVar1,0xffffffff);
      *param_2 = *(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) + 0x14);
      FUN_ram_4ff3ee10(iVar1);
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar2,
                     &DAT_ram_481b4c88,"uart_get_buffered_data_len",0x6ad);
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar2,
                     &DAT_ram_481b4c88,"uart_get_buffered_data_len",0x6ac);
  }
  return 0xffffffff;
}


