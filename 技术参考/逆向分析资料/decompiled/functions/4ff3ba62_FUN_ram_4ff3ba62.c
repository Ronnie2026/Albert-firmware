/* Firmware entry: 0x4ff3ba62 */

undefined4 FUN_ram_4ff3ba62(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x928,"uxQueueMessagesWaitingFromISR","pxQueue");
}


