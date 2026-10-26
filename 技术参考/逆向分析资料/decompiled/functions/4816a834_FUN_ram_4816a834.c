/* Firmware entry: 0x4816a834 */

void FUN_ram_4816a834(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
    return;
  }
  FUN_ram_48176a1a(iVar3 + 0x150);
  FUN_ram_48176a1a(iVar3 + 0x15c);
  FUN_ram_48172634(iVar3 + 0x4c);
  thunk_FUN_ram_4ff209c6(*(undefined4 *)(iVar3 + 0xf8));
  iVar1 = *(int *)(iVar3 + 0x100);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    thunk_FUN_ram_4ff209c6(iVar1);
    iVar1 = iVar2;
  }
  FUN_ram_48178af2(iVar3,0x248);
  return;
}


