/* Firmware entry: 0x4ff3894c */

void FUN_ram_4ff3894c(int *param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  sVar1 = strlen(param_2);
  param_1[1] = param_1[1] + sVar1;
  if (((char)param_1[2] == '\0') &&
     (iVar2 = FUN_ram_4ff39db0(*param_1 + 0x54,param_2,sVar1), iVar2 != 0)) {
    param_1[1] = 0;
    return;
  }
  return;
}


