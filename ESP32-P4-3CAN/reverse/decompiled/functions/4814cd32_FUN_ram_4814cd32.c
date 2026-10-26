/* Firmware entry: 0x4814cd32 */

undefined4 FUN_ram_4814cd32(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_ram_48139e60(*(undefined4 *)(param_1 + 0x1c));
    uVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))(param_1,*(undefined4 *)(param_1 + 0x10));
    FUN_ram_4813958a(&DAT_ram_482370b8,param_1);
  }
  else {
    uVar1 = 0xfffffff5;
  }
  return uVar1;
}


