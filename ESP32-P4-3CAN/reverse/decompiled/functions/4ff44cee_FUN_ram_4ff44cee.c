/* Firmware entry: 0x4ff44cee */

uint FUN_ram_4ff44cee(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = cycle;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = ets_get_cpu_frequency();
  return uVar1 / (uint)(iVar2 * 1000);
}


