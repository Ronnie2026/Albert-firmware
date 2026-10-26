/* Firmware entry: 0x48171448 */

void FUN_ram_48171448(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *param_1 = (char)((uint)param_3 >> 8);
  param_1[1] = (char)param_3;
  return;
}


