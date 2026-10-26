/* Firmware entry: 0x480297c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_480297c6(void)

{
  uint uVar1;
  uint uVar2;
  
  gp = &PTR_s_Print_task_snapshots_ram_481c0790_ram_4ff48580;
  uVar1 = 0x1e0;
  uVar2 = _DAT_ram_500e6030 & 3;
  if ((((uVar2 != 1) && (uVar1 = 400, uVar2 != 2)) && (uVar1 = 0, uVar2 == 0)) &&
     (((_DAT_ram_5011003c & 0xffff) == _DAT_ram_5011003c >> 0x10 &&
      (_DAT_ram_5011003c - 1 < 0xfffffffe)))) {
    uVar1 = _DAT_ram_5011003c & 0xfffe;
  }
  uVar1 = uVar1 / ((_DAT_ram_500e6030 >> 4 & 0xff) + 1) & 0xff;
  if (-1 < (int)_DAT_ram_5008d014) {
    uVar2 = (_DAT_ram_5008d014 >> 0x10 & 0xff) + 1;
    if ((uVar2 & 0xff) == 0) {
      return uVar1 / 1;
    }
    uVar1 = uVar1 / (uVar2 & 0xff);
  }
  return uVar1;
}


