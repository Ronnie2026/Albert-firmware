/* Firmware entry: 0x48125970 */

void FUN_ram_48125970(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  
  iVar2 = DAT_ram_4ff6e06c;
  cVar1 = DAT_ram_4ff47efc;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e06c == 0) {
    return;
  }
  iVar6 = *param_1;
  if (7 < iVar6 - 0x6eU) {
    return;
  }
  if (iVar6 == 0x6e) {
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 6;
    FUN_ram_4812468c(&DAT_ram_4ff6c118);
    iVar2 = thunk_FUN_ram_4800f8fa();
    if (iVar2 == 0) {
      return;
    }
    uVar8 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar4 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_wifi_set_ps failed\r\n",uVar4,uVar3,0x73,
                     "_onStaArduinoEvent");
    return;
  }
  if (iVar6 == 0x6f) {
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 0xfe;
    return;
  }
  if (iVar6 == 0x70) {
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 0;
    uVar7 = FUN_ram_48126e34(iVar2);
    if ((uVar7 & 0x20) == 0) {
      return;
    }
    iVar2 = FUN_ram_481594e8(*(undefined4 *)(DAT_ram_4ff6e06c + 4));
    if (iVar2 == 0) {
      return;
    }
    uVar8 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/libraries/WiFi/src/STA.cpp"
                            );
    uVar4 = FUN_ram_480018de(iVar2);
    uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to enable IPv6 Link Local on STA:  0x%x: %s\r\n",
                     uVar5,uVar3,0x7d,"_onStaArduinoEvent",iVar2,uVar4);
    return;
  }
  if (iVar6 != 0x71) {
    if (iVar6 == 0x73) {
      *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 3;
      return;
    }
    if (iVar6 != 0x75) {
      return;
    }
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 0;
    return;
  }
  uVar7 = (uint)*(byte *)((int)param_1 + 0x2b);
  if (uVar7 == 0) {
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 6;
    uVar7 = 1;
LAB_ram_48125a44:
    if (DAT_ram_4ff47efc == '\0') {
      if (*(char *)(iVar2 + 0x28) == '\0') {
        if (uVar7 != 0xcb) {
          return;
        }
LAB_ram_48125b4e:
        *(undefined4 *)(iVar2 + 0x2c) = 4;
        return;
      }
      if (uVar7 != 0x17) {
        if (uVar7 < 0x18) {
          if (0x11 < uVar7) {
            return;
          }
          if ((0x3c2feU >> (uVar7 & 0x1f) & 1) == 0) {
            return;
          }
        }
        else if (uVar7 < 0xca) {
          if (uVar7 != 0x31) {
            return;
          }
        }
        else if (4 < (uVar7 + 0x35 & 0xff)) {
          return;
        }
      }
      goto LAB_ram_48125a92;
    }
  }
  else if (uVar7 == 0xc9) {
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 1;
joined_r0x48125b5c:
    if (cVar1 == '\0') {
LAB_ram_48125b5e:
      if (*(char *)(iVar2 + 0x28) == '\0') {
        return;
      }
      goto LAB_ram_48125a92;
    }
  }
  else {
    if (uVar7 != 0xca) {
      if ((uVar7 == 200) || (uVar7 == 0xcc)) {
        *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 5;
        goto joined_r0x48125b5c;
      }
      if (uVar7 != 2) {
        *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 6;
        if (uVar7 == 8) {
          return;
        }
        goto LAB_ram_48125a44;
      }
      if (DAT_ram_4ff47efc != '\0') goto LAB_ram_48125a8e;
      goto LAB_ram_48125b5e;
    }
    if (DAT_ram_4ff47efc == '\0') goto LAB_ram_48125b4e;
    *(undefined4 *)(DAT_ram_4ff6e06c + 0x2c) = 6;
  }
LAB_ram_48125a8e:
  DAT_ram_4ff47efc = '\0';
LAB_ram_48125a92:
  FUN_ram_4812536e(iVar2,0,0);
  FUN_ram_48125064(DAT_ram_4ff6e06c);
  return;
}


