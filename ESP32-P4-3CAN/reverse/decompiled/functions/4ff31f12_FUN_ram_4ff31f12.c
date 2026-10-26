/* Firmware entry: 0x4ff31f12 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4ff31f12(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff311d8(0x38);
  if (iVar1 == 0) {
    _DAT_ram_50120000 = _DAT_ram_50120000 | 0x8000000;
  }
  FUN_ram_4ff31206(0x38,iVar1);
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47de8,0xffffffff);
  uVar2 = FUN_ram_4ff2ce1a(param_1,param_2,param_3,param_4,param_5);
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47de8);
  iVar1 = FUN_ram_4ff31254(0x38);
  if (iVar1 == 0) {
    _DAT_ram_50120000 = _DAT_ram_50120000 & 0xf7ffffff;
  }
  FUN_ram_4ff31288(0x38,iVar1);
  return uVar2;
}


