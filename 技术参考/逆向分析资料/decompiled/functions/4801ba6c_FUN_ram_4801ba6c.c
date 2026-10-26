/* Firmware entry: 0x4801ba6c */

undefined4 FUN_ram_4801ba6c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  *(undefined4 *)(iVar1 + 300) = 10;
  if (param_1 != 0) {
    (**(code **)PTR_PTR_ram_4ff47e40)
              (iVar1 + 0x10,param_1,0x98,extraout_a3,extraout_a4,*(code **)PTR_PTR_ram_4ff47e40);
    *(undefined4 *)(iVar1 + 0x70) = 1;
    FUN_ram_4801a676(iVar1);
    uVar2 = FUN_ram_4801af88();
    return uVar2;
  }
  return 0xffffffff;
}


