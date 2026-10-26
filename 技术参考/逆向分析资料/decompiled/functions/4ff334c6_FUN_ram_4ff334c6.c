/* Firmware entry: 0x4ff334c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff334c6(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff311d8(0x1a);
  if (iVar1 == 0) {
    _DAT_ram_500e601c = _DAT_ram_500e601c | 0x200000;
    _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffffbf;
    _DAT_ram_500c2048 = _DAT_ram_500c2048 & 0xffffbfff;
  }
  FUN_ram_4ff31206(0x1a,iVar1);
  return;
}


