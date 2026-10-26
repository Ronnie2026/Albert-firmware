/* Firmware entry: 0x4ff363ec */

int FUN_ram_4ff363ec(uint param_1,uint param_2,int param_3,int param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x3d2,"xRingbufferCreateStatic","xBufferSize > 0");
  }
  if (2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x3d3,"xRingbufferCreateStatic","xBufferType < RINGBUF_TYPE_MAX");
  }
  if ((param_3 == 0) || (param_4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x3d4,"xRingbufferCreateStatic",
                     "pucRingbufferStorage != ((void *)0) && pxStaticRingbuffer != ((void *)0)");
  }
  if ((param_2 != 2) && ((param_1 & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("ringbuf.c",0x3d7,"xRingbufferCreateStatic",
                     "( ( ( UBaseType_t ) ( xBufferSize ) & (0x03) ) == 0 )");
  }
  FUN_ram_4ff35c76(param_1,param_2,param_4,param_3);
  *(uint *)(param_4 + 8) = *(uint *)(param_4 + 8) | 8;
  return param_4;
}


