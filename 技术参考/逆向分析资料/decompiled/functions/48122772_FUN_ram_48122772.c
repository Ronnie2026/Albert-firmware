/* Firmware entry: 0x48122772 */

uint FUN_ram_48122772(undefined4 *param_1,int param_2,uint param_3)

{
  ushort auStack_12 [7];
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  auStack_12[0] = (ushort)param_3;
  if ((*(char *)(param_1 + 1) != '\0') && (param_2 != 0)) {
    FUN_ram_4815a384(*param_1,param_2,auStack_12);
    param_3 = (uint)auStack_12[0];
  }
  return param_3;
}


