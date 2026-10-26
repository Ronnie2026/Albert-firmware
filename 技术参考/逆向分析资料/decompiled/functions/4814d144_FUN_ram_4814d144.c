/* Firmware entry: 0x4814d144 */

void FUN_ram_4814d144(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(uint *)(*(int *)(param_1 + 0x1c) + 0xdc) = param_2 & 0xffff | param_2 << 0x10;
  return;
}


