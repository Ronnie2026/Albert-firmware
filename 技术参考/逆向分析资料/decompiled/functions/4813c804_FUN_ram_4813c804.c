/* Firmware entry: 0x4813c804 */

void FUN_ram_4813c804(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return;
}


