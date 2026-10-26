/* Firmware entry: 0x4ff3a626 */

bool FUN_ram_4ff3a626(int param_1)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 + 0xb00ffff0 < 0xbffe1) {
    if ((uVar1 & 0xf) != 0) {
      iVar2 = FUN_ram_4ff305c6(uVar1);
      if (iVar2 == 0) {
        return false;
      }
      uVar1 = *(uint *)(param_1 + 8);
      goto joined_r0x4ff3a6b0;
    }
  }
  else {
    iVar2 = FUN_ram_4ff305c6(uVar1);
    if (iVar2 == 0) {
      if ((0x7fff < uVar1 + 0xafef8000) && (0x1fff < uVar1 + 0xcff00000)) {
        return false;
      }
      if ((uVar1 & 0xf) != 0) {
        return false;
      }
    }
  }
  uVar1 = *(uint *)(param_1 + 8);
joined_r0x4ff3a6b0:
  if (0xbffff < uVar1 + 0xb0100000) {
    iVar2 = FUN_ram_4ff305c6(uVar1);
    if (((iVar2 == 0) && (0x7fff < uVar1 + 0xafef8000)) && (0x1fff < uVar1 + 0xcff00000)) {
      return false;
    }
    uVar1 = *(uint *)(param_1 + 8);
  }
  if (uVar1 <= *(uint *)(param_1 + 4)) {
    return false;
  }
  return uVar1 - *(uint *)(param_1 + 4) < 0x10001;
}


