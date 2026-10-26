/* Firmware entry: 0x48169640 */

void FUN_ram_48169640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [12];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_48158826();
  iVar2 = FUN_ram_48169d8e(uVar1,auStack_28);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_48169d9e(uVar1);
    if ((iVar2 == 0) || (iVar2 = FUN_ram_48169dae(uVar1,&LAB_ram_48158d64,param_1), iVar2 == 0)) {
      iVar2 = FUN_ram_48024e3a(&LAB_ram_48158cc2,&LAB_ram_48158cc6);
      if (iVar2 == 0) {
        FUN_ram_48158aee(param_1,auStack_28);
        thunk_FUN_ram_48158bfa(param_1,param_2,param_3,param_4);
      }
      else {
        uVar1 = FUN_ram_4ff44d14();
        FUN_ram_4ff44bf0(1,"wifi_init_default","E (%lu) %s: netstack cb reg failed with %d\n",uVar1,
                         "wifi_init_default",iVar2);
      }
    }
    else {
      uVar3 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"wifi_init_default",
                       "E (%lu) %s: esp_wifi_register_if_rxcb for if=%p failed with %d\n",uVar3,
                       "wifi_init_default",uVar1,iVar2);
    }
  }
  else {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"wifi_init_default","E (%lu) %s: esp_wifi_get_mac failed with %d\n",uVar1,
                     "wifi_init_default",iVar2);
  }
  return;
}


