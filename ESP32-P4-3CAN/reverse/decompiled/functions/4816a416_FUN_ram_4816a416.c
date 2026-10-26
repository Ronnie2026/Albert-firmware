/* Firmware entry: 0x4816a416 */

void FUN_ram_4816a416(void *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x90);
  *(undefined4 *)((int)param_1 + 0x6c) = 0xffffffff;
  return;
}


