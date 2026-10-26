/* Firmware entry: 0x4801bc04 */

void FUN_ram_4801bc04(int param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  if (param_1 != 0) {
    (**(code **)PTR_PTR_ram_4ff47e40)
              (iVar1 + 0x14,param_1,0x2c,extraout_a3,extraout_a4,*(code **)PTR_PTR_ram_4ff47e40);
    *(undefined1 *)(iVar1 + 0x40) = 1;
  }
  *(char *)(iVar1 + 0x10) = (char)param_2;
  if (param_2 != 0) {
    *(undefined4 *)(iVar1 + 300) = 0x1e;
  }
  FUN_ram_4801aa96(iVar1);
  FUN_ram_4801af88();
  return;
}


