/* Firmware entry: 0x4813c75e */

void FUN_ram_4813c75e(int *param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*param_1;
    if (param_1[1] != 0) {
      FUN_ram_4813ac74();
    }
    FUN_ram_48139604(4,param_1);
    param_1 = piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}


