/* Firmware entry: 0x48159652 */

undefined4 FUN_ram_48159652(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_2 == 1) {
    return *(undefined4 *)(param_1 + 0x48);
  }
  if (param_2 != 2) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x4c);
}


