/* Firmware entry: 0x481692f0 */

int FUN_ram_481692f0(int *param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar2 = *param_1;
  if ((int)param_3 < 0) {
    param_3 = strlen(param_2);
  }
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4ff45080(1,param_3 + 1);
    if (iVar2 == 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"http_utils","E (%lu) %s: %s(%d): Memory exhausted\n",uVar1,"http_utils",
                       "http_utils_assign_string",0x35);
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return 0;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_4ff20790(iVar2);
    if (iVar2 == 0) {
      uVar1 = FUN_ram_4ff44d14();
      FUN_ram_4ff44bf0(1,"http_utils","E (%lu) %s: %s(%d): Memory exhausted\n",uVar1,"http_utils",
                       "http_utils_assign_string",0x31);
      return 0;
    }
    *(undefined1 *)(iVar2 + param_3) = 0;
  }
  iVar2 = FUN_ram_4ff45158(iVar2,param_2,param_3);
  *param_1 = iVar2;
  return iVar2;
}


