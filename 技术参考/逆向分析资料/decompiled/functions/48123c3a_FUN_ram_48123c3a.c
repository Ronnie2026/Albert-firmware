/* Firmware entry: 0x48123c3a */

char FUN_ram_48123c3a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 auStack_ec [13];
  undefined *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e057 != '\0') {
    return DAT_ram_4ff6e057;
  }
  DAT_ram_4ff6e057 = 1;
  iVar1 = FUN_ram_48126a06();
  if ((iVar1 != 0) && (iVar1 = FUN_ram_48128fd0(&DAT_ram_4ff6c1a4), iVar1 != 0)) {
    memset(&uStack_80,0,0x60);
    puStack_b8 = &DAT_ram_4ff5b300;
    uStack_88 = 10;
    uStack_70 = 5;
    uStack_48 = 0x2f0;
    uStack_ac = DAT_ram_481f4ac4;
    uStack_a8 = DAT_ram_481f4ac8;
    uStack_a4 = DAT_ram_481f4acc;
    uStack_7c = 0x10;
    uStack_50 = 0x10;
    uStack_64 = 1;
    uStack_60 = 1;
    uStack_38 = 1;
    uStack_40 = 0x1a3;
    uStack_3c = 0;
    uStack_34 = 7;
    uStack_30 = 3;
    uStack_28 = 0x1f2f3f4f;
    uStack_b4 = DAT_ram_481f4abc;
    uStack_b0 = DAT_ram_481f4ac0;
    uStack_84 = 0x20;
    uStack_6c = 0x20;
    uStack_44 = 0x20;
    uStack_a0 = DAT_ram_481f4ad0;
    uStack_9c = DAT_ram_481f4ad4;
    uStack_98 = DAT_ram_481f4ad8;
    uStack_94 = DAT_ram_481f4adc;
    uStack_90 = DAT_ram_481f4ae0;
    uStack_8c = DAT_ram_481f4ae4;
    if (DAT_ram_4ff6e056 == '\0') {
      uStack_7c = 0;
      uStack_78 = 0x20;
      uStack_80 = 1;
      uStack_6c = 4;
      uStack_88 = 4;
    }
    iVar1 = thunk_FUN_ram_4800f458(&puStack_b8);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_ram_4800f93c(1);
      DAT_ram_4ff6e057 = iVar1 == 0;
      if (iVar1 != 0) {
        return '\0';
      }
      iVar1 = FUN_ram_481a3b24(PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60,0xffffffff,
                               &LAB_ram_48123926,0,0);
      if (iVar1 != 0) {
        uVar5 = FUN_ram_4ff21a0a();
        uVar3 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                                );
        uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): event_handler_instance_register for WIFI_EVENT Failed!\r\n"
                         ,uVar4,uVar3,0xb0,"initWiFiEvents");
      }
      if (DAT_ram_4ff6c174 == 0) {
        DAT_ram_4ff6c174 = FUN_ram_48169aec();
      }
      if (DAT_ram_4ff6c170 == 0) {
        DAT_ram_4ff6c170 = FUN_ram_48169b9c();
      }
      auStack_ec[0] = 0x65;
      FUN_ram_481285a8(&DAT_ram_4ff6c1a8,auStack_ec);
      return DAT_ram_4ff6e057;
    }
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                            );
    uVar4 = FUN_ram_480018de(iVar1);
    uVar2 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_wifi_init 0x%x: %s\r\n",uVar2,uVar3,0x11c,
                     "wifiLowLevelInit",iVar1,uVar4);
  }
  DAT_ram_4ff6e057 = 0;
  return '\0';
}


