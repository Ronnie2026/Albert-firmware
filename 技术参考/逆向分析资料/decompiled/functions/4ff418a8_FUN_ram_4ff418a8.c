/* Firmware entry: 0x4ff418a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4ff418a8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    _DAT_ram_5008c38c =
         (param_4 & 7) << 2 |
         (param_3 & 3) << 9 | (param_2 & 0xf) << 5 | _DAT_ram_5008c38c & 0xfffff800 | param_1 & 3;
    return;
  }
  _DAT_ram_5008c38c = _DAT_ram_5008c38c & 0xfffff800;
  return;
}


