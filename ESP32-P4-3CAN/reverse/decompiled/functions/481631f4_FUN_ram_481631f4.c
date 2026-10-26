/* Firmware entry: 0x481631f4 */

int FUN_ram_481631f4(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e27c == 0) {
    DAT_ram_4ff6e27c = FUN_ram_4ff3b144(1);
    return (-(uint)(DAT_ram_4ff6e27c != 0) & 0xfffffeff) + 0x101;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("sdmmc_transaction.c",0x4a,"sdmmc_host_transaction_handler_init",
                   "s_request_mutex == NULL");
}


