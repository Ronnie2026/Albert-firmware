/* Firmware entry: 0x48169868 */

void FUN_ram_48169868(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d438 != 0) {
    iVar1 = FUN_ram_48024e36();
    if (iVar1 != 0) {
      uVar2 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(3,"wifi_init_default",
                       "I (%lu) %s: esp_wifi_internal_set_sta_ip failed with %d\n",uVar2,
                       "wifi_init_default",iVar1);
    }
    FUN_ram_4818d00c(DAT_ram_4ff6d438,param_2,param_3,param_4);
    return;
  }
  return;
}


