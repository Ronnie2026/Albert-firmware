/* Firmware entry: 0x48169aec */

int FUN_ram_48169aec(void)

{
  int iVar1;
  int iVar2;
  undefined *puStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_18 = 0;
  puStack_14 = PTR_PTR_ram_4ff47fa0;
  puStack_1c = &DAT_ram_4823a8ac;
  iVar1 = FUN_ram_48158934(&puStack_1c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("wifi_default.c",0x198,"esp_netif_create_default_wifi_ap","netif");
  }
  DAT_ram_4ff6d43c = iVar1;
  iVar2 = FUN_ram_4816981c(1,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_48169986();
    if (iVar2 == 0) {
      return iVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(iVar2,"/IDF/components/esp_wifi/src/wifi_default.c",0x19a,
                     "esp_netif_create_default_wifi_ap","esp_wifi_set_default_wifi_ap_handlers()");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar2,"/IDF/components/esp_wifi/src/wifi_default.c",0x199,
                   "esp_netif_create_default_wifi_ap","esp_netif_attach_wifi_ap(netif)");
}


