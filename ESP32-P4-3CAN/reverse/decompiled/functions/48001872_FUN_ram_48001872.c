/* Firmware entry: 0x48001872 */

void FUN_ram_48001872(void)

{
  int iVar1;
  
  iVar1 = mhartid;
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48001894(mhartid);
  if (iVar1 != 0) {
    DAT_ram_4ff6d978 = 1;
  }
  return;
}


