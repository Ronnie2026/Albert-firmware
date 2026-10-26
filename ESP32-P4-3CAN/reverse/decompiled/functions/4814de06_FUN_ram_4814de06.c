/* Firmware entry: 0x4814de06 */

void FUN_ram_4814de06(int param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  memset(&DAT_ram_4ff6d3d8,0,0x40);
  FUN_ram_4ff45158(&DAT_ram_4ff6d3fc,param_2,0x10);
  DAT_ram_4ff6e238 = param_1 * 250000;
  return;
}


