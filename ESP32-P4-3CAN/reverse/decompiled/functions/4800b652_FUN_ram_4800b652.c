/* Firmware entry: 0x4800b652 */

undefined4 FUN_ram_4800b652(uint param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 < 6) {
    if (*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) == 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart driver error\n",uVar1,
                       &DAT_ram_481b4c88,"uart_write_bytes",0x660);
    }
    else {
      if (param_2 != 0) {
        if (param_3 == 0) {
          return 0;
        }
        uVar1 = FUN_ram_4800a046();
        return uVar1;
      }
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): buffer null\n",uVar1,
                       &DAT_ram_481b4c88,"uart_write_bytes",0x661);
    }
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,&DAT_ram_481b4c88,"E (%lu) %s: %s(%d): uart_num error\n",uVar1,
                     &DAT_ram_481b4c88,"uart_write_bytes",0x65f);
  }
  return 0xffffffff;
}


