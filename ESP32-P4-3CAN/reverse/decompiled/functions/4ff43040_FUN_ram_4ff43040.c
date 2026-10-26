/* Firmware entry: 0x4ff43040 */

bool FUN_ram_4ff43040(int param_1,byte *param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (*(byte *)(param_1 + 0x14) != 0) {
    return *(byte *)(param_1 + 0x14) - 1 == (uint)(*param_2 >> 7);
  }
  return true;
}


