/* Firmware entry: 0x48144df4 */

void FUN_ram_48144df4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc4) != 0) {
      if ((*(byte *)(*(int *)(param_1 + 0xc4) + 7) & 2) == 0) {
        FUN_ram_481393fc();
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/dhcp.c",0x358,"dhcp_cleanup",
                   "netif != NULL");
}


