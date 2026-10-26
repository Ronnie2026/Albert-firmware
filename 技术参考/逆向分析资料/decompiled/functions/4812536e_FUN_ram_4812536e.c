/* Firmware entry: 0x4812536e */

undefined4 FUN_ram_4812536e(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [192];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4800f6ea();
  if (iVar1 == 0) {
    if (param_3 != 0) {
      iVar1 = FUN_ram_48025ba6();
      while ((iVar2 = FUN_ram_481270e2(param_1), iVar2 != 0 &&
             (iVar2 = FUN_ram_48025ba6(), (uint)(iVar2 - iVar1) < param_3))) {
        thunk_FUN_ram_4ff3c2b6(5);
      }
      iVar1 = FUN_ram_481270e2(param_1);
      if (iVar1 != 0) {
        return 0;
      }
    }
    if (param_2 == 0) {
      return 1;
    }
    iVar1 = FUN_ram_481270c0(param_1);
    if (iVar1 == 0) {
      uVar6 = FUN_ram_4ff21a0a();
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                              );
      uVar4 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA not started! You must call begin first.\r\n",uVar4
                       ,uVar3,0x222,"disconnect");
    }
    else {
      memset(auStack_d8,0,0xb8);
      iVar1 = thunk_FUN_ram_4800f72c(0,auStack_d8);
      if (iVar1 == 0) {
        return 1;
      }
      uVar6 = FUN_ram_4ff21a0a();
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                              );
      uVar4 = FUN_ram_480018de(iVar1);
      uVar5 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA clear config failed! 0x%x: %s\r\n",uVar5,uVar3,
                       0x229,"disconnect",iVar1,uVar4);
    }
  }
  else {
    uVar6 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar4 = FUN_ram_480018de(iVar1);
    uVar5 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA disconnect failed! 0x%x: %s\r\n",uVar5,uVar3,0x212,
                     "disconnect",iVar1,uVar4);
  }
  return 0;
}


