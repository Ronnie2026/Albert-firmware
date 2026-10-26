/* Firmware entry: 0x481a6f62 */

void FUN_ram_481a6f62(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_481a6b68(DAT_ram_4ff59fe8,DAT_ram_4ff59ff0);
  if ((iVar1 != 0) && (DAT_ram_4ff59ffc != 0)) {
    FUN_ram_481a6b68(DAT_ram_4ff59ff4);
    return;
  }
  return;
}


