/* Firmware entry: 0x48145980 */

void FUN_ram_48145980(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(&DAT_ram_4ff6cf48 + param_1 * 0x18);
  if (piVar1 != (int *)0x0) {
    do {
      piVar2 = (int *)*piVar1;
      if (piVar1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/etharp.c",0x9b,"free_etharp_q",
                         "r->p != NULL");
      }
      FUN_ram_4813ac74();
      FUN_ram_48139604(10,piVar1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)0x0);
    *(undefined4 *)(&DAT_ram_4ff6cf48 + param_1 * 0x18) = 0;
  }
  (&DAT_ram_4ff6cf5c)[param_1 * 0x18] = 0;
  return;
}


