/* Firmware entry: 0x4801ba3a */

void FUN_ram_4801ba3a(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  *(undefined4 *)(iVar1 + 300) = 1;
  iVar1 = FUN_ram_4801aeb6();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 0x14);
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = uVar2;
    param_1[2] = uVar3;
  }
  FUN_ram_4801af88();
  return;
}


