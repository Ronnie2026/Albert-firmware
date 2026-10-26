/* Firmware entry: 0x4ff36650 */

undefined4 FUN_ram_4ff36650(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      iVar1 = FUN_ram_4ff36288(param_1,auStack_14,0,param_2,0,0,param_3);
      uVar2 = 0;
      if (iVar1 == 1) {
        uVar2 = auStack_14[0];
      }
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x45b,"xRingbufferReceive",
                     "(pxRingbuffer->uxRingbufferFlags & ( ( UBaseType_t ) 1 )) == 0");
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x45a,"xRingbufferReceive","pxRingbuffer && pxItemSize");
}


