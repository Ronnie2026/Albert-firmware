/* Firmware entry: 0x4ff32716 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32716(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    _DAT_ram_50111000 = _DAT_ram_50111000 & 0xfffffff3 | 4;
    ets_delay_us(3);
    return;
  }
  if (param_1 == 2) {
    _DAT_ram_50111000 = _DAT_ram_50111000 & 0xfffffff3 | 8;
    ets_delay_us(3);
    return;
  }
  if (param_1 == 0) {
    _DAT_ram_50111000 = _DAT_ram_50111000 & 0xfffffff3;
    ets_delay_us(3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4ff44e06();
}


