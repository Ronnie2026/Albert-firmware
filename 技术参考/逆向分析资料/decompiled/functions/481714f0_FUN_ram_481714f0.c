/* Firmware entry: 0x481714f0 */

void FUN_ram_481714f0(int param_1,undefined1 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined1 *)(param_1 + 0x95) = param_2;
  *(undefined4 *)(param_1 + 0x98) = param_3;
  *(undefined1 *)(param_1 + 0x94) = 1;
  return;
}


