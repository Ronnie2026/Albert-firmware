/* Firmware entry: 0x48182ce2 */

void FUN_ram_48182ce2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48182890(param_1,1);
  if (iVar1 != 0) {
    return;
  }
  FUN_ram_48182c0c(param_1,param_2,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


