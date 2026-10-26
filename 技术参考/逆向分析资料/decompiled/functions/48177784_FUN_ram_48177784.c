/* Firmware entry: 0x48177784 */

int FUN_ram_48177784(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4817b126(1,0x78);
  if (iVar1 != 0) {
    FUN_ram_481791b0();
  }
  return iVar1;
}


