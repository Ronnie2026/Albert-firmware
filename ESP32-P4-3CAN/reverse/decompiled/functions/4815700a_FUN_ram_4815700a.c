/* Firmware entry: 0x4815700a */

undefined4 FUN_ram_4815700a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: dhcp client stop called with NULL api\n",uVar2,
                     "esp_netif_lwip");
    uVar2 = 0x5001;
  }
  else {
    if (*(int *)(iVar1 + 0x3c) == 1) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x5002;
      }
      thunk_FUN_ram_481451e8();
      puVar4 = *(undefined4 **)(iVar1 + 8);
      iVar3 = *(int *)(iVar1 + 0x10);
      *puVar4 = 0;
      puVar4[2] = 0;
      puVar4[1] = 0;
      if ((iVar3 != 0) && (*(char *)(iVar1 + 0x44) == '\0')) {
        *(undefined1 *)(iVar1 + 0x44) = 1;
        FUN_ram_48142636(120000,FUN_ram_48157d72,iVar1);
      }
    }
    else if (*(int *)(iVar1 + 0x3c) == 2) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0x5005;
    }
    *(undefined4 *)(iVar1 + 0x3c) = 2;
    uVar2 = 0;
  }
  return uVar2;
}


