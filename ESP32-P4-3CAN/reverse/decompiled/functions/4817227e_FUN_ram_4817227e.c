/* Firmware entry: 0x4817227e */

int FUN_ram_4817227e(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4817b126(1,0x188);
  if (iVar1 != 0) {
    FUN_ram_4817d2b8();
  }
  return iVar1;
}


