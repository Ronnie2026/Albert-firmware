/* Firmware entry: 0x48125064 */

undefined4 FUN_ram_48125064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_180 [28];
  undefined1 auStack_164 [28];
  undefined1 auStack_148 [28];
  undefined1 auStack_12c [28];
  undefined1 auStack_110 [28];
  undefined1 auStack_f4 [28];
  undefined1 auStack_d8 [192];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 0) {
    uVar6 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA not started! You must call begin() first.\r\n",uVar3
                     ,uVar2,0x145,"connect");
  }
  else {
    iVar1 = FUN_ram_481270e2();
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = thunk_FUN_ram_4800f76e(0,auStack_d8);
    if ((iVar1 == 0) && (iVar1 = thunk_FUN_ram_4800f72c(0,auStack_d8), iVar1 == 0)) {
      uVar4 = FUN_ram_48126e34(param_1);
      if ((uVar4 & 0x40) == 0) {
        FUN_ram_4812181e(auStack_180,0);
        FUN_ram_4812181e(auStack_164,0);
        FUN_ram_4812181e(auStack_148,0);
        FUN_ram_4812181e(auStack_12c,0);
        FUN_ram_4812181e(auStack_110,0);
        FUN_ram_4812181e(auStack_f4,0);
        iVar1 = FUN_ram_48127108(param_1,auStack_180,auStack_164,auStack_148,auStack_12c,auStack_110
                                 ,auStack_f4);
        if (iVar1 == 0) {
          uVar6 = FUN_ram_4ff21a0a();
          uVar2 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                  );
          uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
          FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA failed to configure dynamic IP!\r\n",uVar3,
                           uVar2,0x155,"connect");
          return 0;
        }
      }
      iVar1 = thunk_FUN_ram_4800f672();
      if (iVar1 == 0) {
        return 1;
      }
      uVar6 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                              );
      uVar3 = FUN_ram_480018de(iVar1);
      uVar5 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA connect failed! 0x%x: %s\r\n",uVar5,uVar2,0x15b,
                       "connect",iVar1,uVar3);
    }
    else {
      uVar6 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                              );
      uVar3 = __udivdi3((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA config failed\r\n",uVar3,uVar2,0x150,"connect");
    }
  }
  return 0;
}


