/* Firmware entry: 0x4ff367a4 */

void FUN_ram_4ff367a4(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x4c4,"vRingbufferReturnItem","pxRingbuffer");
  }
  if (param_2 != 0) {
    FUN_ram_4ff3ec14(param_1 + 0x68,0xffffffff);
    (**(code **)(param_1 + 0x18))(param_1,param_2);
    if ((*(int *)(param_1 + 0x3c) != 0) && (iVar1 = FUN_ram_4ff3d1ec(param_1 + 0x3c), iVar1 == 1)) {
      FUN_ram_4ff3ef0e();
    }
    FUN_ram_4ff3ee10(param_1 + 0x68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x4c5,"vRingbufferReturnItem","pvItem != ((void *)0)");
}


