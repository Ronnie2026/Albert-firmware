/* Firmware entry: 0x480294d2 */

bool FUN_ram_480294d2(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return false;
  }
  uVar1 = FUN_ram_48029376((char)param_1[1]);
  if (uVar1 < param_2) {
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Invalid RX Timeout value, its limit is %d\r\n",uVar4,
                     uVar3,0x368,"uartSetRxTimeout",uVar1);
    return false;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    while (iVar2 = FUN_ram_4ff3b5f0(iVar2,0xffffffff), iVar2 != 1) {
      iVar2 = *param_1;
    }
  }
  iVar2 = FUN_ram_4800c70c((char)param_1[1],param_2);
  if (*param_1 != 0) {
    FUN_ram_4ff3afa2(*param_1,0,0,0);
  }
  return iVar2 == 0;
}


