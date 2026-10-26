/* Firmware entry: 0x48109d26 */

void FUN_ram_48109d26(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48109964(&DAT_ram_4ff60e20,param_1);
  FUN_ram_480e6466(&DAT_ram_4ff48d94,param_1 + 4,&DAT_ram_4ff60e20);
  return;
}


