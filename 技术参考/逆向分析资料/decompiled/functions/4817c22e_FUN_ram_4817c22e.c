/* Firmware entry: 0x4817c22e */

void FUN_ram_4817c22e(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4818b508(0,0,*param_1,*(undefined2 *)((int)param_1 + 6),param_3);
  FUN_ram_4818b508(2,param_3 << 2,*param_2,*(undefined2 *)((int)param_2 + 6),param_3);
  FUN_ram_4818b4fe(param_3 * 2 + -1);
  FUN_ram_4818b5d4(0);
  return;
}


