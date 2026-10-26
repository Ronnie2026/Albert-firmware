/* Firmware entry: 0x4ff3a79e */

bool FUN_ram_4ff3a79e(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (param_1 + 0xb0100000U < 0xc0000) {
    uVar1 = param_2 + -0x4ff00001 + param_1;
    if ((0xbffff < uVar1) &&
       ((iVar2 = thunk_FUN_ram_4ff21be8(), iVar2 == 0 ||
        (iVar2 = thunk_FUN_ram_4ff21be8(param_2 + -1 + param_1), iVar2 == 0)))) {
      return uVar1 < 0xc0000;
    }
    return true;
  }
  if (param_1 + 0xafef8000U < 0x8000) {
    if ((uint)(param_2 + -0x50108001 + param_1) < 0x8000) {
      return true;
    }
    iVar2 = thunk_FUN_ram_4ff21be8();
    if ((iVar2 != 0) && (iVar2 = thunk_FUN_ram_4ff21be8(param_2 + -1 + param_1), iVar2 != 0)) {
      return true;
    }
  }
  else {
    iVar2 = thunk_FUN_ram_4ff21be8();
    if ((iVar2 != 0) && (iVar2 = thunk_FUN_ram_4ff21be8(param_2 + -1 + param_1), iVar2 != 0)) {
      return true;
    }
    if (param_1 + 0xcff00000U < 0x2000) {
      return (uint)(param_2 + -0x30100001 + param_1) < 0x2000;
    }
  }
  return false;
}


