/* Firmware entry: 0x4813c906 */

void FUN_ram_4813c906(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4814de5a(param_1,*(undefined2 *)(param_1 + 0x42),param_1 + 0x18,
                     *(undefined2 *)(param_1 + 0x44));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x8d8,"tcp_next_iss",
                   "tcp_next_iss: invalid pcb");
}


