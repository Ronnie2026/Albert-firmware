/* Firmware entry: 0x4800391c */

int FUN_ram_4800391c(int param_1)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    return 0x8000;
  }
  if (param_1 == 2) {
    FUN_ram_4ff332dc(10,100);
    iVar1 = FUN_ram_4ff334a2();
    DAT_ram_4ff6d9e4 = iVar1;
  }
  else {
    iVar1 = 0;
    if (param_1 == 0) {
      if (DAT_ram_4ff6d9e4 != 0) {
        return DAT_ram_4ff6d9e4;
      }
      FUN_ram_4ff332dc(10,100);
      iVar1 = FUN_ram_4ff334a2();
      DAT_ram_4ff6d9e4 = iVar1;
    }
  }
  return iVar1;
}


