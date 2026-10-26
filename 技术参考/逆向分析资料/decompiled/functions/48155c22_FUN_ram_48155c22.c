/* Firmware entry: 0x48155c22 */

int FUN_ram_48155c22(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff2d260();
  iVar2 = FUN_ram_4ff2d260();
  return iVar2 + DAT_ram_4ff6e248 + iVar1 * 0x10000;
}


