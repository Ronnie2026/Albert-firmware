/* Firmware entry: 0x4801b9fe */

void FUN_ram_4801b9fe(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  iVar1 = FUN_ram_4801a466();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
    (**(code **)PTR_PTR_ram_4ff47e40)
              (param_2,iVar1 + 0x14,6,extraout_a3,extraout_a4,*(code **)PTR_PTR_ram_4ff47e40);
  }
  FUN_ram_4801af88(iVar1);
  return;
}


