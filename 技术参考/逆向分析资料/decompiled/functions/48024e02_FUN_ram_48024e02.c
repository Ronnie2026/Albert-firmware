/* Firmware entry: 0x48024e02 */

undefined4 FUN_ram_48024e02(int param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 == 0) {
    DAT_ram_4ff6dbec = param_2;
    DAT_ram_4ff6dbf4 = param_3;
    return 0;
  }
  if (param_1 == 1) {
    DAT_ram_4ff6dbf0 = param_2;
    DAT_ram_4ff6dbf8 = param_3;
    return 0;
  }
  return 0xffffffff;
}


