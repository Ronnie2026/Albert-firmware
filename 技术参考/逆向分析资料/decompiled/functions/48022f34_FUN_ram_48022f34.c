/* Firmware entry: 0x48022f34 */

int FUN_ram_48022f34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_28;
  int iStack_24;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_28 = 0;
  iStack_24 = 0x36;
  iVar1 = FUN_ram_4800fb7c(&uStack_28);
  if (iVar1 == 0) {
    if (iStack_24 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("sdio_drv.c",0x5c7,"ensure_slave_bus_ready","reset_pin.pin != -1");
    }
    FUN_ram_48021a04();
    iVar1 = FUN_ram_48021a00();
    if (iVar1 == 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(2,"H_SDIO_DRV","W (%lu) %s: Reset slave using GPIO[%u]\n",uVar2,"H_SDIO_DRV",
                       iStack_24);
      iVar1 = iStack_24;
      uVar2 = uStack_28;
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x8c))(uStack_28,iStack_24,2);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x9c))(uVar2,iVar1,1);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(10);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x9c))(uVar2,iVar1,0);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(10);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x9c))(uVar2,iVar1,1);
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(0x5dc);
      iVar1 = FUN_ram_48021fc0(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Card init success, TRANSPORT_RX_ACTIVE\n",uVar2
                         ,"H_SDIO_DRV");
        FUN_ram_48010196(1);
        return 0;
      }
      uVar2 = FUN_ram_4ff44d14();
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Host woke up from power save\n",uVar2,
                       "H_SDIO_DRV");
      (**(code **)(PTR_PTR_ram_4ff47e40 + 0x28))(500);
      DAT_ram_4ff48618 = 0xffffffff;
      DAT_ram_4ff48620 = 0;
      DAT_ram_4ff4861c = 0;
      if (DAT_ram_4ff6dba8 != 0) {
        do {
          iVar1 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6dba8,0);
        } while (iVar1 == 0);
      }
      FUN_ram_48010196(1);
      iVar1 = FUN_ram_48021fc0(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(3,"H_SDIO_DRV","I (%lu) %s: Card init success, TRANSPORT_RX_ACTIVE\n",uVar2
                         ,"H_SDIO_DRV");
        FUN_ram_48021a3c();
        return 0;
      }
      uVar2 = FUN_ram_4ff44d14();
    }
    FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: card init failed\n",uVar2,"H_SDIO_DRV");
  }
  else {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"H_SDIO_DRV","E (%lu) %s: Unable to get RESET config for transport\n",uVar2,
                     "H_SDIO_DRV");
    iVar1 = -1;
  }
  return iVar1;
}


