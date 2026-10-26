/* Firmware entry: 0x4815e46a */

void FUN_ram_4815e46a(undefined4 *param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  char *__s;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = strlen(param_2);
  FUN_ram_4815e2de(param_1,sVar1 + 1);
  __s = (char *)*param_1;
  sVar1 = strlen(__s);
  sVar2 = strlen(param_2);
  FUN_ram_4ff45158(__s + sVar1,param_2,sVar2);
  return;
}


