/* Firmware entry: 0x4818329e */

void FUN_ram_4818329e(void *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x4c);
  FUN_ram_4817b4f8((int)param_1 + 0x20);
  *(undefined4 *)((int)param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x1c) = 10000;
  return;
}


