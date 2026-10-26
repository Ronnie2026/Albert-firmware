/* Firmware entry: 0x4ff376c8 */

void FUN_ram_4ff376c8(void)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < *(uint *)(&DAT_ram_4ff4bc7c + mhartid * 4)) {
    return;
  }
  FUN_ram_4ff373fe();
  return;
}


