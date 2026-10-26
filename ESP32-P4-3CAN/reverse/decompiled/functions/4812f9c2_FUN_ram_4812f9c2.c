/* Firmware entry: 0x4812f9c2 */

void FUN_ram_4812f9c2(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e0b0 = FUN_ram_4ff3b144(4);
  if (DAT_ram_4ff6e0b0 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("cache_utils.c",0x46,"spi_flash_init_lock","s_flash_op_mutex != NULL");
}


