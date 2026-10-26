/* Firmware entry: 0x4814a992 */

void FUN_ram_4814a992(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = param_1[1];
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/nd6.c",0x992,"nd6_free_q",
                     "q->p != NULL");
  }
  while( true ) {
    piVar1 = (int *)*param_1;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv6/nd6.c",0x996,"nd6_free_q",
                       "r->p != NULL");
    }
    FUN_ram_4813ac74();
    FUN_ram_48139604(0xe,param_1);
    DAT_ram_4ff6e234 = DAT_ram_4ff6e234 + -1;
    if (piVar1 == (int *)0x0) break;
    iVar2 = piVar1[1];
    param_1 = piVar1;
  }
  return;
}


