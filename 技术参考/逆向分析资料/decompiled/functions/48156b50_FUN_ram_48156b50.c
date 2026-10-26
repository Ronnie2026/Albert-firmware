/* Firmware entry: 0x48156b50 */

void FUN_ram_48156b50(undefined4 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined2 uStack_12;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = *param_2;
  uStack_1b = param_2[1];
  uStack_1a = param_2[2];
  uStack_19 = param_2[3];
  uStack_18 = *param_3;
  uStack_17 = param_3[1];
  uStack_16 = param_3[2];
  uStack_15 = param_3[3];
  uStack_14 = param_3[4];
  uStack_13 = param_3[5];
  uStack_12 = 0;
  uStack_20 = param_1;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"esp_netif_lwip",
                   "I (%lu) %s: DHCP server assigned IP to a client, IP is: %d.%d.%d.%d\n",uVar1,
                   "esp_netif_lwip",uStack_1c,uStack_1b,uStack_1a,uStack_19);
  iVar2 = FUN_ram_481a3b62(PTR_s_IP_EVENT_ram_481da530_ram_48237730,2,&uStack_20,0x10,0);
  if (iVar2 == 0) {
    return;
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                   "E (%lu) %s: dhcps cb: failed to post IP_EVENT_AP_STAIPASSIGNED (%x)\n",uVar1,
                   "esp_netif_lwip",iVar2);
  return;
}


