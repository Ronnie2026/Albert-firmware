/* Firmware entry: 0x4ff2c5d2 */

void FUN_ram_4ff2c5d2(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_ram_4ff47f18;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff47f18 != mhartid) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("cache_utils.c",0xc9,"spi_flash_enable_interrupts_caches_and_other_cpu",
                     "cpuid == s_flash_op_cpu");
  }
  iVar1 = FUN_ram_4ff3d9d2();
  if ((iVar1 == 1) && (iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("cache_utils.c",0xcb,"spi_flash_enable_interrupts_caches_and_other_cpu",
                     "!(xTaskGetSchedulerState() == taskSCHEDULER_NOT_STARTED && cpuid != 0)");
  }
  DAT_ram_4ff47f18 = 0xffffffff;
  FUN_ram_4ff2c472();
  iVar2 = FUN_ram_4ff3d9d2();
  if (iVar2 != 1) {
    DAT_ram_4ff6e0ae = 1;
  }
  FUN_ram_4ff20f0c();
  iVar2 = FUN_ram_4ff3d9d2();
  if (iVar2 == 1) {
    FUN_ram_4812fa16();
    return;
  }
  FUN_ram_4ff3c9fa();
  FUN_ram_4812fa16();
  return;
}


