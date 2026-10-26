/* Firmware entry: 0x4815944e */

void FUN_ram_4815944e(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: %s: dns_info cannot be NULL\n",uVar1,
                   "esp_netif_lwip","esp_netif_get_dns_info");
  FUN_ram_48159410(0x5001);
  return;
}


