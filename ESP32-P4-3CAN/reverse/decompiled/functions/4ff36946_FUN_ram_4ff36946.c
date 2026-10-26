/* Firmware entry: 0x4ff36946 */

void FUN_ram_4ff36946(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                     undefined4 *param_6)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(param_1 + 0x68,0xffffffff);
    if (param_2 != (int *)0x0) {
      *param_2 = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x30);
    }
    if (param_3 != (int *)0x0) {
      *param_3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x30);
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x30);
    }
    if (param_5 != (int *)0x0) {
      *param_5 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30);
    }
    if (param_6 != (undefined4 *)0x0) {
      *param_6 = *(undefined4 *)(param_1 + 0x38);
    }
    FUN_ram_4ff3ee10(param_1 + 0x68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x53e,"vRingbufferGetInfo","pxRingbuffer");
}


