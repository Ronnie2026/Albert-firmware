/* Firmware entry: 0x48029acc */

void FUN_ram_48029acc(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)((int)param_1 + 0x42) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 4) = param_2;
  param_1[2] = 1000;
  *param_1 = &PTR_FUN_ram_4802a1d0_ram_481f5028;
  param_1[6] = 0x100;
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  iVar1 = FUN_ram_4ff3b144(1);
  param_1[0x12] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  uVar4 = FUN_ram_4ff21a0a();
  uVar2 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                          );
  uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): xSemaphoreCreateMutex failed\r\n",uVar3,uVar2,0x9f,
                   "HardwareSerial");
  return;
}


