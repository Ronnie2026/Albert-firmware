/* Firmware entry: 0x48012e4c */

undefined4 FUN_ram_48012e4c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6db80 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x68))(10);
  if (DAT_ram_4ff6db80 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: sem init failed, exiting\n",uVar2,"rpc_core");
  }
  else {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 0x6c))(DAT_ram_4ff6db80,0);
    iVar1 = FUN_ram_4801c150();
    if (iVar1 == 0) {
      DAT_ram_4ff6db90 = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x3c))(3,8);
      DAT_ram_4ff6db8c = (**(code **)(PTR_PTR_ram_4ff47e40 + 0x3c))(5,4);
      if ((DAT_ram_4ff6db90 == 0) || (DAT_ram_4ff6db8c == 0)) {
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Failed to create app rpc msg Q\n",uVar2,
                         "rpc_core");
      }
      else {
        DAT_ram_4ff6db88 =
             (**(code **)(PTR_PTR_ram_4ff47e40 + 0x20))
                       (&DAT_ram_481b71b8,0x17,0x1400,&PTR_s__ram_481b7524_0x13_ram_480124fc,0,
                        *(code **)(PTR_PTR_ram_4ff47e40 + 0x20));
        DAT_ram_4ff6db84 =
             (**(code **)(PTR_PTR_ram_4ff47e40 + 0x20))
                       (&DAT_ram_481b71c0,0x17,0x1400,&PTR_s__ram_481b7524_0x13_ram_48011ea2,0,
                        *(code **)(PTR_PTR_ram_4ff47e40 + 0x20));
        if ((DAT_ram_4ff6db88 != 0) && (DAT_ram_4ff6db84 != 0)) {
          gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
          DAT_ram_4ff6db7c = 1;
          return 0;
        }
        uVar2 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Thread creation failed for rpc_rx_thread\n",uVar2
                         ,"rpc_core");
      }
    }
    else {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"rpc_core","E (%lu) %s: Failed to serial_init\n",uVar2,"rpc_core");
    }
  }
  if (DAT_ram_4ff6db7c != 0) {
    FUN_ram_48011cb0();
  }
  return 0xffffffff;
}


