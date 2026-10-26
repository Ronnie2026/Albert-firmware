/* Firmware entry: 0x48150988 */

void FUN_ram_48150988(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x336,"netconn_free",
                     "PCB must be deallocated outside this function");
  }
  FUN_ram_48150a18();
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_ram_48139604(7,param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x340,"netconn_free",
                     "acceptmbox must be deallocated before calling this function");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/api_msg.c",0x33d,"netconn_free",
                   "recvmbox must be deallocated before calling this function");
}


