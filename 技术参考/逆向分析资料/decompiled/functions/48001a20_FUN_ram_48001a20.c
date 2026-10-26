/* Firmware entry: 0x48001a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_48001a20(void)

{
  bool bVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  bVar1 = false;
  if ((((((_DAT_ram_5012d034 >> 3 & 1) != 0 || (_DAT_ram_5012d034 & 7) != 0) ||
        (_DAT_ram_5012d030 >> 7 & 3) != 0) || (int)_DAT_ram_5012d030 < 0) ||
      (_DAT_ram_5012d030 >> 0x12 & 0x78) != 0) || (_DAT_ram_5012d030 >> 8 & 4) != 0) {
    bVar1 = ((_DAT_ram_5012d034 >> 3 & 1) << 0xb | (_DAT_ram_5012d034 & 7) << 8 |
             _DAT_ram_5012d030 >> 7 & 3 | (_DAT_ram_5012d030 >> 0x1f) << 7 |
             _DAT_ram_5012d030 >> 0x12 & 0x78 | _DAT_ram_5012d030 >> 8 & 4) != 0xfff;
  }
  return bVar1;
}


