/* Firmware entry: 0x4ff2ceac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff2ceac(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff2cce2();
  do {
  } while ((int)(_DAT_ram_50124000 << 6) < 0);
  _DAT_ram_50124000 = param_3 << 8 | param_1 | param_4 << 0x10 | 0x1000000;
  do {
  } while ((int)(_DAT_ram_50124000 << 6) < 0);
  return;
}


