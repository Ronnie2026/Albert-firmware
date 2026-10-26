/* Firmware entry: 0x480286e2 */

bool FUN_ram_480286e2(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    bVar4 = *(byte *)(param_1 + 1);
    iVar5 = param_2;
    if (bVar4 < 5) {
      if (0x7f < param_2) {
        iVar5 = 0x7a;
      }
    }
    else if (0xf < param_2) {
      iVar5 = 10;
    }
    iVar1 = *param_1;
    if (iVar1 != 0) {
      while (iVar1 = FUN_ram_4ff3b5f0(iVar1,0xffffffff), iVar1 != 1) {
        iVar1 = *param_1;
      }
      bVar4 = *(byte *)(param_1 + 1);
    }
    iVar1 = FUN_ram_4800c5d2(bVar4,iVar5);
    if (iVar1 == 0) {
      *(char *)((int)param_1 + 0x1d) = (char)iVar5;
    }
    else {
      uVar6 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      iVar5 = param_1[1];
      uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to set RX FIFO Full value to %d\r\n",
                       uVar3,uVar2,0x37f,"uartSetRxFIFOFull",(char)iVar5,param_2);
    }
    if (*param_1 != 0) {
      FUN_ram_4ff3afa2(*param_1,0,0,0);
    }
    return iVar1 == 0;
  }
  return false;
}


