/* Firmware entry: 0x481a9038 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_481a9038(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  if ((int)(param_2 - 0x20) < 0) {
    uVar2 = 1 << (param_2 & 0x1f);
    uVar1 = 0;
  }
  else {
    uVar1 = 1 << (param_2 - 0x20 & 0x1f);
    uVar2 = 0;
  }
  if (param_3 == 0) {
    if ((uVar2 & 0xffff0000) == 0 && (uVar1 & 0x7fffff) == 0) {
      _DAT_ram_5012b050 = _DAT_ram_5012b050 & 0xffff0000 | ~uVar2 & _DAT_ram_5012b050 & 0xffff;
      return;
    }
    if (param_2 < 0x30) {
      _DAT_ram_500e51c0 = ~(uVar2 >> 0x10 | uVar1 << 0x10) & _DAT_ram_500e51c0;
      return;
    }
    _DAT_ram_500e51c4 =
         _DAT_ram_500e51c4 & 0xfffffe00 | ~(uVar1 >> 0x10) & _DAT_ram_500e51c4 & 0x1ff;
    return;
  }
  if ((uVar2 & 0xffff0000) == 0 && (uVar1 & 0x7fffff) == 0) {
    _DAT_ram_5012b050 = _DAT_ram_5012b050 & 0xffff0000 | (_DAT_ram_5012b050 | uVar2) & 0xffff;
    return;
  }
  if (param_2 < 0x30) {
    _DAT_ram_500e51c0 = uVar2 >> 0x10 | uVar1 << 0x10 | _DAT_ram_500e51c0;
    return;
  }
  _DAT_ram_500e51c4 = _DAT_ram_500e51c4 & 0xfffffe00 | (uVar1 >> 0x10 | _DAT_ram_500e51c4) & 0x1ff;
  return;
}


