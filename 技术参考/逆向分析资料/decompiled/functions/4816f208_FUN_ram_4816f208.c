/* Firmware entry: 0x4816f208 */

char FUN_ram_4816f208(int param_1)

{
  uint uVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (uVar1 == 7) {
    return true;
  }
  if (uVar1 < 8) {
    if (3 < uVar1) {
      return (uVar1 == 4) << 2;
    }
    return uVar1 != 0;
  }
  return (uVar1 - 9 < 2) << 1;
}


