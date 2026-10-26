/* Firmware entry: 0x4802c86c */

void FUN_ram_4802c86c(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3ec14(param_1 + 0x88c,0xffffffff);
  iVar1 = *(int *)(param_1 + 0x588);
  FUN_ram_4ff3ee10(param_1 + 0x88c);
  if (iVar1 != 0) {
    FUN_ram_4ff3e004(iVar1,0,0,2,0);
    return;
  }
  return;
}


