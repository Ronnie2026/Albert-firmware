/* Firmware entry: 0x48178ce0 */

void FUN_ram_48178ce0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48180594();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_4817bf84(param_1,param_1,param_4 + 0x40), iVar1 == 0)) &&
      (iVar1 = FUN_ram_48180a3c(param_1,param_1,param_4 + 0x20), iVar1 == 0)) &&
     (iVar1 = FUN_ram_4817bf84(param_1,param_1,param_4 + 0x28), iVar1 == 0)) {
    FUN_ram_4818058e(param_1,param_1,param_3);
    return;
  }
  return;
}


