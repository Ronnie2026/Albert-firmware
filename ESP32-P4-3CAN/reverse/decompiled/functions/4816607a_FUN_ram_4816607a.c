/* Firmware entry: 0x4816607a */

undefined4 FUN_ram_4816607a(int param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(int *)(param_1 + 0x10) < *(int *)(param_2 + 0x10)) {
    return 0xffffffff;
  }
  return 1;
}


