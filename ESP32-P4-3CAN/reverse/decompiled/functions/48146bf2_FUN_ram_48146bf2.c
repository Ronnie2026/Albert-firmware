/* Firmware entry: 0x48146bf2 */

void FUN_ram_48146bf2(int param_1,int *param_2)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0xcc);
  if (piVar1 != (int *)0x0) {
    do {
      if (piVar1[1] == *param_2) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}


