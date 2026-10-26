/* Firmware entry: 0x4ff20644 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4ff20644(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return (_DAT_ram_5012d04c >> 8 & 7) + (_DAT_ram_5012d04c >> 0xb & 3) * 100;
}


