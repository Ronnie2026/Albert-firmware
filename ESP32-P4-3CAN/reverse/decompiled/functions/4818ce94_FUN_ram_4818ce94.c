/* Firmware entry: 0x4818ce94 */

void FUN_ram_4818ce94(undefined4 param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4815905a();
  uVar2 = FUN_ram_4815963c(param_1);
  if ((uVar2 & 1) != 0) {
    iVar3 = FUN_ram_48158ea4(param_1,&iStack_40);
    if (iVar3 == 0) {
      if (iStack_40 == 0) {
        FUN_ram_48158e2e(param_1);
        return;
      }
      if (iStack_40 != 2) {
        return;
      }
      FUN_ram_481591b4(param_1,&iStack_3c);
      FUN_ram_48159144(param_1,&iStack_30);
      iVar3 = FUN_ram_48159240(&iStack_3c);
      if (iVar3 == 0) {
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_netif_handlers","E (%lu) %s: invalid static ip\n",uVar4,
                         "esp_netif_handlers");
      }
      else {
        uStack_14 = 0;
        if (((iStack_3c != iStack_30) || (iStack_38 != iStack_2c)) || (iStack_34 != iStack_28)) {
          uStack_14 = 1;
        }
        iStack_20 = iStack_3c;
        iStack_1c = iStack_38;
        iStack_18 = iStack_34;
        uStack_24 = param_1;
        FUN_ram_48159250(param_1,&iStack_3c);
        puVar1 = PTR_s_IP_EVENT_ram_481da530_ram_48237730;
        uVar4 = FUN_ram_48159652(param_1,1);
        iVar3 = FUN_ram_481a3b62(puVar1,uVar4,&uStack_24,0x14,0);
        if (iVar3 == 0) {
          return;
        }
        uVar4 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp_netif_handlers","E (%lu) %s: %s %d %s ret=0x%X\n",uVar4,
                         "esp_netif_handlers","esp_netif_action_connected",0x47,
                         "esp_event_post in esp_netif_action_connected",iVar3);
      }
    }
    else {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_netif_handlers","E (%lu) %s: %s %d %s ret=0x%X\n",uVar4,
                       "esp_netif_handlers","esp_netif_action_connected",0x2f,
                       "connected action: dhcpc failed",iVar3);
    }
  }
  return;
}


