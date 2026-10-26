/* Firmware entry: 0x4ff368f4 */

undefined4 FUN_ram_4ff368f4(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4ff3ec14(param_1 + 0x68,0xffffffff);
    uVar1 = (**(code **)(param_1 + 0x1c))(param_1);
    FUN_ram_4ff3ee10(param_1 + 0x68);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("ringbuf.c",0x4fd,"xRingbufferGetCurFreeSize","pxRingbuffer");
}


