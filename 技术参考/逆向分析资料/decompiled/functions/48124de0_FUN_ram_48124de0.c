/* Firmware entry: 0x48124de0 */

void FUN_ram_48124de0(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  FUN_ram_48126cce();
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_ram_48125006_ram_48223ef8;
  param_1[7] = 3;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xb] = 0xfe;
  DAT_ram_4ff6e06c = param_1;
  return;
}


