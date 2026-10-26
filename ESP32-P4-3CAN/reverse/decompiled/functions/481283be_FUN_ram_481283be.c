/* Firmware entry: 0x481283be */

undefined4 FUN_ram_481283be(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_ram_4ff3fbfa();
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      FUN_ram_4ff3fe68(iVar1,DAT_ram_4ff6e080);
      goto LAB_ram_481283cc;
    }
    uVar4 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkEvents.cpp"
                            );
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Network Event Group Create Failed!\r\n",uVar3,uVar2,0x2e
                     ,"initNetworkEvents");
LAB_ram_48128454:
    uVar2 = 0;
  }
  else {
LAB_ram_481283cc:
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = FUN_ram_4ff3add0(0x20,4,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar2 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkEvents.cpp"
                                );
        uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Network Event Queue Create Failed!\r\n",uVar3,uVar2,
                         0x37,"initNetworkEvents");
        goto LAB_ram_48128454;
      }
    }
    iVar1 = FUN_ram_481a3b84();
    if ((iVar1 == 0) || (iVar1 == 0x103)) {
      if (*(int *)(param_1 + 0xc) == 0) {
        FUN_ram_48025b80(0x481282c8,"arduino_events",0x1000,param_1,0x13,param_1 + 0xc,0);
        if (*(int *)(param_1 + 0xc) == 0) {
          uVar4 = FUN_ram_4ff21a0a();
          uVar2 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkEvents.cpp"
                                  );
          uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
          FUN_ram_48027528("[%6u][E][%s:%u] %s(): Network Event Task Start Failed!\r\n",uVar3,uVar2,
                           0x4c,"initNetworkEvents");
          goto LAB_ram_48128454;
        }
      }
    }
    else {
      uVar4 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/Network/src/NetworkEvents.cpp"
                              );
      uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_event_loop_create_default failed!\r\n",uVar3,uVar2
                       ,0x3e,"initNetworkEvents");
    }
    uVar2 = 1;
  }
  return uVar2;
}


