/* Firmware entry: 0x4ff3ae5a */

int FUN_ram_4ff3ae5a(int *param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != (int *)0x0) {
    FUN_ram_4ff3ec14(param_1 + 0x15,0xffffffff);
    iVar1 = 0;
    if (*param_1 == 0) {
      iVar1 = param_1[2];
    }
    FUN_ram_4ff3ee10(param_1 + 0x15);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x2c2,"xQueueGetMutexHolder","xSemaphore");
}


