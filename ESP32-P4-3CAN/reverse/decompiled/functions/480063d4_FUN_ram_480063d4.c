/* Firmware entry: 0x480063d4 */

void FUN_ram_480063d4(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(undefined **)(param_1 + 4) != PTR_DAT_ram_4ff6d654_ram_4ff4bb10) {
    FUN_ram_48199fd0();
  }
  if (*(undefined **)(param_1 + 8) != PTR_DAT_ram_4ff6d6bc_ram_4ff4bb14) {
    FUN_ram_48199fd0(param_1);
  }
  if (*(undefined **)(param_1 + 0xc) != PTR_DAT_ram_4ff6d724_ram_4ff4bb18) {
    FUN_ram_48199fd0(param_1);
    return;
  }
  return;
}


