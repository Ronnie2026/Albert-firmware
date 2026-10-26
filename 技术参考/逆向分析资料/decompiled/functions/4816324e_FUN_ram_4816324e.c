/* Firmware entry: 0x4816324e */

void FUN_ram_4816324e(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e27c != 0) {
    FUN_ram_4ff3ba8e();
    DAT_ram_4ff6e27c = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_transaction.c",0x5d,"sdmmc_host_transaction_handler_deinit",
                   "s_request_mutex");
}


