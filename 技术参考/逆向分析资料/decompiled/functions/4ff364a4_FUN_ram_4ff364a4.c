/* Firmware entry: 0x4ff364a4 */

undefined4 FUN_ram_4ff364a4(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x419,"xRingbufferSend","pxRingbuffer");
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("ringbuf.c",0x41a,"xRingbufferSend","pvItem != ((void *)0) || xItemSize == 0"
                      );
    }
    uVar1 = 1;
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
LAB_ram_4ff364ba:
      uVar1 = FUN_ram_4ff35f94(param_1,param_2,0,param_3,param_4);
      return uVar1;
    }
  }
  else if (*(uint *)(param_1 + 4) < param_3) {
    uVar1 = 0;
  }
  else {
    if (((*(uint *)(param_1 + 8) & 2) == 0) || (param_3 != 0)) goto LAB_ram_4ff364ba;
    uVar1 = 1;
  }
  return uVar1;
}


