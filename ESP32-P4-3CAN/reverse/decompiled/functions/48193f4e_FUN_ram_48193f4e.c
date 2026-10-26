/* Firmware entry: 0x48193f4e */

void FUN_ram_48193f4e(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 != 0) && (*(int *)(param_1 + 8) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 0x48) = param_2;
  }
  return;
}


