/* Firmware entry: 0x4813c0ca */

int FUN_ram_4813c0ca(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x19c,"tcp_close_shutdown_fin",
                     "pcb != NULL");
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 4) {
    iVar1 = FUN_ram_48141572();
    if (iVar1 == 0) {
LAB_ram_4813c11c:
      *(undefined4 *)(param_1 + 0x3c) = 5;
      FUN_ram_48141ae6(param_1);
      return 0;
    }
  }
  else if (iVar1 == 7) {
    iVar1 = FUN_ram_48141572();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 9;
      FUN_ram_48141ae6(param_1);
      return 0;
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    iVar1 = FUN_ram_48141572();
    if (iVar1 == 0) {
      FUN_ram_4813c052(param_1);
      goto LAB_ram_4813c11c;
    }
  }
  if (iVar1 == -1) {
    *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) | 8;
    return 0;
  }
  return iVar1;
}


