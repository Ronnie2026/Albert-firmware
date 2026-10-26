/* Firmware entry: 0x4802a33e */

void FUN_ram_4802a33e(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset((void *)(param_1 + 0x5c),0,0x10);
  MD5Init(param_1 + 4);
  return;
}


