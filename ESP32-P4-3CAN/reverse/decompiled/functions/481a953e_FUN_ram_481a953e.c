/* Firmware entry: 0x481a953e */

uint FUN_ram_481a953e(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((*(uint *)(*param_1 + 8) & 0x80) == 0) {
    return *(uint *)(*param_1 + 8) >> 5 & 2;
  }
  return 3;
}


