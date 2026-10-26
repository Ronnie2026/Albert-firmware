/* Firmware entry: 0x4819b714 */

char * FUN_ram_4819b714(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
    cVar1 = *param_2;
    pcVar2 = param_1;
    param_2 = param_2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
}


