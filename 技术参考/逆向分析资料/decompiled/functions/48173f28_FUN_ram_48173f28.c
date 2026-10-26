/* Firmware entry: 0x48173f28 */

char FUN_ram_48173f28(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (*(int *)(param_1 + 0x24) == 0) + '\x01';
  }
  return '\0';
}


