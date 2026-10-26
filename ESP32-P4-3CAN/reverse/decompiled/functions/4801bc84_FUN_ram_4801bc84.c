/* Firmware entry: 0x4801bc84 */

undefined4 FUN_ram_4801bc84(ushort *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a3;
  undefined4 extraout_a3_00;
  undefined4 extraout_a4;
  undefined4 extraout_a4_00;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4801af3a();
  if (((param_1 != (ushort *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    (**(code **)(PTR_PTR_ram_4ff47e40 + 4))
              (param_2,0,(uint)*param_1 * 0x5c,extraout_a3,extraout_a4,
               *(code **)(PTR_PTR_ram_4ff47e40 + 4));
    *(uint *)(iVar1 + 0x10) = (uint)*param_1;
    iVar1 = FUN_ram_4801ab9e(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
      (**(code **)PTR_PTR_ram_4ff47e40)
                (param_2,*(undefined4 *)(iVar1 + 0x14),*(int *)(iVar1 + 0x10) * 0x5c,extraout_a3_00,
                 extraout_a4_00,*(code **)PTR_PTR_ram_4ff47e40);
    }
    uVar2 = FUN_ram_4801af88(iVar1);
    return uVar2;
  }
  return 0xffffffff;
}


