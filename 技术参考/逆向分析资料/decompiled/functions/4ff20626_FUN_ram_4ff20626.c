/* Firmware entry: 0x4ff20626 */

int FUN_ram_4ff20626(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff206a4();
  iVar2 = FUN_ram_4ff206bc();
  return iVar2 + iVar1 * 100;
}


