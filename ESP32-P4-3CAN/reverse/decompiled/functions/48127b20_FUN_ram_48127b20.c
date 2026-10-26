/* Firmware entry: 0x48127b20 */

undefined4 FUN_ram_48127b20(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 auStack_1c [5];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(int *)(param_2 + 4) != 0) &&
     (iVar1 = FUN_ram_481591b4(*(int *)(param_2 + 4),auStack_1c), iVar1 == 0)) {
    FUN_ram_4812181e(param_1,auStack_1c[0]);
    return param_1;
  }
  FUN_ram_48121726(param_1);
  return param_1;
}


