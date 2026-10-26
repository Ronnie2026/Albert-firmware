/* Firmware entry: 0x4ff3af60 */

void FUN_ram_4ff3af60(uint param_1,uint param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 <= param_1)) {
    iVar1 = FUN_ram_4ff3add0(param_1,0,2);
    if (iVar1 != 0) {
      *(uint *)(iVar1 + 0x38) = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x395,"xQueueCreateCountingSemaphore","xHandle");
}


