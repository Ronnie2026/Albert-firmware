/* Firmware entry: 0x48170fb4 */

void FUN_ram_48170fb4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0xb4) = 0x14;
  *(undefined4 *)(param_1 + 0xb8) = 1;
  **(undefined1 **)(param_1 + 0xb0) = 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  FUN_ram_48170976(param_1,1);
  return;
}


