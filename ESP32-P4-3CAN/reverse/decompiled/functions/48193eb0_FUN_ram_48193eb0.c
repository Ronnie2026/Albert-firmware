/* Firmware entry: 0x48193eb0 */

void FUN_ram_48193eb0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  }
  return;
}


