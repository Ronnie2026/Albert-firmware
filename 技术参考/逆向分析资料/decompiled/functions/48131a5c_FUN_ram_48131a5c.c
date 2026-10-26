/* Firmware entry: 0x48131a5c */

void FUN_ram_48131a5c(int *param_1,uint *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_2 = *(uint *)(*param_1 + 0x20) >> 4 & 3;
  return;
}


