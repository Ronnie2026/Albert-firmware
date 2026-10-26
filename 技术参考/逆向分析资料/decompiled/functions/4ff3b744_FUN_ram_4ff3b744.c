/* Firmware entry: 0x4ff3b744 */

undefined4 FUN_ram_4ff3b744(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar1 = FUN_ram_4ff3d9a8();
    if ((iVar3 == iVar1) || (iVar1 = FUN_ram_4ff3b5f0(param_1,param_2), uVar2 = 0, iVar1 != 0)) {
      uVar2 = 1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x335,"xQueueTakeMutexRecursive","pxMutex");
}


