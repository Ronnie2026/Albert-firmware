/* Firmware entry: 0x4817b4e8 */

bool FUN_ram_4817b4e8(char *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return (*param_1 - 0x10U & 0xef) == 0;
}


