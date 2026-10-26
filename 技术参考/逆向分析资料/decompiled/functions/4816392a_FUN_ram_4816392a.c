/* Firmware entry: 0x4816392a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4816392a(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48003514(DAT_ram_4ff4ba18);
  DAT_ram_4ff4ba18 = 0;
  FUN_ram_4ff3ba8e(DAT_ram_4ff4ba1c);
  DAT_ram_4ff4ba1c = 0;
  FUN_ram_4ff3ba8e(DAT_ram_4ff4ba20);
  DAT_ram_4ff4ba20 = 0;
  *(undefined4 *)(DAT_ram_4ff4ba24 + 0x800) = 0;
  FUN_ram_4816324e();
  FUN_ram_4ff3122a();
  _DAT_ram_500e6018 = _DAT_ram_500e6018 & 0xffffbfff;
  FUN_ram_4ff31240();
  return;
}


