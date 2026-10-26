/* Firmware entry: 0x481596e6 */

void FUN_ram_481596e6(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iStack_38;
  int aiStack_34 [6];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  puVar3 = *(undefined1 **)(param_3 + 0x60);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_ram_481df390;
  }
  iVar1 = *(int *)(param_3 + 0x20);
  aiStack_34[1] = 0;
  aiStack_34[2] = 0;
  aiStack_34[3] = 0;
  aiStack_34[4] = 0;
  iStack_38 = param_3;
  aiStack_34[0] = param_3;
  if (*(int *)(iVar1 + 4) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("esp_netif_lwip_ppp.c",0x3c,"on_ppp_status_changed",
                     "obj->base.netif_type == PPP_LWIP_NETIF");
  }
  if (param_2 == 6) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp-netif_lwip-ppp","I (%lu) %s: %s: Connection lost\n",uVar2,
                     "esp-netif_lwip-ppp",puVar3);
    FUN_ram_48157d0e(iStack_38,4);
    iVar1 = FUN_ram_481a3b62(PTR_s_IP_EVENT_ram_481da530_ram_48237730,
                             *(undefined4 *)(iStack_38 + 0x4c),aiStack_34,0x14,0);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: esp_event_post failed with code %d\n",
                     uVar2,"esp-netif_lwip-ppp",puVar3,iVar1);
    return;
  }
  if (param_2 < 7) {
    if (param_2 == 3) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Invalid I/O device for PPP\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
    if (3 < param_2) {
      if (param_2 == 4) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Unable to allocate resources\n",
                         uVar2,"esp-netif_lwip-ppp",puVar3);
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"esp-netif_lwip-ppp","I (%lu) %s: %s: User interrupt\n",uVar2,
                         "esp-netif_lwip-ppp",puVar3);
      }
      goto LAB_ram_481597a8;
    }
    if (param_2 == 1) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Invalid parameter\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
    if (param_2 == 2) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Unable to open PPP session\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
    if (param_2 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"esp-netif_lwip-ppp","I (%lu) %s: %s: Connected\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
  }
  else {
    if (param_2 == 10) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Idle Timeout\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
    if (param_2 < 0xb) {
      if (param_2 == 8) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Failed to meet protocol\n",uVar2,
                         "esp-netif_lwip-ppp",puVar3);
      }
      else if (param_2 == 9) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Connection timeout\n",uVar2,
                         "esp-netif_lwip-ppp",puVar3);
      }
      else {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Failed authentication challenge\n",
                         uVar2,"esp-netif_lwip-ppp",puVar3);
      }
      goto LAB_ram_481597a8;
    }
    if (param_2 == 0xb) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Max connect time reached\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
    if (param_2 == 0xc) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Loopback detected\n",uVar2,
                       "esp-netif_lwip-ppp",puVar3);
      goto LAB_ram_481597a8;
    }
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: Unknown error code %d\n",uVar2,
                   "esp-netif_lwip-ppp",puVar3,param_2);
LAB_ram_481597a8:
  if ((*(char *)(iVar1 + 9) != '\0') &&
     (iVar1 = FUN_ram_481a3b62("NETIF_PPP_STATUS",param_2,&iStack_38,4,0), iVar1 != 0)) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp-netif_lwip-ppp","E (%lu) %s: %s: esp_event_post failed with code %d\n",
                     uVar2,"esp-netif_lwip-ppp",puVar3,iVar1);
  }
  return;
}


