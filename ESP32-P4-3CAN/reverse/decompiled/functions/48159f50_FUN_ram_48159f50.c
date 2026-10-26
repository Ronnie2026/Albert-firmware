/* Firmware entry: 0x48159f50 */

int FUN_ram_48159f50(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [8];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4815d800();
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_ram_4815d7e0(auStack_14);
  iVar1 = FUN_ram_4812e8c4();
  if (iVar1 == DAT_ram_48237800) {
    uVar2 = FUN_ram_4815d276();
    iVar1 = FUN_ram_4815d48a(uVar2,param_1);
    FUN_ram_4815d7f0(auStack_14);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("nvs_api.cpp",0x84,"esp_err_t nvs_flash_init_partition(const char*)",
                   "nvs::Page::SEC_SIZE == esp_partition_get_main_flash_sector_size()");
}


