/* Firmware entry: 0x48079e88 */

uint FUN_ram_48079e88(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 - 0x30U & 0xff) < 10) {
    return param_1 - 0x30U;
  }
  if (5 < (param_1 - 0x61U & 0xff)) {
    if ((param_1 - 0x41U & 0xff) < 6) {
      return param_1 - 0x37;
    }
    return 0xffffffff;
  }
  return param_1 - 0x57;
}


