/* Firmware entry: 0x481569d6 */

void FUN_ram_481569d6(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  char *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  if (unaff_s0 == unaff_s1) {
    pcVar2 = "add";
  }
  else {
    pcVar2 = "remove";
  }
  FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: Failed to %s multicast filter for IPv4\n",uVar1,
                   "esp_netif_lwip",pcVar2);
  FUN_ram_481569cc(0xfffffffa);
  return;
}


