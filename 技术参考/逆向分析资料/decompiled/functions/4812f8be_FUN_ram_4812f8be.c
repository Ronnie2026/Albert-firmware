/* Firmware entry: 0x4812f8be */

int FUN_ram_4812f8be(void)

{
  int iVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = thunk_FUN_ram_4ff2070c(0x74);
  if (iVar1 != 0) {
    FUN_ram_4817c6ba();
    iVar2 = FUN_ram_4817c700(iVar1,0);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  return 0;
}


