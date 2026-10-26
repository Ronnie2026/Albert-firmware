/* Firmware entry: 0x48126724 */

bool FUN_ram_48126724(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  
  cVar1 = DAT_ram_4ff6e07a;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e07a == '\0') {
    uVar8 = FUN_ram_4ff21a0a();
    uVar4 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                            );
    uVar5 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): ESP-Hosted is not initialized\r\n",uVar5,uVar4,0x4a,
                     "hostedHasUpdate");
    bVar2 = false;
  }
  else {
    iVar3 = FUN_ram_4800fa44(&DAT_ram_4ff6c180);
    if (iVar3 != 0) {
      uVar8 = FUN_ram_4ff21a0a();
      uVar4 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                              );
      uVar5 = FUN_ram_480018de(iVar3);
      uVar6 = __udivdi3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): Could not get slave firmware version: %s\r\n",uVar6,
                       uVar4,0x53,"hostedHasUpdate",uVar5);
      return (bool)cVar1;
    }
    uVar7 = DAT_ram_4ff6c180 << 0x10 | DAT_ram_4ff6c184 << 8 | DAT_ram_4ff6c188;
    bVar2 = uVar7 < 0x20902;
    if (uVar7 == 0x20902) {
      bVar2 = false;
    }
  }
  return bVar2;
}


