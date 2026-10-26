/* Firmware entry: 0x4ff3aeb2 */

/* WARNING: Removing unreachable block (ram,0x4ff3af20) */

int FUN_ram_4ff3aeb2(uint param_1,uint param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 <= param_1)) {
    if (param_3 != 0) {
      *(int *)param_3 = param_3;
      *(uint *)(param_3 + 0x3c) = param_1;
      *(undefined4 *)(param_3 + 0x40) = 0;
      *(undefined1 *)(param_3 + 0x44) = 1;
      FUN_ram_4ff3abd4(param_3);
      *(undefined1 *)(param_3 + 0x50) = 2;
      *(uint *)(param_3 + 0x38) = param_2;
      *(undefined4 *)(param_3 + 0x48) = 0;
      return param_3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x19f,"xQueueGenericCreateStatic","pxStaticQueue");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x372,"xQueueCreateCountingSemaphoreStatic","xHandle");
}


