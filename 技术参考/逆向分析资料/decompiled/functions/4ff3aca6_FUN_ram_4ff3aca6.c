/* Firmware entry: 0x4ff3aca6 */

/* WARNING: Removing unreachable block (ram,0x4ff3ad24) */

int * FUN_ram_4ff3aca6(int param_1,int param_2,int *param_3,int *param_4,undefined1 param_5)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("queue.c",0x19f,"xQueueGenericCreateStatic","pxStaticQueue");
  }
  if (param_1 != 0) {
    if (param_3 == (int *)0x0) {
      param_3 = param_4;
      if (param_2 == 0) goto LAB_ram_4ff3acca;
    }
    else if (param_2 != 0) {
LAB_ram_4ff3acca:
      param_4[0xf] = param_1;
      *param_4 = (int)param_3;
      param_4[0x10] = param_2;
      *(undefined1 *)(param_4 + 0x11) = 1;
      FUN_ram_4ff3abd4(param_4);
      *(undefined1 *)(param_4 + 0x14) = param_5;
      param_4[0x12] = 0;
      return param_4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("queue.c",0x1c8,"xQueueGenericCreateStatic","pxNewQueue");
}


