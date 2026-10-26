/* Firmware entry: 0x4800d108 */

void FUN_ram_4800d108(undefined4 param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (DAT_ram_4ff6db10 != 0) {
    *(undefined4 *)(DAT_ram_4ff6db10 + 0x58) = param_1;
  }
  return;
}


