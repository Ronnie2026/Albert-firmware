/* Firmware entry: 0x48006872 */

int FUN_ram_48006872(int param_1)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_4ff3d626(0,0);
  if (piVar1 != (int *)0x0) {
    for (piVar1 = (int *)*piVar1; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (param_1 == *piVar1) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return piVar1[1];
      }
    }
  }
  return 0;
}


