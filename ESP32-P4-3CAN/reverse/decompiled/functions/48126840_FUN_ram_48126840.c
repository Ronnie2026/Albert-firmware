/* Firmware entry: 0x48126840 */

undefined4 FUN_ram_48126840(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [12];
  uint uStack_5c;
  uint uStack_54;
  uint uStack_4c;
  uint uStack_44;
  uint uStack_3c;
  uint uStack_34;
  uint uStack_2c;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e07a = 1;
  FUN_ram_48024102(auStack_68);
  uStack_5c = (uint)DAT_ram_4ff47f00;
  uStack_54 = (uint)DAT_ram_4ff47f01;
  uStack_4c = (uint)DAT_ram_4ff47f02;
  uStack_44 = (uint)DAT_ram_4ff47f03;
  uStack_3c = (uint)DAT_ram_4ff47f04;
  uStack_34 = (uint)DAT_ram_4ff47f05;
  uStack_2c = (uint)DAT_ram_4ff47f06;
  iVar1 = FUN_ram_4800fc00(auStack_68);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4800f2aa();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4800f198();
      if (iVar1 == 0) {
        FUN_ram_48126724();
        return 1;
      }
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                              );
      uVar3 = FUN_ram_480018de(iVar1);
      uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_hosted_connect_to_slave failed: %s\r\n",uVar4,
                       uVar2,0xd6,"hostedInit",uVar3);
      DAT_ram_4ff6e07a = 0;
    }
    else {
      uVar5 = FUN_ram_4ff21a0a();
      uVar2 = FUN_ram_48025e50(
                              "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                              );
      uVar3 = FUN_ram_480018de(iVar1);
      uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
      FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_hosted_init failed: %s\r\n",uVar4,uVar2,0xcf,
                       "hostedInit",uVar3);
      DAT_ram_4ff6e07a = 0;
    }
  }
  else {
    uVar5 = FUN_ram_4ff21a0a();
    uVar2 = FUN_ram_48025e50(
                            "./managed_components/espressif__arduino-esp32/cores/esp32/esp32-hal-hosted.c"
                            );
    uVar3 = FUN_ram_480018de(iVar1);
    uVar4 = __udivdi3((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),1000,0);
    FUN_ram_48027528("[%6u][E][%s:%u] %s(): esp_hosted_sdio_set_config failed: %s\r\n",uVar4,uVar2,
                     0xca,"hostedInit",uVar3);
  }
  return 0;
}


