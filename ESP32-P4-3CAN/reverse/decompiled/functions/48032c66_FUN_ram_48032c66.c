/* Firmware entry: 0x48032c66 */

void FUN_ram_48032c66(ushort *param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  fence();
  fence();
  *param_1 = DAT_ram_4ff4b8b8 - DAT_ram_4ff4b8ba & 0x3f;
  param_1[1] = DAT_ram_4ff4b8bc;
  *(undefined4 *)(param_1 + 2) = DAT_ram_4ff6dfa8;
  *(undefined4 *)(param_1 + 4) = DAT_ram_4ff6dfa4;
  *(undefined4 *)(param_1 + 6) = DAT_ram_4ff6dfa0;
  *(undefined4 *)(param_1 + 8) = DAT_ram_4ff6df9c;
  fence();
  *(bool *)(param_1 + 10) = DAT_ram_4ff6df98 != '\0';
  return;
}


