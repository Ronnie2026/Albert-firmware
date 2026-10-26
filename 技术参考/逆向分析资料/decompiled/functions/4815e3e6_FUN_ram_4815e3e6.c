/* Firmware entry: 0x4815e3e6 */

int * FUN_ram_4815e3e6(void)

{
  int *piVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  piVar1 = (int *)FUN_ram_4815e5c8(0xe0);
  memset(piVar1 + 1,0,0xdc);
  *piVar1 = (int)(piVar1 + 2);
  return piVar1;
}


