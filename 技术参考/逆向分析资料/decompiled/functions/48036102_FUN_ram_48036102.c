/* Firmware entry: 0x48036102 */

bool FUN_ram_48036102(void)

{
  bool bVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar2 = FUN_ram_48035faa();
  if ((iVar2 == 0) || (DAT_ram_4ff5c5c0 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = DAT_ram_4ff5c548 == '\x01';
  }
  return bVar1;
}


