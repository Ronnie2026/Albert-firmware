/* Firmware entry: 0x4ff44bb4 */

void FUN_ram_4ff44bb4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 & 7) == 0) {
    return;
  }
  iVar1 = FUN_ram_48001afa();
  if (iVar1 != 0) {
    (*(code *)PTR_FUN_ram_4819af24_ram_4ff47da8)(param_3,param_4);
    return;
  }
  return;
}


