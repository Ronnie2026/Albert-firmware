/* Firmware entry: 0x481a9552 */

uint FUN_ram_481a9552(int *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return *(uint *)(*param_1 + 0x3c) & 0xffff;
}


