/* Firmware entry: 0x4ff40a4e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff40a4e(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  DAT_ram_4ff6d989 = (byte)_DAT_ram_3ff10134 & 1;
  DAT_ram_4ff6d988 = 0;
  if ((_DAT_ram_3ff100e4 & 1) != 0) {
    DAT_ram_4ff6d988 = (byte)_DAT_ram_3ff100f8 & 1;
  }
  DAT_ram_4ff6d98d = (byte)_DAT_ram_3ff102b4 & 1;
  DAT_ram_4ff6d98c = (undefined1)(_DAT_ram_3ff102b4 & 1);
  Cache_Enable_L2_Cache(_DAT_ram_3ff102b4 & 1);
  DAT_ram_4ff6d98a = &sedeleg;
  DAT_ram_4ff6d98e = &sedeleg;
  Cache_Set_L2_Cache_Mode(9,8,3);
  (*(code *)&Cache_Invalidate_All)(0x20);
  return;
}


