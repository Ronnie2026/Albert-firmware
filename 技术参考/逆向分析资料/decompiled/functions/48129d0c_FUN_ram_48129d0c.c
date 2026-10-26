/* Firmware entry: 0x48129d0c */

bool FUN_ram_48129d0c(int param_1)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 != 0) {
    return *(char *)(param_1 + 0xc) == '@';
  }
  return false;
}


