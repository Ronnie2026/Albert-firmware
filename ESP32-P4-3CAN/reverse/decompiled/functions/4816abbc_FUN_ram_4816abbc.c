/* Firmware entry: 0x4816abbc */

void FUN_ram_4816abbc(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_ram_48189290();
      thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x68));
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    thunk_FUN_ram_4ff209c6(*(undefined4 *)(param_1 + 0x70));
    FUN_ram_48178af2(param_1,0x90);
    *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    return;
  }
  return;
}


