/* Firmware entry: 0x4818286c */

void FUN_ram_4818286c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    FUN_ram_4817191c(param_1 + 0x38);
    FUN_ram_48178af2(param_1,0x80);
    return;
  }
  return;
}


