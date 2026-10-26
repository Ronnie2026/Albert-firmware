/* Firmware entry: 0x4813d304 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4813d304(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6e1c4 != 0) {
    iVar2 = 0;
    uVar3 = 0;
    iVar5 = DAT_ram_4ff6e1c4;
    do {
      while ((param_1 == *(int *)(iVar5 + 0x3c) &&
             (uVar4 = _DAT_ram_4ff6e1d0 - *(int *)(iVar5 + 0x4c), uVar3 <= uVar4))) {
        piVar1 = (int *)(iVar5 + 0x34);
        iVar2 = iVar5;
        uVar3 = uVar4;
        iVar5 = *piVar1;
        if (*piVar1 == 0) goto LAB_ram_4813d33a;
      }
      iVar5 = *(int *)(iVar5 + 0x34);
    } while (iVar5 != 0);
LAB_ram_4813d33a:
    if (iVar2 != 0) {
      FUN_ram_4813cf92(iVar2,0);
      return;
    }
  }
  return;
}


