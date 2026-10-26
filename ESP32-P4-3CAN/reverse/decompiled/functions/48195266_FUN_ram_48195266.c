/* Firmware entry: 0x48195266 */

bool FUN_ram_48195266(char *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == param_2) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if (*param_1 != '*') {
      iVar1 = FUN_ram_4ff453ae(param_1,param_2 + (*param_2 == '*'));
      return iVar1 == 0;
    }
  }
  return bVar2;
}


