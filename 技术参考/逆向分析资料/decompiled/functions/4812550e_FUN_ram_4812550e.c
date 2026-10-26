/* Firmware entry: 0x4812550e */

undefined4
FUN_ram_4812550e(int param_1,char *param_2,char *param_3,undefined1 param_4,undefined1 *param_5,
                int param_6)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined1 auStack_190 [28];
  undefined1 auStack_174 [28];
  undefined1 auStack_158 [28];
  undefined1 auStack_13c [28];
  undefined1 auStack_120 [28];
  undefined1 auStack_104 [28];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [64];
  undefined4 uStack_88;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_68;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 4) == 0) {
    uVar10 = FUN_ram_4ff21a0a();
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar6 = __udivdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA not started! You must call begin() first.\r\n",uVar6
                     ,uVar5,0x16d,"connect");
  }
  else {
    iVar1 = FUN_ram_481270e2();
    if ((iVar1 == 0) || (iVar1 = FUN_ram_4812536e(param_1,1,1000), iVar1 != 0)) {
      if ((param_2 == (char *)0x0) ||
         ((*param_2 == '\0' || (sVar2 = strlen(param_2), 0x20 < sVar2)))) {
        uVar10 = FUN_ram_4ff21a0a();
        uVar5 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                );
        uVar6 = __udivdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): SSID too long or missing!\r\n",uVar6,uVar5,0x179,
                         "connect");
      }
      else {
        uStack_7d = param_4;
        if (param_3 == (char *)0x0) {
          memset(auStack_e8,0,0xb8);
          uStack_88 = *(undefined4 *)(param_1 + 0x20);
          uStack_78 = *(undefined4 *)(param_1 + 0x24);
          uStack_68 = 1;
          uStack_74 = 0x81;
          if (0x1f < sVar2) {
            sVar2 = 0x1f;
          }
          FUN_ram_4ff45158(auStack_e8,param_2,sVar2 + 1);
        }
        else {
          sVar3 = strlen(param_3);
          if (0x40 < sVar3) {
            uVar10 = FUN_ram_4ff21a0a();
            uVar5 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                    );
            uVar6 = __udivdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
            FUN_ram_48027528("[%6u][E][%s:%u] %s(): passphrase too long!\r\n",uVar6,uVar5,0x17e,
                             "connect");
            return 0;
          }
          memset(auStack_e8,0,0xb8);
          uStack_88 = *(undefined4 *)(param_1 + 0x20);
          uStack_78 = *(undefined4 *)(param_1 + 0x24);
          uStack_68 = 1;
          uStack_74 = 0x81;
          if (0x1f < sVar2) {
            sVar2 = 0x1f;
          }
          FUN_ram_4ff45158(auStack_e8,param_2,sVar2 + 1);
          if (*param_3 != '\0') {
            uStack_70 = *(undefined4 *)(param_1 + 0x1c);
            if (0x3f < sVar3) {
              sVar3 = 0x3f;
            }
            FUN_ram_4ff45158(auStack_c8,param_3,sVar3 + 1);
          }
        }
        if (param_5 != (undefined1 *)0x0) {
          uStack_83 = *param_5;
          uStack_82 = param_5[1];
          uStack_81 = param_5[2];
          uStack_80 = param_5[3];
          uStack_7f = param_5[4];
          uStack_7e = param_5[5];
          uStack_84 = 1;
        }
        iVar1 = thunk_FUN_ram_4800f72c(0,auStack_e8);
        if (iVar1 == 0) {
          uVar4 = FUN_ram_48126e34(param_1);
          if ((uVar4 & 0x40) == 0) {
            FUN_ram_4812181e(auStack_190,0);
            FUN_ram_4812181e(auStack_174,0);
            FUN_ram_4812181e(auStack_158,0);
            FUN_ram_4812181e(auStack_13c,0);
            FUN_ram_4812181e(auStack_120,0);
            FUN_ram_4812181e(auStack_104,0);
            iVar1 = FUN_ram_48127108(param_1,auStack_190,auStack_174,auStack_158,auStack_13c,
                                     auStack_120,auStack_104);
            if (iVar1 == 0) {
              uVar10 = FUN_ram_4ff21a0a();
              uVar5 = FUN_ram_48025e50(
                                      "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                      );
              uVar6 = __udivdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
              FUN_ram_48027528("[%6u][E][%s:%u] %s(): STA failed to configure dynamic IP!\r\n",uVar6
                               ,uVar5,0x19c,"connect");
              return 0;
            }
          }
          if ((param_6 == 0) || (iVar1 = thunk_FUN_ram_4800f672(), iVar1 == 0)) {
            return 1;
          }
          uVar10 = FUN_ram_4ff21a0a();
          uVar6 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                  );
          uVar7 = FUN_ram_480018de(iVar1);
          uVar8 = __udivdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
          pcVar9 = "[%6u][E][%s:%u] %s(): STA connect failed! 0x%x: %s\r\n";
          uVar5 = 0x1a3;
        }
        else {
          uVar10 = FUN_ram_4ff21a0a();
          uVar6 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                                  );
          uVar7 = FUN_ram_480018de(iVar1);
          uVar8 = __udivdi3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000,0);
          pcVar9 = "[%6u][E][%s:%u] %s(): STA clear config failed! 0x%x: %s\r\n";
          uVar5 = 0x197;
        }
        FUN_ram_48027528(pcVar9,uVar8,uVar6,uVar5,"connect",iVar1,uVar7);
      }
    }
  }
  return 0;
}


