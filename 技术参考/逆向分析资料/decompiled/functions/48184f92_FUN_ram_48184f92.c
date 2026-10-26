/* Firmware entry: 0x48184f92 */

void FUN_ram_48184f92(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_48176a1a();
    FUN_ram_48178af2(param_1,100);
    *(undefined4 *)(param_1 + 0x58) = 10000;
    return;
  }
  return;
}


