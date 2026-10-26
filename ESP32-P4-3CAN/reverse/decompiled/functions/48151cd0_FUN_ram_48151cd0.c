/* Firmware entry: 0x48151cd0 */

void FUN_ram_48151cd0(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_1 + 0xd5) != '\0') {
    *(char *)(param_1 + 0xd5) = *(char *)(param_1 + 0xd5) + '\x01';
    return;
  }
  FUN_ram_4814ced4(param_1,10);
  *(char *)(param_1 + 0xd5) = *(char *)(param_1 + 0xd5) + '\x01';
  return;
}


