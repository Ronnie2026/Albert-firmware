/* Firmware entry: 0x4ff36d2e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff36d2e(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0;
  if ((_DAT_ram_3ff10178 & 1) == 0) {
    uVar1 = -(uint)((_DAT_ram_3ff10178 & 2) == 0) | 1;
  }
  return uVar1;
}


