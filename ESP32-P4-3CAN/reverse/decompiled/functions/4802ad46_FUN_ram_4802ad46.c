/* Firmware entry: 0x4802ad46 */

void FUN_ram_4802ad46(undefined4 param_1,char *param_2)

{
  size_t sVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = 0;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
  }
  FUN_ram_4802a7f4(param_1,param_2,sVar1);
  return;
}


