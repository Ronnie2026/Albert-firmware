/* Firmware entry: 0x4800398c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4800398c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    uVar1 = FUN_ram_481315bc();
    return uVar1;
  }
  if (param_1 != 2) {
    if (param_1 == 0) {
      uVar1 = FUN_ram_4ff334a2(_DAT_ram_50110030);
      return uVar1;
    }
    return 0;
  }
  iVar2 = FUN_ram_4ff332dc(0xffffffff,0x400);
  if (iVar2 != 0) {
    FUN_ram_4ff2fdec();
  }
  uVar1 = FUN_ram_4ff334a2(iVar2);
  return uVar1;
}


