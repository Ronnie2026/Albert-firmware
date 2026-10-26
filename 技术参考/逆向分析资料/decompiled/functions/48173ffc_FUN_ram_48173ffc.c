/* Firmware entry: 0x48173ffc */

void FUN_ram_48173ffc(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4817fb90();
    FUN_ram_4817fb90(param_1 + 8);
    FUN_ram_4817fb90(param_1 + 0x10);
    return;
  }
  return;
}


