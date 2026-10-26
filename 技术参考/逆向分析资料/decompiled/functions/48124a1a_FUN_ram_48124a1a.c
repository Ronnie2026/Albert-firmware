/* Firmware entry: 0x48124a1a */

void FUN_ram_48124a1a(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4812536e(param_1,param_3,param_4);
  if ((iVar1 != 0) && (param_2 != 0)) {
    FUN_ram_48124f86(param_1);
    return;
  }
  return;
}


