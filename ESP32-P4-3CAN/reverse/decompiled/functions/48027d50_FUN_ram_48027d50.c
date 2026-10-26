/* Firmware entry: 0x48027d50 */

undefined4 FUN_ram_48027d50(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar7 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Serial number is invalid, please use number from 0 to %u\r\n"
                     ,uVar3,uVar2,0x164,"_uartAttachPins",5);
    return 0;
  }
  puVar6 = &DAT_ram_4ff4870c + param_1 * 0x24;
  cVar4 = (char)param_1;
  if (-1 < (int)param_2) {
    uVar5 = param_2 & 0xff;
    iVar1 = FUN_ram_4802664c(uVar5);
    if (iVar1 != 0) {
      FUN_ram_48026230(uVar5,0,0,0xffffffff);
    }
    iVar1 = FUN_ram_4800a20c((&DAT_ram_4ff48710)[param_1 * 0x24],0xffffffff,param_2,0xffffffff);
    if ((iVar1 != 0) ||
       (((param_1 == 5 && (iVar1 = FUN_ram_48027b12(DAT_ram_4ff487c4,param_2,0,1), iVar1 == 0)) ||
        (iVar1 = FUN_ram_48026230(uVar5,2,puVar6,(int)cVar4,0xffffffff), iVar1 == 0)))) {
      uVar7 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to attach RX pin %d\r\n",uVar3,uVar2,
                       0x186,"_uartAttachPins",param_1,param_2);
      uVar2 = 0;
      goto joined_r0x48028100;
    }
    (&DAT_ram_4ff48718)[param_1 * 0x24] = (char)param_2;
    iVar1 = FUN_ram_48026aba(2);
    if (iVar1 == 0) {
      FUN_ram_4802691a(2,FUN_ram_48027a86);
    }
  }
  uVar2 = 1;
joined_r0x48028100:
  if (-1 < (int)param_3) {
    uVar5 = param_3 & 0xff;
    iVar1 = FUN_ram_4802664c(uVar5);
    if (iVar1 != 0) {
      FUN_ram_48026230(uVar5,0,0,0xffffffff);
    }
    iVar1 = FUN_ram_4800a20c((&DAT_ram_4ff48710)[param_1 * 0x24],param_3,0xffffffff,0xffffffff);
    if (((iVar1 == 0) &&
        ((param_1 != 5 || (iVar1 = FUN_ram_48027b12(DAT_ram_4ff487c4,param_3,1,0), iVar1 != 0)))) &&
       (iVar1 = FUN_ram_48026230(uVar5,3,puVar6,(int)cVar4,0xffffffff), iVar1 != 0)) {
      (&DAT_ram_4ff48719)[param_1 * 0x24] = (char)param_3;
      iVar1 = FUN_ram_48026aba(3);
      if (iVar1 == 0) {
        FUN_ram_4802691a(3,FUN_ram_480279fa);
      }
    }
    else {
      uVar7 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to attach TX pin %d\r\n",uVar3,uVar2,
                       0x1a1,"_uartAttachPins",param_1,param_3);
      uVar2 = 0;
    }
  }
  if (-1 < (int)param_4) {
    uVar5 = param_4 & 0xff;
    iVar1 = FUN_ram_4802664c(uVar5);
    if (iVar1 != 0) {
      FUN_ram_48026230(uVar5,0,0,0xffffffff);
    }
    iVar1 = FUN_ram_4800a20c((&DAT_ram_4ff48710)[param_1 * 0x24],0xffffffff,0xffffffff,0xffffffff,
                             param_4);
    if (((iVar1 == 0) &&
        ((param_1 != 5 || (iVar1 = FUN_ram_48027b12(DAT_ram_4ff487c4,param_4,0,3), iVar1 != 0)))) &&
       (iVar1 = FUN_ram_48026230(uVar5,4,puVar6,(int)cVar4,0xffffffff), iVar1 != 0)) {
      (&DAT_ram_4ff4871a)[param_1 * 0x24] = (char)param_4;
      iVar1 = FUN_ram_48026aba(4);
      if (iVar1 == 0) {
        FUN_ram_4802691a(4,&LAB_ram_4802797e);
      }
    }
    else {
      uVar7 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to attach CTS pin %d\r\n",uVar3,uVar2,
                       0x1bc,"_uartAttachPins",param_1,param_4);
      uVar2 = 0;
    }
  }
  if (-1 < (int)param_5) {
    uVar5 = param_5 & 0xff;
    iVar1 = FUN_ram_4802664c(uVar5);
    if (iVar1 != 0) {
      FUN_ram_48026230(uVar5,0,0,0xffffffff);
    }
    iVar1 = FUN_ram_4800a20c((&DAT_ram_4ff48710)[param_1 * 0x24],0xffffffff,0xffffffff,param_5);
    if ((iVar1 == 0) &&
       (((param_1 != 5 || (iVar1 = FUN_ram_48027b12(DAT_ram_4ff487c4,param_5,1,2), iVar1 != 0)) &&
        (iVar1 = FUN_ram_48026230(uVar5,5,puVar6,(int)cVar4,0xffffffff), iVar1 != 0)))) {
      (&DAT_ram_4ff4871b)[param_1 * 0x24] = (char)param_5;
      iVar1 = FUN_ram_48026aba(5);
      if (iVar1 == 0) {
        FUN_ram_4802691a(5,&LAB_ram_48027902);
      }
    }
    else {
      uVar7 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to attach RTS pin %d\r\n",uVar3,uVar2,
                       0x1d7,"_uartAttachPins",param_1,param_5);
      uVar2 = 0;
    }
  }
  return uVar2;
}


