/* Firmware entry: 0x4ff20c3c */

int FUN_ram_4ff20c3c(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = ets_get_cpu_frequency();
  return iVar1 * 1000000;
}


