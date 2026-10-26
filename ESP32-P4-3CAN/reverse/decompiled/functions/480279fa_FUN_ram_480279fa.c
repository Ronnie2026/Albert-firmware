/* Firmware entry: 0x480279fa */

undefined4 FUN_ram_480279fa(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar3 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar2 = __udivdi3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): _uartDetachBus_TX: busptr is NULL\r\n",uVar2,uVar1,0x134
                     ,"_uartDetachBus_TX");
    uVar1 = 0;
  }
  else {
    if (-1 < *(char *)(param_1 + 0xd)) {
      if (-1 < *(char *)(param_1 + 0xc)) {
        uVar1 = FUN_ram_4802754c(*(undefined1 *)(param_1 + 4),0xffffffff,
                                 (int)*(char *)(param_1 + 0xd),0xffffffff);
        return uVar1;
      }
      FUN_ram_4802a0e2(*(undefined1 *)(param_1 + 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}


