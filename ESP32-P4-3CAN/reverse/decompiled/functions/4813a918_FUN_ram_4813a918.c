/* Firmware entry: 0x4813a918 */

void FUN_ram_4813a918(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4ff44e88("/IDF/components/lwip/lwip/src/core/netif.c",0x71e,"netif_remove_ext_callback",
                     "callback must be != NULL");
  }
  if (DAT_ram_4ff6e1b0 != 0) {
    if (DAT_ram_4ff6e1b0 == param_1) {
      DAT_ram_4ff6e1b0 = *(int *)(param_1 + 4);
      *(undefined4 *)(param_1 + 4) = 0;
      return;
    }
    iVar3 = *(int *)(DAT_ram_4ff6e1b0 + 4);
    iVar2 = DAT_ram_4ff6e1b0;
    while (iVar1 = iVar3, iVar1 != 0) {
      if (param_1 == iVar1) {
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 4);
        break;
      }
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 4);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


