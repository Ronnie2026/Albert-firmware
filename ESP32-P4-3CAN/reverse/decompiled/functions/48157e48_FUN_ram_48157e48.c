/* Firmware entry: 0x48157e48 */

undefined4 FUN_ram_48157e48(int param_1)

{
  undefined1 uVar1;
  uint3 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  code *pcVar8;
  uint3 *puVar9;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *(int *)(param_1 + 0xc);
  pcVar7 = *(char **)(iVar3 + 0x20);
  if (((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) && (*(int *)(pcVar7 + 4) == 1)) {
    uVar6 = FUN_ram_48159bd8(iVar3);
    return uVar6;
  }
  uVar4 = *(uint *)(iVar3 + 0x54);
  if ((((uVar4 & 0x40) == 0) &&
      (((*(int *)(iVar3 + 0x2c) == 0 || (*(int *)(iVar3 + 0x28) == 0)) ||
       (*(int *)(iVar3 + 0x18) == 0)))) ||
     (pcVar8 = *(code **)(iVar3 + 0x14), pcVar8 == (code *)0x0)) {
    uVar6 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"esp_netif_lwip",
                     "E (%lu) %s: Cannot start esp_netif: Missing mandatory configuration:\nesp_netif->driver_transmit: %p, esp_netif->driver_handle:%p, esp_netif->lwip_input_fn: %p, esp_netif->lwip_init_fn:%p\n"
                     ,uVar6,"esp_netif_lwip",*(undefined4 *)(iVar3 + 0x2c),
                     *(undefined4 *)(iVar3 + 0x28),*(undefined4 *)(iVar3 + 0x18),
                     *(undefined4 *)(iVar3 + 0x14));
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(0x103,"/IDF/components/esp_netif/lwip/esp_netif_lwip.c",0x493,
                     "esp_netif_start_api","esp_netif_config_sanity_check(esp_netif)");
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
    iVar5 = FUN_ram_4ff45080(1,0x108);
    *(int *)(iVar3 + 0x10) = iVar5;
    if (iVar5 == 0) {
      uVar6 = 0x101;
      goto LAB_ram_481580b2;
    }
  }
  if ((uVar4 & 0x20) != 0) {
    iVar5 = (*pcVar8)(0);
    if (iVar5 != 0) {
      uVar6 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: Init netif failed with  %hhd\n",uVar6,
                       "esp_netif_lwip",iVar5);
      uVar6 = 0x5009;
      goto LAB_ram_481580b2;
    }
    pcVar8 = *(code **)(iVar3 + 0x14);
  }
  iVar5 = *(int *)(iVar3 + 8);
  iVar5 = FUN_ram_48139af8(*(undefined4 *)(iVar3 + 0x10),iVar5,iVar5 + 4,iVar5 + 8,iVar3,pcVar8,
                           &DAT_ram_481377ce);
  if (iVar5 != 0) {
    iVar5 = *(int *)(iVar3 + 0x10);
    if ((*(int *)(iVar3 + 0x38) != 0) && (iVar5 != 0)) {
      *(undefined1 **)(iVar5 + 0xf0) = &LAB_ram_4815696e;
      *(undefined1 **)(iVar5 + 0xf4) = &LAB_ram_481568c6;
    }
    uVar4 = *(uint *)(iVar3 + 0x54);
    *(int *)((uint)DAT_ram_4ff47f80 * 4 + iVar5 + 0xc4) = iVar3;
    if ((uVar4 & 8) != 0) {
      FUN_ram_48142636(60000,&LAB_ram_48156c7a,iVar5);
      uVar4 = *(uint *)(iVar3 + 0x54);
      iVar5 = *(int *)(iVar3 + 0x10);
    }
    if ((uVar4 & 4) != 0) {
      FUN_ram_48139d84(iVar5);
      FUN_ram_48139f8a(iVar5);
      uVar4 = *(uint *)(iVar3 + 0x54);
    }
    if ((uVar4 & 2) == 0) {
      if (((uVar4 & 1) == 0) || (*(int *)(iVar3 + 0x3c) == 2)) {
        FUN_ram_48157d0e(iVar3,1);
      }
    }
    else if (*(int *)(iVar3 + 0x40) == 0) {
      if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0xe7) & 1) != 0)) {
        puVar9 = *(uint3 **)(iVar3 + 8);
        uVar2 = *puVar9;
        uVar1 = *(undefined1 *)((int)puVar9 + 3);
        uVar6 = *(undefined4 *)puVar9;
        uStack_14 = (undefined1)puVar9[1];
        uStack_13 = *(undefined1 *)((int)puVar9 + 5);
        uStack_12 = *(undefined1 *)((int)puVar9 + 6);
        uStack_11 = *(undefined1 *)((int)puVar9 + 7);
        FUN_ram_4818cb64(*(undefined4 *)(iVar3 + 0x24),FUN_ram_48156b50,iVar3);
        FUN_ram_4818cad6(*(undefined4 *)(iVar3 + 0x24),1,&uStack_14,4);
        iVar5 = FUN_ram_4818cb72(*(undefined4 *)(iVar3 + 0x24),iVar5,uVar6);
        if (iVar5 != 0) {
          uVar6 = FUN_ram_4ff44d14();
          FUN_ram_4ff44bf0(1,"esp_netif_lwip","E (%lu) %s: DHCP server cannot be started\n",uVar6,
                           "esp_netif_lwip");
          *(undefined4 *)(iVar3 + 0x40) = 0;
          return 0x500d;
        }
        *(undefined4 *)(iVar3 + 0x40) = 1;
        uVar6 = FUN_ram_4ff44d14();
        uStack_16 = (undefined1)(uVar2 >> 0x10);
        uStack_17 = (undefined1)(uVar2 >> 8);
        FUN_ram_4ff44bf0(3,"esp_netif_lwip",
                         "I (%lu) %s: DHCP server started on interface %s with IP: %d.%d.%d.%d\n",
                         uVar6,"esp_netif_lwip",*(undefined4 *)(iVar3 + 0x5c),uVar2 & 0xff,uStack_17
                         ,uStack_16,uVar1);
        FUN_ram_48157d0e(iVar3,1);
        return 0;
      }
    }
    else if (*(int *)(iVar3 + 0x40) == 1) {
      return 0x5004;
    }
    return 0;
  }
  FUN_ram_48156f80(iVar3);
  uVar6 = 0x5002;
LAB_ram_481580b2:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(uVar6,"/IDF/components/esp_netif/lwip/esp_netif_lwip.c",0x495,
                   "esp_netif_start_api","esp_netif_lwip_add(esp_netif)");
}


