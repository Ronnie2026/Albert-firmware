/* Firmware entry: 0x481a7378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481a7378(undefined4 param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (mhartid != 0) {
    _DAT_ram_3ff060b8 = param_1;
    _DAT_ram_3ff060bc = param_2;
    return;
  }
  _DAT_ram_3ff06038 = param_1;
  _DAT_ram_3ff0603c = param_2;
  return;
}


