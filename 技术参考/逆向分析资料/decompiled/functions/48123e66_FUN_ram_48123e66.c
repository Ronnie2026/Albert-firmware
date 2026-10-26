/* Firmware entry: 0x48123e66 */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_ram_48123e66(uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint auStack_54 [14];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((DAT_ram_4ff6e057 == '\0') || (DAT_ram_4ff6e055 == '\0')) ||
     (iVar2 = thunk_FUN_ram_4800f5ac(auStack_54), uVar6 = auStack_54[0], iVar2 != 0)) {
    if (param_1 == 0) {
      return 1;
    }
LAB_ram_48123e8a:
    iVar2 = FUN_ram_48123c3a(DAT_ram_4ff47ef0);
    if (iVar2 == 0) {
      return 0;
    }
    FUN_ram_481288f0(&DAT_ram_4ff6c1a8,&LAB_ram_48123a62,0xcf);
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        FUN_ram_48126058(&DAT_ram_4ff6c14c);
        iVar2 = thunk_FUN_ram_4800f56a(param_1);
        if (iVar2 != 0) goto LAB_ram_48123ff0;
        goto joined_r0x481241f8;
      }
LAB_ram_4812433a:
      iVar2 = thunk_FUN_ram_4800f56a(param_1);
      if (iVar2 != 0) {
LAB_ram_48123ff0:
        uVar8 = FUN_ram_4ff21a0a();
        uVar3 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                                );
        uVar4 = FUN_ram_480018de(iVar2);
        uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not set mode! 0x%x: %s\r\n",uVar5,uVar3,0x284,
                         "mode",iVar2,uVar4);
        return 0;
      }
      goto LAB_ram_48123ef4;
    }
    FUN_ram_48124e26(&DAT_ram_4ff6c118);
    bVar1 = false;
    uVar6 = 0;
    if ((param_1 & 2) != 0) {
LAB_ram_48124232:
      FUN_ram_48126058(&DAT_ram_4ff6c14c);
      auStack_54[0] = uVar6;
LAB_ram_4812423e:
      bVar1 = true;
      uVar6 = auStack_54[0];
    }
LAB_ram_48124240:
    iVar2 = DAT_ram_4ff6c170;
    uVar3 = FUN_ram_48129080();
    iVar2 = FUN_ram_48158fb6(iVar2,uVar3);
    if (iVar2 != 0) {
      uVar8 = FUN_ram_4ff21a0a();
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                              );
      uVar4 = FUN_ram_480018de(iVar2);
      uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not set hostname! 0x%x: %s\r\n",uVar5,uVar3,
                       0x27e,"mode",iVar2,uVar4);
      return 0;
    }
    iVar2 = thunk_FUN_ram_4800f56a(param_1);
    if (iVar2 != 0) goto LAB_ram_48123ff0;
    if (!bVar1) {
      if ((uVar6 & 2) != 0) {
        FUN_ram_4812611a(&DAT_ram_4ff6c14c);
      }
joined_r0x481242c8:
      if (DAT_ram_4ff6e054 != '\0') {
        iVar2 = FUN_ram_48123a74(0);
        if (iVar2 != 0) goto LAB_ram_48123ef4;
        goto LAB_ram_48124064;
      }
      iVar2 = FUN_ram_48123b88(0);
      if ((iVar2 != 0) && (iVar2 = FUN_ram_48123afe(0), iVar2 == 0)) goto LAB_ram_48124190;
      goto LAB_ram_48123ef4;
    }
LAB_ram_4812404e:
    if (DAT_ram_4ff6e054 == '\0') {
      iVar2 = FUN_ram_48123b88(0);
      if ((iVar2 != 0) && (iVar2 = FUN_ram_48123afe(0), iVar2 == 0)) {
LAB_ram_48124190:
        uVar8 = FUN_ram_4ff21a0a();
        uVar3 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                                );
        uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not disable long range on STA!\r\n",uVar4,
                         uVar3,0x2a3,"mode");
        return 0;
      }
LAB_ram_481241fc:
      iVar2 = FUN_ram_48123b88(1);
      if ((iVar2 != 0) && (iVar2 = FUN_ram_48123afe(1), iVar2 == 0)) {
        uVar8 = FUN_ram_4ff21a0a();
        uVar3 = FUN_ram_48025e50(
                                "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                                );
        uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not disable long range on AP!\r\n",uVar4,uVar3
                         ,0x2ac,"mode");
        return 0;
      }
      goto LAB_ram_48123ef4;
    }
    iVar2 = FUN_ram_48123a74(0);
    if (iVar2 == 0) {
LAB_ram_48124064:
      uVar8 = FUN_ram_4ff21a0a();
      uVar3 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                              );
      uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not enable long range on STA!\r\n",uVar4,uVar3,
                       0x294,"mode");
      return 0;
    }
  }
  else {
    if (param_1 == auStack_54[0]) {
      return 1;
    }
    if (auStack_54[0] == 0) {
      if (param_1 != 0) goto LAB_ram_48123e8a;
      goto LAB_ram_4812433a;
    }
    uVar7 = param_1 & 2;
    if ((param_1 & 1) != 0) {
      if ((auStack_54[0] & 1) == 0) {
        FUN_ram_48124e26(&DAT_ram_4ff6c118);
        bVar1 = false;
        if (uVar7 != 0) {
          if ((auStack_54[0] & 2) == 0) goto LAB_ram_48124232;
          goto LAB_ram_4812423e;
        }
        goto LAB_ram_48124240;
      }
      if (uVar7 == 0) {
        iVar2 = thunk_FUN_ram_4800f56a(param_1);
        if (iVar2 != 0) goto LAB_ram_48123ff0;
        if ((auStack_54[0] & 2) != 0) {
          FUN_ram_4812611a(&DAT_ram_4ff6c14c);
        }
        goto joined_r0x481242c8;
      }
      if ((auStack_54[0] & 2) == 0) {
        FUN_ram_48126058(&DAT_ram_4ff6c14c);
      }
      iVar2 = thunk_FUN_ram_4800f56a(param_1);
      if (iVar2 != 0) goto LAB_ram_48123ff0;
      goto LAB_ram_4812404e;
    }
    if (uVar7 == 0) {
      bVar1 = false;
      if (param_1 == 0) {
        if (DAT_ram_4ff6e055 != '\0') {
          DAT_ram_4ff6e055 = '\0';
          iVar2 = thunk_FUN_ram_4800f630();
          if (iVar2 != 0) {
            uVar8 = FUN_ram_4ff21a0a();
            uVar3 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                                    );
            uVar4 = FUN_ram_480018de(iVar2);
            uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
            FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not stop WiFi! 0x%x: %s\r\n",uVar5,uVar3,
                             0x16d,"espWiFiStop",iVar2,uVar4);
            DAT_ram_4ff6e055 = '\x01';
            return 0;
          }
          if (DAT_ram_4ff6e057 != '\0') {
            DAT_ram_4ff6e057 = 0;
            iVar2 = FUN_ram_481a3b46(PTR_s_WIFI_EVENT_ram_481c1dec_ram_481f4c60,0xffffffff,
                                     &LAB_ram_48123926);
            if (iVar2 != 0) {
              uVar8 = FUN_ram_4ff21a0a();
              uVar3 = FUN_ram_48025e50(
                                      "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                                      );
              uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
              FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_event_handler_unregister for WIFI_EVENT Failed!\r\n"
                               ,uVar4,uVar3,199,"deinitWiFiEvents");
            }
            if (DAT_ram_4ff6c174 != 0) {
              FUN_ram_48169c4c();
              DAT_ram_4ff6c174 = 0;
            }
            if (DAT_ram_4ff6c170 != 0) {
              FUN_ram_48169c4c();
              DAT_ram_4ff6c170 = 0;
            }
            iVar2 = thunk_FUN_ram_4800f528();
            DAT_ram_4ff6e057 = iVar2 != 0;
            if (iVar2 != 0) {
              return 0;
            }
            auStack_54[0] = 100;
            FUN_ram_481285a8(&DAT_ram_4ff6c1a8,auStack_54);
            FUN_ram_48126a20();
            if (DAT_ram_4ff6e057 != '\0') {
              return 0;
            }
          }
        }
        if ((uVar6 & 1) != 0) {
          FUN_ram_48124f34(&DAT_ram_4ff6c118);
        }
        if ((uVar6 & 2) != 0) {
          FUN_ram_4812611a(&DAT_ram_4ff6c14c);
        }
        FUN_ram_48128bdc(&DAT_ram_4ff6c1a8,&LAB_ram_48123a62,0xcf);
        return 1;
      }
    }
    else {
      if ((auStack_54[0] & 2) == 0) {
        FUN_ram_48126058(&DAT_ram_4ff6c14c);
      }
      bVar1 = true;
    }
    iVar2 = thunk_FUN_ram_4800f56a(param_1);
    if (iVar2 != 0) goto LAB_ram_48123ff0;
    if ((auStack_54[0] & 1) != 0) {
      FUN_ram_48124f34(&DAT_ram_4ff6c118);
    }
    if (!bVar1) {
      if ((auStack_54[0] & 2) != 0) {
        FUN_ram_4812611a(&DAT_ram_4ff6c14c);
      }
      goto LAB_ram_48123ef4;
    }
joined_r0x481241f8:
    if (DAT_ram_4ff6e054 == '\0') goto LAB_ram_481241fc;
  }
  iVar2 = FUN_ram_48123a74(1);
  if (iVar2 == 0) {
    uVar8 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                            );
    uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not enable long range on AP!\r\n",uVar4,uVar3,
                     0x29a,"mode");
    return 0;
  }
LAB_ram_48123ef4:
  if (DAT_ram_4ff6e055 != '\0') {
    return 1;
  }
  DAT_ram_4ff6e055 = 1;
  iVar2 = thunk_FUN_ram_4800f5ee();
  if (iVar2 == 0) {
    return DAT_ram_4ff6e055;
  }
  DAT_ram_4ff6e055 = 0;
  uVar8 = FUN_ram_4ff21a0a();
  uVar3 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/WiFiGeneric.cpp"
                          );
  uVar4 = FUN_ram_480018de(iVar2);
  uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_wifi_start 0x%x: %s\r\n",uVar5,uVar3,0x15b,
                   "espWiFiStart",iVar2,uVar4);
  return DAT_ram_4ff6e055;
}


