/* Firmware entry: 0x4815680c */

int FUN_ram_4815680c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = DAT_ram_4ff6e250;
  if (param_1 != 0) {
    do {
      if (piVar1 == (int *)0x0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0;
      }
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[1];
    } while (param_1 != iVar2);
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return *piVar1;
}


