/* Firmware entry: 0x48169dae */

undefined4 FUN_ram_48169dae(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    if (*(int *)(param_1 + 4) == param_3) {
      iVar4 = *(int *)(param_1 + 8);
      (&DAT_ram_4ff6d450)[iVar4] = param_2;
      if (iVar4 == 0) {
        puVar3 = &LAB_ram_48169c66;
      }
      else {
        if (iVar4 != 1) {
          uVar2 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"wifi_netif","E (%lu) %s: Unknown wifi interface id if=%d\n",uVar2,
                           "wifi_netif",iVar4);
          return 0x106;
        }
        puVar3 = &LAB_ram_48169c82;
      }
      (&DAT_ram_4ff6d444)[iVar4] = param_3;
      iVar1 = FUN_ram_48024e82(iVar4,puVar3);
      if (iVar1 != 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"wifi_netif",
                         "E (%lu) %s: esp_wifi_internal_reg_rxcb for if=%d failed with %d\n",uVar2,
                         "wifi_netif",iVar4,iVar1);
        return 0x103;
      }
      return 0;
    }
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"wifi_netif",
                     "E (%lu) %s: Invalid argument: supplied netif=%p does not equal to interface netif=%p\n"
                     ,uVar2,"wifi_netif",param_3,*(undefined4 *)(param_1 + 4));
  }
  return 0x102;
}


