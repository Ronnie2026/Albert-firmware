/* Firmware entry: 0x48027b12 */

undefined4 FUN_ram_48027b12(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812c15c(param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4812c234(param_2,param_3);
    if (iVar1 == 0) {
      uVar4 = *(uint *)(&DAT_ram_48235d98 + (param_1 * 5 + param_4) * 4);
      if ((int)(uVar4 << 0x11) >> 0x11 == param_2) {
        iVar1 = FUN_ram_4812c4c4(param_2,(int)(uVar4 << 0xd) >> 0x1c);
        if (iVar1 == 0) {
          return 1;
        }
        uVar5 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                );
        uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to set LP_IO pin %d into Mux function\r\n",
                         uVar3,uVar2,0x9c,"lp_uart_config_io",param_2);
      }
      else {
        iVar1 = FUN_ram_4812c4c4(param_2,1);
        if (iVar1 == 0) {
          if (param_3 == 1) {
            iVar1 = FUN_ram_4812c75e(param_2,uVar4 >> 0x14,0,0);
          }
          else {
            iVar1 = FUN_ram_4812c6d8(param_2,uVar4 >> 0x14,0);
          }
          if (iVar1 == 0) {
            gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
            return 1;
          }
          uVar5 = FUN_ram_4ff21a0a();
          uVar2 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                  );
          uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
          FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to connect LP_IO pin %d to UART%d signal\r\n"
                           ,uVar3,uVar2,0xad,"lp_uart_config_io",param_2,param_1);
        }
        else {
          uVar5 = FUN_ram_4ff21a0a();
          uVar2 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                  );
          uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
          FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to set LP_IO pin %d into Mux function GPIO\r\n"
                           ,uVar3,uVar2,0xa2,"lp_uart_config_io",param_2);
        }
      }
    }
    else {
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to set LP_IO %d direction\r\n",uVar3,uVar2,0x8c
                       ,"lp_uart_config_io",param_2);
    }
  }
  else {
    uVar5 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar3 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to initialize LP_IO %d\r\n",uVar3,uVar2,0x86,
                     "lp_uart_config_io",param_2);
  }
  return 0;
}


