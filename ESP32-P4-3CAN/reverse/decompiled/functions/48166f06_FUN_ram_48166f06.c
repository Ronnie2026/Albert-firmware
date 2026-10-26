/* Firmware entry: 0x48166f06 */

undefined4 FUN_ram_48166f06(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x88) = param_2;
    return 0;
  }
  return 0x102;
}


