/* Firmware entry: 0x4813c80a */

void FUN_ram_4813c80a(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x3c) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x80c,"tcp_recv",
                       "invalid socket state for recv callback");
    }
    *(undefined4 *)(param_1 + 0xd0) = param_2;
  }
  return;
}


