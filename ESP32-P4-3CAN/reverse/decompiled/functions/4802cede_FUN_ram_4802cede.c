/* Firmware entry: 0x4802cede */

uint FUN_ram_4802cede(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  return DAT_ram_4ff6de94 >> 1 & 0x40 |
         (DAT_ram_4ff6de94 & 6) << 1 | DAT_ram_4ff6de94 >> 2 & 2 | DAT_ram_4ff6de94 & 1 |
         (DAT_ram_4ff6de94 & 0x10) << 6 | (DAT_ram_4ff6de94 & 0x20) << 4 |
         DAT_ram_4ff6de94 >> 2 & 0x10;
}


