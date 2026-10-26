/* Firmware entry: 0x4815f7a4 */

undefined4 FUN_ram_4815f7a4(void)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = FUN_ram_4ff44d14();
  FUN_ram_4ff44bf0(1,"sdmmc_common",
                   "E (%lu) %s: %s: host drv check_buffer_alignment not initialised, err=0x%x\n",
                   uVar1,"sdmmc_common","sdmmc_check_host_function_ptr_integrity",0x102);
  return 0x102;
}


