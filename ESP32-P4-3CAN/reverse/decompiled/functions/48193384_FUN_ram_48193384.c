/* Firmware entry: 0x48193384 */

undefined4 FUN_ram_48193384(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return 0;
  }
  return 0xffffffff;
}


