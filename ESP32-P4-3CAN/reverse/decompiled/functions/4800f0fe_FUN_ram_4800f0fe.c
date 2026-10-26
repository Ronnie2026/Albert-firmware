/* Firmware entry: 0x4800f0fe */

void FUN_ram_4800f0fe(void)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(3,"H_API","I (%lu) %s: ESP-Hosted deinit\n\n",uVar1,"H_API");
  FUN_ram_4801b944();
  iVar2 = thunk_FUN_ram_48012e3a();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff36e1a(iVar2,
                     "./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",0x8e
                     ,"esp_hosted_deinit","rpc_deinit()");
  }
  iVar2 = FUN_ram_480101ee();
  if (iVar2 == 0) {
    DAT_ram_4ff6db45 = 0;
    DAT_ram_4ff6db44 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff36e1a(iVar2,"./managed_components/espressif__esp_hosted/host/api/src/esp_hosted_api.c",
                   0x8f,"esp_hosted_deinit","teardown_transport()");
}


