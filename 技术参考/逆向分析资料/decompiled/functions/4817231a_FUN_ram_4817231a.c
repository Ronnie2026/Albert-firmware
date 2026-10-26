/* Firmware entry: 0x4817231a */

int FUN_ram_4817231a(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4817b126(1,0x114);
  if (iVar1 != 0) {
    FUN_ram_4817efee();
  }
  return iVar1;
}


