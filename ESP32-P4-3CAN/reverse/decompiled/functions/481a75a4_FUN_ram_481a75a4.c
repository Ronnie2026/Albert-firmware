/* Firmware entry: 0x481a75a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_481a75a4(void)

{
  int iVar1;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff311d8(0x1c);
  if (iVar1 == 0) {
    _DAT_ram_500e601c = _DAT_ram_500e601c | 0x800000;
    _DAT_ram_500e60c4 = _DAT_ram_500e60c4 & 0xffffffdf;
  }
  FUN_ram_4ff31206(0x1c,iVar1);
  puStack_18 = &LAB_ram_4ff33914;
  puStack_14 = &LAB_ram_4ff33920;
  FUN_ram_4ff36c12(&DAT_ram_4ff59fc0);
  FUN_ram_4fc00230(&DAT_ram_4ff59fc0,&puStack_18);
  FUN_ram_4fc00254(&DAT_ram_4ff59fc0,0);
  FUN_ram_4fc00258(&DAT_ram_4ff59fc0,2,0);
  FUN_ram_4fc0025c(&DAT_ram_4ff59fc0,2,0);
  FUN_ram_4fc00260(&DAT_ram_4ff59fc0,0,0,1);
  FUN_ram_4fc00260(&DAT_ram_4ff59fc0,0,1);
  return 0;
}


