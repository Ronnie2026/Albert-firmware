/* Firmware entry: 0x48159b08 */

undefined1 * FUN_ram_48159b08(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  puVar2 = (undefined1 *)FUN_ram_4ff45080(1,0x10);
  if (puVar2 == (undefined1 *)0x0) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: cannot allocate lwip_ppp_ctx\n",uVar4,
                     "esp-netif_lwip-ppp","esp_netif_new_ppp");
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = 1;
    *(undefined4 *)(puVar2 + 4) = 1;
    pbVar3 = (byte *)FUN_ram_4814d5c2(uVar4,FUN_ram_48159ab0,FUN_ram_481596e6,param_1);
    *(byte **)(puVar2 + 0xc) = pbVar3;
    if (pbVar3 == (byte *)0x0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp",
                       "E (%lu) %s: %s: lwIP PPP connection cannot be created\n",uVar4,
                       "esp-netif_lwip-ppp","esp_netif_new_ppp");
      puVar2 = (undefined1 *)0x0;
    }
    else {
      bVar1 = *pbVar3;
      *(undefined1 **)(param_1 + 0x20) = puVar2;
      *pbVar3 = bVar1 | 1;
    }
  }
  return puVar2;
}


