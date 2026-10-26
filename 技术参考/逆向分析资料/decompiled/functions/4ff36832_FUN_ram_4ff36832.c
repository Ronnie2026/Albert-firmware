/* Firmware entry: 0x4ff36832 */

void FUN_ram_4ff36832(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x4d6,"vRingbufferReturnItemFromISR","pxRingbuffer");
  }
  if (param_2 != 0) {
    FUN_ram_4ff3ec14(param_1 + 0x68,0xffffffff);
    (**(code **)(param_1 + 0x18))(param_1,param_2);
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar1 = FUN_ram_4ff3d1ec(param_1 + 0x3c);
      if ((iVar1 == 1) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
    FUN_ram_4ff3ee10(param_1 + 0x68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x4d7,"vRingbufferReturnItemFromISR","pvItem != ((void *)0)");
}


