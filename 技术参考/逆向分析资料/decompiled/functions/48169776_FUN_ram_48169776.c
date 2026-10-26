/* Firmware entry: 0x48169776 */

void FUN_ram_48169776(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = DAT_ram_4ff6d438;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d438 == 0) {
    return;
  }
  uVar1 = FUN_ram_48158826(DAT_ram_4ff6d438);
  iVar2 = FUN_ram_48169d9e();
  if ((iVar2 == 0) && (iVar3 = FUN_ram_48169dae(uVar1,&LAB_ram_48158d64,iVar3), iVar3 != 0)) {
    uVar4 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"wifi_init_default",
                     "E (%lu) %s: esp_wifi_register_if_rxcb for if=%p failed with %d\n",uVar4,
                     "wifi_init_default",uVar1,iVar3);
    return;
  }
  FUN_ram_4818ce94(DAT_ram_4ff6d438,param_2,param_3,param_4);
  return;
}


