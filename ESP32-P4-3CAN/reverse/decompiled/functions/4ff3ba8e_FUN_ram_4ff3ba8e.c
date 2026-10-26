/* Firmware entry: 0x4ff3ba8e */

void FUN_ram_4ff3ba8e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x933,"vQueueDelete","pxQueue");
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    return;
  }
  thunk_FUN_ram_4ff209c6();
  return;
}


