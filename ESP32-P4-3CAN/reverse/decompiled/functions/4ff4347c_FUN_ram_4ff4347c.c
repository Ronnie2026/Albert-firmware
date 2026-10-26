/* Firmware entry: 0x4ff4347c */

uint FUN_ram_4ff4347c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return *(uint *)(param_1 + -4) & 0xfffffffc;
  }
  return 0;
}


