/* Firmware entry: 0x4814e6b6 */

undefined4
FUN_ram_4814e6b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 auStack_14 [4];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff3e458(param_2,param_1,param_4,param_3,param_5,auStack_14,0);
  if (iVar1 == 1) {
    return auStack_14[0];
  }
  return 0;
}


