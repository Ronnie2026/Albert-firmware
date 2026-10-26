/* Firmware entry: 0x481a8fd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481a8fd0(undefined4 param_1,byte param_2,uint param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((byte)(param_2 - 0x18) < 2) {
    _DAT_ram_500d2018 = _DAT_ram_500d2018 & 0xffffbfff;
  }
  else if ((byte)(param_2 - 0x1a) < 2) {
    _DAT_ram_50080000 = _DAT_ram_50080000 & 0xfffbffff;
  }
  *(uint *)((uint)param_2 * 4 + 0x500e1004) =
       *(uint *)((uint)param_2 * 4 + 0x500e1004) & 0xffff8fff | (param_3 & 7) << 0xc;
  return;
}


