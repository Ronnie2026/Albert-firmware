/* Firmware entry: 0x4813a14c */

int FUN_ram_4813a14c(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x47f,"netif_loop_output",
                     "netif_loop_output: invalid netif");
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x480,"netif_loop_output",
                     "netif_loop_output: invalid pbuf");
  }
  piVar2 = (int *)FUN_ram_4813ad9a(0xe,*(undefined2 *)(param_2 + 8),0x280);
  if (piVar2 == (int *)0x0) {
    return -1;
  }
  iVar3 = FUN_ram_4813b0d2();
  iVar3 = iVar3 + (uint)*(ushort *)(param_1 + 0x104);
  if (8 < iVar3) {
    FUN_ram_4813ac74(piVar2);
    return -1;
  }
  *(short *)(param_1 + 0x104) = (short)iVar3;
  iVar3 = FUN_ram_4813b37c(piVar2,param_2);
  piVar1 = piVar2;
  if (iVar3 != 0) {
    FUN_ram_4813ac74(piVar2);
    return iVar3;
  }
  do {
    piVar4 = piVar1;
    piVar1 = (int *)*piVar4;
  } while ((int *)*piVar4 != (int *)0x0);
  FUN_ram_4814e762();
  if (*(int *)(param_1 + 0xfc) == 0) {
    *(int **)(param_1 + 0xfc) = piVar2;
    *(int **)(param_1 + 0x100) = piVar4;
    FUN_ram_4814e79e();
  }
  else {
    if (*(int **)(param_1 + 0x100) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x4ab,"netif_loop_output",
                       "if first != NULL, last must also be != NULL");
    }
    **(int **)(param_1 + 0x100) = (int)piVar2;
    *(int **)(param_1 + 0x100) = piVar4;
    if (*(char *)(param_1 + 0x106) == '\0') goto LAB_ram_4813a1dc;
    *(undefined1 *)(param_1 + 0x106) = 0;
    FUN_ram_4814e79e();
  }
  iVar3 = FUN_ram_48137856(FUN_ram_4813966e,param_1);
  if (iVar3 == 0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return 0;
  }
  FUN_ram_4814e762();
  *(undefined1 *)(param_1 + 0x106) = 1;
LAB_ram_4813a1dc:
  FUN_ram_4814e79e();
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return 0;
}


