/* Firmware entry: 0x4813c8b8 */

void FUN_ram_4813c8b8(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x3c) == 1)) {
    *(undefined4 *)(param_1 + 0x44) = param_2;
    return;
  }
  return;
}


