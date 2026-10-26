/* Firmware entry: 0x4ff4185a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff4185a(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  do {
  } while ((_DAT_ram_5008c358 & 3) == 1);
  _DAT_ram_5008c350 = _DAT_ram_5008c350 | 1;
  do {
  } while ((_DAT_ram_5008c358 & 3) != 3);
  return;
}


