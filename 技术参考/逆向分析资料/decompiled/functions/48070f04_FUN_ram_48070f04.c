/* Firmware entry: 0x48070f04 */

bool FUN_ram_48070f04(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((((*param_1 == 0) && (param_1[1] == 0)) && (param_1[2] == 0)) &&
       ((param_1[3] == 0 && (param_1[4] == 0 && param_1[5] == 0)))) &&
      ((param_1[6] == 0 && param_1[7] == 0 &&
       ((param_1[8] == 0 && param_1[9] == 0 && (param_1[0xc] == 0 && param_1[0xd] == 0)))))) &&
     ((char)param_1[10] == '\0')) {
    return (param_1[10] & 0xffff00U) == 0;
  }
  return false;
}


