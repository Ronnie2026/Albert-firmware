/* Firmware entry: 0x48024e82 */

undefined4 FUN_ram_48024e82(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(3,"esp_wifi_remote","I (%lu) %s: %s: sta: %p\n",uVar1,"esp_wifi_remote",
                     "esp_wifi_internal_reg_rxcb",param_2);
    DAT_ram_4ff6dbe4 = param_2;
    uVar1 = DAT_ram_4ff6dbe8;
  }
  else {
    uVar1 = param_2;
    if (param_1 != 1) {
      return 0xffffffff;
    }
  }
  DAT_ram_4ff6dbe8 = uVar1;
  return 0;
}


