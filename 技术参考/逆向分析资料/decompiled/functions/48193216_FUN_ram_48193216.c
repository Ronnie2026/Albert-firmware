/* Firmware entry: 0x48193216 */

int FUN_ram_48193216(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
    if (param_2 != (char *)0x0) {
      while ((iVar1 != 0 && (iVar2 = strcasecmp(*(char **)(iVar1 + 4),param_2), iVar2 != 0))) {
        iVar1 = *(int *)(iVar1 + 0x3c);
      }
    }
  }
  return iVar1;
}


