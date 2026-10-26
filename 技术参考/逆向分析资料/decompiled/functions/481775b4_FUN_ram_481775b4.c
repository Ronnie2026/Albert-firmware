/* Firmware entry: 0x481775b4 */

void FUN_ram_481775b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = *(int *)(param_1 + 4);
  FUN_ram_4817460e(iVar1,iVar1 + 0x68,iVar1 + 0x60,iVar1 + 0x1c,param_4,param_5);
  return;
}


