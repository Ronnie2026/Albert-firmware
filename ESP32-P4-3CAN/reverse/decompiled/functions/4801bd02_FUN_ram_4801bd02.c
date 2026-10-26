/* Firmware entry: 0x4801bd02 */

undefined4 FUN_ram_4801bd02(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4801af3a();
  if (param_1 != 0) {
    iVar1 = FUN_ram_4801ac22();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
      (**(code **)PTR_PTR_ram_4ff47e40)
                (param_1,*(undefined4 *)(iVar1 + 0x14),0x5c,extraout_a3,extraout_a4,
                 *(code **)PTR_PTR_ram_4ff47e40);
    }
    uVar2 = FUN_ram_4801af88(iVar1);
    return uVar2;
  }
  return 0xffffffff;
}


