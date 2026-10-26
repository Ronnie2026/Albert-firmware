/* Firmware entry: 0x4ff36a52 */

void FUN_ram_4ff36a52(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x5a8,"xRingbufferGetStaticBuffer",
                     "pxRingbuffer && ppucRingbufferStorage && ppxStaticRingbuffer");
  }
  if ((*(uint *)(param_1 + 8) & 8) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    FUN_ram_4ff209c6();
    FUN_ram_4ff209c6(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x5de,"vRingbufferDeleteWithCaps","xResult == ( ( BaseType_t ) 1 )");
}


