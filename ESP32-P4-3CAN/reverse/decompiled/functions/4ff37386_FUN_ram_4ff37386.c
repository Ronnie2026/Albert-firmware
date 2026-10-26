/* Firmware entry: 0x4ff37386 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff37386(undefined4 param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  for (; ((_DAT_ram_500d2004 >> 1 & 1) == 0 && (DAT_ram_4ff6d954 < 500));
      DAT_ram_4ff6d954 = DAT_ram_4ff6d954 + 1) {
    ets_delay_us(100);
  }
  if ((_DAT_ram_500d2004 >> 1 & 1) != 0) {
    if ((_DAT_ram_500d2004 >> 1 & 1) != 0) {
      _DAT_ram_500d2000 = param_1;
    }
    DAT_ram_4ff6d954 = 0;
  }
  return;
}


