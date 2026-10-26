/* Firmware entry: 0x4ff32588 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32588(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    _DAT_ram_501150ac = _DAT_ram_501150ac & 0xdfffffff;
    _DAT_ram_50111040 = _DAT_ram_50111040 & 0xfffdffff;
    return;
  }
  _DAT_ram_50111040 = _DAT_ram_50111040 | 0x20000;
  _DAT_ram_501150ac = _DAT_ram_501150ac | 0x20000000;
  ets_delay_us(300);
  return;
}


