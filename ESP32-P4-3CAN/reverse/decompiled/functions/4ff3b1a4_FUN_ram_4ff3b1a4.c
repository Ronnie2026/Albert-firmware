/* Firmware entry: 0x4ff3b1a4 */

undefined4 FUN_ram_4ff3b1a4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = FUN_ram_4ff3d9a8();
    uVar3 = 0;
    if (iVar1 == iVar2) {
      iVar1 = *(int *)(param_1 + 0xc) + -1;
      *(int *)(param_1 + 0xc) = iVar1;
      if (iVar1 == 0) {
        FUN_ram_4ff3afa2(param_1,0,0,0);
        uVar3 = 1;
      }
      else {
        uVar3 = 1;
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x2fd,"xQueueGiveMutexRecursive","pxMutex");
}


