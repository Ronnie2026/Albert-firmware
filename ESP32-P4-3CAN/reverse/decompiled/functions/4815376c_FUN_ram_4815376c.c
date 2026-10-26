/* Firmware entry: 0x4815376c */

void FUN_ram_4815376c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(int *)(param_1 + 0x1260) = param_1;
  *(undefined ***)(param_1 + 0x1264) = &PTR_FUN_ram_4815411c_ram_48237664;
  *(undefined2 *)(param_1 + 0x126e) = 0x8057;
  FUN_ram_48155dc6(param_1 + 0x1260);
  *(byte *)(param_1 + 0x127c) = *(byte *)(param_1 + 0x127c) & 0xfa | 5;
  *(byte *)(param_1 + 0x12a4) = *(byte *)(param_1 + 0x12a4) | 1;
  return;
}


