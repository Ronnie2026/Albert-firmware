/* Firmware entry: 0x4ff3ad64 */

undefined4 FUN_ram_4ff3ad64(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x1db,"xQueueGenericGetStaticBuffers","pxQueue");
  }
  if (param_3 != (int *)0x0) {
    if (*(char *)(param_1 + 0x11) != '\x01') {
      return 0;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *param_1;
    }
    *param_3 = (int)param_1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x1dc,"xQueueGenericGetStaticBuffers","ppxStaticQueue");
}


