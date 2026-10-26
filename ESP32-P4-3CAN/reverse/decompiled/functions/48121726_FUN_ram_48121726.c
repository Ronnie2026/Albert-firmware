/* Firmware entry: 0x48121726 */

void FUN_ram_48121726(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_LAB_ram_4802c23a_ram_48223eac;
  memset(param_1 + 1,0,0x10);
  return;
}


