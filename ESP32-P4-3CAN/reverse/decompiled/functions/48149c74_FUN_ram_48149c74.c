/* Firmware entry: 0x48149c74 */

void FUN_ram_48149c74(int param_1,int *param_2)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = *(int **)(param_1 + 0xd0);
  if (piVar1 != (int *)0x0) {
    do {
      if ((((piVar1[1] == *param_2) && (piVar1[2] == param_2[1])) && (piVar1[3] == param_2[2])) &&
         ((piVar1[4] == param_2[3] && ((char)piVar1[5] == (char)param_2[4])))) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return;
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
  }
  return;
}


