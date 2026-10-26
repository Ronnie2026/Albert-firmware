/* Firmware entry: 0x48137fc8 */

uint FUN_ram_48137fc8(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return (param_1 << 8 | param_1 >> 8) & 0xffff;
}


