/* Firmware entry: 0x4801bac8 */

void FUN_ram_4801bac8(undefined4 param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  FUN_ram_4801a56e();
  FUN_ram_4801af88();
  return;
}


