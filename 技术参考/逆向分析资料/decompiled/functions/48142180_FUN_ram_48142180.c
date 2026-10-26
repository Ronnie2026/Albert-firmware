/* Firmware entry: 0x48142180 */

void FUN_ram_48142180(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x8e) != -1) {
      *(char *)(param_1 + 0x8e) = *(char *)(param_1 + 0x8e) + '\x01';
    }
    FUN_ram_48141ae6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x69c,"tcp_rexmit_rto_commit",
                   "tcp_rexmit_rto_commit: invalid pcb");
}


