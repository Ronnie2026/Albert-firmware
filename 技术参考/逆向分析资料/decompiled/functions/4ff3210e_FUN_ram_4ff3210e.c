/* Firmware entry: 0x4ff3210e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff3210e(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ec14(&DAT_ram_4ff47de8,0xffffffff);
  DAT_ram_4ff6d9d8 = DAT_ram_4ff6d9d8 + 1;
  if (DAT_ram_4ff6d9d8 != 1) {
    FUN_ram_4ff3eb8c();
    FUN_ram_4ff3ee10(&DAT_ram_4ff47de8);
    return;
  }
  _DAT_ram_5011515c = _DAT_ram_5011515c & 0xfbffffff | 0xc000000;
  FUN_ram_4ff3eb8c();
  FUN_ram_4ff3ee10(&DAT_ram_4ff47de8);
  return;
}


