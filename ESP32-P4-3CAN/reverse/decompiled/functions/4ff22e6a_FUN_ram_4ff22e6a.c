/* Firmware entry: 0x4ff22e6a */

bool FUN_ram_4ff22e6a(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)((int)param_1 + 0xd) == '\x02') && (*param_1 == 0x3c2)) &&
     ((char)param_1[1] == '\b')) {
    return (*(byte *)((int)param_1 + 5) & 3) == 1;
  }
  return false;
}


