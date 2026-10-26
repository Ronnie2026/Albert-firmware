/* Firmware entry: 0x4800c5b2 */

void FUN_ram_4800c5b2(uint param_1,undefined4 param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 < 6) && (*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) != 0)) {
    *(undefined4 *)(*(int *)(&DAT_ram_4ff5a014 + param_1 * 4) + 0x54) = param_2;
  }
  return;
}


