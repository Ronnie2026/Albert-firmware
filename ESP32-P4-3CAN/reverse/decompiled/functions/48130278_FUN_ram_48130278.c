/* Firmware entry: 0x48130278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_48130278(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff311d8(0x1b);
  if (iVar1 == 0) {
    _DAT_ram_500e601c = _DAT_ram_500e601c | 0x400000;
    _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffff7f;
    _DAT_ram_500c3048 = _DAT_ram_500c3048 & 0xffffbfff;
  }
  FUN_ram_4ff31206(0x1b,iVar1);
  FUN_ram_4fc001fc(&DAT_ram_4ff6e110,2,20000,1);
  FUN_ram_4fc00208(&DAT_ram_4ff6e110);
  FUN_ram_4ff36c30(&DAT_ram_4ff6e110,0,10000,1);
  FUN_ram_4ff36c30(&DAT_ram_4ff6e110,1,10000,3);
  FUN_ram_4fc00210(&DAT_ram_4ff6e110);
  FUN_ram_4fc0020c(&DAT_ram_4ff6e110);
  return;
}


