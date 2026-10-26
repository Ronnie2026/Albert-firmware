/* Firmware entry: 0x4815cef0 */

void FUN_ram_4815cef0(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x40);
  FUN_ram_4815e06e(param_1 + 0x10);
  return;
}


