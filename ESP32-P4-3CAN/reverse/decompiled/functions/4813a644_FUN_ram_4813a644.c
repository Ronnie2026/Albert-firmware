/* Firmware entry: 0x4813a644 */

int FUN_ram_4813a644(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x5fc,"netif_get_ip6_addr_match",
                     "netif_get_ip6_addr_match: invalid netif");
  }
  if (param_2 != (int *)0x0) {
    if (((char)param_2[4] == '\0') ||
       ((char)param_2[4] == (char)(*(char *)(param_1 + 0xea) + '\x01'))) {
      piVar1 = (int *)(param_1 + 0x4c);
      iVar2 = 0;
      do {
        if ((((*(char *)(param_1 + iVar2 + 0x94) != '\0') && (*piVar1 == *param_2)) &&
            (piVar1[1] == param_2[1])) && ((piVar1[2] == param_2[2] && (piVar1[3] == param_2[3]))))
        {
          return (int)(char)iVar2;
        }
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 6;
      } while (iVar2 != 3);
    }
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x5fd,"netif_get_ip6_addr_match",
                   "netif_get_ip6_addr_match: invalid ip6addr");
}


