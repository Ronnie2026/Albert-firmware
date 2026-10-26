/* Firmware entry: 0x481a7940 */

void FUN_ram_481a7940(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid < 2) {
    do {
    } while (DAT_ram_4ff6da7c == 0);
    FUN_ram_48130342();
    FUN_ram_4812fe80();
    FUN_ram_4ff3ef98();
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


