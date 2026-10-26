/* Firmware entry: 0x4ff3b3d2 */

undefined4 FUN_ram_4ff3b3d2(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x54e,"xQueueGiveFromISR","pxQueue");
  }
  if (param_1[0x10] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x552,"xQueueGiveFromISR","pxQueue->uxItemSize == 0");
  }
  if ((*param_1 == 0) && (param_1[2] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x557,"xQueueGiveFromISR",
                     "!( ( pxQueue->pcHead == ((void *)0) ) && ( pxQueue->u.xSemaphore.xMutexHolder != ((void *)0) ) )"
                    );
  }
  FUN_ram_4ff3ec14(param_1 + 0x15,0xffffffff);
  uVar2 = 0;
  if ((uint)param_1[0xf] <= (uint)param_1[0xe]) goto LAB_ram_4ff3b41e;
  param_1[0xe] = param_1[0xe] + 1;
  if (param_1[0x12] == 0) {
    if (param_1[9] != 0) {
      iVar1 = FUN_ram_4ff3d1ec(param_1 + 9);
      if (iVar1 == 0) {
        uVar2 = 1;
        goto LAB_ram_4ff3b41e;
      }
      goto LAB_ram_4ff3b412;
    }
  }
  else {
    iVar1 = FUN_ram_4ff3ab28(param_1);
    if (iVar1 != 0) {
LAB_ram_4ff3b412:
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = 1;
      }
    }
  }
  uVar2 = 1;
LAB_ram_4ff3b41e:
  FUN_ram_4ff3ee10(param_1 + 0x15);
  return uVar2;
}


