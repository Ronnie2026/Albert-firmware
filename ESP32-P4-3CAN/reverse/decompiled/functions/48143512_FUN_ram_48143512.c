/* Firmware entry: 0x48143512 */

void FUN_ram_48143512(int param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = param_3;
  }
  return;
}


