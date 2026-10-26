/* Firmware entry: 0x4813d14e */

undefined4 FUN_ram_4813d14e(undefined4 param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    FUN_ram_4813cf92(param_2,1);
    return 0xfffffff3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x316,"tcp_accept_null",
                   "tcp_accept_null: invalid pcb");
}


