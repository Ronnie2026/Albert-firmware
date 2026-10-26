/* Firmware entry: 0x48029c2c */

void FUN_ram_48029c2c(int param_1,uint param_2,undefined4 param_3,int param_4,int param_5,
                     undefined4 param_6,uint param_7,undefined4 param_8)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < *(byte *)(param_1 + 0x10)) {
    uVar8 = FUN_ram_4ff21a0a();
    uVar4 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                            );
    uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Serial number is invalid, please use a number from 0 to %u\r\n"
                     ,uVar7,uVar4,0x14c,"begin",5);
    return;
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    uVar8 = FUN_ram_4ff21a0a();
    uVar4 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                            );
    uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): MUTEX Lock failed. Can\'t begin.\r\n",uVar7,uVar4,0x152,
                     "begin");
    return;
  }
  iVar2 = FUN_ram_48026cf4();
  iVar3 = FUN_ram_48026d08(*(undefined1 *)(param_1 + 0x10));
  if (-1 < param_4) {
    iVar2 = param_4;
  }
  if (param_5 < 0) {
    param_5 = iVar3;
  }
  do {
    iVar3 = FUN_ram_4ff3b5f0(*(undefined4 *)(param_1 + 0x48),0xffffffff);
  } while (iVar3 != 1);
  iVar3 = FUN_ram_48026d28(*(undefined4 *)(param_1 + 0x14));
  if (iVar3 == 0) {
    iVar3 = FUN_ram_48026cf4(*(undefined1 *)(param_1 + 0x10));
    iVar5 = FUN_ram_48026d08(*(undefined1 *)(param_1 + 0x10));
    cVar1 = *(char *)(param_1 + 0x10);
    if (cVar1 == '\x01') {
      if ((iVar2 < 0) && (param_5 < 0)) {
        iVar2 = 0xb;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        param_5 = iVar5;
        if (iVar5 < 0) {
          param_5 = 10;
        }
      }
    }
    else if (cVar1 == '\x05') {
      if ((char)((byte)iVar2 & (byte)param_5) < '\0') {
        iVar2 = 0xf;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        param_5 = iVar5;
        if (iVar5 < 0) {
          param_5 = 0xe;
        }
      }
    }
    else {
      if (cVar1 != '\0') {
        if (iVar2 < 0) goto LAB_ram_48029de6;
        goto LAB_ram_48029c96;
      }
      if ((char)((byte)iVar2 & (byte)param_5) < '\0') {
        iVar2 = 0x26;
        if (-1 < iVar3) {
          iVar2 = iVar3;
        }
        param_5 = iVar5;
        if (iVar5 < 0) {
          param_5 = 0x25;
        }
      }
    }
LAB_ram_48029c9a:
    uVar6 = 0x2580;
    if (param_2 != 0) {
      uVar6 = param_2;
    }
    iVar3 = FUN_ram_48026d34(cVar1,uVar6,param_3,iVar2,param_5,*(undefined4 *)(param_1 + 0x18),
                             *(undefined4 *)(param_1 + 0x1c),param_6,param_8);
    if ((iVar3 != 0) && (*(int *)(param_1 + 0x44) != 0)) {
      FUN_ram_4ff3c10a();
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    iVar3 = FUN_ram_48028c6c(*(undefined1 *)(param_1 + 0x10),uVar6,param_3,iVar2,param_5,
                             *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),param_6
                             ,param_8);
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      uVar8 = FUN_ram_4ff21a0a();
      uVar4 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                              );
      uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART driver failed to start. Please check the logs.\r\n"
                       ,uVar7,uVar4,0x1c1,"begin");
    }
    else {
      if (param_2 == 0) {
        FUN_ram_480292b0();
        iVar3 = FUN_ram_48025ba6();
        while( true ) {
          uVar6 = FUN_ram_48025ba6();
          if ((uVar6 - iVar3 <= uVar6) && (param_7 <= uVar6 - iVar3)) {
            uVar8 = FUN_ram_4ff21a0a();
            uVar4 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                                    );
            uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
            FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not detect baudrate. Serial data at the port must be present within the timeout for detection to be possible\r\n"
                             ,uVar7,uVar4,0x1d7,"begin");
            uVar4 = 0;
            *(undefined4 *)(param_1 + 0x14) = 0;
            goto LAB_ram_48029d00;
          }
          iVar5 = FUN_ram_48029310(*(undefined4 *)(param_1 + 0x14));
          if (iVar5 != 0) break;
          thunk_FUN_ram_4ff3ef0e();
        }
        thunk_FUN_ram_4ff3c2b6(100);
        iVar2 = FUN_ram_48028c6c(*(undefined1 *)(param_1 + 0x10),iVar5,param_3,iVar2,param_5,
                                 *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                                 param_6,param_8);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 == 0) {
          uVar8 = FUN_ram_4ff21a0a();
          uVar4 = FUN_ram_48025e50(
                                  "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                                  );
          uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
          FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART driver failed to start. Please check the logs.\r\n"
                           ,uVar7,uVar4,0x1d2,"begin");
          uVar4 = *(undefined4 *)(param_1 + 0x48);
          goto LAB_ram_48029d38;
        }
      }
      if (((*(int *)(param_1 + 0x28) != 0) || (*(int *)(param_1 + 0x38) != 0)) &&
         (*(int *)(param_1 + 0x44) == 0)) {
        FUN_ram_48029b96(param_1,param_1);
      }
      uVar4 = *(undefined4 *)(param_1 + 0x14);
LAB_ram_48029d00:
      FUN_ram_480294d2(uVar4,*(undefined1 *)(param_1 + 0x41));
      if (*(char *)(param_1 + 0x42) == '\0') {
        cVar1 = '\x01';
        if (((*(byte *)(param_1 + 0x10) < 5) && (cVar1 = 'x', param_2 < 0xe101)) &&
           (cVar1 = '\x01', *(int *)(param_1 + 0x28) != 0)) {
          cVar1 = (-(*(char *)(param_1 + 0x40) != '\0') & 0x77U) + 1;
        }
        FUN_ram_480286e2(*(undefined4 *)(param_1 + 0x14),cVar1);
        *(char *)(param_1 + 0x42) = cVar1;
      }
    }
  }
  else {
    if (-1 < iVar2) {
LAB_ram_48029c96:
      cVar1 = *(char *)(param_1 + 0x10);
      goto LAB_ram_48029c9a;
    }
LAB_ram_48029de6:
    if (-1 < param_5) goto LAB_ram_48029c96;
    uVar8 = FUN_ram_4ff21a0a();
    uVar4 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/HardwareSerial.cpp"
                            );
    uVar7 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): No RX/TX pins defined. Please set RX/TX pins.\r\n",uVar7
                     ,uVar4,0x1b0,"begin");
  }
  uVar4 = *(undefined4 *)(param_1 + 0x48);
LAB_ram_48029d38:
  FUN_ram_4ff3afa2(uVar4,0,0,0);
  return;
}


