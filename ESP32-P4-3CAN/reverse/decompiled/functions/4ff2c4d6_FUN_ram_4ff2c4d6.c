/* Firmware entry: 0x4ff2c4d6 */

void FUN_ram_4ff2c4d6(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((undefined1 *)0xbffff < &stack0xb00ffff0) && ((undefined1 *)0x7fff < &stack0xafef7ff0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("cache_utils.c",0x7f,"spi_flash_disable_interrupts_caches_and_other_cpu",
                     "esp_task_stack_is_sane_cache_disabled()");
  }
  FUN_ram_4812fa04();
  iVar2 = mhartid;
  if (DAT_ram_4ff47f18 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("cache_utils.c",0x87,"spi_flash_disable_interrupts_caches_and_other_cpu",
                     "s_flash_op_cpu == -1");
  }
  DAT_ram_4ff47f18 = mhartid;
  iVar1 = FUN_ram_4ff3d9d2();
  if (iVar1 == 1) {
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("cache_utils.c",0x91,"spi_flash_disable_interrupts_caches_and_other_cpu",
                       "other_cpuid == 1");
    }
  }
  else {
    while( true ) {
      FUN_ram_4ff3c5a0();
      DAT_ram_4ff47f18 = mhartid;
      DAT_ram_4ff6e0af = '\0';
      iVar2 = FUN_ram_48130196(mhartid == 0,FUN_ram_4ff2c4a2);
      if (iVar2 == 0) break;
      FUN_ram_4ff3c9fa();
    }
    do {
    } while (DAT_ram_4ff6e0af == '\0');
  }
  FUN_ram_4ff20e50();
  FUN_ram_4ff2c456();
  return;
}


