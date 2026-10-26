/* Firmware entry: 0x4ff3085a */

void FUN_ram_4ff3085a(void *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0xb8);
  *(undefined4 *)((int)param_1 + 4) = 1;
  *(undefined4 *)((int)param_1 + 8) = 2;
  *(undefined4 *)((int)param_1 + 0xc) = 3;
  *(undefined4 *)((int)param_1 + 0xb4) = 4;
  return;
}


