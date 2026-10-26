/* Firmware entry: 0x480d632e */

bool FUN_ram_480d632e(int *param_1,int *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (((param_1[3] == param_2[3] && ((char)param_1[4] == (char)param_2[4])) &&
      ((param_1[5] == param_2[5] && (((param_1[6] ^ param_2[6]) & 0xffffU) == 0)))))) {
    return *(char *)((int)param_1 + 0x1f) == *(char *)((int)param_2 + 0x1f);
  }
  return false;
}


