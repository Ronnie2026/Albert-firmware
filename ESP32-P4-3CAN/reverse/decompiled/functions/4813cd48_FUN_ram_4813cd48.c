/* Firmware entry: 0x4813cd48 */

void FUN_ram_4813cd48(int param_1)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4813c052();
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_ram_4813ac74();
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    FUN_ram_4813ccfa(param_1);
  }
  *(undefined2 *)(param_1 + 0x7c) = 0xffff;
  piVar1 = (int *)*(int *)(param_1 + 0xb8);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (piVar1[1] != 0) {
      FUN_ram_4813ac74();
    }
    FUN_ram_48139604(4,piVar1);
    piVar1 = (int *)iVar2;
  }
  piVar1 = (int *)*(int *)(param_1 + 0xbc);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (piVar1[1] != 0) {
      FUN_ram_4813ac74();
    }
    FUN_ram_48139604(4,piVar1);
    piVar1 = (int *)iVar2;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  return;
}


