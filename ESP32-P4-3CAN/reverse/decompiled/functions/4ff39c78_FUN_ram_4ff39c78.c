/* Firmware entry: 0x4ff39c78 */

void FUN_ram_4ff39c78(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4ff20684();
  if ((iVar1 != 0) && (DAT_ram_4ff5b0b8 != '\0')) {
    FUN_ram_4ff46126(DAT_ram_4ff6e0b8,param_1,param_2,param_3);
    return;
  }
  FUN_ram_4ff45eb4(DAT_ram_4ff6e0b8,param_2,param_1);
  return;
}


