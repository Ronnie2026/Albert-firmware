/* Firmware entry: 0x48147772 */

void FUN_ram_48147772(undefined4 param_1,int *param_2,int param_3)

{
  int in_a6;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_3 != 0) && ((param_2 == (int *)0x0 || (*param_2 == 0)))) {
    param_2 = (int *)(in_a6 + 4);
  }
  FUN_ram_48147430(param_1,param_2);
  return;
}


