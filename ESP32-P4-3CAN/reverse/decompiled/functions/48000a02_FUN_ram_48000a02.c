/* Firmware entry: 0x48000a02 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48000a02(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  byte abStack_2c [10];
  byte bStack_22;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4812fc7a();
  if (2 < DAT_ram_4ff47dac) {
    uVar4 = FUN_ram_4ff44d14();
    ets_printf("I (%lu) %s: Multicore app\n",uVar4,"cpu_start");
  }
  thunk_FUN_ram_4813280c();
  DAT_ram_4ff6d944 = 1;
  _DAT_ram_500e60f4 = _DAT_ram_500e60f4 | 2;
  FUN_ram_480038a2(abStack_2c);
  if (bStack_22 < 2) {
    if (DAT_ram_4ff47dac != 0) {
      uVar4 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: Running on single core variant of a chip, but app is built with multi-core support.\n"
                 ,uVar4,"cpu_start");
      if (DAT_ram_4ff47dac != 0) {
        uVar4 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Check that CONFIG_FREERTOS_UNICORE is enabled in menuconfig\n",uVar4
                   ,"cpu_start");
      }
    }
  }
  else {
    FUN_ram_4ff2fd46(1);
    if ((_DAT_ram_500e6014 & 0x10) == 0) {
      _DAT_ram_500e6014 = _DAT_ram_500e6014 | 0x10;
    }
    if ((_DAT_ram_500e60c0 & 0x100) != 0) {
      _DAT_ram_500e60c0 = _DAT_ram_500e60c0 & 0xfffffeff;
    }
    ets_set_appcpu_boot_addr(&LAB_ram_4ff202f0);
    do {
      bVar1 = DAT_ram_4ff6d944 & DAT_ram_4ff6d945;
      ets_delay_us(100);
    } while (bVar1 == 0);
    iVar2 = FUN_ram_4ff21c3a();
    if ((iVar2 == 0) || (iVar2 = FUN_ram_481a6f62(), iVar2 != 0)) {
      FUN_ram_48000e52();
      FUN_ram_48000fba();
      uVar5 = FUN_ram_4ff2fe04();
      DAT_ram_4ff6d96c = (undefined4)((ulonglong)uVar5 >> 0x20);
      DAT_ram_4ff6d968 = (undefined4)uVar5;
      FUN_ram_48000990();
      thunk_FUN_ram_4ff32b9c();
      uVar3 = FUN_ram_4ff20c5e();
      uart_tx_wait_idle(0);
      iVar2 = __udivdi3(uVar3 + 0x1c1e3dff,uVar3 + 0x1c1e3dff < uVar3,0x1c1e3e00,0);
      if (iVar2 - 1U < 0x100) {
        do {
        } while( true );
      }
      if (DAT_ram_4ff47dac < 3) {
        iVar2 = *param_1;
      }
      else {
        uVar4 = FUN_ram_4ff44d14();
        ets_printf("I (%lu) %s: GPIO %d and %d are used as console UART I/O pins\n",uVar4,
                   "cpu_start",0x26,0x25);
        iVar2 = *param_1;
      }
      if (iVar2 == 5) {
        FUN_ram_4800371c();
      }
      FUN_ram_4ff36cc4();
      if (DAT_ram_481b0000 == -0x17) {
        DAT_ram_4ff6d940 = 1;
        do {
          abStack_2c[0] = DAT_ram_4ff6d941 & DAT_ram_4ff6d940 & 1;
          ets_delay_us(100);
        } while (abStack_2c[0] == 0);
        return;
      }
      if (DAT_ram_4ff47dac != 0) {
        uVar4 = FUN_ram_4ff44d14();
        ets_printf("E (%lu) %s: Invalid app image header\n",uVar4,"cpu_start");
      }
    }
    else if (DAT_ram_4ff47dac != 0) {
      uVar4 = FUN_ram_4ff44d14();
      ets_printf("E (%lu) %s: External RAM failed memory test!\n",uVar4,"cpu_start");
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


