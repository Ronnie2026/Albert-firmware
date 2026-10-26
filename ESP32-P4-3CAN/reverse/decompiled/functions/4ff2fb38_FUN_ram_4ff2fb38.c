/* Firmware entry: 0x4ff2fb38 */

bool FUN_ram_4ff2fb38(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *param_1;
  if (iVar1 == param_2) {
    *param_1 = param_3;
  }
  return param_2 == iVar1;
}


