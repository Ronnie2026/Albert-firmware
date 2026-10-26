/* Firmware entry: 0x481832d0 */

void FUN_ram_481832d0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4817b512(param_1 + 0x20);
    FUN_ram_48178af2(param_1,0x4c);
    *(undefined4 *)(param_1 + 0x1c) = 10000;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    return;
  }
  return;
}


