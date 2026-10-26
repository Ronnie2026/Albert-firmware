/* Firmware entry: 0x48009538 */

undefined4 FUN_ram_48009538(uint param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    FUN_ram_48131a8c(&DAT_ram_4ff48228 + param_1 * 0x38);
    return 0;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar1,
                   &DAT_ram_481b4c88,"uart_get_word_length",0x14b);
  return 0xffffffff;
}


