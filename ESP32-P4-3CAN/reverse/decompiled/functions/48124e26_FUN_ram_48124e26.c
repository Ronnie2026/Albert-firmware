/* Firmware entry: 0x48124e26 */

undefined4 FUN_ram_48124e26(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((DAT_ram_4ff6e068 == 0) &&
     (iVar2 = FUN_ram_481a3b24(PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60,0xffffffff,
                               &PTR_DAT_ram_481f57b7_ram_48124dc8,param_1,&DAT_ram_4ff6e068),
     iVar2 != 0)) {
    uVar4 = FUN_ram_4ff21a0a();
    uVar1 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): event_handler_instance_register for WIFI_EVENT Failed!\r\n"
                     ,uVar3,uVar1,0x10e,"onEnable");
LAB_ram_48124ede:
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      iVar2 = FUN_ram_48123c20(0);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 == 0) {
        uVar4 = FUN_ram_4ff21a0a();
        uVar1 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                );
        uVar3 = __udivdi3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA was enabled, but netif is NULL???\r\n",uVar3,
                         uVar1,0x114,"onEnable");
        goto LAB_ram_48124ede;
      }
      uVar1 = FUN_ram_481288f0(&DAT_ram_4ff6c1a8,FUN_ram_48125970,0xcf);
      *(undefined4 *)(param_1 + 0x30) = uVar1;
      FUN_ram_48126f84(param_1,0);
    }
    uVar1 = 1;
  }
  return uVar1;
}


