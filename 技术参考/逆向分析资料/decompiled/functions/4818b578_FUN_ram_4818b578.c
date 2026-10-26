/* Firmware entry: 0x4818b578 */

void FUN_ram_4818b578(int param_1,int param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(undefined4 *)(param_2 + *(int *)(&DAT_ram_4823a720 + param_1 * 4)) = param_3;
  return;
}


