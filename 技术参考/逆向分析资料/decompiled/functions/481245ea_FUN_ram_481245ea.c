/* Firmware entry: 0x481245ea */

undefined4 FUN_ram_481245ea(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481270c0(&DAT_ram_4ff6c118);
  if ((iVar1 == 0) || (iVar1 = thunk_FUN_ram_4800f8fa(param_2), iVar1 == 0)) {
    uVar2 = 1;
    DAT_ram_4ff47eec = param_2;
  }
  else {
    uVar5 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                            );
    uVar3 = FUN_ram_480018de(iVar1);
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_wifi_set_ps failed!: 0x%x: %s\r\n",uVar4,uVar2,0x310
                     ,"setSleep",iVar1,uVar3);
    uVar2 = 0;
  }
  return uVar2;
}


