/* Firmware entry: 0x48126e00 */

void FUN_ram_48126e00(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_4ff3fe68();
    return;
  }
  *(uint *)(param_1 + 0xc) = param_2 | *(uint *)(param_1 + 0xc);
  return;
}


