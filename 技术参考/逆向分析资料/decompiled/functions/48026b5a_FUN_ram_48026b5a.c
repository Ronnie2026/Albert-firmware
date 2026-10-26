/* Firmware entry: 0x48026b5a */

uint FUN_ram_48026b5a(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x36 < param_1) {
    return 0;
  }
  if (-1 < (int)(param_1 - 0x20)) {
    return 0x7fffffU >> (param_1 - 0x20 & 0x1f) & 1;
  }
  return (0xffffffffU >> (param_1 & 0x1f) | 0xfffffe << (0x1f - param_1 & 0x1f)) & 1;
}


