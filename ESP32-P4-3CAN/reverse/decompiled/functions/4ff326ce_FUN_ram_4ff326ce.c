/* Firmware entry: 0x4ff326ce */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff326ce(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = _DAT_ram_50111000 & 3;
  if ((uVar1 != 1) && (uVar1 != 2)) {
    uVar1 = (-(uint)(uVar1 == 0) & 0xfffffffd) + 3;
  }
  return uVar1;
}


