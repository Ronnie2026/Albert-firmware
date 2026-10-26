/* Firmware entry: 0x481397ec */

void FUN_ram_481397ec(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x390,"netif_issue_reports",
                     "netif_issue_reports: invalid netif");
  }
  if ((*(byte *)(param_1 + 0xe7) & 5) != 5) {
    return;
  }
  if ((param_2 & 1) != 0) {
    if ((*(int *)(param_1 + 4) != 0) && ((*(byte *)(param_1 + 0xe7) & 0x20) != 0)) {
      FUN_ram_48146b40();
    }
    if ((param_2 & 2) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  FUN_ram_48149bb6(param_1);
  return;
}


