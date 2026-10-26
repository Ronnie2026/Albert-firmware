/* Firmware entry: 0x481418a4 */

void FUN_ram_481418a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_48140b1a();
  if (iVar1 == 0) {
    return;
  }
  iVar2 = FUN_ram_48140a3a(param_1,param_4,param_5);
  if (iVar2 != 0) {
    FUN_ram_48140a62(param_1,iVar1,param_4,param_5);
    return;
  }
  FUN_ram_4813ac74(iVar1);
  return;
}


