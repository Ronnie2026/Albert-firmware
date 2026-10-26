/* Firmware entry: 0x4804160c */

ushort FUN_ram_4804160c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  fence();
  fence();
  return *(short *)(param_1 + 0x1600) - *(short *)(param_1 + 0x1602) & 0x3f;
}


