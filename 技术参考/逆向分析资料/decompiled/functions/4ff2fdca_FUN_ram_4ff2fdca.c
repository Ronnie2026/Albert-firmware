/* Firmware entry: 0x4ff2fdca */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2fdca(void)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  iVar1 = FUN_ram_4ff45682();
  if ((iVar1 == 0) || ((_DAT_ram_500e5118 & 1) != 0)) {
    wfi();
  }
  return;
}


