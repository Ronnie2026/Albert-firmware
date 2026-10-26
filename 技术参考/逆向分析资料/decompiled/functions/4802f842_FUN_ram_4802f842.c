/* Firmware entry: 0x4802f842 */

uint FUN_ram_4802f842(int param_1,int param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_3 = (uint)(param_2 * 1000) / param_3;
  return ((((0x5dc - param_3) * param_3 * param_3 * 2) / 1000000) * param_1 + 500) / 1000 & 0xff;
}


