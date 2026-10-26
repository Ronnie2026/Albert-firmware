/* Firmware entry: 0x48075bb4 */

bool FUN_ram_48075bb4(int param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    return false;
  }
  iVar1 = FUN_ram_4ff4511a(param_1,param_2,0x10);
  return iVar1 == 0;
}


