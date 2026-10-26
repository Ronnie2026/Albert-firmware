/* Firmware entry: 0x4812664a */

char FUN_ram_4812664a(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  cVar1 = DAT_ram_4ff6e07a;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e07a == '\0') {
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): ESP-Hosted is not initialized\r\n",uVar4,uVar3,0xed,
                     "hostedDeinit");
  }
  else {
    iVar2 = FUN_ram_4800f0fe();
    if (iVar2 == 0) {
      DAT_ram_4ff6e07a = 0;
      return cVar1;
    }
    uVar5 = FUN_ram_4ff21a0a();
    uVar3 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                            );
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_hosted_deinit failed!\r\n",uVar4,uVar3,0xf2,
                     "hostedDeinit");
  }
  return '\0';
}


