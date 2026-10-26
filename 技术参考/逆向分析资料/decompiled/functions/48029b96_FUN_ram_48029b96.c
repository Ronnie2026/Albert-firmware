/* Firmware entry: 0x48029b96 */

void FUN_ram_48029b96(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48025b80(FUN_ram_480298e8,"uart_event_task",0x800,param_1,0x18,param_1 + 0x44,0);
  if (*(int *)(param_1 + 0x44) != 0) {
    return;
  }
  uVar4 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                          );
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s():  -- UART%d Event Task not Created!\r\n",uVar3,uVar2,0xb6,
                   "_createEventTask",uVar1);
  return;
}


