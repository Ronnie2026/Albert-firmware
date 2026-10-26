/* Firmware entry: 0x4815ba08 */

undefined4 FUN_ram_4815ba08(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0xc) == -1) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0x110b;
}


