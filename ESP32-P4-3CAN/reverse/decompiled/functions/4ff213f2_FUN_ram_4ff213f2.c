/* Firmware entry: 0x4ff213f2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_ram_4ff213f2(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6d9e8 != 0) {
    return &PTR_DAT_ram_4ff6d9e8_ram_4ff47df0;
  }
  DAT_ram_4ff6d9e8 = 0x50082000;
  FUN_ram_4ff3122a();
  _DAT_ram_500e6018 = _DAT_ram_500e6018 | 4;
  _DAT_ram_500e60c0 = _DAT_ram_500e60c0 & 0xffffffbf;
  FUN_ram_4ff31240();
  FUN_ram_48132096(&DAT_ram_4ff6d9e8,1000,0x20);
  FUN_ram_48132094(&DAT_ram_4ff6d9e8,0x3ff);
  FUN_ram_4ff2d050();
  return &PTR_DAT_ram_4ff6d9e8_ram_4ff47df0;
}


