/* Firmware entry: 0x4813c052 */

void FUN_ram_4813c052(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x13f,"tcp_backlog_accepted",
                     "pcb != NULL");
  }
  uVar1 = *(ushort *)(param_1 + 0x46);
  if (((uVar1 & 0x200) != 0) && (iVar2 = *(int *)(param_1 + 200), iVar2 != 0)) {
    if (*(char *)(iVar2 + 0x49) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x143,"tcp_backlog_accepted",
                       "accepts_pending != 0");
    }
    *(char *)(iVar2 + 0x49) = *(char *)(iVar2 + 0x49) + -1;
    *(ushort *)(param_1 + 0x46) = uVar1 & 0xfdff;
  }
  return;
}


