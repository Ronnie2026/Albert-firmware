/* Firmware entry: 0x4813c844 */

void FUN_ram_4813c844(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3c) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x820,"tcp_sent",
                       "invalid socket state for sent callback");
    }
    *(undefined4 *)(param_1 + 0xcc) = param_2;
  }
  return;
}


