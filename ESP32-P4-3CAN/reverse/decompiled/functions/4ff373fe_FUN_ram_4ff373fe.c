/* Firmware entry: 0x4ff373fe */

void FUN_ram_4ff373fe(void)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uStack_1c = 0x500c2000;
  local_20 = 1;
  iVar1 = FUN_ram_4fc00224(&local_20);
  if (iVar1 != 0) {
    FUN_ram_4fc00208(&local_20);
    FUN_ram_4fc0021c(&local_20);
    FUN_ram_4fc0020c(&local_20);
  }
  uStack_14 = 0x500c3000;
  uStack_18 = 2;
  iVar1 = FUN_ram_4fc00224(&uStack_18);
  if (iVar1 != 0) {
    FUN_ram_4fc00208(&uStack_18);
    FUN_ram_4fc0021c(&uStack_18);
    FUN_ram_4fc0020c(&uStack_18);
  }
  iVar1 = FUN_ram_4fc00224(&DAT_ram_4ff47d98);
  if (iVar1 == 0) {
    return;
  }
  FUN_ram_4fc00208(&DAT_ram_4ff47d98);
  FUN_ram_4fc0021c(&DAT_ram_4ff47d98);
  FUN_ram_4fc0020c(&DAT_ram_4ff47d98);
  return;
}


