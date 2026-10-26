/* Firmware entry: 0x4ff2cdd6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4ff2cdd6(uint param_1,undefined4 param_2,int param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff2cce2();
  do {
  } while ((int)(_DAT_ram_50124000 << 6) < 0);
  _DAT_ram_50124000 = param_3 << 8 | param_1;
  do {
  } while ((int)(_DAT_ram_50124000 << 6) < 0);
  return _DAT_ram_50124000 >> 0x10 & 0xff;
}


