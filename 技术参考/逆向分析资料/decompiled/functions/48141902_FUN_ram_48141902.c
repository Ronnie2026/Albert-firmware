/* Firmware entry: 0x48141902 */

void FUN_ram_48141902(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar1 = FUN_ram_48140b1a(0);
  if (iVar1 != 0) {
    FUN_ram_48140a62(0,iVar1,param_4,param_5,param_1);
    return;
  }
  return;
}


