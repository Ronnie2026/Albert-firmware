/* Firmware entry: 0x48155c06 */

void FUN_ram_48155c06(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4ff3c5d4();
  DAT_ram_4ff6e248 = DAT_ram_4ff6e248 + iVar1;
  return;
}


