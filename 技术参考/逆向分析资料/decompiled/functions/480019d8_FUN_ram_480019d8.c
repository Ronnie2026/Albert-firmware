/* Firmware entry: 0x480019d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_480019d8(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return ((_DAT_ram_5012d034 >> 3 & 1) << 0xb | (_DAT_ram_5012d034 & 7) << 8 |
          _DAT_ram_5012d030 >> 7 & 3 | (_DAT_ram_5012d030 >> 0x1f) << 7 |
          _DAT_ram_5012d030 >> 0x12 & 0x78 | _DAT_ram_5012d030 >> 8 & 4) << 0xc;
}


