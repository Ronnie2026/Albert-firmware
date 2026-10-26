/* Firmware entry: 0x4815a012 */

void FUN_ram_4815a012(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4815d800();
  if (iVar1 != 0) {
    return;
  }
  FUN_ram_48159d4c(&DAT_ram_481c3efc,param_1,param_2,param_3);
  return;
}


