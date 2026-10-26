/* Firmware entry: 0x4ff26908 */

bool FUN_ram_4ff26908(int *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((char)param_1[5] == '\x02') && (*param_1 != 0)) {
    fence();
    if ((((char)param_1[0x167] != '\0') &&
        (((param_1[0x168] != 0 && (*(char *)(*param_1 + 0x18d89) != '\0')) &&
         (param_2 - param_1[0x169] < 1)))) &&
       ((uint)(param_2 - *(int *)(*param_1 + 0x18d8c)) < 0x7a121)) {
      fence();
      return *(char *)(*param_1 + 0x18d88) != '\0';
    }
  }
  return false;
}


