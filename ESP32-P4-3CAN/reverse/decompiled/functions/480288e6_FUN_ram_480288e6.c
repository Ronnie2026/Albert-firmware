/* Firmware entry: 0x480288e6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_480288e6(int *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined8 uVar8;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return false;
  }
  cVar7 = *(char *)((int)param_1 + 0x1e);
  iVar3 = *param_1;
  if (*(byte *)(param_1 + 1) < 5) {
    if (-1 < cVar7) goto LAB_ram_4802890e;
    cVar7 = '\x12';
    if (iVar3 != 0) goto LAB_ram_48028916;
    FUN_ram_4ff3122a();
    bVar1 = *(byte *)(param_1 + 1);
    if (bVar1 != 0) {
      if (bVar1 == 3) {
        puVar6 = &DAT_ram_500cd000;
        goto LAB_ram_48028950;
      }
      if (bVar1 < 4) {
        if (bVar1 == 1) {
          puVar6 = &DAT_ram_500cb000;
          cVar7 = '\x12';
          goto LAB_ram_48028950;
        }
        puVar6 = &DAT_ram_500cc000;
        iVar3 = 0;
      }
      else if (bVar1 == 4) {
        puVar6 = &DAT_ram_500ce000;
        iVar3 = 0;
      }
      else {
        puVar6 = (undefined1 *)0x50121000;
        iVar3 = 0;
      }
      goto LAB_ram_48028966;
    }
LAB_ram_48028a84:
    iVar3 = 0;
  }
  else {
    if (cVar7 < '\0') {
      cVar7 = '\x11';
      if (iVar3 != 0) goto LAB_ram_48028916;
      FUN_ram_4ff3122a();
      bVar1 = *(byte *)(param_1 + 1);
      if (bVar1 != 0) {
        if (bVar1 == 3) {
          puVar6 = &DAT_ram_500cd000;
          iVar3 = 1;
        }
        else if (bVar1 < 4) {
          if (bVar1 == 1) {
            puVar6 = &DAT_ram_500cb000;
            iVar3 = 1;
          }
          else {
            puVar6 = &DAT_ram_500cc000;
            iVar3 = 1;
          }
        }
        else if (bVar1 == 4) {
          puVar6 = &DAT_ram_500ce000;
          iVar3 = 1;
        }
        else {
          puVar6 = (undefined1 *)0x50121000;
          iVar3 = 1;
        }
        goto LAB_ram_48028966;
      }
LAB_ram_48028b2e:
      iVar3 = 1;
      puVar6 = &DAT_ram_500ca000;
    }
    else {
LAB_ram_4802890e:
      if (iVar3 != 0) {
LAB_ram_48028916:
        while (iVar3 = FUN_ram_4ff3b5f0(iVar3,0xffffffff), iVar3 != 1) {
          iVar3 = *param_1;
        }
      }
      FUN_ram_4ff3122a();
      bVar1 = *(byte *)(param_1 + 1);
      if (bVar1 == 0) {
        if (cVar7 == '\x11') goto LAB_ram_48028b2e;
        if (cVar7 == '\x12') goto LAB_ram_48028a84;
        if (cVar7 != '\t') goto LAB_ram_48028c62;
        puVar6 = &DAT_ram_500ca000;
        iVar3 = 2;
      }
      else {
        if (bVar1 == 3) {
          puVar6 = &DAT_ram_500cd000;
        }
        else if (bVar1 < 4) {
          if (bVar1 == 1) {
            puVar6 = &DAT_ram_500cb000;
          }
          else {
            puVar6 = &DAT_ram_500cc000;
          }
        }
        else if (bVar1 == 4) {
          puVar6 = &DAT_ram_500ce000;
        }
        else {
          puVar6 = (undefined1 *)0x50121000;
        }
        if (cVar7 == '\x11') {
          iVar3 = 1;
        }
        else {
LAB_ram_48028950:
          if (cVar7 == '\x12') {
            iVar3 = 0;
          }
          else {
            if (cVar7 != '\t') goto LAB_ram_48028c62;
            iVar3 = 2;
          }
        }
      }
    }
LAB_ram_48028966:
    if (puVar6 != &DAT_ram_500ca000) {
      if (puVar6 == &DAT_ram_500cb000) {
        _DAT_ram_500e606c = _DAT_ram_500e606c & 0xfcffffff | iVar3 << 0x18;
      }
      else if (puVar6 == &DAT_ram_500cc000) {
        _DAT_ram_500e6070 = _DAT_ram_500e6070 & 0xfcffffff | iVar3 << 0x18;
      }
      else if (puVar6 == &DAT_ram_500cd000) {
        _DAT_ram_500e6074 = _DAT_ram_500e6074 & 0xfcffffff | iVar3 << 0x18;
      }
      else {
        if (puVar6 != &DAT_ram_500ce000) {
LAB_ram_48028c62:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4ff44e06();
        }
        _DAT_ram_500e6078 = _DAT_ram_500e6078 & 0xfcffffff | iVar3 << 0x18;
      }
      FUN_ram_4ff31240();
      iVar3 = FUN_ram_4800983e((char)param_1[1],param_2);
      goto joined_r0x48028ab0;
    }
  }
  _DAT_ram_500e6068 = _DAT_ram_500e6068 & 0xfcffffff | iVar3 << 0x18;
  FUN_ram_4ff31240();
  iVar3 = FUN_ram_4800983e((char)param_1[1],param_2);
joined_r0x48028ab0:
  bVar2 = iVar3 != 0;
  if (bVar2) {
    uVar8 = FUN_ram_4ff21a0a();
    uVar4 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-uart.c"
                            );
    iVar3 = param_1[1];
    uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): Setting UART%d baud rate to %ld has failed.\r\n",uVar5,
                     uVar4,0x490,"uartSetBaudRate",(char)iVar3,param_2);
    iVar3 = *param_1;
  }
  else {
    iVar3 = *param_1;
    param_1[4] = param_2;
  }
  if (iVar3 == 0) {
    return !bVar2;
  }
  FUN_ram_4ff3afa2(iVar3,0,0,0);
  return !bVar2;
}


