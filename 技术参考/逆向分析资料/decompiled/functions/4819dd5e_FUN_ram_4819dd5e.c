/* Firmware entry: 0x4819dd5e */

int FUN_ram_4819dd5e(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar2 = *param_1;
  if ((uVar2 & 7) == 0) {
    iVar1 = 0;
    if ((uVar2 & 0xffff) == 0) {
      uVar2 = uVar2 >> 0x10;
      iVar1 = 0x10;
    }
    if ((uVar2 & 0xff) == 0) {
      iVar1 = iVar1 + 8;
      uVar2 = uVar2 >> 8;
    }
    if ((uVar2 & 0xf) == 0) {
      iVar1 = iVar1 + 4;
      uVar2 = uVar2 >> 4;
    }
    if ((uVar2 & 3) == 0) {
      iVar1 = iVar1 + 2;
      uVar2 = uVar2 >> 2;
    }
    if ((uVar2 & 1) == 0) {
      uVar2 = uVar2 >> 1;
      iVar1 = iVar1 + 1;
      if (uVar2 == 0) {
        gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
        return 0x20;
      }
    }
    *param_1 = uVar2;
    return iVar1;
  }
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  if ((uVar2 & 2) == 0) {
    *param_1 = uVar2 >> 2;
    return 2;
  }
  *param_1 = uVar2 >> 1;
  return 1;
}


