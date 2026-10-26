/* Firmware entry: 0x48191efe */

undefined4 FUN_ram_48191efe(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_ram_48192978();
    uVar1 = 0;
    if (-1 < *(int *)(param_1 + 0x6b8)) {
      uVar1 = FUN_ram_4819bf9a();
    }
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x6e0));
    thunk_FUN_ram_4ff209c6(param_1);
  }
  return uVar1;
}


