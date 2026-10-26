/* Firmware entry: 0x48151b58 */

void FUN_ram_48151b58(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  FUN_ram_4814ced4(param_1,0xc);
  FUN_ram_4815507e(param_1);
  FUN_ram_4814cecc(param_1);
  return;
}


