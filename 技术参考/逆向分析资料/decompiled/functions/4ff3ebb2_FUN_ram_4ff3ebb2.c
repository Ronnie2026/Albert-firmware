/* Firmware entry: 0x4ff3ebb2 */

void FUN_ram_4ff3ebb2(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(&DAT_ram_4ff6da74 + mhartid * 4) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("port.c",0x1da,"vPortAssertIfInISR","xPortInIsrContext() == 0");
}


