/* Firmware entry: 0x4ff205e0 */

void FUN_ram_4ff205e0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_4ff2c6b0();
  if (iVar2 != 0) {
    FUN_ram_4ff37df0(param_1,0);
    return;
  }
  FUN_ram_4ff2061c();
  thunk_FUN_ram_4ff2c472(uVar1);
  FUN_ram_4ff37df0(param_1,0);
  return;
}


