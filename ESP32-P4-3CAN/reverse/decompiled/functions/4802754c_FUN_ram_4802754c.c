/* Firmware entry: 0x4802754c */

undefined4 FUN_ram_4802754c(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar4 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Serial number is invalid, please use number from 0 to %u\r\n"
                     ,uVar3,uVar2,0xe3,"_uartDetachPins",5);
    return 0;
  }
  if ((-1 < (int)param_2) && ((int)(char)(&DAT_ram_4ff48718)[param_1 * 0x24] == param_2)) {
    iVar1 = FUN_ram_4802664c(param_2 & 0xff);
    if (iVar1 == 2) {
      gpio_pad_select_gpio(param_2);
      if ((&DAT_ram_4ff48728)[param_1 * 0x24] == '\0') {
        gpio_matrix_in(0x3f,*(uint *)(&DAT_ram_48235d9c + param_1 * 0x14) >> 0x14,0);
      }
      else {
        gpio_matrix_in(0x3e);
      }
      (&DAT_ram_4ff48718)[param_1 * 0x24] = 0xff;
      iVar1 = FUN_ram_48026230(param_2 & 0xff,0,0,0xffffffff);
      if (iVar1 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                );
        uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to detach RX pin %d\r\n",uVar3,uVar2,
                         0xf9,"_uartDetachPins",param_1,param_2);
        uVar2 = 0;
        goto joined_r0x48027592;
      }
    }
  }
  uVar2 = 1;
joined_r0x48027592:
  if ((-1 < (int)param_3) && ((int)(char)(&DAT_ram_4ff48719)[param_1 * 0x24] == param_3)) {
    iVar1 = FUN_ram_4802664c(param_3 & 0xff);
    if (iVar1 == 3) {
      gpio_pad_select_gpio(param_3);
      gpio_matrix_out(param_3,0x100,0,0);
      (&DAT_ram_4ff48719)[param_1 * 0x24] = 0xff;
      iVar1 = FUN_ram_48026230(param_3 & 0xff,0,0,0xffffffff);
      if (iVar1 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                );
        uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to detach TX pin %d\r\n",uVar3,uVar2,
                         0x103,"_uartDetachPins",param_1,param_3);
        uVar2 = 0;
      }
    }
  }
  if ((-1 < (int)param_4) && ((int)(char)(&DAT_ram_4ff4871a)[param_1 * 0x24] == param_4)) {
    iVar1 = FUN_ram_4802664c(param_4 & 0xff);
    if (iVar1 == 4) {
      gpio_pad_select_gpio(param_4);
      gpio_matrix_in(0x3e,*(uint *)(&DAT_ram_48235da4 + param_1 * 0x14) >> 0x14,0);
      (&DAT_ram_4ff4871a)[param_1 * 0x24] = 0xff;
      iVar1 = FUN_ram_48026230(param_4 & 0xff,0,0,0xffffffff);
      if (iVar1 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                );
        uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to detach CTS pin %d\r\n",uVar3,uVar2,
                         0x10d,"_uartDetachPins",param_1,param_4);
        uVar2 = 0;
      }
    }
  }
  if ((-1 < (int)param_5) && ((int)(char)(&DAT_ram_4ff4871b)[param_1 * 0x24] == param_5)) {
    iVar1 = FUN_ram_4802664c(param_5 & 0xff);
    if (iVar1 == 5) {
      gpio_pad_select_gpio(param_5);
      gpio_matrix_out(param_5,0x100,0,0);
      (&DAT_ram_4ff4871b)[param_1 * 0x24] = 0xff;
      iVar1 = FUN_ram_48026230(param_5 & 0xff,0,0,0xffffffff);
      if (iVar1 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                );
        uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d failed to detach RTS pin %d\r\n",uVar3,uVar2,
                         0x117,"_uartDetachPins",param_1,param_5);
        return 0;
      }
    }
  }
  return uVar2;
}


