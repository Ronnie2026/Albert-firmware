/* Firmware entry: 0x4800d144 */

bool FUN_ram_4800d144(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff368f4(*(undefined4 *)(DAT_ram_4ff6db10 + 8));
  return iVar1 != 0;
}


