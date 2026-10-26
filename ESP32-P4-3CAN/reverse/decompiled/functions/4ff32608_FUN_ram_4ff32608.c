/* Firmware entry: 0x4ff32608 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff32608(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 1) {
    _DAT_ram_50111000 = _DAT_ram_50111000 & 0xfffffffc | 1;
    ets_delay_us(300);
    FUN_ram_481a60be(2,1);
  }
  else {
    if (param_1 == 2) {
      _DAT_ram_50111000 = _DAT_ram_50111000 & 0xfffffffc | 2;
      ets_delay_us(300);
      FUN_ram_481a60be(2,2);
      FUN_ram_481a60be(3,1);
      return;
    }
    if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4ff44e06();
    }
    _DAT_ram_50111000 = _DAT_ram_50111000 & 0xfffffffc;
    ets_delay_us(300);
    FUN_ram_481a60be(2,2);
  }
  FUN_ram_481a60be(3,2);
  return;
}


