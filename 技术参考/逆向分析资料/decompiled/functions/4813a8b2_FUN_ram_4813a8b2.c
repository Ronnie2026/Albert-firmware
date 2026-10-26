/* Firmware entry: 0x4813a8b2 */

void FUN_ram_4813a8b2(int *param_1,int param_2)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x70b,"netif_add_ext_callback",
                     "callback must be != NULL");
  }
  if (param_2 != 0) {
    *param_1 = param_2;
    piVar1 = param_1;
    param_1[1] = (int)DAT_ram_4ff6e1b0;
    DAT_ram_4ff6e1b0 = piVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x70c,"netif_add_ext_callback",
                   "fn must be != NULL");
}


