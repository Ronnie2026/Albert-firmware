/* Firmware entry: 0x48129cb4 */

bool FUN_ram_48129cb4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return (*(uint *)(param_1 + 0xc) & 3) != 0;
  }
  return false;
}


