/* Firmware entry: 0x48132034 */

void FUN_ram_48132034(int param_1,uint param_2)

{
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  *(uint *)(param_1 * 4 + 0x5012b008) =
       *(uint *)(param_1 * 4 + 0x5012b008) & 0xffffff9f | (param_2 & 3) << 5;
  if (param_2 != 1) {
    return;
  }
  *(uint *)(param_1 * 4 + 0x5012a0f4) = *(uint *)(param_1 * 4 + 0x5012a0f4) & 0xfffffe07 | 0x100;
  return;
}


