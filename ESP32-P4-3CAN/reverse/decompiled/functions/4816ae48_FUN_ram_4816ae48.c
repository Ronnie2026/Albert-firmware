/* Firmware entry: 0x4816ae48 */

bool FUN_ram_4816ae48(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 - 2U & 0xfffffffd) != 0) {
    return param_1 == 1;
  }
  return (bool)3;
}


