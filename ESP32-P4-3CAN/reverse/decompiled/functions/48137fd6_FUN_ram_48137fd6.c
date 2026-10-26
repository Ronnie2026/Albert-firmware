/* Firmware entry: 0x48137fd6 */

uint FUN_ram_48137fd6(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return param_1 >> 8 & 0xff00 | param_1 << 0x18 | param_1 >> 0x18 | (param_1 & 0xff00) << 8;
}


