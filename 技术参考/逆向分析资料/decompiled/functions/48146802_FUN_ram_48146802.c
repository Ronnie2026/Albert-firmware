/* Firmware entry: 0x48146802 */

int * FUN_ram_48146802(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar3 = *(int **)(param_1 + 0xcc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_ram_4813956e(0xb);
    if (piVar3 != (int *)0x0) {
      if (param_2 == (int *)0x0) {
        piVar3[1] = 0;
        piVar3[2] = 0;
        *(undefined1 *)(piVar3 + 3) = 0;
        iVar2 = iRam00000000;
      }
      else {
        iVar2 = *param_2;
        piVar3[2] = 0;
        piVar3[1] = iVar2;
        *(undefined1 *)(piVar3 + 3) = 0;
        iVar2 = *param_2;
      }
      if (iVar2 == DAT_ram_4ff6e220) {
        *piVar3 = 0;
        *(int **)(param_1 + 0xcc) = piVar3;
        return piVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/igmp.c",0x112,"igmp_lookup_group",
                       "igmp_lookup_group: first group must be allsystems");
    }
  }
  else {
    piVar1 = piVar3;
    do {
      if (piVar1[1] == *param_2) {
        return piVar1;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    piVar1 = (int *)FUN_ram_4813956e(0xb);
    if (piVar1 != (int *)0x0) {
      iVar2 = *param_2;
      piVar1[2] = 0;
      piVar1[1] = iVar2;
      *(undefined1 *)(piVar1 + 3) = 0;
      if (*param_2 != DAT_ram_4ff6e220) {
        *piVar1 = *piVar3;
        *piVar3 = (int)piVar1;
        return piVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/ipv4/igmp.c",0x118,"igmp_lookup_group",
                       "igmp_lookup_group: all except first group must not be allsystems");
    }
  }
  return (int *)0x0;
}


