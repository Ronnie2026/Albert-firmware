/* Firmware entry: 0x48126e18 */

void FUN_ram_48126e18(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_ram_4ff3fdde();
    return;
  }
  *(uint *)(param_1 + 0xc) = ~param_2 & *(uint *)(param_1 + 0xc);
  return;
}


