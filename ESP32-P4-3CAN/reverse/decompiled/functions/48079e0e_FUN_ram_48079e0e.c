/* Firmware entry: 0x48079e0e */

bool FUN_ram_48079e0e(char *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = false;
  if (*param_1 != '\0') {
    if (*param_2 == '\0') {
      return false;
    }
    if ((*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) &&
       (*(int *)(param_1 + 100) == *(int *)(param_2 + 100))) {
      if (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70)) {
        return false;
      }
      iVar2 = FUN_ram_4ff453ae(param_1 + 1,param_2 + 1);
      if (iVar2 != 0) {
        return false;
      }
      iVar2 = FUN_ram_4ff453ae(param_1 + 0x1a,param_2 + 0x1a);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}


