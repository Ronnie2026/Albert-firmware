/* Firmware entry: 0x4814e408 */

undefined4 FUN_ram_4814e408(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 0) {
    iVar1 = FUN_ram_4ff3b5f0(*param_1,0xffffffff);
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0xa6,"sys_arch_sem_wait",
                       "taking semaphore failed");
    }
  }
  else {
    iVar1 = FUN_ram_4ff3b5f0(*param_1,param_2 + 1);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (iVar1 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/port/freertos/sys_arch.c",0xb4,"sys_arch_sem_wait",
                       "taking semaphore failed");
    }
  }
  return 0;
}


