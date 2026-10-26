/* Firmware entry: 0x48171410 */

void FUN_ram_48171410(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4817191c(param_1 + 0x54);
    FUN_ram_4817191c(param_1 + 0x98);
    FUN_ram_48176a1a(param_1 + 0x34);
    FUN_ram_48176a1a(param_1 + 0x40);
    FUN_ram_48178af2(param_1,0xdc);
    return;
  }
  return;
}


