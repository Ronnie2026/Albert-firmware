/* Firmware entry: 0x4800f2aa */

undefined4 FUN_ram_4800f2aa(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db45 != '\0') {
    return 0;
  }
  FUN_ram_481a9ca2("rpc_core",2);
  FUN_ram_481a9ca2("rpc_rsp",2);
  FUN_ram_481a9ca2("rpc_evt",2);
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_API",
                   "I (%lu) %s: ESP-Hosted starting. Hosted_Tasks: prio:%u, stack: %u RPC_task_stack: %u\n"
                   ,uVar1,"H_API",0x17,0x1400);
  iVar2 = FUN_ram_4800fb5c();
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4800fa90();
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff36e1a(iVar2,
                       "./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",
                       0x7f,"esp_hosted_init","esp_hosted_set_default_config()");
    }
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(2,"H_API",
                     "W (%lu) %s: Transport already initialized, skipping initialization\n",uVar1,
                     "H_API");
  }
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_API","I (%lu) %s: ** %s **\n",uVar1,"H_API","add_esp_wifi_remote_channels");
  uStack_14 = 0;
  uStack_18 = 1;
  uVar1 = FUN_ram_4800f22a(&uStack_18,&uStack_1c,&LAB_ram_48024d94);
  FUN_ram_48024e02(0,uVar1,uStack_1c);
  uStack_18 = 2;
  uVar1 = FUN_ram_4800f22a(&uStack_18,&uStack_1c,&LAB_ram_48024d94);
  FUN_ram_48024e02(1,uVar1,uStack_1c);
  iVar2 = FUN_ram_48010238(FUN_ram_4800f0c2);
  if (iVar2 == 0) {
    iVar2 = thunk_FUN_ram_48012e4c();
    if (iVar2 == 0) {
      FUN_ram_4801b976();
      DAT_ram_4ff6db45 = '\x01';
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(iVar2,
                     "./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",0x83
                     ,"esp_hosted_init","rpc_init()");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar2,"./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",
                   0x82,"esp_hosted_init","setup_transport(transport_active_cb)");
}


