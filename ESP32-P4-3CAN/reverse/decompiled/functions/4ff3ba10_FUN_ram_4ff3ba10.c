/* Firmware entry: 0x4ff3ba10 */

int FUN_ram_4ff3ba10(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(param_1 + 0x54,0xffffffff);
    iVar2 = *(int *)(param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x3c);
    FUN_ram_4ff3ee10(param_1 + 0x54);
    return iVar1 - iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x917,"uxQueueSpacesAvailable","pxQueue");
}


