/* Firmware entry: 0x4802791e */

undefined4 FUN_ram_4802791e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar3 = FUN_ram_4ff21a0a();
  uVar1 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                          );
  uVar2 = __udivdi3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): _uartDetachBus_RTS: busptr is NULL\r\n",uVar2,uVar1,0x155,
                   "_uartDetachBus_RTS");
  return 0;
}


