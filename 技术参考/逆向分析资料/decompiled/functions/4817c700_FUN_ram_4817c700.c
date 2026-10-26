/* Firmware entry: 0x4817c700 */

undefined4 FUN_ram_4817c700(void *param_1,int param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(param_1,0,0x74);
  *(uint *)((int)param_1 + 0x6c) = (param_2 == 0) + 1;
  return 0;
}


