/* Firmware entry: 0x481570ac */

undefined4 FUN_ram_481570ac(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    return 0x102;
  }
  if (*(int *)(iVar2 + 0x3c) != 1) {
    puVar3 = *(undefined4 **)(iVar2 + 8);
    iVar1 = *(int *)(iVar2 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    FUN_ram_48138d9c(0,0);
    FUN_ram_48138d9c(1,0);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      if ((*(byte *)(iVar1 + 0xe7) & 1) != 0) {
        *(undefined1 *)(iVar1 + 0x18) = 0;
        *(undefined1 *)(iVar1 + 0x30) = 0;
        *(undefined1 *)(iVar1 + 0x48) = 0;
        iVar4 = *(int *)(iVar2 + 0x10);
        *(undefined4 *)(iVar1 + 4) = 0;
        *(undefined4 *)(iVar1 + 8) = 0;
        *(undefined4 *)(iVar1 + 0xc) = 0;
        *(undefined4 *)(iVar1 + 0x10) = 0;
        *(undefined1 *)(iVar1 + 0x14) = 0;
        *(undefined4 *)(iVar1 + 0x1c) = 0;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        *(undefined1 *)(iVar1 + 0x2c) = 0;
        *(undefined4 *)(iVar1 + 0x34) = 0;
        *(undefined4 *)(iVar1 + 0x38) = 0;
        *(undefined4 *)(iVar1 + 0x3c) = 0;
        *(undefined4 *)(iVar1 + 0x40) = 0;
        *(undefined1 *)(iVar1 + 0x44) = 0;
        if (iVar4 != 0) {
          if (*(char *)(iVar2 + 0x44) != '\0') {
            FUN_ram_4814268a(FUN_ram_48157d72,iVar2);
          }
          *(undefined1 *)(iVar2 + 0x44) = 1;
          FUN_ram_48142636(120000,FUN_ram_48157d72,iVar2);
        }
        iVar1 = FUN_ram_48144e42(iVar1);
        uVar5 = 1;
        if (iVar1 != 0) {
          uVar5 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: dhcp client start failed\n",uVar5,
                           "esp_netif_lwip");
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          return 0x5003;
        }
      }
    }
    *(undefined4 *)(iVar2 + 0x3c) = uVar5;
    return 0;
  }
  return 0x5004;
}


