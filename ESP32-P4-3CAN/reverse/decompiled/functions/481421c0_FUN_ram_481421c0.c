/* Firmware entry: 0x481421c0 */

void FUN_ram_481421c0(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp_out.c",0x6b1,"tcp_rexmit_rto",
                     "tcp_rexmit_rto: invalid pcb");
  }
  iVar1 = FUN_ram_48141622();
  if (iVar1 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x8e) != -1) {
    *(char *)(param_1 + 0x8e) = *(char *)(param_1 + 0x8e) + '\x01';
  }
  FUN_ram_48141ae6(param_1);
  return;
}


