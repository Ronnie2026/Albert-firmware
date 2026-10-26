/* Firmware entry: 0x48040830 */

bool FUN_ram_48040830(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (((*(char *)((int)param_1 + 0xd) == '\x01') && (*param_1 == 0x3fd)) &&
     ((char)param_1[1] == '\b')) {
    return (*(byte *)((int)param_1 + 5) & 7) == 0;
  }
  return false;
}


