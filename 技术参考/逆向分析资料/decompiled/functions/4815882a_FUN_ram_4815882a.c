/* Firmware entry: 0x4815882a */

undefined4 FUN_ram_4815882a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [28];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4814e864(4);
  if (iVar1 == 0) {
    FUN_ram_48132f46(auStack_20,0x10);
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4814de06(uVar2,auStack_20);
    iVar1 = FUN_ram_4814e30e(auStack_24,0);
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                       "E (%lu) %s: esp netif cannot create tcpip_init semaphore\n",uVar2,
                       "esp_netif_lwip");
      return 0xffffffff;
    }
    FUN_ram_481379bc(FUN_ram_48156a1c,auStack_24);
    FUN_ram_4814e408(auStack_24,0);
    FUN_ram_4814e48a(auStack_24);
  }
  if ((DAT_ram_4ff6e258 == 0) && (iVar1 = FUN_ram_4814e30e(&DAT_ram_4ff6e258,0), iVar1 != 0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: esp netif api sync sem init fail\n",uVar2,
                     "esp_netif_lwip");
    uVar2 = 0xffffffff;
  }
  else if ((DAT_ram_4ff6e254 == 0) && (iVar1 = FUN_ram_4814e30e(&DAT_ram_4ff6e254,1), iVar1 != 0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: esp netif api lock sem init fail\n",uVar2,
                     "esp_netif_lwip");
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


