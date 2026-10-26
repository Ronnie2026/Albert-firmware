/* Firmware entry: 0x4816a338 */

void FUN_ram_4816a338(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(char *)(param_2 + 9) != '\n') {
    *(undefined1 **)(*(int *)(param_1 + 0x40) + 0x14) = &LAB_ram_4816a172;
    return;
  }
  *(undefined1 **)(*(int *)(param_1 + 0x40) + 0x14) = &LAB_ram_4816a17c;
  return;
}


