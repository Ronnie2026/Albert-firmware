/* Firmware entry: 0x4816f258 */

bool FUN_ram_4816f258(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (uVar1 < 5) {
    return 2 < uVar1;
  }
  return uVar1 - 8 < 4;
}


