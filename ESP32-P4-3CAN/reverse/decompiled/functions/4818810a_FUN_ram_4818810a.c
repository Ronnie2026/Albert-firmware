/* Firmware entry: 0x4818810a */

uint FUN_ram_4818810a(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return ~((0x3d - (param_1 & 0xff) | (param_1 & 0xff) - 0x34) >> 8) & param_1 - 4 & 0xff |
         ~((0x33 - (param_1 & 0xff) | (param_1 & 0xff) - 0x1a) >> 8) & param_1 + 0x47 & 0xff |
         ~(0x19 - (param_1 & 0xff) >> 8) & param_1 + 0x41 & 0xff |
         ~((0x3e - (param_1 & 0xff) | (param_1 & 0xff) - 0x3e) >> 8) & 0x2b |
         ~((0x3f - (param_1 & 0xff) | (param_1 & 0xff) - 0x3f) >> 8) & 0x2f;
}


