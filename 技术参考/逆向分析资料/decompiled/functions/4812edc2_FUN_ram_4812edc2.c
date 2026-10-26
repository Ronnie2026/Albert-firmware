/* Firmware entry: 0x4812edc2 */

void FUN_ram_4812edc2(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_4 != 0) && (iVar1 = thunk_FUN_ram_4ff20684(), iVar1 != 0)) {
    FUN_ram_4ff46076(0,param_1,param_2,param_3);
    return;
  }
  FUN_ram_4ff45d50(0,param_2,param_1,param_3);
  return;
}


