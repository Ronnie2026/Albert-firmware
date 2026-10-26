/* Firmware entry: 0x48122142 */

void FUN_ram_48122142(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  FUN_ram_4815a050(*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


