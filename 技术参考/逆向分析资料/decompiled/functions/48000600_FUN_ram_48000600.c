/* Firmware entry: 0x48000600 */

int FUN_ram_48000600(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return param_1 / param_2 + (uint)(0 < param_1 % param_2);
}


