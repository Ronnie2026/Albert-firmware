/* Firmware entry: 0x4813ccfa */

void FUN_ram_4813ccfa(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0xc0);
  if (piVar1 == (int *)0x0) {
    return;
  }
  do {
    piVar2 = (int *)*piVar1;
    if (piVar1[1] != 0) {
      FUN_ram_4813ac74();
    }
    FUN_ram_48139604(4,piVar1);
    piVar1 = piVar2;
  } while (piVar2 != (int *)0x0);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  memset((void *)(param_1 + 0x5c),0,0x20);
  return;
}


