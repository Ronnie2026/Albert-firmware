/* Firmware entry: 0x48151bf0 */

void FUN_ram_48151bf0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48151b80();
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  FUN_ram_4814ced4(param_1,6);
  return;
}


