/* Firmware entry: 0x4812d892 */

int FUN_ram_4812d892(int param_1,int *param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    iVar1 = 0x102;
  }
  else {
    iVar1 = 0x106;
    if (((*(int *)(param_1 + 4) == 0) &&
        (iVar1 = FUN_ram_4812e734(param_1,0x20,param_2,0x100), iVar1 == 0)) &&
       (*param_2 != -0x5432abce)) {
      return 0x105;
    }
  }
  return iVar1;
}


