/* Firmware entry: 0x48126332 */

int FUN_ram_48126332(undefined4 param_1,char *param_2,char *param_3,char param_4,char param_5,
                    char param_6,char param_7,int param_8,int param_9)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [64];
  undefined1 uStack_140;
  char cStack_13f;
  int iStack_13c;
  char cStack_138;
  char cStack_137;
  undefined2 uStack_136;
  int iStack_130;
  char cStack_12c;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [65];
  char cStack_87;
  int iStack_84;
  char cStack_80;
  char cStack_7f;
  int iStack_78;
  char cStack_74;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar8 = FUN_ram_4ff21a0a();
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                            );
    uVar6 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): SSID missing!\r\n",uVar6,uVar5,0xd5,"create");
  }
  else if (((param_3 == (char *)0x0) || (*param_3 == '\0')) || (sVar1 = strlen(param_3), 7 < sVar1))
  {
    iVar2 = FUN_ram_4812616c(param_1);
    if (iVar2 != 0) {
      memset(auStack_1a0,0,0xb8);
      uStack_136 = 100;
      cStack_13f = param_4;
      cStack_138 = param_5;
      cStack_137 = param_6;
      cStack_12c = param_7;
      if (*param_2 != '\0') {
        sVar4 = strlen(param_2);
        sVar1 = sVar4;
        if (0x1f < sVar4) {
          sVar1 = 0x1f;
        }
        FUN_ram_4ff45158(auStack_1a0,param_2,sVar1 + 1);
        uStack_140 = (undefined1)sVar4;
        if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
          iStack_130 = param_9;
          iStack_13c = param_8;
          sVar1 = strlen(param_3);
          if (0x3f < sVar1) {
            sVar1 = 0x3f;
          }
          FUN_ram_4ff45158(auStack_180,param_3,sVar1 + 1);
        }
      }
      iVar3 = thunk_FUN_ram_4800f76e(1,auStack_e8);
      if (iVar3 == 0) {
        iVar3 = FUN_ram_4ff45520(auStack_1a0,auStack_e8,0x20);
        if (((iVar3 == 0) && (iVar3 = FUN_ram_4ff45520(auStack_180,auStack_c8,0x40), iVar3 == 0)) &&
           ((cStack_13f == cStack_87 &&
            ((((iStack_13c == iStack_84 && (cStack_138 == cStack_80)) && (cStack_137 == cStack_7f))
             && ((iStack_130 == iStack_78 && (cStack_12c == cStack_74)))))))) {
          return iVar2;
        }
        iVar3 = thunk_FUN_ram_4800f72c(1,auStack_1a0);
        if (iVar3 == 0) {
          return iVar2;
        }
        uVar8 = FUN_ram_4ff21a0a();
        uVar5 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                                );
        uVar6 = FUN_ram_480018de(iVar3);
        uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Set AP config failed! 0x%x: %s\r\n",uVar7,uVar5,0xfc
                         ,"create",iVar3,uVar6);
      }
      else {
        uVar8 = FUN_ram_4ff21a0a();
        uVar5 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                                );
        uVar6 = FUN_ram_480018de(iVar3);
        uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Get AP config failed! 0x%x: %s\r\n",uVar7,uVar5,0xf6
                         ,"create",iVar3,uVar6);
      }
    }
  }
  else {
    uVar8 = FUN_ram_4ff21a0a();
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/AP.cpp"
                            );
    uVar6 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): passphrase too short!\r\n",uVar6,uVar5,0xda,"create");
  }
  return 0;
}


