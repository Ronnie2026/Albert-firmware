/* Firmware entry: 0x4813a292 */

undefined4 FUN_ram_4813a292(void)

{
  char cVar1;
  
  cVar1 = DAT_ram_4ff6e1a4;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6e1a4 = DAT_ram_4ff6e1a4 + '\x01';
  if (cVar1 == '\0') {
    return 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x54f,"netif_alloc_client_data_id",
                   "Increase LWIP_NUM_NETIF_CLIENT_DATA in lwipopts.h");
}


