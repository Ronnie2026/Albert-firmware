/* Firmware entry: 0x4813a4a4 */

void FUN_ram_4813a4a4(int param_1,undefined4 param_2,undefined4 *param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x564,"netif_ip6_addr_set",
                     "netif_ip6_addr_set: invalid netif");
  }
  if (param_3 != (undefined4 *)0x0) {
    FUN_ram_4813a2d0(param_1,param_2,*param_3,param_3[1],param_3[2],param_3[3]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x565,"netif_ip6_addr_set",
                   "netif_ip6_addr_set: invalid addr6");
}


