/* Firmware entry: 0x48025bd6 */

void FUN_ram_48025bd6(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined8 uVar7;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4811ebe0();
  if (iVar1 == 0) {
    uVar3 = FUN_ram_4812d062();
    iVar1 = FUN_ram_4812dbe2(uVar3,&iStack_14);
    if ((iVar1 == 0) && (iStack_14 == 1)) {
      iVar1 = FUN_ram_48025bd2();
      if (iVar1 == 0) {
        uVar7 = FUN_ram_4ff21a0a();
        uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
        pcVar4 = "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c";
        pcVar5 = (char *)0x0;
        cVar6 = '.';
        do {
          if ((cVar6 == '/') || (cVar6 == '\\')) {
            pcVar5 = pcVar4 + -0x481c2773;
          }
          cVar6 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
        } while (cVar6 != '\0');
        FUN_ram_48027528("[%6u][E][%s:%u] %s(): OTA verification failed! Start rollback to the previous version ...\r\n"
                         ,uVar3,"./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c"
                                + (int)pcVar5,0x140,"initArduino");
        FUN_ram_4812dbc8();
      }
      else {
        FUN_ram_4812dbbc();
      }
    }
  }
  FUN_ram_481a9ca2(&DAT_ram_481df624,3);
  iVar1 = FUN_ram_48159fc6();
  if ((iVar1 == 0x110d) || (iVar1 == 0x1110)) {
    iVar2 = FUN_ram_4812e1d6(1,2,0);
    if (iVar2 == 0) {
      uVar7 = FUN_ram_4ff21a0a();
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      pcVar4 = "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c";
      pcVar5 = (char *)0x0;
      cVar6 = '.';
      do {
        if ((cVar6 == '/') || (cVar6 == '\\')) {
          pcVar5 = pcVar4 + -0x481c2773;
        }
        cVar6 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar6 != '\0');
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not find NVS partition\r\n",uVar3,
                       "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c"
                       + (int)pcVar5,0x153,"initArduino");
      goto LAB_ram_48025ce6;
    }
    iVar1 = FUN_ram_4812e61e(iVar2,0,*(undefined4 *)(iVar2 + 0x10));
    if (iVar1 != 0) {
      uVar7 = FUN_ram_4ff21a0a();
      uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
      pcVar4 = "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c";
      pcVar5 = (char *)0x0;
      cVar6 = '.';
      do {
        if ((cVar6 == '/') || (cVar6 == '\\')) {
          pcVar5 = pcVar4 + -0x481c2773;
        }
        cVar6 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar6 != '\0');
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to format the broken NVS partition!\r\n",uVar3,
                       "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c"
                       + (int)pcVar5,0x150,"initArduino");
      goto LAB_ram_48025ce6;
    }
    iVar1 = FUN_ram_48159fc6();
  }
  if (iVar1 == 0) {
    FUN_ram_48025bd0();
    return;
  }
LAB_ram_48025ce6:
  pcVar5 = "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c";
  uVar7 = FUN_ram_4ff21a0a();
  uVar3 = __udivdi3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1000,0);
  pcVar4 = (char *)0x0;
  cVar6 = '.';
  do {
    if ((cVar6 == '/') || (cVar6 == '\\')) {
      pcVar4 = pcVar5 + -0x481c2773;
    }
    cVar6 = pcVar5[1];
    pcVar5 = pcVar5 + 1;
  } while (cVar6 != '\0');
  FUN_ram_48027528("[%6u][E][%s:%u] %s(): Failed to initialize NVS! Error: %u\r\n",uVar3,
                   "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-misc.c" +
                   (int)pcVar4,0x157,"initArduino",iVar1);
  FUN_ram_48025bd0();
  return;
}


