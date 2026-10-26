/* Firmware entry: 0x4800c834 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4800c834(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((_DAT_ram_500d2004 >> 2 & 1) != 0) {
    return _DAT_ram_500d2000 & 0xff;
  }
  return 0xffffffff;
}


