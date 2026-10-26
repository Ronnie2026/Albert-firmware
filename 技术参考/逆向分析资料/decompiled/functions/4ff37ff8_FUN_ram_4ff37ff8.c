/* Firmware entry: 0x4ff37ff8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff37ff8(void)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0;
  if (((int)_DAT_ram_50110044 < 0) &&
     (uVar1 = _DAT_ram_50110044 & 0x7fff, (_DAT_ram_50110044 >> 0x10 & 0x7fff) != uVar1)) {
    uVar1 = 0;
  }
  return uVar1;
}


