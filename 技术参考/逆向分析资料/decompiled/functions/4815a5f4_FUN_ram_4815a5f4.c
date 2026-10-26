/* Firmware entry: 0x4815a5f4 */

void FUN_ram_4815a5f4(undefined4 *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 5) = 0xfe;
  param_1[4] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  FUN_ram_4815d804(param_1 + 0x11);
  param_1[0x14] = 0;
  return;
}


