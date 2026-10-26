/* Firmware entry: 0x4808cb32 */

void FUN_ram_4808cb32(undefined4 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = 0;
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
  }
  FUN_ram_4808c96e(param_1,param_2,param_3,sVar1);
  return;
}


