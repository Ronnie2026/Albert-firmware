/* Firmware entry: 0x4816a452 */

void FUN_ram_4816a452(int param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  return;
}


