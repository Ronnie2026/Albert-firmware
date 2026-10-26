/* Firmware entry: 0x4802b18e */

bool FUN_ram_4802b18e(char *param_1,char *param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[0xf] < '\0') {
    if ((param_1[0xf] & 0x7fU) == 0) goto LAB_ram_4802b1be;
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
LAB_ram_4802b1be:
      if (param_2 != (char *)0x0) {
        return *param_2 == '\0';
      }
      return true;
    }
    param_1 = *(char **)param_1;
  }
  if (param_2 != (char *)0x0) {
    iVar1 = FUN_ram_4ff453ae();
    return iVar1 == 0;
  }
  return *param_1 == '\0';
}


