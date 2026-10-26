/* Firmware entry: 0x4813c7ac */

int FUN_ram_4813c7ac(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    iVar1 = FUN_ram_4813956e(4);
    if (iVar1 != 0) {
      FUN_ram_4ff45158(iVar1,param_1,0x10);
      FUN_ram_4813b0e6(*(undefined4 *)(iVar1 + 4));
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x690,"tcp_seg_copy",
                   "tcp_seg_copy: invalid seg");
}


