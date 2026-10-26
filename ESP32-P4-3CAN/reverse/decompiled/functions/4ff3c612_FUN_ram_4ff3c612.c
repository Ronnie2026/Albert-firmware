/* Firmware entry: 0x4ff3c612 */

int FUN_ram_4ff3c612(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    FUN_ram_4ff3ebfe();
    param_1 = (&DAT_ram_4ff6da3c)[mhartid];
    FUN_ram_4ff3ec08();
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("tasks.c",0xadc,"pcTaskGetName",&DAT_ram_481b3aa0);
    }
  }
  return param_1 + 0x34;
}


