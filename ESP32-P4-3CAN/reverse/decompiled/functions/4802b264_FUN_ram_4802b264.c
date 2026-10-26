/* Firmware entry: 0x4802b264 */

int FUN_ram_4802b264(char *param_1,int param_2)

{
  char *pcVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1[0xf] < '\0') {
    if ((param_1[0xf] & 0x7fU) == 0) {
      return -1;
    }
  }
  else {
    if (*(int *)(param_1 + 8) == 0) {
      return -1;
    }
    param_1 = *(char **)param_1;
  }
  pcVar1 = strchr(param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return (int)pcVar1 - (int)param_1;
}


