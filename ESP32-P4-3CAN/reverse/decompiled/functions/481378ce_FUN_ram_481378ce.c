/* Firmware entry: 0x481378ce */

undefined4 FUN_ram_481378ce(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 != (int *)0x0) && (*param_3 != 0)) {
    if (DAT_ram_4ff6e188 != 0) {
      local_20 = 0;
      uStack_1c = param_1;
      uStack_18 = param_2;
      FUN_ram_4814e4f2(&DAT_ram_4ff6e188,&local_20);
      FUN_ram_4814e408(param_3,0);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x1c6,"tcpip_send_msg_wait_sem",
                     "Invalid mbox");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/api/tcpip.c",0x1c5,"tcpip_send_msg_wait_sem",
                   "semaphore not initialized");
}


