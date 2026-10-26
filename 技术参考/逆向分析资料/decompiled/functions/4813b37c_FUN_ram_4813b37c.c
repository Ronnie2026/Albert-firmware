/* Firmware entry: 0x4813b37c */

undefined4 FUN_ram_4813b37c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 != 0) {
    uVar1 = FUN_ram_4813b1ae(param_1,param_2,*(undefined2 *)(param_2 + 8),0);
    return uVar1;
  }
  return 0xfffffff0;
}


