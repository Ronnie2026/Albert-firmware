/* Firmware entry: 0x4ff2fbfc */

/* WARNING: Removing unreachable block (ram,0x4ff2fcc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4ff2fbfc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if (2 < param_1) {
    return 0x102;
  }
  uVar1 = 0x102;
  if (param_2 % param_3 == 0) {
    uVar3 = param_3 - 1;
    if ((0xff < uVar3) || ((uVar3 & param_3) != 0)) {
      return uVar1;
    }
    iVar2 = FUN_ram_4ff45682(0x102);
    if (iVar2 == 0) {
      _DAT_csreg_07a5 = 0x88;
      _tdata1 = 200;
      if (param_3 == 1) {
        _tdata1 = 0x48;
      }
      _tdata1 = (uint)(param_4 - 1 < 2) << 1 | (uint)((param_4 & 0xfffffffd) == 0) | _tdata1;
      _tdata2 = param_2 & -param_3 | uVar3 >> 1;
      _tselect = param_1;
    }
    else {
      ebreak();
    }
    uVar1 = 0;
  }
  return uVar1;
}


