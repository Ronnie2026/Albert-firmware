/* Firmware entry: 0x4801bec6 */

void FUN_ram_4801bec6(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined1 *)(iVar1 + 0x14) = param_2;
  FUN_ram_4801adae();
  FUN_ram_4801af88();
  return;
}


