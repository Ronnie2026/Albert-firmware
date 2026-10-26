/* Firmware entry: 0x4802c23c */

bool FUN_ram_4802c23c(uint *param_1,uint *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*param_1 < *param_2) {
    return true;
  }
  if (*param_1 != *param_2) {
    return false;
  }
  return param_1[1] < param_2[1];
}


