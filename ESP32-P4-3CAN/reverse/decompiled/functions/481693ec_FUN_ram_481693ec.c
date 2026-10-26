/* Firmware entry: 0x481693ec */

char * FUN_ram_481693ec(int *param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  size_t sVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  pcVar1 = (char *)*param_1;
  if (param_2 == (char *)0x0) {
    gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
    return pcVar1;
  }
  if ((int)param_3 < 0) {
    param_3 = strlen(param_2);
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)FUN_ram_4ff45080(1,param_3 + 1);
    pcVar3 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      uVar4 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"http_utils","E (%lu) %s: %s(%d): Memory exhausted\n",uVar4,"http_utils",
                       "http_utils_append_string",0x4d);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return (char *)0x0;
    }
  }
  else {
    sVar2 = strlen(pcVar1);
    pcVar1 = (char *)thunk_FUN_ram_4ff20790(pcVar1,sVar2 + param_3 + 1);
    if (pcVar1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e88("http_utils.c",0x48,"http_utils_append_string","old_str");
    }
    pcVar1[sVar2 + param_3] = '\0';
    pcVar3 = pcVar1 + sVar2;
  }
  FUN_ram_4ff45158(pcVar3,param_2,param_3);
  *param_1 = (int)pcVar1;
  return pcVar1;
}


