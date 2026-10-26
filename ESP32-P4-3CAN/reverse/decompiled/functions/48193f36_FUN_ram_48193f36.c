/* Firmware entry: 0x48193f36 */

void FUN_ram_48193f36(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined1 *)(*(int *)(param_1 + 8) + 0x40) = 1;
  }
  return;
}


