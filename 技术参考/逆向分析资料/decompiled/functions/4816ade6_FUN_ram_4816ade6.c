/* Firmware entry: 0x4816ade6 */

void FUN_ram_4816ade6(int param_1)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x54);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    thunk_FUN_ram_4ff209c6(iVar1);
    iVar1 = iVar2;
  }
  FUN_ram_48178af2(param_1,0x8c);
  return;
}


