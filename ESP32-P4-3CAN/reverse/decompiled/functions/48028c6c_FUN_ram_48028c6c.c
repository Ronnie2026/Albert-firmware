/* Firmware entry: 0x48028c6c */

int * FUN_ram_48028c6c(uint param_1,int param_2,uint param_3,int param_4,int param_5,uint param_6,
                      uint param_7,uint param_8,byte param_9)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  int iStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (5 < param_1) {
    uVar13 = FUN_ram_4ff21a0a();
    uVar5 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    uVar6 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART number is invalid, please use number from 0 to %u\r\n"
                     ,uVar6,uVar5,0x27d,"uartBegin",5);
    return (int *)0x0;
  }
  piVar10 = (int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
  if (*piVar10 == 0) {
    iVar4 = FUN_ram_4ff3b144(1);
    *piVar10 = iVar4;
    if (iVar4 == 0) {
      uVar13 = FUN_ram_4ff21a0a();
      uVar5 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                              );
      uVar6 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): HAL LOCK error.\r\n",uVar6,uVar5,0x292,"uartBegin");
      return (int *)0x0;
    }
  }
  iVar4 = FUN_ram_4800c594(param_1);
  uVar11 = param_3 >> 2 & 3;
  uVar12 = param_3 >> 4 & 3;
  uVar2 = param_3 & 3;
  if (iVar4 != 0) {
    iVar3 = param_1 * 0x24;
    if ((((*(ushort *)(&DAT_ram_4ff48724 + iVar3) == param_6) &&
         (*(ushort *)(&DAT_ram_4ff48726 + iVar3) == param_7)) &&
        ((byte)(&DAT_ram_4ff48728)[iVar3] == param_8)) && ((&DAT_ram_4ff48729)[iVar3] == param_9)) {
      if (*(int *)(&DAT_ram_4ff4871c + iVar3) == param_2) {
        iVar3 = *(int *)(&DAT_ram_4ff4870c + iVar3);
        if (iVar3 == 0) {
LAB_ram_48028ffc:
          uVar9 = *(uint *)(&DAT_ram_4ff48720 + param_1 * 0x24);
          if ((uVar9 >> 2 & 3) == uVar11) {
LAB_ram_48029022:
            if ((uVar9 & 3) != uVar2) {
              iVar4 = FUN_ram_4800970e(param_1,uVar2);
              if (iVar4 != 0) {
                uVar13 = FUN_ram_4ff21a0a();
                uVar6 = FUN_ram_48025e50(
                                        "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                        );
                uVar7 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
                pcVar8 = "[%6u][E][%s:%u] %s(): UART%d changing parity failed.\r\n";
                uVar5 = 0x2b7;
                goto LAB_ram_480291b4;
              }
              uVar9 = *(uint *)(&DAT_ram_4ff48720 + param_1 * 0x24);
            }
            if (((uVar9 >> 4 & 0xc3) == uVar12) ||
               (iVar4 = FUN_ram_4800959e(param_1,uVar12), iVar4 == 0)) {
              *(uint *)(&DAT_ram_4ff48720 + param_1 * 0x24) = param_3;
              if ((0 < param_4) && ((char)(&DAT_ram_4ff48718)[param_1 * 0x24] != param_4)) {
                iVar4 = FUN_ram_4802754c(param_1,(int)(char)(&DAT_ram_4ff48718)[param_1 * 0x24],
                                         0xffffffff,0xffffffff);
                iVar3 = FUN_ram_48027d50(param_1,param_4,0xffffffff,0xffffffff);
                if ((iVar4 == 0) || (iVar3 == 0)) {
                  uVar13 = FUN_ram_4ff21a0a();
                  uVar5 = FUN_ram_48025e50(
                                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                          );
                  uVar6 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
                  FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d changing RX pin failed.\r\n",uVar6,
                                   uVar5,0x2cc,"uartBegin",param_1);
                  iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
                  goto joined_r0x48029156;
                }
              }
              if (param_5 < 1) {
                iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
                goto joined_r0x48029166;
              }
              if ((char)(&DAT_ram_4ff48719)[param_1 * 0x24] != param_5) {
                iVar4 = FUN_ram_4802754c(param_1,0xffffffff,
                                         (int)(char)(&DAT_ram_4ff48719)[param_1 * 0x24],0xffffffff);
                iVar3 = FUN_ram_48027d50(param_1,0xffffffff,param_5,0xffffffff);
                if ((iVar4 == 0) || (iVar3 == 0)) {
                  uVar13 = FUN_ram_4ff21a0a();
                  uVar6 = FUN_ram_48025e50(
                                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                          );
                  uVar7 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
                  pcVar8 = "[%6u][E][%s:%u] %s(): UART%d changing TX pin failed.\r\n";
                  uVar5 = 0x2d5;
                  goto LAB_ram_480291b4;
                }
              }
              iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
joined_r0x48029166:
              if (iVar4 != 0) {
                FUN_ram_4ff3afa2(iVar4,0,0,0);
                return piVar10;
              }
              return piVar10;
            }
            uVar13 = FUN_ram_4ff21a0a();
            uVar6 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                    );
            uVar7 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
            pcVar8 = "[%6u][E][%s:%u] %s(): UART%d changing stop bits failed.\r\n";
            uVar5 = 0x2bf;
          }
          else {
            iVar4 = FUN_ram_48009460(param_1,uVar11);
            if (iVar4 == 0) {
              uVar9 = *(uint *)(&DAT_ram_4ff48720 + param_1 * 0x24);
              goto LAB_ram_48029022;
            }
            uVar13 = FUN_ram_4ff21a0a();
            uVar6 = FUN_ram_48025e50(
                                    "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                                    );
            uVar7 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
            pcVar8 = "[%6u][E][%s:%u] %s(): UART%d changing data length failed.\r\n";
            uVar5 = 0x2af;
          }
LAB_ram_480291b4:
          FUN_ram_48027528(pcVar8,uVar7,uVar6,uVar5,"uartBegin",param_1);
          iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
        }
        else {
LAB_ram_48028f4c:
          while (iVar3 = FUN_ram_4ff3b5f0(iVar3,0xffffffff), iVar3 != 1) {
            iVar3 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
          }
          if (iVar4 != 0) goto LAB_ram_48028ffc;
          iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
        }
joined_r0x48029156:
        if (iVar4 != 0) {
          FUN_ram_4ff3afa2(iVar4,0,0,0);
        }
      }
      else {
        iVar4 = FUN_ram_480288e6(piVar10,param_2);
        iVar3 = *(int *)(&DAT_ram_4ff4870c + iVar3);
        if (iVar3 != 0) goto LAB_ram_48028f4c;
        if (iVar4 != 0) goto LAB_ram_48028ffc;
      }
    }
    FUN_ram_480287cc(param_1);
  }
  uStack_50 = 0;
  uStack_44 = 0;
  if (param_1 == 5) {
    if (0xf < param_9) {
      param_9 = 10;
    }
    iStack_48 = (int)DAT_ram_4ff487de;
    uStack_4c = (uint)param_9;
    if (iStack_48 < 0) {
      iStack_48 = 0x11;
    }
  }
  else {
    if (0x7f < param_9) {
      param_9 = 0x7a;
    }
    iStack_48 = (int)(char)(&DAT_ram_4ff4872a)[param_1 * 0x24];
    uStack_4c = (uint)param_9;
    if (iStack_48 < 0) {
      iStack_48 = 0x12;
    }
  }
  iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
  iStack_60 = param_2;
  uStack_5c = uVar11;
  uStack_58 = uVar2;
  uStack_54 = uVar12;
  if (iVar4 != 0) {
    while (iVar4 = FUN_ram_4ff3b5f0(iVar4,0xffffffff), iVar4 != 1) {
      iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
    }
  }
  iVar4 = param_1 * 0x24;
  iVar3 = FUN_ram_4800bfbe(param_1,param_6,param_7,0x14,iVar4 + 0x4ff48714,0);
  if ((iVar3 == 0) && (iVar3 = FUN_ram_4800aa56(param_1,&iStack_60), iVar3 == 0)) {
    if (param_8 == 0) {
      iVar3 = FUN_ram_48009d7a(param_1,0);
      if (iVar3 != 0) {
        iVar4 = *(int *)(&DAT_ram_4ff4870c + iVar4);
        goto joined_r0x48028f2a;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(&DAT_ram_4ff4872c + iVar4) | 0x24;
      iVar3 = FUN_ram_48009d7a(param_1,uVar2);
      if (iVar3 != 0) {
        iVar4 = *(int *)(&DAT_ram_4ff4870c + iVar4);
        goto joined_r0x48028f2a;
      }
    }
    iVar4 = param_1 * 0x24;
    *(uint *)(&DAT_ram_4ff4872c + iVar4) = uVar2;
    *(int *)(&DAT_ram_4ff4871c + iVar4) = param_2;
    *(uint *)(&DAT_ram_4ff48720 + iVar4) = param_3;
    (&DAT_ram_4ff48728)[iVar4] = (char)param_8;
    (&DAT_ram_4ff48729)[iVar4] = param_9;
    *(short *)(&DAT_ram_4ff48724 + iVar4) = (short)param_6;
    *(short *)(&DAT_ram_4ff48726 + iVar4) = (short)param_7;
    (&DAT_ram_4ff48711)[iVar4] = 0;
    (&DAT_ram_4ff48712)[iVar4] = 0;
    if (*(int *)(&DAT_ram_4ff4870c + iVar4) != 0) {
      FUN_ram_4ff3afa2(*(int *)(&DAT_ram_4ff4870c + iVar4),0,0,0);
    }
    iVar4 = FUN_ram_480281a2(param_1,param_4,param_5,0xffffffff);
    if (iVar4 != 0) {
      FUN_ram_4802714a(piVar10,1);
      return piVar10;
    }
  }
  else {
    iVar4 = *(int *)(&DAT_ram_4ff4870c + param_1 * 0x24);
joined_r0x48028f2a:
    if (iVar4 != 0) {
      FUN_ram_4ff3afa2(iVar4,0,0,0);
    }
  }
  uVar13 = FUN_ram_4ff21a0a();
  uVar5 = FUN_ram_48025e50(
                          "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                          );
  uVar1 = (&DAT_ram_4ff48710)[param_1 * 0x24];
  uVar6 = __udivdi3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),1000,0);
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): UART%d initialization error.\r\n",uVar6,uVar5,0x345,
                   "uartBegin",uVar1);
  FUN_ram_480287cc(param_1);
  return (int *)0x0;
}


