/* Firmware entry: 0x48139540 */

void FUN_ram_48139540(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_48139476();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/memp.c",0x150,"memp_malloc_pool",
                   "invalid pool desc");
}


