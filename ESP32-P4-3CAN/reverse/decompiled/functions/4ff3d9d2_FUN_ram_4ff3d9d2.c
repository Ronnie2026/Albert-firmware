/* Firmware entry: 0x4ff3d9d2 */

int FUN_ram_4ff3d9d2(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ebfe();
  iVar1 = 1;
  if (DAT_ram_4ff6da20 != 0) {
    iVar1 = (uint)((&DAT_ram_4ff6d9f8)[mhartid] == 0) << 1;
  }
  FUN_ram_4ff3ec08();
  return iVar1;
}


