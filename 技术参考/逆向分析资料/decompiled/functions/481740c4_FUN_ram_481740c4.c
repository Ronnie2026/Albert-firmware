/* Firmware entry: 0x481740c4 */

void FUN_ram_481740c4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_48174022();
    FUN_ram_4817fb90(param_1 + 0x60);
    FUN_ram_4817fb90(param_1 + 0x68);
    FUN_ram_4817fb90(param_1 + 0x70);
    FUN_ram_4817fb90(param_1 + 0x78);
    return;
  }
  return;
}


