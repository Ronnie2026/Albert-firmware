/* Firmware entry: 0x48151e0c */

void FUN_ram_48151e0c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48155eb2(param_1 + 0x11e4);
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) | 2;
  return;
}


