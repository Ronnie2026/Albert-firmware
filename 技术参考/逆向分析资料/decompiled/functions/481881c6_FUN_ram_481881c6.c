/* Firmware entry: 0x481881c6 */

int FUN_ram_481881c6(uint param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  return (int)(((~((0x7a - (param_1 & 0xff) | (param_1 & 0xff) - 0x61) >> 8) & param_1 - 0x46 & 0xff
                 | ~((0x5a - (param_1 & 0xff) | (param_1 & 0xff) - 0x41) >> 8) &
                   param_1 - 0x40 & 0xff |
                 ~((0x39 - (param_1 & 0xff) | (param_1 & 0xff) - 0x30) >> 8) & param_1 + 5 & 0xff |
                 ~((0x2b - (param_1 & 0xff) | (param_1 & 0xff) - 0x2b) >> 8) & param_1 + 0x14 & 0xff
                | param_1 + 0x11 & 0xff &
                  ~((0x2f - (param_1 & 0xff) | (param_1 & 0xff) - 0x2f) >> 8)) - 1) * 0x1000000) >>
         0x18;
}


