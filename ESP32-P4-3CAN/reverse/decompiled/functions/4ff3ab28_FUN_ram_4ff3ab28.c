/* Firmware entry: 0x4ff3ab28 */

undefined4 FUN_ram_4ff3ab28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 0x48);
  iStack_14 = param_1;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0xd21,"prvNotifyQueueSetContainer","pxQueueSetContainer");
  }
  if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x3c)) {
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ec14(iVar1 + 0x54,0xffffffff);
    uVar2 = 0;
    if (*(uint *)(iVar1 + 0x38) < *(uint *)(iVar1 + 0x3c)) {
      uVar2 = FUN_ram_4ff3aa88(iVar1,&iStack_14,0);
      if ((*(int *)(iVar1 + 0x24) != 0) && (iVar3 = FUN_ram_4ff3d1ec(iVar1 + 0x24), iVar3 != 0)) {
        uVar2 = 1;
      }
    }
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(iVar1 + 0x54);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0xd22,"prvNotifyQueueSetContainer",
                   "pxQueueSetContainer->uxMessagesWaiting < pxQueueSetContainer->uxLength");
}


