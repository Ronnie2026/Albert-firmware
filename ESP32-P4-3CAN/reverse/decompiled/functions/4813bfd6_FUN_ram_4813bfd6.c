/* Firmware entry: 0x4813bfd6 */

void FUN_ram_4813bfd6(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x128,"tcp_backlog_delayed",
                     "pcb != NULL");
  }
  uVar2 = *(ushort *)(param_1 + 0x46);
  if (((uVar2 & 0x200) == 0) && (iVar3 = *(int *)(param_1 + 200), iVar3 != 0)) {
    cVar1 = *(char *)(iVar3 + 0x49);
    *(char *)(iVar3 + 0x49) = cVar1 + '\x01';
    if (cVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/tcp.c",0x12d,"tcp_backlog_delayed",
                       "accepts_pending != 0");
    }
    *(ushort *)(param_1 + 0x46) = uVar2 | 0x200;
  }
  return;
}


