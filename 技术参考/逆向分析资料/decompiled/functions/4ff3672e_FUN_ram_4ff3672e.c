/* Firmware entry: 0x4ff3672e */

undefined4 FUN_ram_4ff3672e(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x49e,"xRingbufferReceiveUpTo","pxRingbuffer && pxItemSize");
  }
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x49f,"xRingbufferReceiveUpTo",
                     "pxRingbuffer->uxRingbufferFlags & ( ( UBaseType_t ) 2 )");
  }
  if ((param_4 != 0) &&
     (iVar1 = FUN_ram_4ff36288(param_1,auStack_14,0,param_2,0,param_4,param_3), iVar1 == 1)) {
    return auStack_14[0];
  }
  return 0;
}


