/* Firmware entry: 0x4ff30c28 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff30c28(uint param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  _DAT_ram_5008c184 =
       _DAT_ram_5008c184 & 0xf8000000 | param_1 | param_1 << 3 | param_1 << 6 | param_1 << 9 |
       param_1 << 0xc | param_1 << 0xf | param_1 << 0x12 | param_1 << 0x15 | param_1 << 0x18;
  _DAT_ram_5008c188 =
       _DAT_ram_5008c188 & 0xfffc0000 | param_2 | param_2 << 2 | param_2 << 4 | param_2 << 6 |
       param_2 << 8 | param_2 << 10 | param_2 << 0xc | param_2 << 0xe | param_2 << 0x10;
  _DAT_ram_5008c180 = _DAT_ram_5008c180 | 0x40;
  return;
}


