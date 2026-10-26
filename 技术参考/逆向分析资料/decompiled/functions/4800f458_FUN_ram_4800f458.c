/* Firmware entry: 0x4800f458 */

undefined4 FUN_ram_4800f458(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4800fb5c();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"H_API",
                     "E (%lu) %s: Transport not initialized, call esp_hosted_init() first\n",uVar2,
                     "H_API");
    FUN_ram_4ff36df4(0xffffffff,
                     "./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",200,
                     "esp_wifi_remote_init","esp_hosted_reconfigure()");
  }
  else {
    iVar1 = FUN_ram_48010292();
    if (iVar1 != 0) {
      FUN_ram_4ff36df4(iVar1,
                       "./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",
                       0x9c,"esp_hosted_reconfigure","transport_drv_reconfigure()");
    }
  }
  if (DAT_ram_4ff6db44 != '\0') {
    uVar2 = FUN_ram_4801ba6c(param_1);
    return uVar2;
  }
  uVar2 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"H_API","E (%lu) %s: ESP-Hosted link not yet up\n",uVar2,"H_API");
  return 0xffffffff;
}


