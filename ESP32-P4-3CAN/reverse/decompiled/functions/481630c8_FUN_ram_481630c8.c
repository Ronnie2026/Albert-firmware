/* Firmware entry: 0x481630c8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481630c8(uint param_1,int param_2)

{
  int iVar1;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((param_1 >> 7 & 0x14d) == 0) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
      return;
    }
  }
  else {
    iVar1 = 0x107;
    if ((((param_1 & 0x200) == 0) && (iVar1 = 0x109, (param_1 & 0x80) == 0)) &&
       (iVar1 = -1, (int)(param_1 << 0x10) < 0)) {
      iVar1 = (-(uint)((*(uint *)(param_2 + 0x28) & 0x40) == 0) & 0x108) - 1;
    }
    *(int *)(param_2 + 0x2c) = iVar1;
    _DAT_ram_50083000 = _DAT_ram_50083000 | 2;
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_ram_48165de4();
  return;
}


