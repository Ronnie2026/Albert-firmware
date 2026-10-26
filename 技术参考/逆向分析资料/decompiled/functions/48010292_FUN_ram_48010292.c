/* Firmware entry: 0x48010292 */

undefined4 FUN_ram_48010292(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Attempt connection with slave: retry[%u]\n",uVar1,
                   "transport",DAT_ram_4ff6db48);
  iVar2 = FUN_ram_48021a00();
  if (iVar2 != 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Waiting for power save to be off\n",uVar1,
                     "transport");
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(700);
    iVar2 = 5;
    do {
      iVar2 = iVar2 + -1;
      if (1 < DAT_ram_4ff6db4c) break;
    } while (iVar2 != 0);
  }
  if (DAT_ram_4ff6db4c < 2) {
    iVar2 = FUN_ram_48022f34(DAT_ram_4ff6db50);
    if (iVar2 != 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"transport","E (%lu) %s: ensure_slave_bus_ready failed\n",uVar1,"transport"
                      );
      return 0xffffffff;
    }
    DAT_ram_4ff6db4c = 1;
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Waiting for esp_hosted slave to be ready\n",uVar1,
                     "transport");
    while (DAT_ram_4ff6db4c < 2) {
      iVar2 = DAT_ram_4ff6db48 + 1;
      if (99 < DAT_ram_4ff6db48) {
        uVar3 = FUN_ram_4ff44d14();
        pcVar4 = "W (%lu) %s: Failed to get ESP_Hosted slave transport up\n";
        uVar1 = 2;
LAB_ram_480103fc:
        FUN_ram_4ff44bf0(uVar1,"transport",pcVar4,uVar3,"transport");
        return 0xffffffff;
      }
      DAT_ram_4ff6db48 = iVar2;
      if (iVar2 == (iVar2 / 0x32) * 0x32) {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"transport",
                         "I (%lu) %s: Not able to connect with ESP-Hosted slave device\n",uVar1,
                         "transport");
        iVar2 = FUN_ram_48022f34(DAT_ram_4ff6db50);
        if (iVar2 != 0) {
          uVar3 = FUN_ram_4ff44d14();
          pcVar4 = "E (%lu) %s: ensure_slave_bus_ready failed\n";
          uVar1 = 1;
          goto LAB_ram_480103fc;
        }
      }
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(200);
    }
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"transport","I (%lu) %s: Transport is already up\n",uVar1,"transport");
  }
  DAT_ram_4ff6db48 = 0;
  return 0;
}


