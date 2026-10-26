/* Firmware entry: 0x4813c8c8 */

void FUN_ram_4813c8c8(int param_1,undefined4 param_2,undefined1 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3c) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x86c,"tcp_poll",
                       "invalid socket state for poll");
    }
    *(undefined4 *)(param_1 + 0xd8) = param_2;
    *(undefined1 *)(param_1 + 0x49) = param_3;
  }
  return;
}


