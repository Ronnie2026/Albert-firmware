/* Firmware entry: 0x4ff3f276 */

undefined4 FUN_ram_4ff3f276(int param_1)

{
  undefined4 uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (0x7fff < param_1 + 0xafef8000U &&
      (0xbffff < param_1 + 0xb0100000U && 0x1fff < param_1 + 0xcff00000U)) {
    return 0;
  }
  uVar1 = FUN_ram_4ff3057c();
  return uVar1;
}


