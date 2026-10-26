/* Firmware entry: 0x4800f198 */

undefined4 FUN_ram_4800f198(void)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_API","I (%lu) %s: ESP-Hosted Try to communicate with ESP-Hosted slave\n\n",
                   uVar1,"H_API");
  iVar2 = FUN_ram_4800fb5c();
  if (iVar2 == 0) {
    uVar1 = FUN_ram_4ff44d14();
    FUN_ram_4ff44bf0(1,"H_API",
                     "E (%lu) %s: Transport not initialized, call esp_hosted_init() first\n",uVar1,
                     "H_API");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = FUN_ram_48010292();
    if (iVar2 != 0) {
      FUN_ram_4ff36df4(iVar2,
                       "./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",
                       0x9c,"esp_hosted_reconfigure","transport_drv_reconfigure()");
    }
    uVar1 = 0;
  }
  return uVar1;
}


