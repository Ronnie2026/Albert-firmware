/* Firmware entry: 0x4801bbbc */

undefined4 FUN_ram_4801bbbc(undefined1 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  if (param_2 != 0) {
    *(undefined1 *)(iVar1 + 0x10) = param_1;
    iVar1 = FUN_ram_4801a98e();
    (**(code **)PTR_PTR_ram_4ff47e40)
              (param_2,iVar1 + 0x14,0xb8,extraout_a3,extraout_a4,*(code **)PTR_PTR_ram_4ff47e40);
    uVar2 = FUN_ram_4801af88(iVar1);
    return uVar2;
  }
  return 0xffffffff;
}


