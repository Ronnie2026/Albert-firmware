/* Firmware entry: 0x48000934 */

undefined4 FUN_ram_48000934(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff465d6();
  iVar1 = FUN_ram_4ff463e4();
  if (iVar1 == 0) {
    FUN_ram_4ff46628();
    FUN_ram_4ff44dfc(FUN_ram_4ff2c6b0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("startup_funcs.c",0x76,"__esp_system_init_fn_init_flash","flash_ret == ESP_OK");
}


