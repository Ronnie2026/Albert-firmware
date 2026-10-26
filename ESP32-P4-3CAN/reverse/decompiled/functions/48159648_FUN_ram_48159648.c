/* Firmware entry: 0x48159648 */

undefined4 FUN_ram_48159648(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 100);
  }
  return 0xffffffff;
}


